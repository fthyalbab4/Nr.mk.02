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
    printf("  [PASS] Solid collision floor landing: y=%.2f, vspeed=%.2f\n", player->y, player->vspeed);

    free(objs.items);
    printf("ALL_MARIO_PHYSICS_PARITY_TESTS_PASS\n");
    return 0;
}
