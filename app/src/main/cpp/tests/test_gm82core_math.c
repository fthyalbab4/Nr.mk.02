#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

int main(void) {
    puts("=== Testing GM82 Core Math Built-ins ===");
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(inst != NULL);
    gm82_gml_set_self(inst);

    /* Test unlerp & unclerp */
    assert(fabs(gml_unlerp(10.0, 20.0, 15.0) - 0.5) < 1e-6);
    assert(fabs(gml_unlerp(10.0, 20.0, 25.0) - 1.5) < 1e-6);
    assert(fabs(gml_unclerp(10.0, 20.0, 25.0) - 1.0) < 1e-6);
    assert(fabs(gml_unclerp(10.0, 20.0, 5.0) - 0.0) < 1e-6);

    /* Test roundto, floorto, ceilto */
    assert(fabs(gml_roundto(16.0, 10.0) - 20.0) < 1e-6);
    assert(fabs(gml_roundto(14.0, 10.0) - 10.0) < 1e-6);
    assert(fabs(gml_floorto(19.0, 10.0) - 10.0) < 1e-6);
    assert(fabs(gml_ceilto(11.0, 10.0) - 20.0) < 1e-6);
    assert(fabs(gml_roundto_unbiased(15.0, 10.0) - 20.0) < 1e-6);

    /* Test pack_bools & unpack_bool */
    double packed = gml_pack_bools(1, 0, 1, 0, 0, 1, 0, 1);
    /* 128 + 32 + 4 + 1 = 165 */
    assert(fabs(packed - 165.0) < 1e-6);
    assert(gml_unpack_bool(packed, 0) == 1.0);
    assert(gml_unpack_bool(packed, 1) == 0.0);
    assert(gml_unpack_bool(packed, 2) == 1.0);
    assert(gml_unpack_bool(packed, 7) == 1.0);

    /* Test via GML Eval */
    double out = 0.0;
    assert(gm82_gml_eval_expr(&rt, inst, "unlerp(0, 100, 50)", &out) == 1);
    assert(fabs(out - 0.5) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, inst, "roundto(27, 5)", &out) == 1);
    assert(fabs(out - 25.0) < 1e-6);

    assert(gm82_gml_eval_expr(&rt, inst, "unpack_bool(165, 0)", &out) == 1);
    assert(out == 1.0);

    puts("GM82CORE_MATH_TESTS_PASS");
    gm82_runtime_cleanup(&rt);
    return 0;
}
