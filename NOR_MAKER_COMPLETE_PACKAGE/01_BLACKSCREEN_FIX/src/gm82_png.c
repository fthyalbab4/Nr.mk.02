#define _POSIX_C_SOURCE 200809L
#include "gm82_png.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <zlib.h>

static char g_png_error[256] = "no error";

const char *gm82_png_last_error(void) { return g_png_error; }

static void set_error(const char *msg) {
    snprintf(g_png_error, sizeof(g_png_error), "%s", msg ? msg : "unknown error");
}

void gm82_png_image_free(gm82_png_image *img) {
    if (!img) return;
    free(img->rgba);
    img->rgba = NULL;
    img->rgba_size = 0;
    img->width = img->height = 0;
}

static uint32_t rd_be32(const uint8_t *p) {
    return ((uint32_t)p[0] << 24) | ((uint32_t)p[1] << 16) | ((uint32_t)p[2] << 8) | (uint32_t)p[3];
}

/* Number of samples per pixel for a PNG colour type. */
static int channels_for(int colour_type) {
    switch (colour_type) {
        case 0: return 1; /* grey */
        case 2: return 3; /* RGB */
        case 3: return 1; /* palette index */
        case 4: return 2; /* grey + alpha */
        case 6: return 4; /* RGBA */
        default: return 0;
    }
}

static uint8_t paeth(int a, int b, int c) {
    int p = a + b - c;
    int pa = p > a ? p - a : a - p;
    int pb = p > b ? p - b : b - p;
    int pc = p > c ? p - c : c - p;
    if (pa <= pb && pa <= pc) return (uint8_t)a;
    if (pb <= pc) return (uint8_t)b;
    return (uint8_t)c;
}

/* Undo PNG scanline filters in place. `row_bytes` excludes the filter byte. */
static bool unfilter(uint8_t *raw, size_t raw_size, int32_t height, size_t row_bytes, int bpp) {
    size_t stride = row_bytes + 1;
    if (height <= 0 || stride == 0) return false;
    if (raw_size < stride * (size_t)height) return false;
    for (int32_t y = 0; y < height; ++y) {
        uint8_t filter = raw[(size_t)y * stride];
        uint8_t *row = raw + (size_t)y * stride + 1;
        uint8_t *prev = (y > 0) ? raw + (size_t)(y - 1) * stride + 1 : NULL;
        switch (filter) {
            case 0:
                break;
            case 1:
                for (size_t i = 0; i < row_bytes; ++i) {
                    int left = (i >= (size_t)bpp) ? row[i - (size_t)bpp] : 0;
                    row[i] = (uint8_t)(row[i] + left);
                }
                break;
            case 2:
                if (prev) for (size_t i = 0; i < row_bytes; ++i) row[i] = (uint8_t)(row[i] + prev[i]);
                break;
            case 3:
                for (size_t i = 0; i < row_bytes; ++i) {
                    int left = (i >= (size_t)bpp) ? row[i - (size_t)bpp] : 0;
                    int up = prev ? prev[i] : 0;
                    row[i] = (uint8_t)(row[i] + ((left + up) >> 1));
                }
                break;
            case 4:
                for (size_t i = 0; i < row_bytes; ++i) {
                    int left = (i >= (size_t)bpp) ? row[i - (size_t)bpp] : 0;
                    int up = prev ? prev[i] : 0;
                    int upleft = (prev && i >= (size_t)bpp) ? prev[i - (size_t)bpp] : 0;
                    row[i] = (uint8_t)(row[i] + paeth(left, up, upleft));
                }
                break;
            default:
                return false;
        }
    }
    return true;
}

/* Extract the `idx`-th sample of a scanline for sub-byte bit depths. */
static int sample_at(const uint8_t *row, int32_t idx, int bit_depth) {
    if (bit_depth == 8) return row[idx];
    if (bit_depth == 16) return row[idx * 2]; /* keep the high byte */
    int per_byte = 8 / bit_depth;
    int byte_index = idx / per_byte;
    int shift = 8 - bit_depth * ((idx % per_byte) + 1);
    int mask = (1 << bit_depth) - 1;
    return (row[byte_index] >> shift) & mask;
}

