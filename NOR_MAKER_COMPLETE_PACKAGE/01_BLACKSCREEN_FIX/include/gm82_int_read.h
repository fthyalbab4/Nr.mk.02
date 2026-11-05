#ifndef GM82_INT_READ_H
#define GM82_INT_READ_H

#include <stdint.h>

/* Decode two's-complement little-endian fields without shifting signed ints. */
static inline uint32_t gm82_read_u32le(const uint8_t *p) {
    return (uint32_t)p[0] |
           ((uint32_t)p[1] << 8) |
           ((uint32_t)p[2] << 16) |
           ((uint32_t)p[3] << 24);
}

static inline int32_t gm82_read_i32le(const uint8_t *p) {
    uint32_t bits = gm82_read_u32le(p);
    if (bits <= 0x7fffffffU) return (int32_t)bits;
    return -1 - (int32_t)(0xffffffffU - bits);
}

#endif
