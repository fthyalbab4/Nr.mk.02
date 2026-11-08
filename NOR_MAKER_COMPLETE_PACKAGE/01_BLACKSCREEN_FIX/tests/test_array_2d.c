/*
 * Residual host — limited 2D array behavioral tests.
 * Fixed pool: 32x32x64. Does NOT claim full GM8 sparse 2D parity.
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
    if (fabs(a - b) > 1e-6) { fprintf(stderr, "[FAIL] %s (got %g, expected %g)\n", msg, a, b); g_failures++; }
    else printf("[PASS] %s\n", msg);
}
static double eval_num(gm82_runtime *rt, gm82_instance *inst, const char *expr) {
    double v = -99999.0; assert(gm82_gml_eval_expr(rt, inst, expr, &v)); return v;
}
int main(void) {
    printf("=== test_array_2d (residual host) ===\n");
    gm82_runtime rt; gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst); gm82_gml_set_self(inst);
    assert(gm82_gml_eval_stmt(&rt, inst, "m = array_create_2d(3, 4);"));
    expect_true(eval_num(&rt, inst, "m") >= 1000, "array_create_2d id in 2d range");
    assert(gm82_gml_eval_stmt(&rt, inst, "m[0,0] = 11;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "m[2,3] = 23;"));
    expect_near(eval_num(&rt, inst, "m[0,0]"), 11.0, "m[0,0]");
    expect_near(eval_num(&rt, inst, "m[2,3]"), 23.0, "m[2,3]");
    assert(gm82_gml_eval_stmt(&rt, inst, "grid[1,2] = 42;"));
    expect_near(eval_num(&rt, inst, "grid[1,2]"), 42.0, "auto 2d write");
    expect_near(eval_num(&rt, inst, "array_height_2d(grid)"), 2.0, "height grows");
    if (g_failures) { fprintf(stderr, "%d failure(s)\n", g_failures); return 1; }
    printf("\nAll limited 2D array checks passed.\n");
    gm82_runtime_cleanup(&rt);
    return 0;
}