bool gm82_png_decode_memory(const uint8_t *data, size_t size, gm82_png_image *out) {
    static const uint8_t sig[8] = {0x89, 'P', 'N', 'G', 0x0D, 0x0A, 0x1A, 0x0A};
    if (!data || !out) { set_error("null input"); return false; }
    if (size < 8 || memcmp(data, sig, 8) != 0) { set_error("not a PNG file"); return false; }

    int32_t width = 0, height = 0;
    int bit_depth = 0, colour_type = -1, interlace = 0;
    uint8_t palette[256 * 3];
    int palette_len = 0;
    uint8_t trns[256];
    int trns_len = 0;
    memset(palette, 0, sizeof(palette));
    memset(trns, 0xFF, sizeof(trns));

    uint8_t *idat = NULL;
    size_t idat_len = 0, idat_cap = 0;

    size_t pos = 8;
    while (pos + 8 <= size) {
        uint32_t len = rd_be32(data + pos);
        const uint8_t *type = data + pos + 4;
        if (pos + 12 + len > size) { set_error("truncated chunk"); break; }
        const uint8_t *chunk = data + pos + 8;

        if (memcmp(type, "IHDR", 4) == 0 && len >= 13) {
            width = (int32_t)rd_be32(chunk);
            height = (int32_t)rd_be32(chunk + 4);
            bit_depth = chunk[8];
            colour_type = chunk[9];
            interlace = chunk[12];
        } else if (memcmp(type, "PLTE", 4) == 0) {
            palette_len = (int)(len / 3);
            if (palette_len > 256) palette_len = 256;
            memcpy(palette, chunk, (size_t)palette_len * 3);
        } else if (memcmp(type, "tRNS", 4) == 0) {
            trns_len = (int)len;
            if (trns_len > 256) trns_len = 256;
            memcpy(trns, chunk, (size_t)trns_len);
        } else if (memcmp(type, "IDAT", 4) == 0) {
            if (idat_len + len > idat_cap) {
                size_t next = idat_cap ? idat_cap : 65536;
                while (next < idat_len + len) next *= 2;
                uint8_t *grown = (uint8_t *)realloc(idat, next);
                if (!grown) { free(idat); set_error("out of memory"); return false; }
                idat = grown; idat_cap = next;
            }
            memcpy(idat + idat_len, chunk, len);
            idat_len += len;
        } else if (memcmp(type, "IEND", 4) == 0) {
            break;
        }
        pos += 12 + len;
    }

    if (width <= 0 || height <= 0) { free(idat); set_error("missing or invalid IHDR"); return false; }
    if (interlace != 0) { free(idat); set_error("interlaced PNG not supported"); return false; }
    int channels = channels_for(colour_type);
    if (channels == 0) { free(idat); set_error("unsupported colour type"); return false; }
    if (!(bit_depth == 1 || bit_depth == 2 || bit_depth == 4 || bit_depth == 8 || bit_depth == 16)) {
        free(idat); set_error("unsupported bit depth"); return false;
    }
    if (colour_type == 3 && palette_len == 0) { free(idat); set_error("palette PNG without PLTE"); return false; }
    if (!idat || idat_len == 0) { free(idat); set_error("no IDAT data"); return false; }

    size_t row_bits = (size_t)width * (size_t)channels * (size_t)bit_depth;
    size_t row_bytes = (row_bits + 7) / 8;
    size_t expected = (row_bytes + 1) * (size_t)height;

    uint8_t *raw = (uint8_t *)malloc(expected);
    if (!raw) { free(idat); set_error("out of memory"); return false; }

    uLongf out_len = (uLongf)expected;
    int zr = uncompress(raw, &out_len, idat, (uLong)idat_len);
    free(idat);
    if (zr != Z_OK) {
        /* Some writers emit a slightly larger stream; retry with slack. */
        free(raw);
        set_error("zlib inflate failed");
        return false;
    }
    if (out_len < expected) { free(raw); set_error("inflated data too short"); return false; }

    int bpp = (channels * bit_depth + 7) / 8;
    if (bpp < 1) bpp = 1;
    if (!unfilter(raw, out_len, height, row_bytes, bpp)) {
        free(raw);
        set_error("invalid scanline filter");
        return false;
    }

    size_t rgba_size = (size_t)width * (size_t)height * 4;
    uint8_t *rgba = (uint8_t *)malloc(rgba_size);
    if (!rgba) { free(raw); set_error("out of memory"); return false; }

    for (int32_t y = 0; y < height; ++y) {
        const uint8_t *row = raw + ((size_t)y * (row_bytes + 1)) + 1;
        for (int32_t x = 0; x < width; ++x) {
            uint8_t *dst = rgba + ((size_t)y * (size_t)width + (size_t)x) * 4;
            int maxv = (1 << bit_depth) - 1;
            if (colour_type == 0) {
                int g = sample_at(row, x, bit_depth);
                int v = (bit_depth == 16) ? g : (g * 255 / (maxv ? maxv : 1));
                dst[0] = dst[1] = dst[2] = (uint8_t)v;
                dst[3] = 255;
            } else if (colour_type == 4) {
                int g = sample_at(row, x * 2, bit_depth);
                int a = sample_at(row, x * 2 + 1, bit_depth);
                int v = (bit_depth == 16) ? g : (g * 255 / (maxv ? maxv : 1));
                int av = (bit_depth == 16) ? a : (a * 255 / (maxv ? maxv : 1));
                dst[0] = dst[1] = dst[2] = (uint8_t)v;
                dst[3] = (uint8_t)av;
            } else if (colour_type == 2) {
                int r = sample_at(row, x * 3, bit_depth);
                int g = sample_at(row, x * 3 + 1, bit_depth);
                int b = sample_at(row, x * 3 + 2, bit_depth);
                if (bit_depth != 16) {
                    r = r * 255 / (maxv ? maxv : 1);
                    g = g * 255 / (maxv ? maxv : 1);
                    b = b * 255 / (maxv ? maxv : 1);
                }
                dst[0] = (uint8_t)r; dst[1] = (uint8_t)g; dst[2] = (uint8_t)b; dst[3] = 255;
            } else if (colour_type == 6) {
                int r = sample_at(row, x * 4, bit_depth);
                int g = sample_at(row, x * 4 + 1, bit_depth);
                int b = sample_at(row, x * 4 + 2, bit_depth);
                int a = sample_at(row, x * 4 + 3, bit_depth);
                if (bit_depth != 16) {
                    r = r * 255 / (maxv ? maxv : 1);
                    g = g * 255 / (maxv ? maxv : 1);
                    b = b * 255 / (maxv ? maxv : 1);
                    a = a * 255 / (maxv ? maxv : 1);
                }
                dst[0] = (uint8_t)r; dst[1] = (uint8_t)g; dst[2] = (uint8_t)b; dst[3] = (uint8_t)a;
            } else { /* palette */
                int idx = sample_at(row, x, bit_depth);
                if (idx >= palette_len) idx = 0;
                dst[0] = palette[idx * 3 + 0];
                dst[1] = palette[idx * 3 + 1];
                dst[2] = palette[idx * 3 + 2];
                dst[3] = (idx < trns_len) ? trns[idx] : 255;
            }
        }
    }

    free(raw);
    out->width = width;
    out->height = height;
    out->rgba = rgba;
    out->rgba_size = rgba_size;
    set_error("no error");
    return true;
}

bool gm82_png_decode_file(const char *path, gm82_png_image *out) {
    if (!path || !out) { set_error("null input"); return false; }
    FILE *f = fopen(path, "rb");
    if (!f) { set_error("cannot open file"); return false; }
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); set_error("seek failed"); return false; }
    long n = ftell(f);
    if (n <= 0) { fclose(f); set_error("empty file"); return false; }
    rewind(f);
    uint8_t *buf = (uint8_t *)malloc((size_t)n);
    if (!buf) { fclose(f); set_error("out of memory"); return false; }
    size_t rd = fread(buf, 1, (size_t)n, f);
    fclose(f);
    bool ok = (rd == (size_t)n) && gm82_png_decode_memory(buf, (size_t)n, out);
    free(buf);
    return ok;
}
