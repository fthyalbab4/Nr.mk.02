#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include "gm82_path.h"
#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"

int main(void) {
    printf("=== Testing Path Functions & Instance List Querying ===\n");

    /* 1. Test Path Functions */
    gm82_path_list path_list;
    gm82_path_list_init(&path_list);
    int p_idx = gm82_path_add(&path_list, "path_patrol", 1);
    assert(p_idx == 0);
    assert(gm82_path_add_point(&path_list, p_idx, 10.0, 20.0, 100.0) == 1);
    assert(gm82_path_add_point(&path_list, p_idx, 50.0, 20.0, 100.0) == 1);
    assert(gm82_path_add_point(&path_list, p_idx, 50.0, 80.0, 100.0) == 1);
    assert(gm82_path_add_point(&path_list, p_idx, 10.0, 80.0, 100.0) == 1);

    gm82_path_bind(&path_list);

    assert((int)gml_path_get_number(0) == 4);
    assert(fabs(gml_path_get_point_x(0, 0) - 10.0) < 1e-6);
    assert(fabs(gml_path_get_point_y(0, 0) - 20.0) < 1e-6);
    assert(fabs(gml_path_get_point_x(0, 1) - 50.0) < 1e-6);
    assert(fabs(gml_path_get_point_y(0, 1) - 20.0) < 1e-6);
    assert(fabs(gml_path_get_width(0) - 40.0) < 1e-6);
    assert(fabs(gml_path_get_height(0) - 60.0) < 1e-6);
    assert(gml_path_get_closed(0) == 1.0);
    /* Perimeter of 40 x 60 rectangle = 40 + 60 + 40 + 60 = 200 */
    assert(fabs(gml_path_get_length(0) - 200.0) < 1e-6);

    printf("  [PASS] Path inspection and geometry functions OK\n");

    /* 2. Test Instance List Collision Retrieval */
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.room_width = 640;
    rt.room_height = 480;
    gm82_gml_set_runtime(&rt);

    gm82_instance *inst_caller = gm82_runtime_instance_create(&rt, 0, 100, 100);
    assert(inst_caller != NULL);
    gm82_gml_set_self(inst_caller);

    /* Create target instances of object 1 */
    gm82_instance *t1 = gm82_runtime_instance_create(&rt, 1, 105, 105);
    gm82_instance *t2 = gm82_runtime_instance_create(&rt, 1, 110, 110);
    /* Create non-overlapping instance */
    gm82_instance *t3 = gm82_runtime_instance_create(&rt, 1, 300, 300);
    assert(t1 && t2 && t3);

    double place_list = gml_instance_place_list(100, 100, 1);
    assert(place_list >= 0);
    double sz = gml_ds_list_size(place_list);
    assert((int)sz >= 2);
    gml_ds_list_destroy(place_list);

    double pos_list = gml_instance_position_list(105, 105, 1);
    assert(pos_list >= 0);
    double pos_sz = gml_ds_list_size(pos_list);
    assert((int)pos_sz >= 1);
    gml_ds_list_destroy(pos_list);

    printf("  [PASS] instance_place_list and instance_position_list OK\n");

    printf("ALL PATH AND INSTANCE LIST TESTS PASSED!\n");
    return 0;
}
