#define _POSIX_C_SOURCE 200809L
#include "gm82_sound_decode.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <zlib.h>

static int32_t rd_i32(const uint8_t *p) {
    return (int32_t)(p[0]|p[1]<<8|p[2]<<16|p[3]<<24);
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

void gm82_decoded_sound_list_free(gm82_decoded_sound_list *L) {
    if (!L) return;
    free(L->items);
    memset(L, 0, sizeof(*L));
}

int gm82_decode_sounds_from_gmk(const uint8_t *data, size_t size, gm82_decoded_sound_list *out) {
    memset(out, 0, sizeof(*out));
    if (!data || size < 12) return -1;
    gm82_decoded_sound tmp[128];
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
        if (slen < 3 || slen > 48 || 8 + (size_t)slen + 16 > ol) { free(d); continue; }
        char name[64]; memcpy(name, d+8, (size_t)slen); name[slen]=0;
        int ok=1; for (int k=0;k<slen;k++) if (name[k]<32||name[k]>126) ok=0;
        if (!ok) { free(d); continue; }
        size_t off = 8 + (size_t)slen + 8; /* lastChanged */
        if (off + 8 > ol) { free(d); continue; }
        int32_t ver = rd_i32(d + off); off += 4;
        if (ver != 800 && ver != 710 && ver != 600 && ver != 540 &&
            ver != 530 && ver != 440 && ver != 400) { free(d); continue; }

        int32_t kind = rd_i32(d + off);
        int is_snd = 0;
        if (strncmp(name, "snd", 3) == 0 || strstr(name, ".wav") || strstr(name, ".mid") || strstr(name, ".mp3") ||
            strncmp(name, "mus", 3) == 0 || strncmp(name, "bgm", 3) == 0 || strncmp(name, "se_", 3) == 0) {
            is_snd = 1;
        }

        /* Check extension string in GM sound header (e.g. .wav, .mp3, .ogg, .mid) */
        char ext[16] = {0};
        if (off + 8 <= ol) {
            int32_t ext_len = rd_i32(d + off + 4);
            if (ext_len >= 1 && ext_len <= 8 && off + 8 + (size_t)ext_len <= ol) {
                memcpy(ext, d + off + 8, (size_t)ext_len);
                ext[ext_len] = 0;
                if (strstr(ext, ".wav") || strstr(ext, ".mp3") || strstr(ext, ".mid") || strstr(ext, ".ogg")) {
                    is_snd = 1;
                }
            }
        }
        if (!is_snd) { free(d); continue; }

        if (n >= 128) { free(d); break; }
        gm82_decoded_sound *s = &tmp[n++];
        memset(s, 0, sizeof(*s));
        strncpy(s->name, name, sizeof(s->name)-1);
        s->kind = (kind >= 0 && kind <= 3) ? kind : 0;
        s->volume = 1.0;
        s->preload = 1;
        (void)ver;
        free(d);
    }
    /* Raw scan fallback for uncompressed audio chunks or embedded WAV files */
    if (n == 0 && size > 44) {
        for (size_t j = 0; j + 44 < size && n < 128; j++) {
            if (data[j] == 'R' && data[j+1] == 'I' && data[j+2] == 'F' && data[j+3] == 'F' &&
                data[j+8] == 'W' && data[j+9] == 'A' && data[j+10] == 'V' && data[j+11] == 'E') {
                gm82_decoded_sound *s = &tmp[n++];
                memset(s, 0, sizeof(*s));
                snprintf(s->name, sizeof(s->name), "snd_raw_%d", n);
                s->kind = 0;
                s->volume = 1.0;
                s->preload = 1;
                s->data_offset = j;
                int32_t rlen = rd_i32(data + j + 4);
                s->data_size = (rlen > 0 && j + 8 + (size_t)rlen <= size) ? (size_t)rlen + 8 : 44;
                j += s->data_size > 16 ? s->data_size - 1 : 16;
            }
        }
    }

    out->count = n;
    if (n > 0) {
        out->items = malloc((size_t)n * sizeof(*out->items));
        if (out->items) memcpy(out->items, tmp, (size_t)n * sizeof(*tmp));
        else out->count = 0;
    }
    return out->count;
}
