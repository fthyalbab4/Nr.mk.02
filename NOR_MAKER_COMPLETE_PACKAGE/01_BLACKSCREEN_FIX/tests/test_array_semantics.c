/*
 * Phase 3B - 1D array behavioral tests (evaluator path).
 * Proves: create, indexed write/read, auto-create on first write,
 * length growth, compound assign on slots, alarm[] still works.
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

void test_array_create_and_index(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "a = array_create(4);"));
    double id = eval_num(&rt, inst, "a");
    expect_true(id >= 0, "array_create returns non-negative id");
    expect_near(eval_num(&rt, inst, "array_length_1d(a)"), 4.0, "array_length_1d after create(4)");

    assert(gm82_gml_eval_stmt(&rt, inst, "a[0] = 10;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "a[1] = 20;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "a[3] = 40;"));
    expect_near(eval_num(&rt, inst, "a[0]"), 10.0, "a[0] read");
    expect_near(eval_num(&rt, inst, "a[1]"), 20.0, "a[1] read");
    expect_near(eval_num(&rt, inst, "a[2]"), 0.0, "a[2] default 0");
    expect_near(eval_num(&rt, inst, "a[3]"), 40.0, "a[3] read");
    expect_near(eval_num(&rt, inst, "array_length_1d(a)"), 4.0, "length stays at least 4");

    printf("--- test_array_create_and_index done ---\n");
}

void test_array_auto_create_on_write(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "scores[2] = 99;"));
    expect_near(eval_num(&rt, inst, "scores[2]"), 99.0, "auto-create scores[2]");
    expect_near(eval_num(&rt, inst, "scores[0]"), 0.0, "auto-create scores[0] default");
    expect_true(eval_num(&rt, inst, "array_length_1d(scores)") >= 3.0, "length grows to cover index 2");

    printf("--- test_array_auto_create_on_write done ---\n");
}

void test_array_compound_assign(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "v[0] = 10;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "v[0] += 5;"));
    expect_near(eval_num(&rt, inst, "v[0]"), 15.0, "v[0] +=");
    assert(gm82_gml_eval_stmt(&rt, inst, "v[0] *= 2;"));
    expect_near(eval_num(&rt, inst, "v[0]"), 30.0, "v[0] *=");
    assert(gm82_gml_eval_stmt(&rt, inst, "v[0] -= 10;"));
    expect_near(eval_num(&rt, inst, "v[0]"), 20.0, "v[0] -=");
    assert(gm82_gml_eval_stmt(&rt, inst, "v[0] /= 4;"));
    expect_near(eval_num(&rt, inst, "v[0]"), 5.0, "v[0] /=");

    printf("--- test_array_compound_assign done ---\n");
}

void test_alarm_array_still_works(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "alarm[0] = 30;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "alarm[3] = 7;"));
    expect_near(eval_num(&rt, inst, "alarm[0]"), 30.0, "alarm[0] set/get");
    expect_near(eval_num(&rt, inst, "alarm[3]"), 7.0, "alarm[3] set/get");
    assert(gm82_gml_eval_stmt(&rt, inst, "alarm[0] += 5;"));
    expect_near(eval_num(&rt, inst, "alarm[0]"), 35.0, "alarm[0] +=");

    printf("--- test_alarm_array_still_works done ---\n");
}

void test_scalar_compound_still_works(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 1, 0, 0);
    assert(inst);
    gm82_gml_set_self(inst);

    assert(gm82_gml_eval_stmt(&rt, inst, "x = 100;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "x += 20;"));
    expect_near(eval_num(&rt, inst, "x"), 120.0, "scalar x +=");
    assert(gm82_gml_eval_stmt(&rt, inst, "hp = 50;"));
    assert(gm82_gml_eval_stmt(&rt, inst, "hp *= 2;"));
    expect_near(eval_num(&rt, inst, "hp"), 100.0, "scalar hp *=");

    printf("--- test_scalar_compound_still_works done ---\n");
}

int main(void) {
    printf("=== test_array_semantics (Phase 3B) ===\n");
    test_array_create_and_index();
    test_array_auto_create_on_write();
    test_array_compound_assign();
    test_alarm_array_still_works();
    test_scalar_compound_still_works();

    if (g_failures) {
        fprintf(stderr, "\n%d failure(s)\n", g_failures);
        return 1;
    }
    printf("\nAll array behavioral checks passed.\n");
    return 0;
}
