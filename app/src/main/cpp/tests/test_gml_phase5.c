#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_actions.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static void test_string_expansions(void) {
    char buf[128];
    gml_string_copy("GameMaker82", 5, 5, buf, sizeof(buf));
    assert(strcmp(buf, "Maker") == 0);

    gml_string_replace("Hello World", "World", "NOR Maker", buf, sizeof(buf));
    assert(strcmp(buf, "Hello NOR Maker") == 0);

    gml_string_replace_all("foo bar foo baz foo", "foo", "qux", buf, sizeof(buf));
    assert(strcmp(buf, "qux bar qux baz qux") == 0);

    assert(gml_string_starts_with_ext("GameMaker82", "Game") == 1.0);
    assert(gml_string_starts_with_ext("GameMaker82", "Maker") == 0.0);
    assert(gml_string_ends_with_ext("GameMaker82", "82") == 1.0);
    assert(gml_string_ends_with_ext("GameMaker82", "Maker") == 0.0);

    gml_filename_remove_ext("sample_level.gmk");
    assert(strcmp(gm82_gml_last_string(), "sample_level") == 0);

    puts("test_string_expansions PASS");
}

static void test_collision_shapes(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    gm82_instance *target = gm82_runtime_instance_create(&rt, 1, 100, 100);
    assert(target != NULL);

    /* Line collision passing through target at (100, 100) */
    double hit_line = gml_collision_line(0, 0, 200, 200, 1, 0, 0);
    assert(hit_line == target->id);

    /* Line collision missing target */
    double miss_line = gml_collision_line(0, 0, 50, 50, 1, 0, 0);
    assert(miss_line == -4);

    /* Ellipse collision covering (100, 100) */
    double hit_ell = gml_collision_ellipse(80, 80, 120, 120, 1, 0, 0);
    assert(hit_ell == target->id);

    /* Ellipse collision missing (100, 100) */
    double miss_ell = gml_collision_ellipse(0, 0, 50, 50, 1, 0, 0);
    assert(miss_ell == -4);

    puts("test_collision_shapes PASS");
}

static void test_math_builtins_and_eval(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    assert(fabs(gml_frac(1.75) - 0.75) < 1e-6);
    assert(fabs(gml_frac(-1.25) - (-0.25)) < 1e-6);
    assert(fabs(gml_dot_product(2, 3, 4, 5) - 23.0) < 1e-6);
    assert(gml_math_min(10, 20) == 10);
    assert(gml_math_max(10, 20) == 20);

    double lum = gml_color_get_luminance(0xffffff);
    assert(fabs(lum - 255.0) < 1e-3);

    double env = gml_envelerp(0.0, 100.0, 0.5);
    assert(env >= 0.0 && env <= 100.0);

    double gr = gml_gauss_range(10.0, 20.0);
    assert(gr >= 10.0 && gr <= 20.0);

    double val = 0;
    assert(gm82_gml_eval_expr(&rt, NULL, "frac(3.25)", &val));
    assert(fabs(val - 0.25) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, NULL, "dot_product(1, 2, 3, 4)", &val));
    assert(fabs(val - 11.0) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, NULL, "min(5, 9)", &val));
    assert(val == 5);

    assert(gm82_gml_eval_expr(&rt, NULL, "min(12, 5, 80, 2, 99)", &val));
    assert(val == 2);

    assert(gm82_gml_eval_expr(&rt, NULL, "max(5, 9)", &val));
    assert(val == 9);

    assert(gm82_gml_eval_expr(&rt, NULL, "max(12, 5, 80, 2, 99)", &val));
    assert(val == 99);

    assert(gm82_gml_eval_expr(&rt, NULL, "clamp(15, 0, 10)", &val));
    assert(val == 10);

    assert(gm82_gml_eval_expr(&rt, NULL, "lerp(0, 100, 0.5)", &val));
    assert(fabs(val - 50.0) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, NULL, "point_distance(0, 0, 3, 4)", &val));
    assert(fabs(val - 5.0) < 1e-6);

    assert(fabs(gml_hypot(3, 4) - 5.0) < 1e-6);
    assert(fabs(gml_clamp_angle(370.0) - 10.0) < 1e-6);
    assert(fabs(gml_lerp_angle(350.0, 10.0, 0.5) - 0.0) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, NULL, "hypot(3, 4)", &val));
    assert(fabs(val - 5.0) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, NULL, "clamp_angle(730)", &val));
    assert(fabs(val - 10.0) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, NULL, "lerp_angle(350, 10, 0.5)", &val));
    assert(fabs(val - 0.0) < 1e-6);

    puts("test_math_builtins_and_eval PASS");
}

