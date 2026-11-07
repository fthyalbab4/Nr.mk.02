/*
 * Residual host — limited 2D array behavioral tests.
 *
 * Scope:
 *   array_create_2d / auto a[i,j]= / height_2d / length_2d(row)
 *   Fixed pool: 32 arrays x 32 rows x 64 cols
 *
 * Does NOT claim full GM8 sparse 2D or Portable parity.
 */
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_runtime.h"
#include <stdio.h>
#include <math.h>
#include <assert.h>

static int g_failures = 0;

static void expect_true(int cond, const char *msg) {
    if (!cond) { fprintf(stderr, "[FAIL] %s\n", msg); g_failures++; }
    else printf("[PASS] %s\n", msg);
}

static void expect_near(double a, double b, const char *msg) {
    if (fabs(a - b) > 1e-6) {
        fprintf(stderr, "[FAIL] %s (got %g, expected %g)\n", msg, a, b);
        g_failures++;
    } else printf("[PASS] %s\n", msg);
}

static double eval_num(gm82_runtime *rt, gm82_instance *inst, const char *expr) {
    double v = -99999.0;
    assert(gm82_gml_eval_expr(rt, inst, expr, &v));
    return v;
}

static void test_create_2d_and_index(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "m = array_create_2d(3, 4);"));
    double id = eval_num(&rt, inst, "m");
    expect_true(id >= 1000, "array_create_2d id in 2d range");
    expect_near(eval_num(&rt, inst, "array_height_2d(m)"), 3.0, "height after create_2d(3,4)");

    assert(gm82_gml_eval_stmt(&rt, inst, "m[0,0] = 11;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "m[0,1] = 12;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "m[2,3] = 23;"));
    expect_near(eval_num(&rt, inst, "m[0,0]"), 11.0, "m[0,0]");
    expect_near(eval_num(&rt, inst, "m[0,1]"), 12.0, "m[0,1]");
    expect_near(eval_num(&rt, inst, "m[2,3]"), 23.0, "m[2,3]");
    expect_near(eval_num(&rt, inst, "array_length_2d(m, 0)"), 2.0, "row0 length");
    expect_near(eval_num(&rt, inst, "array_length_2d(m, 2)"), 4.0, "row2 length after [2,3]");

    printf("--- test_create_2d_and_index done ---\n");
    gm82_runtime_cleanup(&rt);
}

static void test_auto_create_2d_on_write(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "grid[1,2] = 42;"));
    expect_near(eval_num(&rt, inst, "grid[1,2]"), 42.0, "auto 2d write");
    expect_near(eval_num(&rt, inst, "array_height_2d(grid)"), 2.0, "height grows to row+1");
    expect_near(eval_num(&rt, inst, "array_length_2d(grid, 1)"), 3.0, "row1 length");
    expect_near(eval_num(&rt, inst, "grid[0,0]"), 0.0, "unset 2d cell is 0");

    printf("--- test_auto_create_2d_on_write done ---\n");
    gm82_runtime_cleanup(&rt);
}

static void test_1d_still_works(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "a[3] = 7;"));
    expect_near(eval_num(&rt, inst, "a[3]"), 7.0, "1d a[3]");
    expect_near(eval_num(&rt, inst, "array_length_1d(a)"), 4.0, "1d length");
    expect_near(eval_num(&rt, inst, "array_height_2d(a)"), 1.0, "1d reports height 1");

    printf("--- test_1d_still_works done ---\n");
    gm82_runtime_cleanup(&rt);
}

static void test_compound_2d(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "t[0,0] = 10;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "t[0,0] += 5;"));
    expect_near(eval_num(&rt, inst, "t[0,0]"), 15.0, "2d compound +=");

    printf("--- test_compound_2d done ---\n");
    gm82_runtime_cleanup(&rt);
}

int main(void) {
    printf("=== test_array_2d (residual host) ===\n");
    test_create_2d_and_index();
    test_auto_create_2d_on_write();
    test_1d_still_works();
    test_compound_2d();

    if (g_failures) {
        fprintf(stderr, "\n%d failure(s)\n", g_failures);
        return 1;
    }
    printf("\nAll limited 2D array checks passed.\n");
    return 0;
}
