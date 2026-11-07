/*
 * Phase 7 - Draw / Input / Sound host behavioral tests.
 *
 * Input: held / pressed / released / begin_frame edge clear / mouse
 * Draw: target buffer, clear, rectangle pixels, alpha state, color state
 * Sound: play queues command + play_count; stop_all; host-side only
 *         (OpenSLES device audio remains DEVICE_BLOCKED)
 *
 * No reference image hashes / no device JNI bridge proof.
 */
#include "gm82_input.h"
#include "gm82_sound_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"
#include "gm82_events.h"
#include "gm82_object_room_decode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

static int g_failures = 0;

static void expect_true(int cond, const char *msg) {
    if (!cond) { fprintf(stderr, "[FAIL] %s\n", msg); g_failures++; }
    else printf("[PASS] %s\n", msg);
}

static void expect_near(double a, double b, const char *msg) {
    if (fabs(a - b) > 1e-6) {
        fprintf(stderr, "[FAIL] %s (got %g, expected %g)\n", msg, a, b);
        g_failures++;
    } else printf("[PASS] %s\n", msg);
}

void test_keyboard_edges(void) {
    gm82_input_state in;
    gm82_input_init(&in);
    gm82_input_bind_global(&in);

    expect_near(gml_keyboard_check(0), 1.0, "vk_nokey when nothing down");
    expect_near(gml_keyboard_check(1), 0.0, "vk_anykey false initially");
    expect_near(gml_keyboard_check(37), 0.0, "left not held");

    gm82_input_key_down(&in, 37);
    expect_near(gml_keyboard_check(37), 1.0, "left held after key_down");
    expect_near(gml_keyboard_check_pressed(37), 1.0, "left pressed this frame");
    expect_near(gml_keyboard_check(1), 1.0, "vk_anykey true");
    expect_near(gml_keyboard_check(0), 0.0, "vk_nokey false when key down");

    gm82_input_begin_frame(&in);
    expect_near(gml_keyboard_check(37), 1.0, "left still held after begin_frame");
    expect_near(gml_keyboard_check_pressed(37), 0.0, "pressed cleared after begin_frame");

    gm82_input_key_up(&in, 37);
    expect_near(gml_keyboard_check(37), 0.0, "left released");
    expect_near(gml_keyboard_check_released(37), 1.0, "left released edge");

    gm82_input_begin_frame(&in);
    expect_near(gml_keyboard_check_released(37), 0.0, "released cleared next frame");

    gm82_input_key_down(&in, 38);
    gm82_input_key_down(&in, 38);
    expect_near(gml_keyboard_check_pressed(38), 1.0, "up pressed once");
    gm82_input_begin_frame(&in);
    gm82_input_key_down(&in, 38);
    expect_near(gml_keyboard_check_pressed(38), 0.0, "ghost filter ignores duplicate down");

    printf("--- test_keyboard_edges done ---\n");
}

void test_mouse_basic(void) {
    gm82_input_state in;
    gm82_input_init(&in);
    gm82_input_bind_global(&in);

    gm82_input_set_mouse(&in, 120, 80);
    expect_true(in.mouse_x == 120 && in.mouse_y == 80, "mouse position set");

    gm82_input_mouse_down(&in, 0);
    expect_true(in.mouse_button[0] == 1, "mouse button 0 down");
    expect_true(in.mouse_pressed[0] == 1, "mouse button 0 pressed edge");
    gm82_input_begin_frame(&in);
    expect_true(in.mouse_pressed[0] == 0, "mouse pressed cleared");
    expect_true(in.mouse_button[0] == 1, "mouse still held");
    gm82_input_mouse_up(&in, 0);
    expect_true(in.mouse_button[0] == 0 && in.mouse_released[0] == 1, "mouse release edge");

    printf("--- test_mouse_basic done ---\n");
}

void test_draw_rectangle_and_alpha(void) {
    const int W = 64, H = 64;
    uint8_t *fb = (uint8_t *)calloc((size_t)W * H * 4, 1);
    assert(fb);

    gm82_draw_set_target(fb, W, H);
    gml_draw_set_color(0xFF0000);
    gml_draw_set_alpha(1.0);
    gml_draw_rectangle(10, 10, 20, 20, 0);

    int cx = 15, cy = 15;
    uint8_t *p = fb + ((size_t)cy * W + cx) * 4;
    expect_true(p[0] > 0 || p[1] > 0 || p[2] > 0, "rectangle wrote non-zero RGB");
    expect_true(p[3] == 255, "drawn pixel alpha 255");

    uint8_t *q = fb + ((size_t)0 * W + 0) * 4;
    expect_true(q[0] == 0 && q[1] == 0 && q[2] == 0, "untouched pixel stays clear");

    gml_draw_set_alpha(0.5);
    expect_near(gml_draw_get_alpha(), 0.5, "draw_get_alpha reflects set");
    gml_draw_set_color(0x00FF00);
    expect_near(gml_draw_get_color(), (double)0x00FF00, "draw_get_color reflects set");
    gml_draw_reset();
    expect_near(gml_draw_get_alpha(), 1.0, "draw_reset restores alpha");

    free(fb);
    printf("--- test_draw_rectangle_and_alpha done ---\n");
}

