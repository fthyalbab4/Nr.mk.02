#ifndef GM82_ARENA_H
#define GM82_ARENA_H
#include <stddef.h>
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct gm82_arena {
    uint8_t *base;
    size_t capacity;
    size_t offset;
    size_t peak;
} gm82_arena;
int gm82_arena_init(gm82_arena *a, size_t capacity);
void gm82_arena_reset(gm82_arena *a);
void gm82_arena_free(gm82_arena *a);
void *gm82_arena_alloc(gm82_arena *a, size_t size, size_t align);
size_t gm82_arena_used(const gm82_arena *a);
size_t gm82_arena_peak(const gm82_arena *a);
#ifdef __cplusplus
}
#endif
#endif
