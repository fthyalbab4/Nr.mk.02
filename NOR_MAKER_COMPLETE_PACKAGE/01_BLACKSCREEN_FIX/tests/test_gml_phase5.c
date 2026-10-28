#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
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

int main(void) {
    puts("=== Testing Phase 5 GML Expansion (Strings & Collision Shapes & Math) ===");
    test_string_expansions();
    test_collision_shapes();
    test_math_builtins_and_eval();
    puts("GML_PHASE5_TEST_PASS");
    return 0;
}
