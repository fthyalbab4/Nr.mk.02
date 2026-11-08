/*
 * G14 device contract (HOST only).
 * Host contracts may PASS; G14_STATUS remains DEVICE_BLOCKED.
 */
#include "gm82_input.h"
#include "gm82_sound_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_opensles.h"
#include <stdio.h>
#include <string.h>

static int g_failures = 0;
static void expect_true(int c, const char *m) {
    if (!c) { fprintf(stderr, "[FAIL] %s\n", m); g_failures++; }
    else printf("[PASS] %s\n", m);
}

static void test_input_host_contract(void) {
    gm82_input_state in;
    gm82_input_init(&in);
    gm82_input_bind_global(&in);
    gm82_input_key_down(&in, 37);
    expect_true(gml_keyboard_check(37) == 1.0, "host key_down visible via keyboard_check");
    gm82_input_begin_frame(&in);
    expect_true(gml_keyboard_check_pressed(37) == 0.0, "pressed cleared after begin_frame");
    gm82_input_key_up(&in, 37);
    expect_true(gml_keyboard_check_released(37) == 1.0, "released edge on host");
}

static void test_sound_queue_host_contract(void) {
    gm82_sound_runtime sr;
    gm82_sound_runtime_init(&sr);
    gm82_sound_set_global(&sr);
    int k, id, loop, prio; float val;
    while (gm82_dequeue_sound_command(&k, &id, &loop, &prio, &val)) {}
    expect_true(gm82_sound_play(&sr, 1, 0) == 1, "sound_play host queue");
    expect_true(gm82_dequeue_sound_command(&k, &id, &loop, &prio, &val) == 1, "dequeue works");
    expect_true(id == 1, "queued id");
}

static void test_opensles_not_claimed(void) {
#if defined(__ANDROID__) && defined(GM82_HAVE_JNI)
    printf("[INFO] Android+JNI build: OpenSLES path may be live — still needs device playtest\n");
#else
    (void)gm82_opensles_init(44100, 2);
    expect_true(1, "OpenSLES host stub callable without crash");
#endif
    printf("G14_OPENSLES: DEVICE_BLOCKED\n");
    printf("G14_JNI_INPUT: DEVICE_BLOCKED\n");
}

int main(void) {
    printf("=== G14 device contract (host) ===\n");
    test_input_host_contract();
    test_sound_queue_host_contract();
    test_opensles_not_claimed();
    printf("G14_STATUS: DEVICE_BLOCKED\n");
    if (g_failures) { fprintf(stderr, "%d host contract failure(s)\n", g_failures); return 1; }
    return 0;
}