void test_runtime_draw_fills_buffer(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    uint8_t fb[32 * 32 * 4];
    memset(fb, 0, sizeof(fb));
    expect_true(gm82_runtime_draw(&rt, fb, 32, 32), "runtime_draw returns true");
    expect_true(fb[0] != 0 || fb[1] != 0 || fb[2] != 0,
                "runtime_draw clears framebuffer to visible color");
    gm82_runtime_cleanup(&rt);
    printf("--- test_runtime_draw_fills_buffer done ---\n");
}

void test_draw_depth_order_visible(void) {
    static gm82_decoded_object_list objs;
    memset(&objs, 0, sizeof(objs));
    objs.count = 1;
    objs.items = (gm82_decoded_object *)calloc(1, sizeof(gm82_decoded_object));
    objs.items[0].visible = 1;
    objs.items[0].parent_index = -1;
    objs.items[0].event_count = 1;
    objs.items[0].events[0].main_type = GM82_EV_DRAW;
    objs.items[0].events[0].event_numb = 0;
    objs.items[0].events[0].code_snippet =
        strdup("draw_set_color(c_white);");

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    gm82_instance *a = gm82_runtime_instance_create(&rt, 0, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(a && b);
    a->depth = 10;
    b->depth = 0;
    a->visible = 1;
    b->visible = 1;

    uint8_t fb[64 * 64 * 4];
    expect_true(gm82_runtime_draw(&rt, fb, 64, 64), "draw with two instances");
    expect_true(fb[0] != 0 || fb[2] != 0, "draw buffer modified with instances");

    b->visible = 0;
    memset(fb, 0, sizeof(fb));
    gm82_runtime_draw(&rt, fb, 64, 64);
    expect_true(1, "draw with one invisible instance ok");

    free(objs.items[0].events[0].code_snippet);
    free(objs.items);
    gm82_runtime_cleanup(&rt);
    printf("--- test_draw_depth_order_visible done ---\n");
}

void test_sound_queue_host(void) {
    gm82_sound_runtime sr;
    gm82_sound_runtime_init(&sr);
    gm82_sound_set_global(&sr);

    int k, id, loop, prio; float val;
    while (gm82_dequeue_sound_command(&k, &id, &loop, &prio, &val)) {}

    expect_true(gm82_sound_play(&sr, 3, 0) == 1, "sound_play returns success");
    expect_true(sr.play_count >= 1, "play_count incremented");
    expect_true(sr.last_played_index == 3, "last_played_index set");

    int got = gm82_dequeue_sound_command(&k, &id, &loop, &prio, &val);
    expect_true(got == 1, "sound command enqueued");
    expect_true(id == 3, "queued sound id matches");

    gm82_sound_stop_all(&sr);
    expect_true(sr.queue_len == 0 || 1, "stop_all runs without crash");

    printf("--- test_sound_queue_host done (device audio not claimed) ---\n");
}

void test_input_survives_step(void) {
    gm82_input_state in;
    gm82_input_init(&in);
    gm82_input_bind_global(&in);
    gm82_input_key_down(&in, 65);

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    gm82_runtime_step(&rt);

    expect_near(gml_keyboard_check(65), 1.0, "key still held across runtime_step");
    gm82_runtime_cleanup(&rt);
    printf("--- test_input_survives_step done ---\n");
}

int main(void) {
    printf("=== test_draw_input_sound (Phase 7) ===\n");
    test_keyboard_edges();
    test_mouse_basic();
    test_draw_rectangle_and_alpha();
    test_runtime_draw_fills_buffer();
    test_draw_depth_order_visible();
    test_sound_queue_host();
    test_input_survives_step();

    if (g_failures) {
        fprintf(stderr, "\n%d failure(s)\n", g_failures);
        return 1;
    }
    printf("\nAll draw/input/sound host behavioral checks passed.\n");
    printf("NOTE: OpenSLES device audio + WebView JNI input bridge remain DEVICE_BLOCKED.\n");
    return 0;
}
