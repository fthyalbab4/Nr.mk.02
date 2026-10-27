#include "gm82_arena.h"
#include "gm82_events.h"
#include "gm82_gl_textures.h"
#include "gm82_runtime.h"
#include "gm82_sprite_decode.h"

#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

static void test_arena_alignment_bounds_and_reset(void) {
    gm82_arena arena = {0};
    assert(gm82_arena_init(&arena, 4096));
    void *aligned = gm82_arena_alloc(&arena, 17, 16);
    assert(aligned != NULL);
    assert(((uintptr_t)aligned & 15u) == 0);
    assert(gm82_arena_used(&arena) >= 17);
    size_t peak = gm82_arena_peak(&arena);
    assert(peak >= gm82_arena_used(&arena));
    assert(gm82_arena_alloc(&arena, 8, 3) == NULL);
    assert(gm82_arena_alloc(&arena, SIZE_MAX, 8) == NULL);
    assert(gm82_arena_peak(&arena) == peak);
    gm82_arena_reset(&arena);
    assert(gm82_arena_used(&arena) == 0);
    assert(gm82_arena_peak(&arena) == peak);
    assert(gm82_arena_alloc(&arena, 8, 8) != NULL);
    gm82_arena_free(&arena);
    assert(arena.base == NULL);
    puts("[PASS] arena alignment, bounds, reset, and cleanup");
}

static void test_pixel_conversions(void) {
    uint16_t rgba4444 = 0xF00F;
    uint8_t unaligned[3] = {0};
    memcpy(unaligned + 1, &rgba4444, sizeof(rgba4444));
    uint8_t rgba[4] = {0};
    assert(gm82_pixel_format_convert_16_to_32(
        unaligned + 1, 1, GM82_PIXEL_FORMAT_RGBA4444, rgba));
    assert(rgba[0] == 255 && rgba[1] == 0 && rgba[2] == 0 && rgba[3] == 255);

    uint16_t argb4444 = 0xF123;
    assert(gm82_pixel_format_convert_16_to_32(
        (const uint8_t *)&argb4444, 1, GM82_PIXEL_FORMAT_ARGB4444, rgba));
    assert(rgba[0] == 0x11 && rgba[1] == 0x22 && rgba[2] == 0x33 && rgba[3] == 0xFF);

    uint16_t rgb565 = 0x07E0;
    assert(gm82_pixel_format_convert_16_to_32(
        (const uint8_t *)&rgb565, 1, GM82_PIXEL_FORMAT_RGB565, rgba));
    assert(rgba[0] == 0 && rgba[1] == 255 && rgba[2] == 0 && rgba[3] == 255);

    memset(rgba, 0xA5, sizeof(rgba));
    assert(!gm82_pixel_format_convert_16_to_32(
        (const uint8_t *)&rgb565, 1, (gm82_pixel_format)999, rgba));
    assert(rgba[0] == 0xA5 && rgba[3] == 0xA5);
    assert(!gm82_pixel_format_convert_16_to_32(
        (const uint8_t *)&rgb565, SIZE_MAX / 4 + 1, GM82_PIXEL_FORMAT_RGB565, rgba));

    uint8_t bgra_in_place[4] = {1, 2, 3, 4};
    assert(gm82_pixel_format_convert_bgra_to_rgba(bgra_in_place, 1, bgra_in_place));
    assert(bgra_in_place[0] == 3 && bgra_in_place[1] == 2 &&
           bgra_in_place[2] == 1 && bgra_in_place[3] == 4);
    assert(!gm82_pixel_format_convert_bgra_to_rgba(bgra_in_place, 0, bgra_in_place));
    puts("[PASS] pixel conversion formats, invalid input, and in-place BGRA");
}

static void test_texture_region(void) {
    gm82_decoded_sprite_list sprites;
    gm82_decoded_sprite_list_init(&sprites);
    sprites.frames = (gm82_decoded_frame *)calloc(1, sizeof(*sprites.frames));
    assert(sprites.frames != NULL);
    sprites.count = sprites.capacity = 1;
    sprites.frames[0].width = 32;
    sprites.frames[0].height = 16;

    gm82_gl_atlas atlas;
    gm82_gl_atlas_init(&atlas);
    assert(gm82_gl_upload_sprites(&atlas, &sprites));
    gm82_texture_region region;
    assert(gm82_gl_atlas_get_region(&atlas, 0, &region));
    assert(region.tex_id == atlas.sprites[0].tex_id);
    assert(region.u0 == 0.0f && region.v0 == 0.0f);
    assert(region.u1 == 1.0f && region.v1 == 1.0f);
    assert(region.width == 32 && region.height == 16);
    assert(!gm82_gl_atlas_get_region(&atlas, 1, &region));

    gm82_gl_atlas_free(&atlas);
    gm82_decoded_sprite_list_free(&sprites);
    puts("[PASS] full-texture region lookup");
}

static char *dup_text(const char *text) {
    size_t n = strlen(text) + 1;
    char *copy = (char *)malloc(n);
    assert(copy != NULL);
    memcpy(copy, text, n);
    return copy;
}

