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

bool gm82_bitmask_check_overlap_scaled(const gm82_bitmask *m1, double x1, double y1,
                                       int32_t xo1, int32_t yo1, double xs1, double ys1,
                                       const gm82_bitmask *m2, double x2, double y2,
                                       int32_t xo2, int32_t yo2, double xs2, double ys2) {
    if (!m1 || !m2 || !m1->bits || !m2->bits) return false;

    if (xs1 == 0.0) xs1 = 1.0;
    if (ys1 == 0.0) ys1 = 1.0;
    if (xs2 == 0.0) xs2 = 1.0;
    if (ys2 == 0.0) ys2 = 1.0;

    double abs_xs1 = xs1 < 0 ? -xs1 : xs1;
    double abs_ys1 = ys1 < 0 ? -ys1 : ys1;
    double abs_xs2 = xs2 < 0 ? -xs2 : xs2;
    double abs_ys2 = ys2 < 0 ? -ys2 : ys2;

    double bbox1_left   = x1 - xo1 * abs_xs1;
    double bbox1_top    = y1 - yo1 * abs_ys1;
    double bbox1_right  = bbox1_left + m1->width * abs_xs1;
    double bbox1_bottom = bbox1_top  + m1->height * abs_ys1;

    double bbox2_left   = x2 - xo2 * abs_xs2;
    double bbox2_top    = y2 - yo2 * abs_ys2;
    double bbox2_right  = bbox2_left + m2->width * abs_xs2;
    double bbox2_bottom = bbox2_top  + m2->height * abs_ys2;

    int32_t ix1 = (int32_t)(bbox1_left > bbox2_left ? bbox1_left : bbox2_left);
    int32_t iy1 = (int32_t)(bbox1_top > bbox2_top ? bbox1_top : bbox2_top);
    int32_t ix2 = (int32_t)((bbox1_right < bbox2_right ? bbox1_right : bbox2_right) + 0.999);
    int32_t iy2 = (int32_t)((bbox1_bottom < bbox2_bottom ? bbox1_bottom : bbox2_bottom) + 0.999);

    if (ix1 >= ix2 || iy1 >= iy2) return false;

    for (int32_t py = iy1; py < iy2; py++) {
        for (int32_t px = ix1; px < ix2; px++) {
            int32_t m1_x = (int32_t)((px - bbox1_left) / abs_xs1);
            int32_t m1_y = (int32_t)((py - bbox1_top) / abs_ys1);
            if (xs1 < 0) m1_x = m1->width - 1 - m1_x;
            if (ys1 < 0) m1_y = m1->height - 1 - m1_y;

            int32_t m2_x = (int32_t)((px - bbox2_left) / abs_xs2);
            int32_t m2_y = (int32_t)((py - bbox2_top) / abs_ys2);
            if (xs2 < 0) m2_x = m2->width - 1 - m2_x;
            if (ys2 < 0) m2_y = m2->height - 1 - m2_y;

            if (gm82_bitmask_get_pixel(m1, m1_x, m1_y) &&
                gm82_bitmask_get_pixel(m2, m2_x, m2_y)) {
                return true;
            }
        }
    }
    return false;
}
