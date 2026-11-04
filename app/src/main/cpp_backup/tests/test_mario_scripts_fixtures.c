#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_script.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

/*
 * Test fixtures for real Mario GMK scripts and built-ins:
 * - Scripts: friccion_plataformas(), gravedad()
 * - Built-ins: place_free, move_contact_solid, motion_set, instance_destroy
 */

static void test_mario_scripts_and_flow(gm82_runtime *rt) {
    puts("Testing Mario scripts and motion flow...");

    /* 1. Setup mock script list containing Mario's extracted scripts */
    gm82_script_list slist;
    gm82_script_list_init(&slist);

    gm82_script_add(&slist, "friccion_plataformas", "move_contact_solid(direction, 12); vspeed = 0;");
    gm82_script_add(&slist, "gravedad", "gravity_direction = 270; if (place_free(x, y + 1)) gravity = 0.4; else gravity = 0;");
    gm82_runtime_bind_scripts(rt, &slist);

    /* 2. Create player instance (obj_mario index 10) */
    gm82_instance *mario = gm82_runtime_instance_create(rt, 10, 100.0, 100.0);
    assert(mario != NULL);
    gm82_gml_set_self(mario);

    /* Test motion_set builtin */
    gml_motion_set(90.0, 8.0);
    assert(mario->direction == 90.0);
    assert(mario->speed == 8.0);
    assert(mario->vspeed == -8.0);

    /* Test place_free: in open air, place_free(x, y+1) must be true (1.0) */
    double pf = gml_place_free(mario->x, mario->y + 1.0);
    assert(pf == 1.0);

    /* Test gravedad() script invocation via GML eval */
    double res = 0.0;
    int eval_ok = gm82_gml_eval_expr(rt, mario, "gravedad()", &res);
    assert(eval_ok == 1);
    assert(mario->gravity_direction == 270.0);
    assert(mario->gravity == 0.4);

    /* Create solid platform under mario at (100, 116) with 16x16 size */
    gm82_instance *solid_block = gm82_runtime_instance_create(rt, 1, 100.0, 116.0);
    assert(solid_block != NULL);
    solid_block->solid = 1;

    /* place_free at y+16 intersects solid_block, should be false (0.0) */
    pf = gml_place_free(mario->x, mario->y + 16.0);
    assert(pf == 0.0);

    /* Test move_contact_solid: sweep downwards to touch solid */
    mario->vspeed = 4.0;
    mario->direction = 270.0;
    gml_move_contact_solid(270.0, 16.0);
    assert(mario->y == 100.0); /* Mario is at (100,100) touching block at 116 (16px height) */

    /* Test friccion_plataformas() script */
    eval_ok = gm82_gml_eval_expr(rt, mario, "friccion_plataformas()", &res);
    assert(eval_ok == 1);
    assert(mario->vspeed == 0.0);

    /* Test instance_destroy via eval */
    eval_ok = gm82_gml_eval_block(rt, solid_block, "instance_destroy();");
    assert(eval_ok == 1);
    assert(solid_block->alive == 0);

    /* After destruction, place_free should return 1.0 again */
    pf = gml_place_free(mario->x, mario->y + 16.0);
    assert(pf == 1.0);

    puts("PASS test_mario_scripts_and_flow");
}

int main(void) {
    puts("=== Testing Mario Scripts & Built-in Action Fixtures ===");
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    test_mario_scripts_and_flow(&rt);

    puts("MARIO_SCRIPTS_FIXTURES_TEST_PASS");
    return 0;
}
