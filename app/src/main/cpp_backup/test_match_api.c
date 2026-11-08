/*
 * Residual host — match_* API behavioral tests.
 *
 * Design (single signature, GM82core-style):
 *   match_any / match_some  : compare a==b; sticky OR into match_found
 *   match_exact             : compare a==b; OVERWRITES match_found
 *   match_found             : read sticky flag
 *   match_clear             : reset sticky flag to 0
 *   match_not_any / not_some / not_exact : pure compare, do NOT touch found
 *
 * Does NOT claim Portable GM82core binary parity.
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
    if (fabs(a - b) > 1e-9) {
        fprintf(stderr, "[FAIL] %s (got %g, expected %g)\n", msg, a, b);
        g_failures++;
    } else printf("[PASS] %s\n", msg);
}

static void test_match_exact_overwrites(void) {
    gml_match_clear();
    expect_near(gml_match_found(), 0.0, "clear -> found=0");

    expect_near(gml_match_exact(3, 3), 1.0, "exact equal returns 1");
    expect_near(gml_match_found(), 1.0, "exact equal sets found");

    expect_near(gml_match_exact(3, 4), 0.0, "exact unequal returns 0");
    expect_near(gml_match_found(), 0.0, "exact unequal overwrites found to 0");

    printf("--- test_match_exact_overwrites done ---\n");
}

static void test_match_any_sticky(void) {
    gml_match_clear();
    expect_near(gml_match_any(1, 2), 0.0, "any miss returns 0");
    expect_near(gml_match_found(), 0.0, "any miss leaves found=0");

    expect_near(gml_match_any(5, 5), 1.0, "any hit returns 1");
    expect_near(gml_match_found(), 1.0, "any hit sets found");

    expect_near(gml_match_any(1, 2), 0.0, "any miss after hit returns 0");
    expect_near(gml_match_found(), 1.0, "any miss does not clear sticky found");

    printf("--- test_match_any_sticky done ---\n");
}

static void test_match_not_no_side_effect(void) {
    gml_match_clear();
    expect_near(gml_match_not_any(7, 7), 0.0, "not_any equal returns 0");
    expect_near(gml_match_found(), 0.0, "not_any equal does not set found");

    expect_near(gml_match_not_any(7, 8), 1.0, "not_any unequal returns 1");
    expect_near(gml_match_found(), 0.0, "not_any unequal leaves found=0");

    gml_match_exact(1, 1);
    expect_near(gml_match_found(), 1.0, "setup found=1");
    expect_near(gml_match_not_exact(2, 3), 1.0, "not_exact unequal returns 1");
    expect_near(gml_match_found(), 1.0, "not_exact does not clear existing found");

    printf("--- test_match_not_no_side_effect done ---\n");
}

static void test_match_aliases(void) {
    gml_match_clear();
    expect_near(gml_match_some(9, 9), 1.0, "some == any");
    expect_near(gml_match_found(), 1.0, "some sets sticky found");
    expect_near(gml_match_not_some(1, 1), 0.0, "not_some equal returns 0");
    printf("--- test_match_aliases done ---\n");
}

static void test_match_via_eval(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    gml_match_clear();

    double v = -1;
    assert(gm82_gml_eval_expr(&rt, NULL, "match_clear()", &v));
    assert(gm82_gml_eval_expr(&rt, NULL, "match_exact(10, 10)", &v));
    expect_near(v, 1.0, "eval match_exact equal");
    assert(gm82_gml_eval_expr(&rt, NULL, "match_found()", &v));
    expect_near(v, 1.0, "eval match_found after exact");

    assert(gm82_gml_eval_expr(&rt, NULL, "match_any(1, 2)", &v));
    expect_near(v, 0.0, "eval match_any miss");
    assert(gm82_gml_eval_expr(&rt, NULL, "match_found()", &v));
    expect_near(v, 1.0, "eval sticky found preserved");

    gm82_runtime_cleanup(&rt);
    printf("--- test_match_via_eval done ---\n");
}

int main(void) {
    printf("=== test_match_api (residual host) ===\n");
    test_match_exact_overwrites();
    test_match_any_sticky();
    test_match_not_no_side_effect();
    test_match_aliases();
    test_match_via_eval();

    if (g_failures) {
        fprintf(stderr, "\n%d failure(s)\n", g_failures);
        return 1;
    }
    printf("\nAll match_* behavioral checks passed.\n");
    return 0;
}
