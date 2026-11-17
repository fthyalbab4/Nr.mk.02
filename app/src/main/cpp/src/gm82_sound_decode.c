#define _POSIX_C_SOURCE 200809L
#include "gm82_int_read.h"
#include "gm82_sound_decode.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <zlib.h>

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

void gm82_decoded_sound_list_init(gm82_decoded_sound_list *L) {
    if (!L) return;
    memset(L, 0, sizeof(*L));
}

void gm82_decoded_sound_list_free(gm82_decoded_sound_list *L) {
    if (!L) return;
    for (int i = 0; i < L->count; i++) {
        free(L->items[i].raw_data);
        free(L->items[i].pcm);
    }
    free(L->items);
    memset(L, 0, sizeof(*L));
}

static uint16_t rd_u16(const uint8_t *p) {
    return (uint16_t)p[0] | ((uint16_t)p[1] << 8);
}

bool gm82_wav_decode_pcm(const uint8_t *wav, size_t len, int16_t **out_pcm,
                         size_t *out_frames, int32_t *out_rate, int32_t *out_channels) {
    if (!wav || len < 44 || !out_pcm || !out_frames) return false;
    *out_pcm = NULL;
    *out_frames = 0;
    if (memcmp(wav, "RIFF", 4) != 0 || memcmp(wav + 8, "WAVE", 4) != 0) return false;

    uint16_t fmt_tag = 0, channels = 0, bits = 0;
    uint32_t rate = 0;
    const uint8_t *pcm_data = NULL;
    size_t pcm_bytes = 0;

    size_t pos = 12;
    while (pos + 8 <= len) {
        const uint8_t *chk = wav + pos;
        uint32_t clen = (uint32_t)rd_i32(chk + 4);
        pos += 8;
        if (pos + clen > len) clen = (uint32_t)(len - pos);
        if (memcmp(chk, "fmt ", 4) == 0 && clen >= 16) {
            fmt_tag = rd_u16(wav + pos);
            channels = rd_u16(wav + pos + 2);
            rate = (uint32_t)rd_i32(wav + pos + 4);
            bits = rd_u16(wav + pos + 14);
        } else if (memcmp(chk, "data", 4) == 0) {
            pcm_data = wav + pos;
            pcm_bytes = clen;
        }
        pos += clen + (clen & 1u);
    }
    if (!pcm_data || pcm_bytes == 0 || channels == 0 || channels > 2 || rate == 0) return false;
    if (fmt_tag != 1 && fmt_tag != 3) return false; /* PCM or IEEE float */

    size_t bps = bits / 8u;
    if (bps == 0) return false;
    size_t frame_bytes = bps * channels;
    size_t nframes = pcm_bytes / frame_bytes;
    if (nframes == 0) return false;

    int16_t *dst = (int16_t *)malloc(nframes * channels * sizeof(int16_t));
    if (!dst) return false;

    size_t total_samples = nframes * channels;
    if (fmt_tag == 1 && bits == 16) {
        for (size_t i = 0; i < total_samples; i++) {
            const uint8_t *s = pcm_data + i * 2;
            dst[i] = (int16_t)((uint16_t)s[0] | ((uint16_t)s[1] << 8));
        }
    } else if (fmt_tag == 1 && bits == 8) {
        for (size_t i = 0; i < total_samples; i++) {
            int v = ((int)pcm_data[i] - 128) * 256;
            dst[i] = (int16_t)v;
        }
    } else if (fmt_tag == 1 && bits == 24) {
        for (size_t i = 0; i < total_samples; i++) {
            const uint8_t *s = pcm_data + i * 3;
            int32_t v = ((int32_t)(int8_t)s[2] << 8) | s[1];
            dst[i] = (int16_t)v;
        }
    } else if (fmt_tag == 1 && bits == 32) {
        for (size_t i = 0; i < total_samples; i++) {
            const uint8_t *s = pcm_data + i * 4;
            dst[i] = (int16_t)((uint16_t)s[2] | ((uint16_t)s[3] << 8));
        }
    } else if (fmt_tag == 3 && bits == 32) {
        for (size_t i = 0; i < total_samples; i++) {
            float fv;
            memcpy(&fv, pcm_data + i * 4, 4);
            if (fv > 1.0f) fv = 1.0f;
            if (fv < -1.0f) fv = -1.0f;
            dst[i] = (int16_t)(fv * 32767.0f);
        }
    } else {
        free(dst);
        return false;
    }

    *out_pcm = dst;
    *out_frames = nframes;
    if (out_rate) *out_rate = (int32_t)rate;
    if (out_channels) *out_channels = (int32_t)channels;
    return true;
}

