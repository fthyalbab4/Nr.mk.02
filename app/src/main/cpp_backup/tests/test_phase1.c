#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "../include/gm82_runtime.h"
#include "../include/gm82_arena.h"
#include "../include/gm82_sprite_decode.h"
#include "../include/gm82_gl_textures.h"

static void test_arena_allocations(void) {
    printf("[TEST] Testing Memory Arena Room Allocations...\n");
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    void *p1 = gm82_room_alloc(&rt.room_arena, 1024);
    assert(p1 != NULL);
    assert(gm82_arena_used(&rt.room_arena) >= 1024);

    void *p2 = gm82_room_alloc(&rt.room_arena, 2048);
    assert(p2 != NULL);
    assert(gm82_arena_used(&rt.room_arena) >= 3072);

    gm82_arena_reset(&rt.room_arena);
    assert(gm82_arena_used(&rt.room_arena) == 0);

    gm82_runtime_cleanup(&rt);
    printf("[PASS] Memory Arena Room Allocations OK\n");
}

static void test_pixel_conversions(void) {
    printf("[TEST] Testing 16-bit / 32-bit Pixel Format Conversions...\n");
    uint16_t src565[4] = { 0xF800, 0x07E0, 0x001F, 0xFFFF }; /* Red, Green, Blue, White */
    uint8_t dst_rgba[16];

    gm82_pixel_convert_to_rgba32((const uint8_t*)src565, dst_rgba, 2, 2, GM82_FORMAT_RGB565);
    /* Red pixel check */
    assert(dst_rgba[0] > 240 && dst_rgba[1] == 0 && dst_rgba[2] == 0 && dst_rgba[3] == 255);
    /* Green pixel check */
    assert(dst_rgba[4] == 0 && dst_rgba[5] > 240 && dst_rgba[6] == 0 && dst_rgba[7] == 255);

    printf("[PASS] Pixel Format Conversions OK\n");
}

static void test_texture_atlas(void) {
    printf("[TEST] Testing Texture Atlas Grid Packing...\n");
    gm82_decoded_sprite_list list;
    gm82_decoded_sprite_list_init(&list);

    /* Allocate dummy frames */
    list.frames = (gm82_decoded_frame*)calloc(2, sizeof(gm82_decoded_frame));
    list.count = 2;
    list.capacity = 2;

    list.frames[0].width = 32; list.frames[0].height = 32;
    list.frames[1].width = 64; list.frames[1].height = 32;

    gm82_gl_atlas atlas;
    gm82_gl_atlas_init(&atlas);

    bool ok = gm82_gl_atlas_build_grid(&atlas, &list, 512);
    assert(ok);
    assert(atlas.entry_count == 2);
    assert(atlas.entries[0].w == 32 && atlas.entries[0].h == 32);
    assert(atlas.entries[1].w == 64 && atlas.entries[1].h == 32);
    assert(atlas.entries[1].u2 > atlas.entries[1].u1);

    gm82_gl_atlas_free(&atlas);
    free(list.frames);
    printf("[PASS] Texture Atlas Grid Packing OK\n");
}

static void test_execution_order(void) {
    printf("[TEST] Testing Strict Execution Order Phases...\n");
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    assert(rt.frame_phase == GM82_PHASE_IDLE);

    gm82_runtime_step(&rt);
    assert(rt.frame_phase == GM82_PHASE_IDLE);

    uint8_t dummy_buf[64 * 64 * 4];
    gm82_runtime_draw(&rt, dummy_buf, 64, 64);
    assert(rt.frame_phase == GM82_PHASE_IDLE);

    gm82_runtime_cleanup(&rt);
    printf("[PASS] Strict Execution Order Phases OK\n");
}

int main(void) {
    printf("=== RUNNING PHASE 1 RESOURCE & MEMORY LAYOUT TEST SUITE ===\n");
    test_arena_allocations();
    test_pixel_conversions();
    test_texture_atlas();
    test_execution_order();
    printf("=== ALL PHASE 1 TESTS PASSED SUCCESSFULLY! ===\n");
    return 0;
}
