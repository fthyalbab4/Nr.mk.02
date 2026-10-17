#include "gm82_runtime.h"
#include "gm82_object_room_decode.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static uint8_t *read_file_bytes(const char *path, size_t *out_size) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long sz = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (sz <= 0) { fclose(f); return NULL; }
    uint8_t *buf = (uint8_t *)malloc(sz);
    if (buf) {
        if (fread(buf, 1, sz, f) != (size_t)sz) {
            free(buf);
            buf = NULL;
        }
    }
    fclose(f);
    if (out_size && buf) *out_size = sz;
    return buf;
}

int main(void) {
    puts("=== MARIO PLAYABLE HOST TEST (90+ FRAMES) ===");
    fflush(stdout);

    const char *gmk_path = "../../app/src/main/assets/www/samples/mario_bros.gmk";
    size_t size = 0;
    uint8_t *data = read_file_bytes(gmk_path, &size);
    assert(data != NULL && size > 1000);

    gm82_decoded_object_list objects;
    gm82_decoded_sprite_list sprites;
    gm82_decoded_background_list backgrounds;
    gm82_decoded_room_list rooms;

    gm82_decoded_object_list_init(&objects);
    gm82_decoded_sprite_list_init(&sprites);
    gm82_decoded_background_list_init(&backgrounds);
    gm82_decoded_room_list_init(&rooms);

    int no = gm82_decode_objects_from_gmk(data, size, &objects);
    int ns = gm82_decode_sprites_from_gmk(data, size, &sprites);
    int nb = gm82_decode_backgrounds_from_gmk(data, size, &backgrounds);
    int nr = gm82_decode_rooms_from_gmk(data, size, &rooms);

    printf("Decoded from GMK: objects=%d, sprites=%d, backgrounds=%d, rooms=%d\n",
           no, ns, nb, nr);
    fflush(stdout);

    gm82_sprite_group_list sprite_groups;
    gm82_sprite_groups_build(&sprites, &sprite_groups);

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &objects, &sprites, &backgrounds, &rooms, NULL);
    gm82_runtime_bind_sprite_groups(&rt, &sprite_groups);

    gm82_input_state input;
    gm82_input_init(&input);
    gm82_input_bind_global(&input);

    bool room_ok = gm82_runtime_goto_room(&rt, 0);
    assert(room_ok);

    /* Find playable Mario instance (skip perde/trans/dead) */
    gm82_instance *mario = NULL;
    for (int i = 0; i < rt.instance_count; i++) {
        if (!rt.instances[i].alive) continue;
        int oi = rt.instances[i].object_index;
        if (oi >= 0 && oi < objects.count) {
            const char *oname = objects.items[oi].name;
            if (strstr(oname, "pierde") || strstr(oname, "trans") || strstr(oname, "dead"))
                continue;
            if (strcmp(oname, "obj_minimario") == 0 || strcmp(oname, "obj_mario") == 0 ||
                strcmp(oname, "minimario") == 0 || strcmp(oname, "mario") == 0) {
                mario = &rt.instances[i];
                break;
            }
        }
    }
    if (!mario) {
        for (int i = 0; i < rt.instance_count; i++) {
            if (!rt.instances[i].alive) continue;
            int oi = rt.instances[i].object_index;
            if (oi >= 0 && oi < objects.count) {
                const char *oname = objects.items[oi].name;
                if (strstr(oname, "pierde") || strstr(oname, "trans") || strstr(oname, "dead"))
                    continue;
                if (strstr(oname, "mario") || strstr(oname, "Mario") || strstr(oname, "mini")) {
                    mario = &rt.instances[i];
                    break;
                }
            }
        }
    }
    assert(mario != NULL);

    double start_x = mario->x;
    double start_y = mario->y;
    printf("Mario starting at x=%.1f, y=%.1f\n", start_x, start_y);
    fflush(stdout);

    /* Simulate 100 frames holding right key (VK_RIGHT = 39) */
    gm82_input_key_down(&input, 39);

    for (int frame = 0; frame < 100; frame++) {
        gm82_input_begin_frame(&input);
        gm82_input_key_down(&input, 39);
        gm82_runtime_step(&rt);
    }

    double end_x = mario->x;
    double end_y = mario->y;
    double dx = end_x - start_x;
    printf("After 100 frames: x=%.1f, y=%.1f, dx=%.1f\n", end_x, end_y, dx);
    fflush(stdout);

    assert(dx > 20.0);
    assert(end_y >= 0.0 && end_y <= (double)rt.room_height + 100.0);

    /* Check rendering */
    int buf_w = 320, buf_h = 240;
    uint8_t *rgba = (uint8_t *)calloc(1, buf_w * buf_h * 4);
    assert(rgba != NULL);

    bool draw_ok = gm82_runtime_draw(&rt, rgba, buf_w, buf_h);
    assert(draw_ok);

    int nonzero_pixels = 0;
    for (int i = 0; i < buf_w * buf_h; i++) {
        if (rgba[i*4+0] != 20 || rgba[i*4+1] != 20 || rgba[i*4+2] != 40) {
            nonzero_pixels++;
        }
    }
    free(rgba);
    printf("Soft render nonzero pixels: %d\n", nonzero_pixels);
    fflush(stdout);
    assert(nonzero_pixels > 1000);

    gm82_sprite_group_list_free(&sprite_groups);
    gm82_decoded_object_list_free(&objects);
    gm82_decoded_sprite_list_free(&sprites);
    gm82_decoded_background_list_free(&backgrounds);
    gm82_decoded_room_list_free(&rooms);
    free(data);

    puts("MARIO_PLAYABLE_PASS_HOST");
    return 0;
}
