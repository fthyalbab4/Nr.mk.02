#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_script.h"
#include <assert.h>
#include <stdio.h>

int main(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    gm82_instance *self = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(self != NULL);

    gm82_script_list scripts;
    gm82_script_list_init(&scripts);
    assert(gm82_script_add(&scripts, "is_large", "return argument0 > 2;") == 0);
    assert(gm82_script_add(&scripts, "map_value", "return argument0 * 10 + argument1;") == 1);
    assert(gm82_script_add(&scripts, "accumulate", "global.callback_sum += argument0;") == 2);
    gm82_runtime_bind_scripts(&rt, &scripts);
    gm82_gml_set_runtime(&rt);
    gm82_gml_set_self(self);

    double source = gml_ds_list_create();
    assert(source >= 0);
    assert(gml_ds_list_add(source, 1) == 1);
    assert(gml_ds_list_add(source, 3) == 1);
    assert(gml_ds_list_add(source, 5) == 1);

    double filtered = gml_ds_list_filter(source, 0);
    assert(filtered >= 0);
    assert(gml_ds_list_size(filtered) == 2);
    assert(gml_ds_list_find_value(filtered, 0) == 3);
    assert(gml_ds_list_find_value(filtered, 1) == 5);

    double mapped = gml_ds_list_map(source, 1);
    assert(mapped >= 0);
    assert(gml_ds_list_size(mapped) == 3);
    assert(gml_ds_list_find_value(mapped, 0) == 10);
    assert(gml_ds_list_find_value(mapped, 1) == 31);
    assert(gml_ds_list_find_value(mapped, 2) == 52);

    double dispatch_result = 0;
    assert(gm82_gml_eval_expr(&rt, self, "ds_list_filter(0, 0)", &dispatch_result));
    assert(dispatch_result >= 0);
    assert(gml_ds_list_size(dispatch_result) == 2);
    gml_ds_list_destroy(dispatch_result);

    assert(gm82_gml_eval_stmt(&rt, self, "global.callback_sum = 0;") == true);
    assert(gml_ds_list_foreach(source, 2) == 3);
    double sum = 0;
    assert(gm82_gml_eval_expr(&rt, self, "global.callback_sum", &sum));
    assert(sum == 9);

    assert(gml_ds_list_filter(source, 999) == -1);
    assert(gml_ds_list_size(source) == 3);
    gml_ds_list_destroy(filtered);
    gml_ds_list_destroy(mapped);
    gml_ds_list_destroy(source);
    gm82_runtime_cleanup(&rt);
    puts("DS_LIST_CALLBACKS_TEST_PASS");
    return 0;
}
