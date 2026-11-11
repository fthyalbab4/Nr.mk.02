#include <unistd.h>
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include "gm82_jni.h"
#include "gm82_int_read.h"

extern void gm82_native_step_dt(double dt);

static int resolve_path(const char *path, char *out, size_t out_sz) {
    FILE *f = fopen(path, "rb");
    if (f) { fclose(f); snprintf(out, out_sz, "%s", path); return 1; }
    snprintf(out, out_sz, "../../%s", path);
    f = fopen(out, "rb");
    if (f) { fclose(f); return 1; }
    snprintf(out, out_sz, "%s", path);
    return 0;
}

static void test_high_framerate_dt_accumulation(const char *resolved) {
    char error[256] = {0};
    assert(gm82_native_init(640, 480));
    assert(gm82_native_load_game(resolved, error, (int)sizeof(error)));
    assert(gm82_native_is_running());

    /* Simulate 90 FPS: dt ~ 0.011111s for 90 frames (1 second) */
    double dt_90 = 1.0 / 90.0;
    for (int i = 0; i < 90; i++) {
        gm82_native_step_dt(dt_90);
    }
    int width = 0, height = 0;
    const uint8_t *frame = gm82_native_frame_rgba(&width, &height);
    assert(frame != NULL);

    /* Simulate 120 FPS: dt ~ 0.008333s for 120 frames */
    double dt_120 = 1.0 / 120.0;
    for (int i = 0; i < 120; i++) {
        gm82_native_step_dt(dt_120);
    }
    frame = gm82_native_frame_rgba(&width, &height);
    assert(frame != NULL);

    /* Simulate 144 FPS: dt ~ 0.006944s for 144 frames */
    double dt_144 = 1.0 / 144.0;
    for (int i = 0; i < 144; i++) {
        gm82_native_step_dt(dt_144);
    }
    frame = gm82_native_frame_rgba(&width, &height);
    assert(frame != NULL);

    gm82_native_shutdown();
}

int main(void) {
    const uint8_t encoded_minus_one[4] = {0xff, 0xff, 0xff, 0xff};
    const uint8_t encoded_int32_min[4] = {0x00, 0x00, 0x00, 0x80};
    assert(gm82_read_i32le(encoded_minus_one) == -1);
    assert(gm82_read_i32le(encoded_int32_min) == INT32_MIN);

    const char *sample = "app/src/main/assets/www/samples/mario_bros.gmk";
    if (access(sample, F_OK) != 0) sample = "../../app/src/main/assets/www/samples/mario_bros.gmk";
    char error[256] = {0};
    char resolved[512];
    assert(resolve_path(sample, resolved, sizeof(resolved)));
    assert(gm82_native_init(640, 480));
    assert(!gm82_native_load_game("missing-native-frame-test.gmk", error, (int)sizeof(error)));
    assert(gm82_native_load_game(resolved, error, (int)sizeof(error)));
    assert(gm82_native_is_running());

    int width = 0, height = 0;
    const uint8_t *frame = gm82_native_frame_rgba(&width, &height);
    assert(frame != NULL);
    assert(width > 0 && height > 0);
    assert((uint64_t)(uint32_t)width * (uint64_t)(uint32_t)height <= 16777216u);

    gm82_native_key_down(39);
    gm82_native_step();
    gm82_native_key_up(39);
    frame = gm82_native_frame_rgba(&width, &height);
    assert(frame != NULL);
    assert(gm82_native_load_game(resolved, error, (int)sizeof(error)));
    frame = gm82_native_frame_rgba(&width, &height);
    assert(frame != NULL);
    gm82_native_shutdown();

    /* Run 90+ FPS delta-time accumulator tests */
    test_high_framerate_dt_accumulation(resolved);

    puts("native RGBA frame API OK");
    return 0;
}