static void test_create_once_and_deferred_destroy(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    gm82_decoded_object_list objects;
    gm82_decoded_object_list_init(&objects);
    objects.items = (gm82_decoded_object *)calloc(1, sizeof(*objects.items));
    assert(objects.items != NULL);
    objects.count = 1;
    snprintf(objects.items[0].name, sizeof(objects.items[0].name), "obj_test");
    objects.items[0].sprite_index = -1;
    objects.items[0].event_count = 2;
    objects.items[0].events[0].main_type = GM82_EV_CREATE;
    objects.items[0].events[0].code_snippet = dup_text("x = x + 1;");
    objects.items[0].events[1].main_type = GM82_EV_DESTROY;
    objects.items[0].events[1].code_snippet = dup_text("x = x + 100;");

    gm82_decoded_room_list rooms;
    gm82_decoded_room_list_init(&rooms);
    rooms.items = (gm82_decoded_room *)calloc(1, sizeof(*rooms.items));
    assert(rooms.items != NULL);
    rooms.count = 1;
    rooms.items[0].width = 320;
    rooms.items[0].height = 240;
    rooms.items[0].speed = 30;
    rooms.items[0].instances = (gm82_decoded_instance *)calloc(1, sizeof(*rooms.items[0].instances));
    assert(rooms.items[0].instances != NULL);
    rooms.items[0].instance_count = 1;
    rooms.items[0].instances[0].object_index = 0;
    rooms.items[0].instances[0].x = 30;
    rooms.items[0].instances[0].y = 40;

    gm82_runtime_bind_assets(&rt, &objects, NULL, NULL, &rooms, NULL);
    gm82_instance *persistent = gm82_runtime_instance_create(&rt, 0, 10.0, 20.0);
    assert(persistent != NULL);
    gm82_events_fire_create_single(&rt, persistent);
    assert(persistent->x == 11.0);
    persistent->persistent = 1;

    rt.step_accumulator = 0.005;
    assert(gm82_runtime_goto_room(&rt, 0));
    assert(rt.step_accumulator == 0.0);
    assert(rt.step_room_speed == 30);
    assert(rt.instance_count == 2);
    assert(rt.instances[0].id == persistent->id && rt.instances[0].x == 11.0);
    gm82_instance *room_inst = &rt.instances[1];
    assert(room_inst->x == 31.0); /* room Create fires once */

    rt.frame_phase = GM82_PHASE_STEP;
    gm82_runtime_instance_destroy(&rt, room_inst);
    assert(room_inst->alive == 1);
    assert(rt.destroy_queue_count == 1);
    gm82_runtime_instance_destroy(&rt, room_inst);
    assert(rt.destroy_queue_count == 1); /* duplicate destroy is coalesced */
    rt.frame_phase = GM82_PHASE_IDLE;
    gm82_runtime_flush_destroy_queue(&rt);
    assert(room_inst->alive == 0);
    assert(room_inst->x == 131.0); /* Destroy event ran before marking dead */

    gm82_runtime_cleanup(&rt);
    gm82_decoded_room_list_free(&rooms);
    gm82_decoded_object_list_free(&objects);
    puts("[PASS] Create exactly once and deferred Destroy lifecycle");
}

static void test_runtime_step_dt(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    rt.room_speed = 60;

    gm82_runtime_step_dt(&rt, NAN);
    gm82_runtime_step_dt(&rt, INFINITY);
    gm82_runtime_step_dt(&rt, -1.0);
    gm82_runtime_step_dt(&rt, 0.0);
    assert(rt.frame == 0);

    gm82_runtime_step_dt(&rt, 1.0 / 120.0);
    assert(rt.frame == 0);
    gm82_runtime_step_dt(&rt, 1.0 / 120.0);
    assert(rt.frame == 1);

    gm82_runtime_step_dt(&rt, 0.051);
    assert(rt.frame == 4);
    gm82_runtime_step_dt(&rt, 1.0);
    assert(rt.frame == 8); /* at most four fixed updates for a long stall */
    gm82_runtime_cleanup(&rt);

    gm82_runtime_init(&rt);
    rt.running = 1;
    rt.room_speed = 60;
    gm82_runtime_step_dt(&rt, 0.9 / 60.0);
    assert(rt.frame == 0);
    rt.room_speed = 30;
    gm82_runtime_step_dt(&rt, 0.6 / 30.0);
    assert(rt.frame == 0); /* prior-speed fractional time is discarded */
    assert(fabs(rt.step_accumulator - 0.6 / 30.0) < 1e-12);
    gm82_runtime_cleanup(&rt);
    puts("[PASS] fixed-step dt validation, frame cap, and speed-change reset");
}

int main(void) {
    test_arena_alignment_bounds_and_reset();
    test_pixel_conversions();
    test_texture_region();
    test_create_once_and_deferred_destroy();
    test_runtime_step_dt();
    puts("ALL_PHASE1_ARENA_SPRITES_LIFECYCLE_TESTS_PASS");
    return 0;
}
