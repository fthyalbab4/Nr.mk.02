/* Deterministic replay for the real mario_bros.gmk sample. It intentionally
 * selects obj_minimario (the live player), not obj_minimario_pierde or the
 * transition object, then holds VK_RIGHT for 30 frames. */
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_object_room_decode.h"
#include "gm82_runtime.h"
#include "gm82_input.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int read_all(const char *path, uint8_t **out, size_t *out_size) {
    FILE *f = fopen(path, "rb");
    if (!f) return 0;
    if (fseek(f, 0, SEEK_END) != 0) { fclose(f); return 0; }
    long n = ftell(f);
    if (n <= 0) { fclose(f); return 0; }
    rewind(f);
    uint8_t *p = (uint8_t *)malloc((size_t)n);
    if (!p || fread(p, 1, (size_t)n, f) != (size_t)n) {
        free(p); fclose(f); return 0;
    }
    fclose(f);
    *out = p; *out_size = (size_t)n;
    return 1;
}

int main(void) {
    const char *path = "app/src/main/assets/www/samples/mario_bros.gmk";
    uint8_t *data = NULL; size_t size = 0;
    if (!read_all(path, &data, &size)) {
        printf("SKIP mario sample not present\n");
        return 0;
    }

    gm82_decoded_sprite_list sprites = {0};
    gm82_decoded_background_list backgrounds = {0};
    gm82_decoded_object_list objects = {0};
    gm82_decoded_room_list rooms = {0};
    gm82_sprite_group_list groups = {0};
    assert(gm82_decode_sprites_from_gmk(data, size, &sprites) > 0);
    assert(gm82_decode_backgrounds_from_gmk(data, size, &backgrounds) > 0);
    assert(gm82_decode_objects_from_gmk(data, size, &objects) > 0);
    assert(gm82_decode_rooms_from_gmk(data, size, &rooms) > 0);
    gm82_sprite_groups_build(&sprites, &groups);

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &objects, &sprites, &backgrounds, &rooms, NULL);
    if (groups.count > 0) gm82_runtime_bind_sprite_groups(&rt, &groups);
    assert(gm82_runtime_goto_room(&rt, 0));

    int player_index = -1;
    int live_player_object = -1;
    /* Use the stable resource identity. Death/transition objects deliberately
       contain "mario" too, so they are excluded by the exact live-player name. */
    for (int oi = 0; oi < objects.count; ++oi) {
        if (strcmp(objects.items[oi].name, "obj_minimario") != 0 &&
            strcmp(objects.items[oi].name, "obj_mario") != 0) continue;
        live_player_object = oi;
        break;
    }
    assert(live_player_object >= 0);
    for (int i = 0; i < rt.instance_count; ++i) {
        int oi = rt.instances[i].object_index;
        if (!rt.instances[i].alive || oi < 0 || oi >= objects.count) continue;
        if (oi != live_player_object) continue;
        player_index = i;
        if (player_index >= 0) break;
    }
    assert(player_index >= 0);

    gm82_input_state input;
    gm82_input_init(&input);
    gm82_input_bind_global(&input);
    double x0 = rt.instances[player_index].x;
    for (int frame = 0; frame < 30; ++frame) {
        gm82_input_begin_frame(&input);
        gm82_input_key_down(&input, 39); /* VK_RIGHT */
        gm82_runtime_step(&rt);
    }
    double dx = rt.instances[player_index].x - x0;
    assert(dx > 0.0);
    printf("  mario replay: object=%s start_x=%.1f delta_x=%.1f frames=30\n",
           objects.items[rt.instances[player_index].object_index].name, x0, dx);

    gm82_runtime_cleanup(&rt);
    gm82_sprite_group_list_free(&groups);
    gm82_decoded_sprite_list_free(&sprites);
    gm82_decoded_background_list_free(&backgrounds);
    gm82_decoded_object_list_free(&objects);
    gm82_decoded_room_list_free(&rooms);
    free(data);
    printf("test_mario_replay PASS\n");
    return 0;
}
