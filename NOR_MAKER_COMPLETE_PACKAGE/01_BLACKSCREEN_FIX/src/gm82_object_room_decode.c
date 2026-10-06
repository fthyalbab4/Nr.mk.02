#define _POSIX_C_SOURCE 200809L
#include "gm82_object_room_decode.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <zlib.h>

static int32_t rd_i32(const uint8_t *p) {
    return (int32_t)(p[0]|(p[1]<<8)|(p[2]<<16)|(p[3]<<24));
}

static uint8_t *inflate_at(const uint8_t *src, size_t n, size_t *out_len) {
    *out_len = 0;
    z_stream strm; memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15) != Z_OK) return NULL;
    size_t cap = n * 8 + 256;
    uint8_t *dst = (uint8_t *)malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }
    strm.next_in = (Bytef *)src; strm.avail_in = (uInt)n;
    strm.next_out = dst; strm.avail_out = (uInt)cap;
    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap; cap *= 2;
            uint8_t *nd = (uint8_t *)realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd; strm.next_out = dst + used; strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) { free(dst); inflateEnd(&strm); return NULL; }
    *out_len = strm.total_out; inflateEnd(&strm); return dst;
}

void gm82_decoded_object_list_free(gm82_decoded_object_list *L) {
    if (!L) return;
    free(L->items);
    memset(L, 0, sizeof(*L));
}
void gm82_decoded_room_list_free(gm82_decoded_room_list *L) {
    if (!L) return;
    for (int i = 0; i < L->count; i++) {
        free(L->items[i].instances);
        free(L->items[i].tiles);
    }
    free(L->items); memset(L, 0, sizeof(*L));
}

int gm82_decode_objects_from_gmk(const uint8_t *data, size_t size, gm82_decoded_object_list *out) {
    memset(out, 0, sizeof(*out));
    if (!data || size < 12) return -1;
    gm82_decoded_object tmp[256];
    int n = 0;
    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i]==0x78 && (data[i+1]==0x9c||data[i+1]==0xda||data[i+1]==0x01||data[i+1]==0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 28) { free(d); continue; }
        if (rd_i32(d) != 1) { free(d); continue; }
        int32_t slen = rd_i32(d + 4);
        if (slen < 4 || slen > 48 || 8 + (size_t)slen + 12 > ol) { free(d); continue; }
        const uint8_t *ns = d + 8;
        int ok = 1;
        for (int k = 0; k < slen; k++) if (ns[k] < 32 || ns[k] > 126) ok = 0;
        if (!ok) { free(d); continue; }
        char name[64]; memcpy(name, ns, (size_t)slen); name[slen] = 0;
        if (strncmp(name, "obj_", 4) != 0) { free(d); continue; }
        size_t off = 8 + (size_t)slen + 8;
        int32_t ver = rd_i32(d + off); off += 4;
        if (ver != 430 && ver != 400 && ver != 800) { free(d); continue; }
        if (n >= 256) { free(d); break; }
        gm82_decoded_object *o = &tmp[n++];
        memset(o, 0, sizeof(*o));
        strncpy(o->name, name, sizeof(o->name)-1);
        o->sprite_index = rd_i32(d + off);
        o->solid = rd_i32(d + off + 4);
        o->visible = rd_i32(d + off + 8);
        o->depth = rd_i32(d + off + 12);
        free(d);
    }
    out->count = n;
    if (n > 0) {
        out->items = (gm82_decoded_object *)malloc((size_t)n * sizeof(*out->items));
        if (out->items) memcpy(out->items, tmp, (size_t)n * sizeof(*tmp));
        else out->count = 0;
    }
    return out->count;
}

