#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include "gm82_actions.h"
#include "gm82_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

int main(void) {
    puts("=== PHASE 5: GML EVALUATOR & BUILTINS TEST ===");
    fflush(stdout);

    gm82_runtime rt;
    gm82_runtime_init(&rt);

    gm82_instance inst;
    memset(&inst, 0, sizeof(inst));
    inst.x = 100.0;
    inst.y = 50.0;
    inst.alive = 1;

    gm82_gml_set_runtime(&rt);
    gm82_gml_set_self(&inst);

    /* 1. Expression evaluation */
    double val = 0.0;
    bool ok = gm82_gml_eval_expr(&rt, &inst, "10 + 20 * 2", &val);
    assert(ok && val == 50.0);

    ok = gm82_gml_eval_expr(&rt, &inst, "x + 25", &val);
    assert(ok && val == 125.0);

    /* 2. Builtin math & distance functions */
    double d3d = gml_point_distance_3d(0, 0, 0, 3, 4, 0);
    assert(fabs(d3d - 5.0) < 0.0001);

    double app = gml_approach(0, 10, 3);
    assert(app == 3.0);

    /* 3. Statement execution */
    ok = gm82_gml_eval_stmt(&rt, &inst, "hspeed = 4.0");
    assert(ok && inst.hspeed == 4.0);

    ok = gm82_gml_eval_stmt(&rt, &inst, "vspeed = -8.0");
    assert(ok && inst.vspeed == -8.0);

    /* 4. Block execution */
    int count = gm82_gml_eval_block(&rt, &inst, "x = x + 10;\n y = y + 20; // comment\n hspeed = 2.5;");
    assert(count >= 2);
    assert(inst.x == 110.0);
    assert(inst.y == 70.0);
    assert(inst.hspeed == 2.5);

    /* 5. Alarm builtin checks */
    inst.alarms[0] = 5;
    gml_alarm_set(0, 10);
    assert(inst.alarms[0] == 10);

    puts("GML_EVAL_BUILTINS_PASS_HOST");
    return 0;
}
