#define _POSIX_C_SOURCE 200809L
#include "gm82_gmk_reader.h"
#include "gm82_gmk_format.h"
#include "gm82_gmk_stream.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <zlib.h>

static uint32_t read_u32(const uint8_t *p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}

#if defined(__GNUC__) || defined(__clang__)
__attribute__((unused))
#endif
static int32_t read_i32(const uint8_t *p) {
    return (int32_t)read_u32(p);
}

static void gm82_gmk_fill_summary(gm82_gmk_load_result *r) {
    if (!r || !r->ir) return;
    gm82_project_ir *ir = r->ir;
    snprintf(r->error, sizeof(r->error),
             "GMK ok=%d sprites=%d frames=%d bgs=%d rooms=%d objs=%d scripts=%d sounds=%d dlls=%d",
             ir->complete ? 1 : 0,
             ir->sprite_count, ir->decoded_frames.count,
             ir->background_count, ir->room_count,
             ir->object_count, ir->script_count, ir->sound_count,
             ir->dll_count);
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

    ir->format   = probe.format_kind;
    ir->magic    = probe.magic;
    ir->version  = probe.version;
    ir->app_id   = probe.app_id;
    ir->source_bytes = size;
    ir->complete = false;
    ir->source_data = (uint8_t *)malloc(size);
    if (ir->source_data) {
        memcpy(ir->source_data, data, size);
        ir->source_data_size = size;
    }

    if (gm82_gmk_stream_parse(data, size, ir)) {
        gm82_project_ir_recompute_complete(ir);
        r.ir = ir;
        r.ok = true;
        gm82_gmk_fill_summary(&r);
        return r;
    }

    /* Fallback placeholder for unsupported legacy GM4/GM6 uncompressed headers;
       actual decode will run inside gm82_materialize_all(). */
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

    gm82_project_ir_recompute_complete(ir);
    r.ir = ir;
    r.ok = true;
    gm82_gmk_fill_summary(&r);
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
