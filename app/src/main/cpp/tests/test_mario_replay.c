/* Deterministic replay for the real mario_bros.gmk sample. It intentionally
 * selects obj_minimario (the live player), not obj_minimario_pierde or the
 * transition object, and records the plan's 160-frame idle/walk/jump scenario. */
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

static void check_replay_state(const gm82_runtime *rt, int player_index) {
    assert(rt != NULL);
    assert(rt->current_room == 0);
    assert(player_index >= 0 && player_index < rt->instance_count);
    const gm82_instance *player = &rt->instances[player_index];
    assert(player->alive);
    assert(player->x >= 0.0 && player->x <= rt->room_width);
    assert(player->y >= 0.0 && player->y < rt->room_height);
}

static void write_replay_trace(FILE *trace, int frame,
                               const gm82_runtime *rt, int player_index) {
    if (!trace) return;
    const gm82_instance *player = &rt->instances[player_index];
    fprintf(trace,
            "{\"frame\":%d,\"room\":%d,\"mario\":{\"x\":%.3f,\"y\":%.3f,"
            "\"hspeed\":%.3f,\"vspeed\":%.3f,\"on_ground\":%s,"
            "\"sprite_index\":%d,\"image_index\":%.3f}}\n",
            frame, rt->current_room, player->x, player->y,
            player->hspeed, player->vspeed,
            player->on_ground ? "true" : "false",
            player->sprite_index, player->image_index);
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
    const char *trace_path = getenv("NOR_MARIO_REPLAY_TRACE");
    FILE *trace = trace_path && trace_path[0] ? fopen(trace_path, "w") : NULL;
    if (trace_path && trace_path[0]) assert(trace != NULL);
    double x0 = rt.instances[player_index].x;
    for (int frame = 0; frame < 60; ++frame) {
        gm82_input_begin_frame(&input);
        gm82_runtime_step(&rt);
        check_replay_state(&rt, player_index);
        write_replay_trace(trace, frame + 1, &rt, player_index);
    }
    double x_idle = rt.instances[player_index].x;
    double y_idle = rt.instances[player_index].y;
    printf("  replay frame=60 room=%d player=(%.1f,%.1f) grounded=%d\n",
           rt.current_room, x_idle, y_idle, rt.instances[player_index].on_ground);

    for (int frame = 60; frame < 100; ++frame) {
        gm82_input_begin_frame(&input);
        gm82_input_key_down(&input, 39); /* VK_RIGHT */
        gm82_runtime_step(&rt);
        check_replay_state(&rt, player_index);
        write_replay_trace(trace, frame + 1, &rt, player_index);
    }
    double x_right = rt.instances[player_index].x;
    double dx_right = x_right - x_idle;
    assert(dx_right > 0.0);
    printf("  replay frame=100 room=%d player=(%.1f,%.1f) dx=%.1f grounded=%d\n",
           rt.current_room, rt.instances[player_index].x, rt.instances[player_index].y,
           dx_right, rt.instances[player_index].on_ground);
    gm82_input_key_up(&input, 39);
    double y_before_jump = rt.instances[player_index].y;
    double y_min = y_before_jump;
    /* Frame 101: cover either classic jump binding (Up or Space). */
    gm82_input_begin_frame(&input);
    gm82_input_key_down(&input, 38); /* VK_UP */
    gm82_input_key_down(&input, 32); /* Space */
    gm82_runtime_step(&rt);
    check_replay_state(&rt, player_index);
    write_replay_trace(trace, 101, &rt, player_index);
    if (rt.instances[player_index].y < y_min) y_min = rt.instances[player_index].y;
    printf("  replay frame=101 room=%d player=(%.1f,%.1f) grounded=%d\n",
           rt.current_room, rt.instances[player_index].x, rt.instances[player_index].y,
           rt.instances[player_index].on_ground);
    for (int frame = 102; frame <= 160; ++frame) {
        gm82_input_begin_frame(&input);
        gm82_input_key_up(&input, 38);
        gm82_input_key_up(&input, 32);
        gm82_runtime_step(&rt);
        check_replay_state(&rt, player_index);
        write_replay_trace(trace, frame, &rt, player_index);
        if (rt.instances[player_index].y < y_min) y_min = rt.instances[player_index].y;
    }
    assert(y_min < y_before_jump);
    assert(rt.instances[player_index].on_ground == 1);
    if (trace) fclose(trace);
    printf("  replay frame=160 room=%d player=(%.1f,%.1f) apex_y=%.1f grounded=%d\n",
           rt.current_room, rt.instances[player_index].x, rt.instances[player_index].y,
           y_min, rt.instances[player_index].on_ground);
    printf("  mario replay: object=%s idle_delta=%.1f right_dx=%.1f jump_y=%.1f->%.1f final_grounded=%d\n",
           objects.items[rt.instances[player_index].object_index].name,
           x_idle - x0, dx_right, y_before_jump, y_min,
           rt.instances[player_index].on_ground);

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
