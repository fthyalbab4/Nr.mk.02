#include "gm82_arena.h"
#include "gm82_sprite_decode.h"
#include "gm82_gl_textures.h"
#include "gm82_runtime.h"
#include "gm82_events.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

void test_memory_arena(void) {
    gm82_arena arena;
    gm82_arena_init(&arena, 1024);
    assert(arena.first != NULL);

    int *p1 = (int *)gm82_arena_alloc(&arena, sizeof(int) * 10);
    assert(p1 != NULL);
    p1[0] = 42;
    p1[9] = 99;

    char *s = (char *)gm82_arena_alloc(&arena, 256);
    assert(s != NULL);
    snprintf(s, 256, "Hello Arena");
    assert(strcmp(s, "Hello Arena") == 0);

    /* Allocate larger than default block to force chain expansion */
    void *large = gm82_arena_alloc(&arena, 4096);
    assert(large != NULL);

    /* Reset and reallocate small and large blocks to verify chain preservation */
    gm82_arena_reset(&arena);
    assert(arena.first->offset == 0);

    int *p2 = (int *)gm82_arena_alloc(&arena, sizeof(int));
    assert(p2 != NULL);
    *p2 = 123;
    assert(*p2 == 123);

    void *large2 = gm82_arena_alloc(&arena, 4096);
    assert(large2 != NULL);

    gm82_arena_destroy(&arena);
    printf("[PASS] Memory Arena Allocator Tests\n");
}

void test_pixel_format_conversion_and_atlas(void) {
    /* Test RGBA4444 to RGBA8888 conversion */
    uint16_t src_4444[2] = { 0xF00F, 0x0F0F }; /* Red + Alpha, Green + Alpha */
    uint8_t dst_32[8] = {0};
    assert(gm82_pixel_format_convert_16_to_32((const uint8_t *)src_4444, 2, GM82_PIXEL_FORMAT_RGBA4444, dst_32) == true);
    assert(dst_32[0] == 255 && dst_32[1] == 0 && dst_32[2] == 0 && dst_32[3] == 255);
    assert(dst_32[4] == 0 && dst_32[5] == 255 && dst_32[6] == 0 && dst_32[7] == 255);

    /* Test RGB565 to RGBA8888 conversion */
    uint16_t src_565[1] = { 0xF800 }; /* Full Red */
    uint8_t dst_565[4] = {0};
    assert(gm82_pixel_format_convert_16_to_32((const uint8_t *)src_565, 1, GM82_PIXEL_FORMAT_RGB565, dst_565) == true);
    assert(dst_565[0] == 255 && dst_565[1] == 0 && dst_565[2] == 0 && dst_565[3] == 255);

    /* Test Atlas UV Region mapping */
    gm82_gl_atlas atlas;
    gm82_gl_atlas_init(&atlas);
    atlas.sprite_count = 1;
    atlas.sprites = (gm82_gl_texture *)calloc(1, sizeof(gm82_gl_texture));
    atlas.sprites[0].tex_id = 5001;
    atlas.sprites[0].width = 32;
    atlas.sprites[0].height = 32;

    gm82_texture_region reg;
    assert(gm82_gl_atlas_get_region(&atlas, 0, &reg) == true);
    assert(reg.tex_id == 5001);
    assert(reg.u0 == 0.0f && reg.u1 == 1.0f);
    assert(reg.width == 32 && reg.height == 32);

    gm82_gl_atlas_free(&atlas);
    printf("[PASS] Pixel Format Conversion & Texture Atlas Tests\n");
}

void test_lifecycle_and_deferred_queues(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    rt.running = 1;
    rt.is_processing_step = 1;

    /* Instance creation during step returns a valid pointer immediately */
    gm82_instance *inst1 = gm82_runtime_instance_create(&rt, 0, 10.0, 20.0);
    assert(inst1 != NULL);
    assert(inst1->alive == 1);
    assert(inst1->x == 10.0 && inst1->y == 20.0);

    /* Instance destroy sets alive=0 immediately so instance_exists/collisions are accurate */
    gm82_runtime_instance_destroy(&rt, inst1);
    assert(inst1->alive == 0);

    rt.is_processing_step = 0;
    gm82_runtime_process_deferred_queues(&rt);
    /* Compacts dead instances */
    assert(rt.instance_count == 0);

    printf("[PASS] Lifecycle & Instance Management Tests\n");
}

int main(void) {
    printf("--- Running Phase 1 Test Suite ---\n");
    test_memory_arena();
    test_pixel_format_conversion_and_atlas();
    test_lifecycle_and_deferred_queues();
    printf("--- All Phase 1 Tests Passed! ---\n");
    return 0;
}
