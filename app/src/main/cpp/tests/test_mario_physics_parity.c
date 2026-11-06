#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

int main(void) {
    printf("=== RUNNING MARIO PHYSICS PARITY TESTS ===\n");

    gm82_runtime rt;
    gm82_runtime_init(&rt);

    gm82_decoded_object_list objs;
    memset(&objs, 0, sizeof(objs));
    objs.count = 2;
    objs.items = calloc(2, sizeof(gm82_decoded_object));

    /* Object 0: Custom Player */
    strncpy(objs.items[0].name, "obj_test_player", sizeof(objs.items[0].name) - 1);
    objs.items[0].solid = 0;
    objs.items[0].visible = 1;

    /* Object 1: Solid Floor */
    strncpy(objs.items[1].name, "obj_floor_solid", sizeof(objs.items[1].name) - 1);
    objs.items[1].solid = 1;
    objs.items[1].visible = 1;

    rt.objects = &objs;
    rt.running = 1;

    /* Create Player and Floor */
    gm82_instance *player = gm82_runtime_instance_create(&rt, 0, 85.0, 100.0);
    gm82_instance *floor = gm82_runtime_instance_create(&rt, 1, 80.0, 200.0);

    assert(player != NULL);
    assert(floor != NULL);
    assert(floor->solid == 1);

    printf("Testing gravity physics...\n");
    player->gravity = 0.5;
    player->gravity_direction = 270.0; /* 270 deg = down */

    double y_start = player->y;
    gm82_runtime_step(&rt);
    assert(player->vspeed > 0.0);
    assert(player->y > y_start);
    printf("  [PASS] Gravity acceleration: vspeed=%.2f, y=%.2f\n", player->vspeed, player->y);

    printf("Testing jump impulse...\n");
    player->vspeed = -10.0;
    double y_before_jump = player->y;
    gm82_runtime_step(&rt);
    assert(player->y < y_before_jump);
    printf("  [PASS] Jump upward displacement: y=%.2f -> %.2f\n", y_before_jump, player->y);

    printf("Testing horizontal movement and friction...\n");
    player->speed = 0.0;
    player->hspeed = 6.0;
    player->friction = 1.0;
    double x_before = player->x;
    gm82_runtime_step(&rt);
    assert(player->x > x_before);
    assert(fabs(player->hspeed - 5.0) < 0.01);
    printf("  [PASS] Horizontal movement with friction: hspeed=%.2f, x=%.2f\n", player->hspeed, player->x);

    printf("Testing solid platform landing collision...\n");
    /* Place Player right above floor and give downward velocity */
    player->x = 85.0;
    player->y = 180.0;
    player->vspeed = 10.0;
    player->speed = 0.0;
    gm82_runtime_step(&rt);

    /* Player should hit floor solid top and vspeed set to 0 */
    assert(player->y <= 200.0);
    assert(player->vspeed == 0.0);
    assert(player->on_ground == 1);
    printf("  [PASS] Solid collision floor landing: y=%.2f, vspeed=%.2f\n", player->y, player->vspeed);

    printf("Testing ceiling and wall contact state...\n");
    player->x = 100.0; player->y = 200.0; player->vspeed = -10.0;
    floor->x = 100.0; floor->y = 180.0;
    gm82_runtime_step(&rt);
    assert(player->on_ceiling == 1);
    assert(player->vspeed == 0.0);
    floor->x = 130.0; floor->y = 220.0;
    player->x = 100.0; player->y = 220.0; player->hspeed = 40.0; player->vspeed = 0.0;
    gm82_runtime_step(&rt);
    assert(player->hit_right == 1);
    assert(player->hspeed == 0.0);
    printf("  [PASS] Axis-separated ceiling/wall resolution\n");

    printf("Testing fractional image_speed animation...\n");
    gm82_sprite_group animation_group;
    memset(&animation_group, 0, sizeof(animation_group));
    animation_group.frame_start = 0;
    animation_group.frame_count = 3;
    gm82_sprite_group_list animation_groups = { &animation_group, 1 };
    gm82_runtime_bind_sprite_groups(&rt, &animation_groups);
    player->image_index = 0.0;
    player->image_speed = 0.25;
    gm82_runtime_step(&rt);
    assert(fabs(player->image_index - 0.25) < 0.0001);
    gm82_runtime_step(&rt);
    assert(fabs(player->image_index - 0.50) < 0.0001);
    player->image_speed = -0.25;
    gm82_runtime_step(&rt);
    assert(fabs(player->image_index - 0.25) < 0.0001);
    player->image_index = 2.75;
    player->image_speed = 0.5;
    gm82_runtime_step(&rt);
    assert(fabs(player->image_index - 0.25) < 0.0001);
    player->image_index = 0.25;
    player->image_speed = -0.5;
    gm82_runtime_step(&rt);
    assert(fabs(player->image_index - 2.75) < 0.0001);
    printf("  [PASS] Fractional speed and bidirectional frame wrapping: image_index=%.2f\n",
           player->image_index);

    printf("Testing high-speed solid-wall crossing...\n");
    player->x = 50.0; player->y = 50.0;
    player->xprevious = player->x; player->yprevious = player->y;
    player->hspeed = 500.0; player->vspeed = 0.0;
    player->speed = 0.0; player->gravity = 0.0; player->friction = 0.0;
    floor->x = 200.0; floor->y = 50.0;
    gm82_runtime_step(&rt);
    assert(player->hit_right == 1);
    assert(player->hspeed == 0.0);
    assert(player->x + 16.0 <= floor->x + 0.0001);
    printf("  [PASS] High-speed wall crossing resolved: player_x=%.1f wall_x=%.1f\n",
           player->x, floor->x);

    player->x = 50.0; player->y = 50.0;
    player->hspeed = 0.0; player->vspeed = 500.0;
    floor->x = 50.0; floor->y = 200.0;
    gm82_runtime_step(&rt);
    assert(player->on_ground == 1);
    assert(player->vspeed == 0.0);
    assert(player->y + 16.0 <= floor->y + 0.0001);
    printf("  [PASS] High-speed floor crossing resolved: player_y=%.1f floor_y=%.1f\n",
           player->y, floor->y);

    free(objs.items);
    gm82_runtime_cleanup(&rt);
    printf("ALL_MARIO_PHYSICS_PARITY_TESTS_PASS\n");
    return 0;
}
