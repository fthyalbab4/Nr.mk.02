#ifndef GM82_MASK_H
#define GM82_MASK_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    int32_t width, height, stride;
    uint8_t *bits;
} gm82_bitmask;

bool gm82_bitmask_create(gm82_bitmask *mask, int32_t width, int32_t height, const uint8_t *rgba);
void gm82_bitmask_free(gm82_bitmask *mask);
bool gm82_bitmask_get_pixel(const gm82_bitmask *mask, int32_t x, int32_t y);
bool gm82_bitmask_check_overlap(const gm82_bitmask *m1, int32_t x1, int32_t y1,
                               const gm82_bitmask *m2, int32_t x2, int32_t y2);

#ifdef __cplusplus
}
#endif

#endif
