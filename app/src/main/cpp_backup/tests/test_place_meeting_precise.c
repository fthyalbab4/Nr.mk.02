/* place_meeting_precise with synthetic RGBA sprites (host). */
#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_object_room_decode.h"
#include "gm82_sprite_decode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
static int g_failures = 0;
static void expect_true(int c, const char *m) {
    if (!c) { fprintf(stderr, "[FAIL] %s\n", m); g_failures++; }
    else printf("[PASS] %s\n", m);
}
static uint8_t *make_solid(int w, int h) {
    uint8_t *p = (uint8_t *)calloc((size_t)w * h * 4, 1);
    for (int i = 0; i < w * h; i++) { p[i*4]=255; p[i*4+1]=255; p[i*4+2]=255; p[i*4+3]=255; }
    return p;
}
static uint8_t *make_partial(int w, int h) {
    uint8_t *p = (uint8_t *)calloc((size_t)w * h * 4, 1);
    for (int y = 0; y < 4 && y < h; y++)
        for (int x = 0; x < 4 && x < w; x++) {
            int i = y * w + x; p[i*4]=255; p[i*4+1]=255; p[i*4+2]=255; p[i*4+3]=255;
        }
    return p;
}
int main(void) {
    printf("=== test_place_meeting_precise (host) ===\n");
    const int W = 8, H = 8;
    gm82_decoded_sprite_list sprites; memset(&sprites, 0, sizeof(sprites));
    sprites.count = 2; sprites.capacity = 2;
    sprites.frames = (gm82_decoded_frame *)calloc(2, sizeof(gm82_decoded_frame));
    sprites.frames[0].width = W; sprites.frames[0].height = H;
    sprites.frames[0].rgba = make_solid(W, H);
    sprites.frames[0].rgba_size = (size_t)W * H * 4;
    sprites.frames[1].width = W; sprites.frames[1].height = H;
    sprites.frames[1].rgba = make_partial(W, H);
    sprites.frames[1].rgba_size = (size_t)W * H * 4;
    gm82_decoded_object_list objs; memset(&objs, 0, sizeof(objs));
    objs.count = 2;
    objs.items = (gm82_decoded_object *)calloc(2, sizeof(gm82_decoded_object));
    objs.items[0].parent_index = -1; objs.items[0].visible = 1;
    objs.items[1].parent_index = -1; objs.items[1].visible = 1;
    gm82_runtime rt; gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &objs, &sprites, NULL, NULL, NULL);
    rt.running = 1;
    gm82_instance *a = gm82_runtime_instance_create(&rt, 0, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 1, 4, 0);
    assert(a && b); a->sprite_index = 0; b->sprite_index = 0;
    gm82_gml_set_runtime(&rt); gm82_gml_set_self(a);
    expect_true(gml_place_meeting_precise(0, 0, 1) == 1.0, "solid overlap");
    expect_true(gml_place_meeting_precise(20, 0, 1) == 0.0, "solid far");
    b->sprite_index = 1; b->x = 4; b->y = 4;
    expect_true(gml_place_meeting_precise(0, 0, 1) == 1.0, "solid vs partial");
    b->x = 8; b->y = 8;
    expect_true(gml_place_meeting_precise(0, 0, 1) == 0.0, "partial transparent miss");
    free(sprites.frames[0].rgba); free(sprites.frames[1].rgba);
    free(sprites.frames); free(objs.items); gm82_runtime_cleanup(&rt);
    if (g_failures) { fprintf(stderr, "%d failure(s)\n", g_failures); return 1; }
    printf("place_meeting_precise host checks passed.\n");
    return 0;
}
