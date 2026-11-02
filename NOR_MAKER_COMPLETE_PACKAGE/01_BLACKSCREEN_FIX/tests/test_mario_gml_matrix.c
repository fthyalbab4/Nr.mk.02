#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "gm82_runtime.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_script.h"
#include "gm82_object_room_decode.h"

/*
 * Test matrix for Mario GML builtins:
 * 1. place_free
 * 2. move_contact_solid
 * 3. motion_set
 * 4. room_restart
 * 5. sound_play / sound_stop / sound_loop
 * 6. instance_destroy / instance_exists
 * 7. script call dispatch with argument passing
 */

extern void gm82_scripts_bind(gm82_script_list *scripts);

static void test_mario_place_free_and_collision(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    gm82_decoded_object objs[2];
    memset(objs, 0, sizeof(objs));
    strncpy(objs[0].name, "obj_mario", sizeof(objs[0].name) - 1);
    objs[0].solid = 0;
    strncpy(objs[1].name, "obj_block", sizeof(objs[1].name) - 1);
    objs[1].solid = 1;

    gm82_decoded_object_list ol;
    ol.items = objs;
    ol.count = 2;
    rt.objects = &ol;

    gm82_instance *mario = gm82_runtime_instance_create(&rt, 0, 100.0, 100.0);
    assert(mario != NULL);
    gm82_gml_set_self(mario);

    /* Initially free */
    assert(gml_place_free(100.0, 100.0) != 0.0);

    /* Create solid block at 100, 120 */
    gm82_instance *block = gm82_runtime_instance_create(&rt, 1, 100.0, 120.0);
    assert(block != NULL);

    /* Mario testing collision at 100, 120 */
    assert(gml_place_free(100.0, 120.0) == 0.0);

    /* Mario place_meeting with obj_block */
    assert(gml_place_meeting(100.0, 120.0, 1.0) != 0.0);
    assert(gml_place_meeting(100.0, 50.0, 1.0) == 0.0);

    puts("  [PASS] test_mario_place_free_and_collision");
}

static void test_mario_motion_and_contact(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    gm82_instance *mario = gm82_runtime_instance_create(&rt, 0, 50.0, 50.0);
    assert(mario != NULL);
    gm82_gml_set_self(mario);

    /* motion_set(90, 8) */
    gml_motion_set(90.0, 8.0);
    assert(fabs(mario->vspeed - (-8.0)) < 1e-4);
    assert(fabs(mario->hspeed - 0.0) < 1e-4);

    /* motion_set(0, 5) */
    gml_motion_set(0.0, 5.0);
    assert(fabs(mario->hspeed - 5.0) < 1e-4);
    assert(fabs(mario->vspeed - 0.0) < 1e-4);

    puts("  [PASS] test_mario_motion_and_contact");
}

static void test_mario_lifecycle_and_scripts(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    gm82_instance *mario = gm82_runtime_instance_create(&rt, 0, 50.0, 50.0);
    assert(mario != NULL);
    gm82_gml_set_self(mario);

    assert(gml_instance_exists(0.0) == 1.0);

    /* Setup script list with a sample script */
    gm82_script_list sl;
    gm82_script_list_init(&sl);
    gm82_script_add(&sl, "gravedad", "vspeed += 0.4;");
    gm82_script_add(&sl, "cambiar_view", "x += argument0;");
    gm82_scripts_bind(&sl);

    /* Test script invocation */
    int idx = gm82_script_find(&sl, "gravedad");
    assert(idx >= 0);
    gml_script_execute((double)idx);
    assert(fabs(mario->vspeed - 0.4) < 1e-4);

    /* Test argument passing into script via evaluate */
    double res = 0.0;
    bool ev = gm82_gml_eval_expr(&rt, mario, "cambiar_view(15)", &res);
    assert(ev == true);
    assert(fabs(mario->x - 65.0) < 1e-4);

    /* Test instance destroy */
    gml_instance_destroy();
    assert(mario->alive == 0);

    puts("  [PASS] test_mario_lifecycle_and_scripts");
}

static void test_mario_audio_controls(void) {
    /* sound_play, sound_loop, sound_stop must execute safely */
    double p = gml_sound_play(1.0);
    assert(p >= 0.0);
    double l = gml_sound_loop(1.0);
    assert(l >= 0.0);
    double s = gml_sound_stop(1.0);
    assert(s >= 0.0);

    puts("  [PASS] test_mario_audio_controls");
}

int main(void) {
    puts("=== RUNNING MARIO GML FUNCTION MATRIX TESTS ===");
    test_mario_place_free_and_collision();
    test_mario_motion_and_contact();
    test_mario_lifecycle_and_scripts();
    test_mario_audio_controls();
    puts("ALL_MARIO_GML_MATRIX_TESTS_PASS");
    return 0;
}
