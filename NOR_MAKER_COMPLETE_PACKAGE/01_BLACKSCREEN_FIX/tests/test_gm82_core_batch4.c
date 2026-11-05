#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gml_frontend.h"
#include "gml_vm.h"

int main(void) {
    printf("=== Testing GM82 Core Batch 4 & DSS/Bag/Choose Parity ===\n");

    // 1. Test ds_bag via direct functions
    double bag = gml_ds_bag_create();
    assert(bag >= 0);
    assert(gml_ds_bag_empty(bag) == 1.0);
    assert(gml_ds_bag_size(bag) == 0.0);

    gml_ds_bag_add(bag, 42.0);
    gml_ds_bag_add(bag, 99.0);
    assert(gml_ds_bag_size(bag) == 2.0);
    assert(gml_ds_bag_empty(bag) == 0.0);

    double rem = gml_ds_bag_remove(bag, 42.0);
    assert(rem == 1.0);
    assert(gml_ds_bag_size(bag) == 1.0);

    gml_ds_bag_clear(bag);
    assert(gml_ds_bag_size(bag) == 0.0);
    gml_ds_bag_destroy(bag);

    // 2. Test bigchoose and choose_weighted
    gml_bigchoose_clear();
    gml_bigchoose(10.0);
    gml_bigchoose(20.0);
    double picked = gml_bigchoose_get();
    assert(picked == 10.0 || picked == 20.0);

    double cw = gml_choose_weighted(100.0, 1.0, 200.0, 0.0);
    assert(cw == 100.0);

    // 3. Test GML Eval dispatch
    gm82_runtime rt;
    memset(&rt, 0, sizeof(rt));
    gm82_runtime_init(&rt);

    double out_val = 0;
    assert(gm82_gml_eval_expr(&rt, NULL, "choose_weighted(55, 10, 66, 0)", &out_val));
    assert(out_val == 55.0);

    assert(gm82_gml_eval_expr(&rt, NULL, "ds_bag_create()", &out_val));
    double bag2 = out_val;
    assert(bag2 >= 0);
    assert(gm82_gml_eval_expr(&rt, NULL, "ds_bag_size(0)", &out_val));
    assert(out_val == 0.0);

    // 4. Test GML VM dispatch
    gml_ast *ast = NULL;
    char err[160] = {0};
    int ok = gml_parse_program("var c; c = choose_weighted(77, 10, 88, 0); return c;", &ast, err, sizeof(err));
    assert(ok && ast != NULL);

    gml_vm vm;
    gml_vm_init(&vm);
    ok = gml_vm_execute(&vm, ast);
    assert(ok);
    assert(vm.returned == 1);
    assert(vm.return_value.kind == GML_V_REAL);
    assert(vm.return_value.real == 77.0);

    gml_ast_free(ast);

    printf("GM82_CORE_BATCH4_PARITY_TEST_PASS\n");
    return 0;
}
