#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static const uint8_t *pixel(const uint8_t *buf, int width, int x, int y) {
    return buf + ((size_t)y * (size_t)width + (size_t)x) * 4;
}

static void assert_rgb(const uint8_t *p, uint8_t r, uint8_t g, uint8_t b) {
    assert(p[0] == r && p[1] == g && p[2] == b && p[3] == 255);
}

int main(void) {
    /* Frame 0 exercises clipped source-region sampling and transparency. */
    static uint8_t part_rgba[] = {
        255, 0, 0, 255,   0, 255, 0, 255,   0, 0, 255, 0,
        255, 255, 0, 255, 255, 0, 255, 255, 0, 255, 255, 255
    };
    /* Frame 1 is deliberately small so tiling and spotlight patterns are obvious. */
    static uint8_t tile_rgba[] = {
        255, 128, 0, 255,   0, 128, 255, 255
    };
    gm82_decoded_frame frames_data[2] = {0};
    frames_data[0].width = 3;
    frames_data[0].height = 2;
    frames_data[0].rgba = part_rgba;
    frames_data[1].width = 2;
    frames_data[1].height = 1;
    frames_data[1].rgba = tile_rgba;
    gm82_decoded_sprite_list sprites = {
        .frames = frames_data, .count = 2, .capacity = 2
    };

    static uint8_t bg_rgba[] = { 32, 64, 128, 255 };
    gm82_decoded_background background = {
        .width = 1, .height = 1, .rgba = bg_rgba, .rgba_size = sizeof(bg_rgba)
    };
    gm82_decoded_background_list backgrounds = {
        .items = &background, .count = 1, .capacity = 1
    };

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.sprites = &sprites;
    rt.backgrounds = &backgrounds;
    gm82_gml_set_runtime(&rt);

    uint8_t fb[6 * 4 * 4];
    memset(fb, 0, sizeof(fb));
    gm82_draw_set_target(fb, 6, 4);

    assert(gml_draw_sprite_part_extra(0, 0, 1, 0, 2, 2, 1, 1,
                                      1, 1, 0, 0xFFFFFF, 1) == 1);
    assert_rgb(pixel(fb, 6, 1, 1), 0, 255, 0);
    assert(pixel(fb, 6, 2, 1)[3] == 0); /* transparent source pixel stays transparent */
    assert_rgb(pixel(fb, 6, 1, 2), 255, 0, 255);
    assert_rgb(pixel(fb, 6, 2, 2), 0, 255, 255);

    memset(fb, 0, sizeof(fb));
    assert(gml_draw_sprite_tiled_extra(1, 0, 0, 0, 1, 1, 0,
                                       0xFFFFFF, 1, 3, 2) == 1);
    for (int y = 0; y < 2; ++y) {
        for (int x = 0; x < 6; ++x) {
            const uint8_t *p = pixel(fb, 6, x, y);
            if ((x & 1) == 0) assert_rgb(p, 255, 128, 0);
            else assert_rgb(p, 0, 128, 255);
        }
    }

    memset(fb, 0, sizeof(fb));
    assert(gml_draw_background_tiled_extra(0, 0, 0, 1, 1, 0,
                                           0xFFFFFF, 1, 6, 4) == 1);
    assert_rgb(pixel(fb, 6, 0, 0), 32, 64, 128);
    assert_rgb(pixel(fb, 6, 5, 3), 32, 64, 128);

    memset(fb, 0, sizeof(fb));
    assert(gml_draw_spotlight(1, 0, 2, 1, 1, 1, 0,
                              0xFFFFFF, 1) == 1);
    for (int y = 0; y < 4; ++y) {
        for (int x = 0; x < 6; ++x) {
            const uint8_t *p = pixel(fb, 6, x, y);
            if (((x - 1) & 1) == 0) assert_rgb(p, 255, 128, 0);
            else assert_rgb(p, 0, 128, 255);
        }
    }

    gm82_draw_set_target(NULL, 0, 0);
    gm82_gml_set_runtime(NULL);
    gm82_runtime_cleanup(&rt);
    puts("DRAW_EXTRAS_PIXEL_TEST_PASS");
    return 0;
}
