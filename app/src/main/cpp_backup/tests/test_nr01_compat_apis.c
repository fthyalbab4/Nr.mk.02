#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_native_bridge.h"
#include "gml_frontend.h"
#include "gml_vm.h"
#include <assert.h>
#include <float.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static double run_ast(const char *code) {
    gml_ast *ast = NULL;
    char err[160] = {0};
    assert(gml_parse_program(code, &ast, err, sizeof(err)));
    assert(ast != NULL);
    gml_vm vm;
    gml_vm_init(&vm);
    gml_vm_set_native_call(&vm, gm82_native_call, NULL);
    int ok = gml_vm_execute(&vm, ast);
    if (!ok) fprintf(stderr, "AST execution failed: %s\n", vm.error);
    assert(ok && vm.returned && vm.return_value.kind == GML_V_REAL);
    double value = vm.return_value.real;
    gml_value_free(&vm.return_value);
    gml_ast_free(ast);
    return value;
}

static int near(double a, double b) { return fabs(a - b) < 1e-9; }

int main(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(inst != NULL);

    assert(near(gml_dot_product_normal(3, 4, 0, 5), 0.8));
    assert(near(gml_dot_product_3d_normal(0, 0, 1, 0, 0, 2), 1.0));
    assert(near(gml_dot_product_normal(DBL_MAX, DBL_MAX, DBL_MAX, DBL_MAX), 1.0));
    assert(gml_dot_product_normal(0, 0, 1, 2) == 0.0);

    struct tm tmv = {0};
    tmv.tm_year = 124;
    tmv.tm_mon = 6;
    tmv.tm_mday = 15;
    tmv.tm_hour = 12;
    time_t base = mktime(&tmv);
    assert(base != (time_t)-1);
    double t0 = (double)base;
    double t1 = t0 + 3600.0;
    assert(gml_date_compare_datetime(t0, t1) == -1.0);
    assert(gml_date_compare_date(t0, t1) == 0.0);
    assert(gml_date_compare_time(t0, t1) == -1.0);
    assert(gml_date_second_span(t1, t0) == 3600.0);
    assert(gml_date_minute_span(t0, t1) == 60.0);
    assert(gml_date_hour_span(t0, t1) == 1.0);
    assert(gml_date_day_span(t0, t0 + 86400.0) == 1.0);
    assert(near(gml_date_month_span(t0, t0 + 86400.0 * 30.4375), 1.0));
    assert(near(gml_date_year_span(t0, t0 + 86400.0 * 365.25), 1.0));

    double value = 0.0;
    assert(gm82_gml_eval_expr(&rt, inst, "dot_product_normal(3,4,0,5)", &value));
    assert(near(value, 0.8));
    assert(gm82_gml_eval_expr(&rt, inst, "date_compare_datetime(10,20)", &value));
    assert(value == -1.0);
    assert(gm82_gml_eval_expr(&rt, inst, "date_second_span(5,65)", &value));
    assert(value == 60.0);

    double src = gml_ds_grid_create(3, 2);
    double dst = gml_ds_grid_create(3, 2);
    assert(src >= 0 && dst >= 0);
    for (int y = 0; y < 2; ++y)
        for (int x = 0; x < 3; ++x)
            assert(gml_ds_grid_set(src, x, y, 1 + x + 3 * y) == 1.0);
    assert(gml_ds_grid_clear(dst, 1.0) == 1.0);
    assert(gml_ds_grid_set_grid_region(dst, src, 0, 0, 1, 1, 1, 0) == 1.0);
    assert(gml_ds_grid_get(dst, 1, 0) == 1.0 && gml_ds_grid_get(dst, 2, 0) == 2.0);
    assert(gml_ds_grid_get(dst, 1, 1) == 4.0 && gml_ds_grid_get(dst, 2, 1) == 5.0);
    assert(gml_ds_grid_add_grid_region(dst, src, 0, 0, 1, 1, 1, 0) == 1.0);
    assert(gml_ds_grid_get(dst, 2, 0) == 4.0);
    assert(gml_ds_grid_multiply_grid_region(dst, src, 0, 0, 1, 1, 1, 0) == 1.0);
    assert(gml_ds_grid_get(dst, 2, 0) == 8.0);
    char transfer_expr[256];
    snprintf(transfer_expr, sizeof(transfer_expr), "ds_grid_set_grid_region(%.0f,%.0f,0,0,0,0,1,0)", dst, src);
    assert(gm82_gml_eval_expr(&rt, inst, transfer_expr, &value) && value == 1.0);
    assert(gml_ds_grid_get(dst, 1, 0) == 1.0);

    assert(gml_ds_grid_set_region(dst, 0, 0, 1, 1, 2.0) == 1.0);
    assert(gml_ds_grid_add_region(dst, 0, 0, 1, 1, 3.0) == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 5.0);
    assert(gml_ds_grid_multiply_region(dst, 0, 0, 1, 1, 2.0) == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 10.0);

    assert(gml_ds_grid_clear(dst, -1.0) == 1.0);
    assert(gml_ds_grid_set_grid_region(dst, src, -1, -1, 1, 1, -2, -2) == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 5.0);
    assert(gml_ds_grid_get(dst, 1, 0) == -1.0 && gml_ds_grid_get(dst, 0, 1) == -1.0);
    assert(gml_ds_grid_set_region(dst, 0, 0, 1, 1, 10.0) == 1.0);

    double overlap = gml_ds_grid_create(4, 1);
    assert(overlap >= 0);
    for (int x = 0; x < 4; ++x) assert(gml_ds_grid_set(overlap, x, 0, x + 1) == 1.0);
    assert(gml_ds_grid_set_grid_region(overlap, overlap, 0, 0, 2, 0, 1, 0) == 1.0);
    assert(gml_ds_grid_get(overlap, 0, 0) == 1.0);
    assert(gml_ds_grid_get(overlap, 1, 0) == 1.0);
    assert(gml_ds_grid_get(overlap, 2, 0) == 2.0);
    assert(gml_ds_grid_get(overlap, 3, 0) == 3.0);
    assert(gml_ds_grid_add_grid_region(overlap, overlap, 0, 0, 2, 0, 1, 0) == 1.0);
    assert(gml_ds_grid_get(overlap, 1, 0) == 2.0);
    assert(gml_ds_grid_get(overlap, 2, 0) == 3.0);
    assert(gml_ds_grid_get(overlap, 3, 0) == 5.0);
    assert(gml_ds_grid_multiply_grid_region(overlap, overlap, 0, 0, 2, 0, 1, 0) == 1.0);
    assert(gml_ds_grid_get(overlap, 1, 0) == 2.0);
    assert(gml_ds_grid_get(overlap, 2, 0) == 6.0);
    assert(gml_ds_grid_get(overlap, 3, 0) == 15.0);

    char expr[256];
    snprintf(expr, sizeof(expr), "ds_grid_add_region(%.0f,0,0,0,0,2)", dst);
    assert(gm82_gml_eval_expr(&rt, inst, expr, &value) && value == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 12.0);
    snprintf(expr, sizeof(expr), "return ds_grid_add_region(%.0f,0,0,0,0,3);", dst);
    assert(run_ast(expr) == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 15.0);
    snprintf(expr, sizeof(expr), "return ds_grid_set_grid_region(%.0f,%.0f,0,0,1,1,0,0);", dst, src);
    assert(run_ast(expr) == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 1.0 && gml_ds_grid_get(dst, 1, 1) == 5.0);
    snprintf(expr, sizeof(expr), "return ds_grid_add_grid_region(%.0f,%.0f,0,0,1,1,0,0);", dst, src);
    assert(run_ast(expr) == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 2.0 && gml_ds_grid_get(dst, 1, 1) == 10.0);
    snprintf(expr, sizeof(expr), "return ds_grid_multiply_grid_region(%.0f,%.0f,0,0,1,1,0,0);", dst, src);
    assert(run_ast(expr) == 1.0);
    assert(gml_ds_grid_get(dst, 0, 0) == 2.0 && gml_ds_grid_get(dst, 1, 1) == 50.0);

    assert(near(run_ast("return dot_product_normal(3,4,0,5);"), 0.8));
    assert(run_ast("return date_compare_datetime(10,20) + date_second_span(0,5);" ) == 4.0);

    gml_ds_grid_destroy(src);
    gml_ds_grid_destroy(dst);
    gml_ds_grid_destroy(overlap);
    puts("Nr.mk.01 compatibility APIs PASS");
    return 0;
}
