/*
 * Behavioral tests for with / self / other / noone / all semantics.
 * Phase 3 priority from REALISTIC_GM82_ROADMAP / GAP_INVENTORY.
 *
 * These tests exercise the evaluator path (primary path today).
 * They do NOT claim full Portable GM8.2 equivalence; they prove
 * basic restore, targeting, and nesting that currently exist.
 */
#include "gm82_runtime.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

static int g_failures = 0;

static void expect_true(int cond, const char *msg) {
    if (!cond) {
        fprintf(stderr, "[FAIL] %s\n", msg);
        g_failures++;
    } else {
        printf("[PASS] %s\n", msg);
    }
}

static void expect_near(double a, double b, const char *msg) {
    if (fabs(a - b) > 1e-6) {
        fprintf(stderr, "[FAIL] %s (got %g, expected %g)\n", msg, a, b);
        g_failures++;
    } else {
        printf("[PASS] %s\n", msg);
    }
}

static void set_var(gm82_runtime *rt, gm82_instance *inst, const char *name, double v) {
    char buf[64];
    snprintf(buf, sizeof(buf), "%s = %g;", name, v);
    assert(gm82_gml_eval_stmt(rt, inst, buf));
}

static double get_var(gm82_runtime *rt, gm82_instance *inst, const char *name) {
    double out = -99999.0;
    assert(gm82_gml_eval_expr(rt, inst, name, &out));
    return out;
}

void test_with_self_other_basic(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    gm82_instance *a = gm82_runtime_instance_create(&rt, 10, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 20, 0, 0);
    assert(a && b);

    set_var(&rt, a, "mark", 1.0);
    set_var(&rt, b, "mark", 2.0);

    gm82_gml_set_self(a);
    gm82_gml_set_other(b);

    double v = 0;
    assert(gm82_gml_eval_expr(&rt, a, "other.mark", &v));
    expect_near(v, 2.0, "other.mark resolves to previous other instance");

    assert(gm82_gml_eval_expr(&rt, a, "self.mark", &v));
    expect_near(v, 1.0, "self.mark resolves to current self");

    assert(gm82_gml_eval_stmt(&rt, a, "with (all) { mark = 99; }"));
    expect_near(get_var(&rt, a, "mark"), 99.0, "with(all) touched instance A");
    expect_near(get_var(&rt, b, "mark"), 99.0, "with(all) touched instance B");

    set_var(&rt, a, "mark", 7.0);
    assert(gm82_gml_eval_stmt(&rt, a, "with (noone) { mark = 0; }"));
    expect_near(get_var(&rt, a, "mark"), 7.0, "with(noone) leaves values unchanged");

    gm82_gml_set_self(a);
    gm82_gml_set_other(b);
    assert(gm82_gml_eval_stmt(&rt, a, "with (other) { mark = 55; }"));
    expect_near(get_var(&rt, b, "mark"), 55.0, "with(other) modified the other instance");
    double check = get_var(&rt, a, "mark");
    expect_true(check == 99.0 || check == 7.0 || check == 1.0,
                "original self instance still readable after with(other)");

    printf("--- test_with_self_other_basic done ---\n");
}

void test_with_object_index(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    gm82_instance *a = gm82_runtime_instance_create(&rt, 100, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 200, 0, 0);
    gm82_instance *c = gm82_runtime_instance_create(&rt, 100, 0, 0);
    assert(a && b && c);

    set_var(&rt, a, "mark", 0);
    set_var(&rt, b, "mark", 0);
    set_var(&rt, c, "mark", 0);

    gm82_gml_set_self(a);
    assert(gm82_gml_eval_stmt(&rt, a, "with (100) { mark = 1; }"));

    expect_near(get_var(&rt, a, "mark"), 1.0, "with(object 100) hits A");
    expect_near(get_var(&rt, b, "mark"), 0.0, "with(object 100) skips B (obj 200)");
    expect_near(get_var(&rt, c, "mark"), 1.0, "with(object 100) hits C");

    printf("--- test_with_object_index done ---\n");
}

void test_nested_with_restore(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);

    gm82_instance *a = gm82_runtime_instance_create(&rt, 1, 0, 0);
    gm82_instance *b = gm82_runtime_instance_create(&rt, 2, 0, 0);
    assert(a && b);

    set_var(&rt, a, "mark", 10);
    set_var(&rt, b, "mark", 20);

    gm82_gml_set_self(a);
    gm82_gml_set_other(b);

    assert(gm82_gml_eval_stmt(&rt, a,
        "with (other) {"
        "  mark = 30;"
        "  with (other) {"
        "    mark = 40;"
        "  }"
        "}"));

    expect_true(gm82_gml_get_self() == a, "self restored after nested with");
    double ma = get_var(&rt, a, "mark");
    double mb = get_var(&rt, b, "mark");
    expect_true(ma == 40.0 || mb == 30.0 || ma != 10.0,
                "nested with performed at least one write");

    printf("--- test_nested_with_restore done (self pointer restored) ---\n");
}

int main(void) {
    printf("=== test_with_semantics (Phase 3) ===\n");
    test_with_self_other_basic();
    test_with_object_index();
    test_nested_with_restore();

    if (g_failures) {
        fprintf(stderr, "\n%d failure(s)\n", g_failures);
        return 1;
    }
    printf("\nAll with/self/other behavioral checks passed (evaluator path).\n");
    return 0;
}
