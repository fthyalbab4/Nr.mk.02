#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include "gm82_jni.h"
#include "gm82_int_read.h"

int main(void) {
    const uint8_t encoded_minus_one[4] = {0xff, 0xff, 0xff, 0xff};
    const uint8_t encoded_int32_min[4] = {0x00, 0x00, 0x00, 0x80};
    assert(gm82_read_i32le(encoded_minus_one) == -1);
    assert(gm82_read_i32le(encoded_int32_min) == INT32_MIN);

    const char *sample = "app/src/main/assets/www/samples/mario_bros.gmk";
    char resolved[512] = {0};
    FILE *f = fopen(sample, "rb");
    if (f) { fclose(f); snprintf(resolved, sizeof(resolved), "%s", sample); }
    else { snprintf(resolved, sizeof(resolved), "../../%s", sample); }

    char error[256] = {0};
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

    puts("native RGBA frame API OK");
    return 0;
}
