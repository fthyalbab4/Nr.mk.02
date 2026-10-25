#include "gm82_arena.h"
#include <stdlib.h>
#include <string.h>

#define ALIGN_UP(size, align) (((size) + (align) - 1) & ~((align) - 1))

static gm82_arena_block *arena_block_create(size_t capacity) {
    gm82_arena_block *b = (gm82_arena_block *)malloc(sizeof(gm82_arena_block));
    if (!b) return NULL;
    b->buffer = (uint8_t *)malloc(capacity);
    if (!b->buffer) {
        free(b);
        return NULL;
    }
    b->capacity = capacity;
    b->offset = 0;
    b->next = NULL;
    return b;
}

void gm82_arena_init(gm82_arena *arena, size_t default_block_size) {
    if (!arena) return;
    memset(arena, 0, sizeof(*arena));
    arena->default_block_size = default_block_size > 0 ? default_block_size : (64 * 1024);
    arena->first = arena_block_create(arena->default_block_size);
    arena->current = arena->first;
    if (arena->first) {
        arena->total_allocated = arena->first->capacity;
    }
}

void *gm82_arena_alloc(gm82_arena *arena, size_t size) {
    if (!arena || size == 0) return NULL;
    if (!arena->first) {
        gm82_arena_init(arena, arena->default_block_size);
        if (!arena->first) return NULL;
    }

    size_t aligned_size = ALIGN_UP(size, 8);
    gm82_arena_block *cur = arena->current;

    if (!cur || (cur->offset + aligned_size > cur->capacity)) {
        size_t block_cap = (aligned_size > arena->default_block_size) ? aligned_size : arena->default_block_size;
        gm82_arena_block *next_block = cur ? cur->next : NULL;

        if (next_block && next_block->capacity >= aligned_size) {
            arena->current = next_block;
            arena->current->offset = 0;
            cur = arena->current;
        } else {
            gm82_arena_block *new_block = arena_block_create(block_cap);
            if (!new_block) return NULL;
            if (cur) {
                new_block->next = cur->next;
                cur->next = new_block;
            } else {
                new_block->next = arena->first;
                arena->first = new_block;
            }
            arena->current = new_block;
            arena->total_allocated += block_cap;
            cur = new_block;
        }
    }

    void *ptr = cur->buffer + cur->offset;
    cur->offset += aligned_size;
    return ptr;
}

void gm82_arena_reset(gm82_arena *arena) {
    if (!arena) return;
    for (gm82_arena_block *b = arena->first; b != NULL; b = b->next) {
        b->offset = 0;
    }
    arena->current = arena->first;
}

void gm82_arena_destroy(gm82_arena *arena) {
    if (!arena) return;
    gm82_arena_block *b = arena->first;
    while (b) {
        gm82_arena_block *next = b->next;
        free(b->buffer);
        free(b);
        b = next;
    }
    memset(arena, 0, sizeof(*arena));
}
