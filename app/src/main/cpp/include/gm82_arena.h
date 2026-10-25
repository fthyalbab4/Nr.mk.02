#ifndef GM82_ARENA_H
#define GM82_ARENA_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct gm82_arena_block {
    uint8_t *buffer;
    size_t capacity;
    size_t offset;
    struct gm82_arena_block *next;
} gm82_arena_block;

typedef struct {
    gm82_arena_block *first;
    gm82_arena_block *current;
    size_t default_block_size;
    size_t total_allocated;
} gm82_arena;

void gm82_arena_init(gm82_arena *arena, size_t default_block_size);
void *gm82_arena_alloc(gm82_arena *arena, size_t size);
void gm82_arena_reset(gm82_arena *arena);
void gm82_arena_destroy(gm82_arena *arena);

#ifdef __cplusplus
}
#endif

#endif