int gm82_decode_sounds_from_gmk(const uint8_t *data, size_t size, gm82_decoded_sound_list *out) {
    gm82_decoded_sound_list_init(out);
    if (!data || size < 12) return -1;
    gm82_decoded_sound tmp[256];
    int n = 0;
    for (size_t i = 12; i + 2 < size && n < 256; i++) {
        if (!(data[i]==0x78 && (data[i+1]==0x9c||data[i+1]==0xda||data[i+1]==0x01||data[i+1]==0x5e)))
            continue;
        size_t ol = 0;
        uint8_t *d = inflate_at(data + i, size - i, &ol);
        i += 16;
        if (!d || ol < 28) { free(d); continue; }
        if (rd_i32(d) != 1) { free(d); continue; }
        int32_t slen = rd_i32(d + 4);
        if (slen < 1 || slen > 62 || 8 + (size_t)slen + 16 > ol) { free(d); continue; }
        char name[64]; memcpy(name, d+8, (size_t)slen); name[slen]=0;
        int ok=1; for (int k=0;k<slen;k++) if ((uint8_t)name[k]<32||(uint8_t)name[k]>126) ok=0;
        if (!ok) { free(d); continue; }
        size_t off = 8 + (size_t)slen + 8; /* lastChanged */
        if (off + 8 > ol) { free(d); continue; }
        int32_t ver = rd_i32(d + off); off += 4;
        if (ver != 800 && ver != 710 && ver != 600 && ver != 540 &&
            ver != 530 && ver != 440 && ver != 400) { free(d); continue; }

        int32_t kind = rd_i32(d + off); off += 4;
        if (kind < 0 || kind > 3) { free(d); continue; }
        char ext[16] = {0};
        if (off + 4 > ol) { free(d); continue; }
        int32_t ext_len = rd_i32(d + off); off += 4;
        if (ext_len < 0 || ext_len > 15 || off + (size_t)ext_len > ol) { free(d); continue; }
        memcpy(ext, d + off, (size_t)ext_len); ext[ext_len] = 0; off += (size_t)ext_len;
        if (!(strstr(ext, ".wav") || strstr(ext, ".mp3") || strstr(ext, ".mid") || strstr(ext, ".ogg"))) {
            free(d); continue;
        }
        if (off + 4 > ol) { free(d); continue; }
        int32_t fn_len = rd_i32(d + off); off += 4;
        if (fn_len < 0 || fn_len > 1024 || off + (size_t)fn_len > ol) { free(d); continue; }
        off += (size_t)fn_len;
        if (off + 4 > ol) { free(d); continue; }
        int32_t has_data = rd_i32(d + off); off += 4;
        uint8_t *raw_copy = NULL;
        size_t raw_sz = 0;
        if (has_data && off + 4 <= ol) {
            int32_t dlen = rd_i32(d + off); off += 4;
            if (dlen > 0 && off + (size_t)dlen <= ol) {
                raw_copy = (uint8_t *)malloc((size_t)dlen);
                if (raw_copy) {
                    memcpy(raw_copy, d + off, (size_t)dlen);
                    raw_sz = (size_t)dlen;
                }
                off += (size_t)dlen;
            }
        }
        gm82_decoded_sound *s = &tmp[n++];
        memset(s, 0, sizeof(*s));
        snprintf(s->name, sizeof(s->name), "%s", name);
        snprintf(s->ext, sizeof(s->ext), "%s", ext);
        s->kind = kind;
        s->volume = 1.0;
        s->preload = 1;
        s->raw_data = raw_copy;
        s->raw_size = raw_sz;
        s->data_size = raw_sz;
        if (raw_copy && raw_sz >= 44) {
            gm82_wav_decode_pcm(raw_copy, raw_sz, &s->pcm, &s->pcm_frames, &s->sample_rate, &s->channels);
        }
        free(d);
    }

    out->count = n;
    if (n > 0) {
        out->items = malloc((size_t)n * sizeof(*out->items));
        if (out->items) memcpy(out->items, tmp, (size_t)n * sizeof(*tmp));
        else out->count = 0;
    }
    return out->count;
}
