#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include "gm82_gml_builtins.h"

#define EPS 1e-4

static void test_gm82_math(void) {
    printf("Testing in_range...\n");
    assert(gml_in_range(5.0, 1.0, 10.0) == 1.0);
    assert(gml_in_range(1.0, 1.0, 10.0) == 1.0);
    assert(gml_in_range(10.0, 1.0, 10.0) == 1.0);
    assert(gml_in_range(0.0, 1.0, 10.0) == 0.0);
    assert(gml_in_range(11.0, 1.0, 10.0) == 0.0);

    printf("Testing saturate...\n");
    assert(fabs(gml_saturate(-0.5) - 0.0) < EPS);
    assert(fabs(gml_saturate(0.5) - 0.5) < EPS);
    assert(fabs(gml_saturate(1.5) - 1.0) < EPS);

    printf("Testing unlerp & unclerp...\n");
    assert(fabs(gml_unlerp(10.0, 20.0, 15.0) - 0.5) < EPS);
    assert(fabs(gml_unlerp(10.0, 20.0, 25.0) - 1.5) < EPS);
    assert(fabs(gml_unclerp(10.0, 20.0, 25.0) - 1.0) < EPS);
    assert(fabs(gml_unclerp(10.0, 20.0, 5.0) - 0.0) < EPS);

    printf("Testing floorto, ceilto, roundto...\n");
    assert(fabs(gml_floorto(17.0, 8.0) - 16.0) < EPS);
    assert(fabs(gml_ceilto(17.0, 8.0) - 24.0) < EPS);
    assert(fabs(gml_roundto(17.0, 8.0) - 16.0) < EPS);
    assert(fabs(gml_roundto(21.0, 8.0) - 24.0) < EPS);

    printf("Testing secant...\n");
    assert(fabs(gml_secant(0.0) - 1.0) < EPS);
    assert(fabs(gml_secant(M_PI / 3.0) - 2.0) < EPS);

    printf("Testing lengthdir 3D (zx, zy, zz)...\n");
    assert(fabs(gml_lengthdir_zx(100.0, 0.0, 0.0) - 100.0) < EPS);
    assert(fabs(gml_lengthdir_zy(100.0, 0.0, 0.0) - 0.0) < EPS);
    assert(fabs(gml_lengthdir_zz(100.0, 0.0, 0.0) - 0.0) < EPS);
    assert(fabs(gml_lengthdir_zx(100.0, 0.0, 90.0) - 0.0) < EPS);
    assert(fabs(gml_lengthdir_zz(100.0, 0.0, 90.0) - (-100.0)) < EPS);

    printf("Testing lines_intersect...\n");
    double ua = gml_lines_intersect(0.0, 0.0, 10.0, 10.0, 0.0, 10.0, 10.0, 0.0, 1.0);
    assert(fabs(ua - 0.5) < EPS);

    printf("Testing point_line_lerp...\n");
    double t = gml_point_line_lerp(5.0, 5.0, 0.0, 0.0, 10.0, 0.0, 1.0);
    assert(fabs(t - 0.5) < EPS);

    printf("Testing angle_difference_3d...\n");
    double diff3d = gml_angle_difference_3d(1.0, 0.0, 0.0, 1.0, 0.0, 0.0);
    assert(fabs(diff3d - 0.0) < EPS);
    diff3d = gml_angle_difference_3d(1.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    assert(fabs(diff3d - 90.0) < EPS);

    printf("ALL GM82 CORE MATH EXPANSION TESTS PASSED!\n");
}

int main(void) {
    test_gm82_math();
    return 0;
}