static void test_dnd_action_conditionals(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 10.0, 10.0);
    assert(inst != NULL);

    /* Test action_if_dice */
    bool dice_res = gm82_action_execute_named(&rt, inst, "action_if_dice");
    (void)dice_res; /* dice result is random (true or false) but must execute without crash */

    /* Test action_if_empty */
    gm82_action_ref act_empty;
    memset(&act_empty, 0, sizeof(act_empty));
    strncpy(act_empty.name, "action_if_empty", sizeof(act_empty.name) - 1);
    act_empty.args[0] = 500;
    act_empty.args[1] = 500;
    act_empty.args[2] = -4;
    act_empty.argc = 3;
    assert(gm82_action_execute_ref(&rt, inst, &act_empty) == true);

    /* Test action_if_collision */
    gm82_action_ref act_coll;
    memset(&act_coll, 0, sizeof(act_coll));
    strncpy(act_coll.name, "action_if_collision", sizeof(act_coll.name) - 1);
    act_coll.args[0] = 500;
    act_coll.args[1] = 500;
    act_coll.args[2] = -1;
    act_coll.argc = 3;
    assert(gm82_action_execute_ref(&rt, inst, &act_coll) == false);

    /* Create target instance at 500,500 and verify collision now succeeds */
    gm82_instance *target = gm82_runtime_instance_create(&rt, 1, 500.0, 500.0);
    assert(target != NULL);
    assert(gm82_action_execute_ref(&rt, inst, &act_coll) == true);

    /* Test action_if_variable */
    gm82_action_ref act_var;
    memset(&act_var, 0, sizeof(act_var));
    strncpy(act_var.name, "action_if_variable", sizeof(act_var.name) - 1);
    act_var.args[0] = 10;
    act_var.args[1] = 0; /* legacy equality */
    act_var.args[2] = 10;
    act_var.argc = 3;
    assert(gm82_action_execute_ref(&rt, inst, &act_var) == true);
    const int ops[] = {1, 2, 3, 4, 5, 6};
    const int lhs[] = {4, 4, 4, 4, 5, 5};
    const int rhs[] = {5, 4, 4, 5, 4, 4};
    for (size_t i = 0; i < sizeof(ops) / sizeof(ops[0]); ++i) {
        act_var.args[0] = lhs[i];
        act_var.args[1] = ops[i];
        act_var.args[2] = rhs[i];
        assert(gm82_action_execute_ref(&rt, inst, &act_var) == true);
    }
    const int false_lhs[] = {5, 5, 4, 4, 4, 4};
    const int false_rhs[] = {4, 4, 5, 4, 5, 5};
    for (size_t i = 0; i < sizeof(ops) / sizeof(ops[0]); ++i) {
        act_var.args[0] = false_lhs[i];
        act_var.args[1] = ops[i];
        act_var.args[2] = false_rhs[i];
        assert(gm82_action_execute_ref(&rt, inst, &act_var) == false);
    }
    act_var.args[0] = 1;
    act_var.args[1] = 0;
    act_var.args[2] = 2;
    assert(gm82_action_execute_ref(&rt, inst, &act_var) == false);
    puts("test_dnd_action_conditionals PASS");
}

static void test_gmk_code_and_alarm_selection(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_decoded_object_list objects = {0};
    objects.items = (gm82_decoded_object *)calloc(1, sizeof(*objects.items));
    assert(objects.items != NULL);
    objects.count = 1;
    strncpy(objects.items[0].name, "obj", sizeof(objects.items[0].name) - 1);
    rt.objects = &objects;

    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 10.0, 10.0);
    assert(inst != NULL);
    gm82_action_ref code_action = {0};
    code_action.code = "x += 2;";
    assert(gm82_action_execute_ref(&rt, inst, &code_action));
    assert(fabs(inst->x - 12.0) < 1e-9);

    assert(gm82_gml_eval_block(&rt, inst, "alarm_zero = -1; alarm_one = -1;"));
    gm82_action_table table = {0};
    table.objects = (gm82_object_actions *)calloc(1, sizeof(*table.objects));
    assert(table.objects != NULL);
    table.count = 1;
    strncpy(table.objects[0].object_name, "obj", sizeof(table.objects[0].object_name) - 1);
    table.objects[0].items = (gm82_action_ref *)calloc(2, sizeof(*table.objects[0].items));
    assert(table.objects[0].items != NULL);
    table.objects[0].count = 2;
    table.objects[0].capacity = 2;
    for (int i = 0; i < 2; ++i) {
        gm82_action_ref *a = &table.objects[0].items[i];
        a->event_type = 2;
        a->event_numb = i;
        a->argc = 1;
        a->args[0] = 7 + i;
        a->str_argc = 1;
        strncpy(a->name, "action_set_variable", sizeof(a->name) - 1);
        snprintf(a->str_args[0], sizeof(a->str_args[0]), "alarm_%s", i ? "one" : "zero");
    }
    gm82_actions_fire_alarm(&rt, inst, &table, 0);
    double value = 0.0;
    assert(gm82_gml_eval_expr(&rt, inst, "alarm_zero", &value) && value == 7.0);
    assert(gm82_gml_eval_expr(&rt, inst, "alarm_one", &value) && value == -1.0);

    gm82_action_table_free(&table);
    free(objects.items);
    gm82_runtime_cleanup(&rt);
    puts("test_gmk_code_and_alarm_selection PASS");
}

int main(void) {
    puts("=== Testing Phase 5 GML Expansion (Strings & Collision Shapes & Math & DnD) ===");
    test_string_expansions();
    test_collision_shapes();
    test_math_builtins_and_eval();
    test_dnd_action_conditionals();
    test_gmk_code_and_alarm_selection();
    puts("GML_PHASE5_TEST_PASS");
    return 0;
}
