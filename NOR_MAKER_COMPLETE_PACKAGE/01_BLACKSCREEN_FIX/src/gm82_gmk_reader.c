#define _POSIX_C_SOURCE 200809L
#include "gm82_gmk_reader.h"
#include "gm82_gmk_format.h"
#include "gm82_object_room_decode.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <zlib.h>

/*
 * Minimal GMK 800 loader that fills Project IR.
 * It does NOT claim full parity with Windows GM82.
 * Goal: get real sprite/background metadata + compressed payloads
 * into the IR so materialize can later decode pixels.
 */

static uint32_t read_u32(const uint8_t *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

static int32_t read_i32(const uint8_t *p) {
    return (int32_t)read_u32(p);
}

/* Simple zlib inflate helper. Returns newly allocated buffer or NULL. */
static uint8_t *inflate_block(const uint8_t *src, size_t src_len, size_t *out_len) {
    if (!src || src_len < 2 || !out_len) return NULL;
    *out_len = 0;

    z_stream strm;
    memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15 /* max window */) != Z_OK)
        return NULL;

    size_t cap = src_len * 4 + 64;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }

    strm.next_in   = (Bytef *)src;
    strm.avail_in  = (uInt)src_len;
    strm.next_out  = dst;
    strm.avail_out = (uInt)cap;

    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap;
            cap *= 2;
            uint8_t *nd = (uint8_t *)realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd;
            strm.next_out  = dst + used;
            strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) {
        free(dst);
        inflateEnd(&strm);
        return NULL;
    }
    *out_len = strm.total_out;
    inflateEnd(&strm);
    return dst;
}

