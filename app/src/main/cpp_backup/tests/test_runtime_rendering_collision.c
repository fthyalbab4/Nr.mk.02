#include "gm82_runtime.h"
#include "gm82_events.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    uint8_t left_rgba[8] = {255, 255, 255, 255, 0, 0, 0, 0};
    uint8_t right_rgba[8] = {0, 0, 0, 0, 255, 255, 255, 255};
    gm82_decoded_frame left = {0}, right = {0};
    left.width = right.width = 2;
    left.height = right.height = 1;
    left.rgba = left_rgba;
    right.rgba = right_rgba;
    gm82_frame_build_bitmask(&left, 16);
    gm82_frame_build_bitmask(&right, 16);
    assert(left.bitmask && right.bitmask);
    assert(!gm82_frames_collide_pixel(&left, 0, 0, &right, 1, 0));
    assert(gm82_frames_collide_pixel(&left, 0, 0, &right, -1, 0));
    free(left.bitmask);
    free(right.bitmask);

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    uint8_t bg_pixel[4] = {255, 0, 0, 128};
    gm82_decoded_background background = {0};
    background.width = background.height = 1;
    background.rgba = bg_pixel;
    gm82_decoded_background_list backgrounds = {0};
    backgrounds.items = &background;
    backgrounds.count = 1;
    rt.backgrounds = &backgrounds;

    gm82_decoded_object_list objects = {0};
    objects.items = (gm82_decoded_object *)calloc(1, sizeof(*objects.items));
    assert(objects.items);
    objects.count = 1;
    strncpy(objects.items[0].name, "renderer_test", sizeof(objects.items[0].name) - 1);
    objects.items[0].event_count = 2;
    objects.items[0].events[0].main_type = 8;
    objects.items[0].events[0].event_numb = 72; /* Pre-Draw */
    const char *draw_code = "draw_set_color(0x00ff00); draw_rectangle(0, 0, 0, 0, false);";
    objects.items[0].events[0].code_snippet = (char *)malloc(strlen(draw_code) + 1);
    assert(objects.items[0].events[0].code_snippet);
    strcpy(objects.items[0].events[0].code_snippet, draw_code);
    objects.items[0].events[1].main_type = GM82_EV_OTHER;
    objects.items[0].events[1].event_numb = GM82_OTHER_USER0;
    objects.items[0].events[1].code_snippet = (char *)malloc(sizeof("user_hits += 1;"));
    assert(objects.items[0].events[1].code_snippet);
    memcpy(objects.items[0].events[1].code_snippet, "user_hits += 1;", sizeof("user_hits += 1;"));
    rt.objects = &objects;
    gm82_instance *first = gm82_runtime_instance_create(&rt, 0, 0, 0);
    gm82_instance *second = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(first && second);

    uint8_t pixel[4] = {0};
    objects.items[0].event_count = 0;
    assert(gm82_runtime_draw(&rt, pixel, 1, 1));
    assert(pixel[0] >= 135 && pixel[0] <= 140);
    assert(pixel[1] >= 8 && pixel[1] <= 12);
    assert(pixel[2] >= 18 && pixel[2] <= 22);
    objects.items[0].event_count = 2;
    gm82_gml_set_self(first);
    gm82_runtime_event_user(&rt, 0);
    double value = 0.0;
    assert(gm82_gml_eval_expr(&rt, first, "user_hits", &value) && value == 1.0);
    assert(gm82_gml_eval_expr(&rt, second, "user_hits", &value) && value == 0.0);
    assert(gm82_runtime_draw(&rt, pixel, 1, 1));
    /* Pre-Draw must happen after clear/background rendering, not be erased by it. */
    assert(pixel[0] == 0 && pixel[1] == 255 && pixel[2] == 0);

    free(objects.items[0].events[0].code_snippet);
    free(objects.items[0].events[1].code_snippet);
    free(objects.items);
    gm82_runtime_cleanup(&rt);
    puts("runtime alpha rendering, Pre-Draw ordering and pixel collision PASS");
    return 0;
}
