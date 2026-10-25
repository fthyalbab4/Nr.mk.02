#include "gm82_arena.h"
#include <stdlib.h>
#include <string.h>
int gm82_arena_init(gm82_arena *a, size_t capacity) {
    if (!a || capacity < 4096) return 0;
    memset(a, 0, sizeof(*a));
    a->base = (uint8_t *)malloc(capacity);
    if (!a->base) return 0;
    a->capacity = capacity;
    a->offset = 0;
    a->peak = 0;
    return 1;
}
void gm82_arena_reset(gm82_arena *a) { if (a) a->offset = 0; }
void gm82_arena_free(gm82_arena *a) {
    if (!a) return;
    free(a->base);
    a->base = NULL;
    a->capacity = a->offset = a->peak = 0;
}
void *gm82_arena_alloc(gm82_arena *a, size_t size, size_t align) {
    if (!a || !a->base || size == 0) return NULL;
    if (align < 1) align = 1;
    size_t mask = align - 1;
    size_t off = (a->offset + mask) & ~mask;
    if (off + size > a->capacity) return NULL;
    void *p = a->base + off;
    a->offset = off + size;
    if (a->offset > a->peak) a->peak = a->offset;
    return p;
}
size_t gm82_arena_used(const gm82_arena *a) { return a ? a->offset : 0; }
size_t gm82_arena_peak(const gm82_arena *a) { return a ? a->peak : 0; }

void *gm82_room_alloc(void *runtime_ptr, size_t size) {
    if (!runtime_ptr || size == 0) return NULL;
    gm82_arena *arena = (gm82_arena *)runtime_ptr; /* Pass &rt->room_arena or rt */
    return gm82_arena_alloc(arena, size, 16);
}