gm82_gmk_load_result gm82_gmk_load_from_memory(const uint8_t *data, size_t size) {
    gm82_gmk_load_result r;
    memset(&r, 0, sizeof(r));

    if (!data || size < 12) {
        snprintf(r.error, sizeof(r.error), "buffer too small");
        return r;
    }

    gm82_gmk_probe_result probe = gm82_gmk_probe(data, size);
    if (probe.status == GM82_GMK_PARSE_INVALID) {
        snprintf(r.error, sizeof(r.error), "probe failed: %s",
                 probe.error_code ? probe.error_code : "unknown");
        return r;
    }

    gm82_project_ir *ir = gm82_project_ir_create();
    if (!ir) {
        snprintf(r.error, sizeof(r.error), "out of memory");
        return r;
    }

    ir->format   = GM82_GMK_FORMAT_GM7_GM8;
    ir->magic    = probe.magic;
    ir->version  = probe.version;
    ir->app_id   = probe.app_id;
    ir->source_bytes = size;
    ir->complete = false;
    /* Keep a copy so materialize can decode sprites without re-reading */
    ir->source_data = (uint8_t *)malloc(size);
    if (ir->source_data) {
        memcpy(ir->source_data, data, size);
        ir->source_data_size = size;
    }

    /*
     * GMK 800 layout (simplified, based on known format + strings in the SO):
     *   [0..11]   magic, version, game id
     *   then a series of resource lists, many of them zlib-compressed.
     *
     * Full faithful parsing of every chunk is large. For now we:
     *   - keep the whole file as the "source"
     *   - create placeholder resource entries so the IR is non-empty
     *   - mark them PARTIAL so the guard stays closed until materialize succeeds
     *
     * Real frame/pixel decoding happens inside gm82_materialize_sprites
     * once we locate the sprite chunks (next step).
     */

    /* Detect first zlib stream (common right after the 12-byte header + a few fields) */
    size_t zlib_off = 0;
    for (size_t i = 12; i + 2 < size && i < 256; i++) {
        if (data[i] == 0x78 && (data[i+1] == 0x9c || data[i+1] == 0xda ||
                                data[i+1] == 0x01 || data[i+1] == 0x5e)) {
            zlib_off = i;
            break;
        }
    }

    if (zlib_off > 0) {
        size_t inflated_len = 0;
        uint8_t *inflated = inflate_block(data + zlib_off, size - zlib_off, &inflated_len);
        if (inflated) {
            /* We successfully inflated something. Keep it for later materialize.
               For the IR we still mark resources as partial. */
            free(inflated);
        }
    }

    /* Real object + room decode (best-effort from GMK zlib blobs). */
    {
        gm82_decoded_object_list objs;
        int no = gm82_decode_objects_from_gmk(data, size, &objs);
        if (no > 0) {
            ir->object_count = no;
            /* IR does not yet store full object structs; count is enough for guard/progress */
        }
        gm82_decoded_object_list_free(&objs);
    }
    {
        gm82_decoded_room_list rooms;
        int nr = gm82_decode_rooms_from_gmk(data, size, &rooms);
        if (nr > 0 && rooms.items) {
            ir->room_count = nr;
            ir->rooms = (gm82_res_room *)calloc((size_t)nr, sizeof(gm82_res_room));
            if (ir->rooms) {
                for (int i = 0; i < nr; i++) {
                    gm82_res_room *dst = &ir->rooms[i];
                    gm82_decoded_room *src = &rooms.items[i];
                    dst->id = i;
                    dst->name = strdup(src->name);
                    dst->width = src->width;
                    dst->height = src->height;
                    dst->speed = src->speed > 0 ? src->speed : 30;
                    dst->instance_count = src->instance_count;
                    dst->tile_count = src->tile_count;
                    if (src->instance_count > 0 && src->instances) {
                        dst->instances = (gm82_room_instance *)calloc(
                            (size_t)src->instance_count, sizeof(gm82_room_instance));
                        if (dst->instances) {
                            for (int j = 0; j < src->instance_count; j++) {
                                dst->instances[j].id = src->instances[j].id;
                                dst->instances[j].object_id = src->instances[j].object_index;
                                dst->instances[j].x = (double)src->instances[j].x;
                                dst->instances[j].y = (double)src->instances[j].y;
                            }
                        } else {
                            dst->instance_count = 0;
                        }
                    }
                    if (src->tile_count > 0 && src->tiles) {
                        dst->tiles = (gm82_room_tile *)calloc(
                            (size_t)src->tile_count, sizeof(gm82_room_tile));
                        if (dst->tiles) {
                            for (int j = 0; j < src->tile_count; j++) {
                                dst->tiles[j].id = src->tiles[j].id;
                                dst->tiles[j].background_id = src->tiles[j].background_index;
                                dst->tiles[j].x = src->tiles[j].x;
                                dst->tiles[j].y = src->tiles[j].y;
                                dst->tiles[j].src_x = src->tiles[j].xo;
                                dst->tiles[j].src_y = src->tiles[j].yo;
                                dst->tiles[j].width = src->tiles[j].width;
                                dst->tiles[j].height = src->tiles[j].height;
                                dst->tiles[j].depth = src->tiles[j].depth;
                            }
                        } else {
                            dst->tile_count = 0;
                        }
                    }
                    /* Width/height known + instances decoded → mark DECODED for room geometry */
                    if (dst->width > 0 && dst->height > 0)
                        dst->status = GM82_RES_DECODED;
                    else
                        dst->status = GM82_RES_PARTIAL;
                }
            } else {
                ir->room_count = 0;
            }
        } else {
            /* Fallback placeholder so IR is never completely empty */
            ir->room_count = 1;
            ir->rooms = (gm82_res_room *)calloc(1, sizeof(gm82_res_room));
            if (ir->rooms) {
                ir->rooms[0].id = 0;
                ir->rooms[0].name = strdup("room0");
                ir->rooms[0].width = 640;
                ir->rooms[0].height = 480;
                ir->rooms[0].speed = 30;
                ir->rooms[0].status = GM82_RES_PARTIAL;
            }
        }
        gm82_decoded_room_list_free(&rooms);
    }

    /* Sprite/background pixel counts filled by materialize; stay 0 here. */
    gm82_project_ir_recompute_complete(ir);

    r.ir = ir;
    r.ok = true;
    snprintf(r.error, sizeof(r.error),
             "GMK loaded (objects=%d rooms=%d) – materialize sprites/backgrounds before play",
             ir->object_count, ir->room_count);
    return r;
}

gm82_gmk_load_result gm82_gmk_load_from_file(const char *path) {
    gm82_gmk_load_result r;
    memset(&r, 0, sizeof(r));
    if (!path) {
        snprintf(r.error, sizeof(r.error), "null path");
        return r;
    }
    FILE *f = fopen(path, "rb");
    if (!f) {
        snprintf(r.error, sizeof(r.error), "cannot open %s", path);
        return r;
    }
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0 || sz > 256 * 1024 * 1024) {
        fclose(f);
        snprintf(r.error, sizeof(r.error), "invalid size");
        return r;
    }
    uint8_t *buf = (uint8_t *)malloc((size_t)sz);
    if (!buf) {
        fclose(f);
        snprintf(r.error, sizeof(r.error), "out of memory");
        return r;
    }
    if (fread(buf, 1, (size_t)sz, f) != (size_t)sz) {
        free(buf);
        fclose(f);
        snprintf(r.error, sizeof(r.error), "read failed");
        return r;
    }
    fclose(f);
    r = gm82_gmk_load_from_memory(buf, (size_t)sz);
    free(buf);
    if (r.ok && r.ir) {
        free(r.ir->source_path);
        r.ir->source_path = strdup(path);
    }
    return r;
}