int gm82_decode_rooms_from_gmk(const uint8_t *data, size_t size, gm82_decoded_room_list *out) {
    memset(out, 0, sizeof(*out));
    if (!data || size < 12) return -1;
    gm82_decoded_room tmp[32];
    int n = 0;
    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i]==0x78 && (data[i+1]==0x9c||data[i+1]==0xda||data[i+1]==0x01||data[i+1]==0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 40) { free(d); continue; }
        if (rd_i32(d) != 1) { free(d); continue; }
        int32_t slen = rd_i32(d + 4);
        if (slen < 1 || slen > 48 || 8 + (size_t)slen + 20 > ol) { free(d); continue; }
        const uint8_t *ns = d + 8;
        int ok = 1;
        for (int k = 0; k < slen; k++) if (ns[k] < 32 || ns[k] > 126) ok = 0;
        if (!ok) { free(d); continue; }
        char name[64]; memcpy(name, ns, (size_t)slen); name[slen] = 0;
        /* Accept room*, r* (e.g. r001), or ver 541/540 with valid geometry */
        size_t off = 8 + (size_t)slen + 8;
        int32_t ver = rd_i32(d + off); off += 4;
        int is_room_name = (strncmp(name, "room", 4) == 0) ||
                          (name[0] == 'r' && (name[1] == '_' || (name[1] >= '0' && name[1] <= '9')));
        int is_room_ver = (ver == 541 || ver == 800 || ver == 520 || ver == 540);
        if (!is_room_ver) { free(d); continue; }
        if (!is_room_name && ver != 541 && ver != 540) { free(d); continue; }
        int32_t clen = rd_i32(d + off); off += 4;
        if (clen < 0 || off + (size_t)clen > ol) { free(d); continue; }
        off += (size_t)clen;
        if (off + 20 > ol) { free(d); continue; }
        int32_t width = rd_i32(d + off); off += 4;
        int32_t height = rd_i32(d + off); off += 4;
        off += 8; off += 4;
        int32_t speed = rd_i32(d + off); off += 4;
        if (width < 16 || height < 16 || width > 10000 || height > 10000) { free(d); continue; }
        if (n >= 32) { free(d); break; }
        gm82_decoded_room *r = &tmp[n++];
        memset(r, 0, sizeof(*r));
        strncpy(r->name, name, sizeof(r->name)-1);
        r->width = width; r->height = height; r->speed = speed;
        gm82_decoded_instance ibuf[512];
        int ic = 0;
        for (size_t j = off; j + 20 <= ol && ic < 512; j += 4) {
            int32_t x = rd_i32(d + j);
            int32_t y = rd_i32(d + j + 4);
            int32_t obj = rd_i32(d + j + 8);
            int32_t id = rd_i32(d + j + 12);
            if (x < 0 || y < 0 || x > width || y > height) continue;
            if (obj < 0 || obj > 200) continue;
            if (id < 100001 || id > 2000000) continue;
            int dup = 0;
            for (int k = 0; k < ic; k++) if (ibuf[k].id == id) { dup = 1; break; }
            if (dup) continue;
            ibuf[ic].x = x; ibuf[ic].y = y;
            ibuf[ic].object_index = obj; ibuf[ic].id = id;
            ic++;
            if (j + 24 <= ol) {
                int32_t maybe_clen = rd_i32(d + j + 16);
                if (maybe_clen == 0) j += 20;
            }
        }
        r->instance_count = ic;
        if (ic > 0) {
            r->instances = (gm82_decoded_instance *)malloc((size_t)ic * sizeof(*r->instances));
            if (r->instances) memcpy(r->instances, ibuf, (size_t)ic * sizeof(*ibuf));
            else r->instance_count = 0;
        }
        r->tiles = NULL; r->tile_count = 0;
        free(d);
    }
    out->count = n;
    if (n > 0) {
        out->items = (gm82_decoded_room *)malloc((size_t)n * sizeof(*out->items));
        if (out->items) {
            memcpy(out->items, tmp, (size_t)n * sizeof(*tmp));
            for (int i = 0; i < n; i++) { tmp[i].instances = NULL; tmp[i].tiles = NULL; }
        } else out->count = 0;
    }
    return out->count;
}
