#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>
#include "gm82_gml_builtins.h"
#include "gm82_native_bridge.h"

static void test_gm82core_math(void) {
    printf("Testing GM82Core math functions...\n");
    assert(fabs(gml_angle_difference(10.0, 350.0) - 20.0) < 0.001);
    assert(fabs(gml_approach(0.0, 10.0, 3.0) - 3.0) < 0.001);
    assert(fabs(gml_approach(10.0, 0.0, 4.0) - 6.0) < 0.001);

    /* GM82 Color Inverse & Reverse */
    double col = 0x0000FF; /* Red in GM BGR = 0x0000FF */
    double rev = gml_color_reverse(col);
    assert((uint32_t)rev == 0xFF0000);
    double inv = gml_color_inverse(0x0000FF);
    assert((uint32_t)inv == 0xFFFF00);

    /* Degree Trig */
    assert(fabs(gml_dsin(90.0) - 1.0) < 0.001);
    assert(fabs(gml_dcos(0.0) - 1.0) < 0.001);
    assert(fabs(gml_dtan(45.0) - 1.0) < 0.001);
    assert(fabs(gml_darcsin(1.0) - 90.0) < 0.001);
    assert(fabs(gml_darccos(1.0) - 0.0) < 0.001);
    assert(fabs(gml_darctan(1.0) - 45.0) < 0.001);
    assert(fabs(gml_darctan2(1.0, 1.0) - 45.0) < 0.001);
    printf("  GM82Core math PASS\n");
}

static void test_gm82_geometry_3d(void) {
    printf("Testing GM82 3D and Geometry functions...\n");
    assert(fabs(gml_point_distance_3d(0,0,0, 3,4,12) - 13.0) < 0.001);
    assert(fabs(gml_point_direction_3d(0,0,0, 10,0,-10) - 45.0) < 0.001);

    /* rectangle_in_rectangle: checks if rect 1 is inside/overlaps rect 2 */
    assert(gml_rectangle_in_rectangle(2,2, 8,8, 0,0, 10,10) == 1.0); /* inside */
    assert(gml_rectangle_in_rectangle(0,0, 10,10, 5,5, 15,15) == 2.0); /* overlaps */
    assert(gml_rectangle_in_rectangle(0,0, 10,10, 20,20, 30,30) == 0.0); /* outside */

    /* rectangle_in_circle */
    assert(gml_rectangle_in_circle(2,2, 8,8, 5,5, 20) == 1.0); /* inside */

    /* triangle clockwise */
    assert(gml_triangle_is_clockwise(0,0, 10,0, 0,10) == 1.0);
    printf("  GM82 3D & Geometry PASS\n");
}

static void test_gm82_ds_grid(void) {
    printf("Testing GM82 DS Grid set disk and region...\n");
    double gid = gml_ds_grid_create(10, 10);
    assert(gid >= 0);
    gml_ds_grid_clear(gid, 0.0);
    gml_ds_grid_set_disk(gid, 5, 5, 2, 5.0);
    double sum = gml_ds_grid_get_sum(gid, 0, 0, 9, 9);
    assert(sum > 0.0);
    gml_ds_grid_destroy(gid);
    printf("  GM82 DS Grid PASS\n");
}

static void test_gm82_native_dispatcher(void) {
    printf("Testing GM82 Native Bridge Call Dispatcher...\n");
    gml_value args[5];
    gml_value out;
    args[0] = gml_value_real(10.0);
    args[1] = gml_value_real(350.0);
    int res = gm82_native_call(NULL, "angle_difference", args, 2, &out);
    assert(res == 1);
    assert(out.kind == GML_V_REAL);
    assert(fabs(out.real - 20.0) < 0.001);

    args[0] = gml_value_real(0x0000FF);
    res = gm82_native_call(NULL, "color_reverse", args, 1, &out);
    assert(res == 1);
    assert(out.kind == GML_V_REAL);
    assert((uint32_t)out.real == 0xFF0000);
    printf("  GM82 Native Call Dispatcher PASS\n");
}

int main(void) {
    printf("=== RUNNING GM82 EXTENSIONS TEST SUITE ===\n");
    test_gm82core_math();
    test_gm82_geometry_3d();
    test_gm82_ds_grid();
    test_gm82_native_dispatcher();
    printf("ALL_GM82_EXTENSIONS_TESTS_PASS\n");
    return 0;
}
