#define _POSIX_C_SOURCE 200809L
#include "gm82_mask.h"
#include <stdlib.h>
#include <string.h>

bool gm82_bitmask_create(gm82_bitmask *mask, int32_t width, int32_t height, const uint8_t *rgba) {
    if (!mask || width <= 0 || height <= 0 || !rgba) return false;
    memset(mask, 0, sizeof(*mask));
    int32_t stride = (width + 7) / 8;
    mask->width = width;
    mask->height = height;
    mask->stride = stride;
    mask->bits = (uint8_t *)calloc((size_t)stride * (size_t)height, 1);
    if (!mask->bits) return false;

    for (int32_t y = 0; y < height; y++) {
        for (int32_t x = 0; x < width; x++) {
            uint8_t alpha = rgba[(y * width + x) * 4 + 3];
            if (alpha > 16) {
                mask->bits[y * stride + (x >> 3)] |= (1 << (x & 7));
            }
        }
    }
    return true;
}

void gm82_bitmask_free(gm82_bitmask *mask) {
    if (!mask) return;
    free(mask->bits);
    memset(mask, 0, sizeof(*mask));
}

bool gm82_bitmask_get_pixel(const gm82_bitmask *mask, int32_t x, int32_t y) {
    if (!mask || !mask->bits) return false;
    if (x < 0 || y < 0 || x >= mask->width || y >= mask->height) return false;
    return (mask->bits[y * mask->stride + (x >> 3)] & (1 << (x & 7))) != 0;
}

bool gm82_bitmask_check_overlap(const gm82_bitmask *m1, int32_t x1, int32_t y1,
                               const gm82_bitmask *m2, int32_t x2, int32_t y2) {
    if (!m1 || !m2 || !m1->bits || !m2->bits) return false;

    int32_t ix1 = x1 > x2 ? x1 : x2;
    int32_t iy1 = y1 > y2 ? y1 : y2;
    int32_t ix2 = (x1 + m1->width) < (x2 + m2->width) ? (x1 + m1->width) : (x2 + m2->width);
    int32_t iy2 = (y1 + m1->height) < (y2 + m2->height) ? (y1 + m1->height) : (y2 + m2->height);

    if (ix1 >= ix2 || iy1 >= iy2) return false;

    for (int32_t py = iy1; py < iy2; py++) {
        for (int32_t px = ix1; px < ix2; px++) {
            if (gm82_bitmask_get_pixel(m1, px - x1, py - y1) &&
                gm82_bitmask_get_pixel(m2, px - x2, py - y2)) {
                return true;
            }
        }
    }
    return false;
}
