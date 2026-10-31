#include <strings.h>
#define _POSIX_C_SOURCE 200809L
#include "gm82_int_read.h"
#include "gm82_script.h"
#include <string.h>
#include <stdlib.h>
#include <zlib.h>

void gm82_script_list_init(gm82_script_list *L) {
    memset(L, 0, sizeof(*L));
}

int gm82_script_add(gm82_script_list *L, const char *name, const char *code) {
    if (!L || L->count >= GM82_SCRIPT_MAX) return -1;
    gm82_script *s = &L->items[L->count];
    memset(s, 0, sizeof(*s));
    if (name) strncpy(s->name, name, sizeof(s->name)-1);
    if (code) strncpy(s->code, code, sizeof(s->code)-1);
    return L->count++;
}

static int script_name_match(const char *s1, const char *s2) {
    if (!s1 || !s2) return 0;
    if (strcmp(s1, s2) == 0) return 1;
#ifdef _WIN32
    if (_stricmp(s1, s2) == 0) return 1;
#else
    if (strcasecmp(s1, s2) == 0) return 1;
#endif
    char b1[64], b2[64];
    int p1 = 0, p2 = 0;
    for (int i = 0; s1[i] && p1 < 63; i++) {
        if (s1[i] != '_') {
            b1[p1++] = (s1[i] >= 'A' && s1[i] <= 'Z') ? (s1[i] + ('a' - 'A')) : s1[i];
        }
    }
    b1[p1] = 0;
    for (int i = 0; s2[i] && p2 < 63; i++) {
        if (s2[i] != '_') {
            b2[p2++] = (s2[i] >= 'A' && s2[i] <= 'Z') ? (s2[i] + ('a' - 'A')) : s2[i];
        }
    }
    b2[p2] = 0;
    return (strcmp(b1, b2) == 0);
}

int gm82_script_find(const gm82_script_list *L, const char *name) {
    if (!L || !name) return -1;
    for (int i = 0; i < L->count; i++)
        if (strcmp(L->items[i].name, name) == 0) return i;
    for (int i = 0; i < L->count; i++)
        if (script_name_match(L->items[i].name, name)) return i;
    return -1;
}

static int32_t rd_i32(const uint8_t *p) {
    return gm82_read_i32le(p);
}

static uint8_t *inflate_at(const uint8_t *src, size_t n, size_t *ol) {
    *ol = 0;
    z_stream strm; memset(&strm, 0, sizeof(strm));
    if (inflateInit2(&strm, 15) != Z_OK) return NULL;
    size_t cap = n * 8 + 256;
    uint8_t *dst = malloc(cap);
    if (!dst) { inflateEnd(&strm); return NULL; }
    strm.next_in = (Bytef*)src; strm.avail_in = (uInt)n;
    strm.next_out = dst; strm.avail_out = (uInt)cap;
    int ret;
    while ((ret = inflate(&strm, Z_NO_FLUSH)) == Z_OK) {
        if (strm.avail_out == 0) {
            size_t used = cap; cap *= 2;
            uint8_t *nd = realloc(dst, cap);
            if (!nd) { free(dst); inflateEnd(&strm); return NULL; }
            dst = nd; strm.next_out = dst + used; strm.avail_out = (uInt)(cap - used);
        }
    }
    if (ret != Z_STREAM_END) { free(dst); inflateEnd(&strm); return NULL; }
    *ol = strm.total_out; inflateEnd(&strm); return dst;
}

int gm82_decode_scripts_from_gmk(const uint8_t *data, size_t size, gm82_script_list *out) {
    gm82_script_list_init(out);
    if (!data || size < 12) return -1;
    for (size_t i = 12; i + 2 < size; i++) {
        if (!(data[i]==0x78 && (data[i+1]==0x9c||data[i+1]==0xda||data[i+1]==0x01||data[i+1]==0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 40) { free(d); continue; }
        if (rd_i32(d) != 1) { free(d); continue; }
        int32_t slen = rd_i32(d + 4);
        if (slen < 3 || slen > 48 || 8+(size_t)slen+20 > ol) { free(d); continue; }
        char name[64]; memcpy(name, d+8, (size_t)slen); name[slen]=0;
        int ok=1; for(int k=0;k<slen;k++) if(name[k]<32||name[k]>126) ok=0;
        if (!ok) { free(d); continue; }
        size_t off = 8 + (size_t)slen + 8;
        if (off + 8 > ol) { free(d); continue; }
        int32_t ver = rd_i32(d + off); off += 4;
        if (ver != 800 && ver != 400 && ver != 520) { free(d); continue; }
        int32_t n = rd_i32(d + off); off += 4;
        if (n < 0 || off + (size_t)n > ol) { free(d); continue; }
        if (strncmp(name, "scr", 3) != 0 && strncmp(name, "script", 6) != 0) {
            if (off + (size_t)n != ol) { free(d); continue; }
        }
        char code[GM82_SCRIPT_CODE_MAX] = "";
        size_t copy_len = (size_t)n < (GM82_SCRIPT_CODE_MAX - 1) ? (size_t)n : (GM82_SCRIPT_CODE_MAX - 1);
        memcpy(code, d + off, copy_len);
        code[copy_len] = 0;
        gm82_script_add(out, name, code);
        free(d);
    }
    return out->count;
}
