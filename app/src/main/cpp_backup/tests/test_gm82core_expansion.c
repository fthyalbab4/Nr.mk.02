#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "gm82_gml_builtins.h"
#include "gm82_path.h"
#include "gm82_gml_eval.h"

int main(void) {
    printf("=== Running GM82 Core Expansion Test Suite ===\n");

    /* 1. Test Perlin Noise */
    double n1 = gml_perlin_noise(0.5, 0.5, 0.5);
    double n2 = gml_perlin_noise(10.2, 5.7, 3.1);
    printf("perlin_noise(0.5, 0.5, 0.5) = %f\n", n1);
    printf("perlin_noise(10.2, 5.7, 3.1) = %f\n", n2);
    assert(n1 >= 0.0 && n1 <= 1.0);
    assert(n2 >= 0.0 && n2 <= 1.0);

    /* 2. Test Hex operations */
    assert(gml_real_hex("0xFF") == 255.0);
    assert(gml_real_hex("$10") == 16.0);
    assert(gml_real_hex("ABCD") == 43981.0);

    gml_string_hex(255.0);
    assert(strcmp(gm82_gml_last_string(), "FF") == 0);
    gml_string_hex(4096.0);
    assert(strcmp(gm82_gml_last_string(), "1000") == 0);

    /* 3. Test Paths */
    gm82_path_list paths;
    gm82_path_list_init(&paths);
    int pidx = gm82_path_add(&paths, "test_path", 0);
    assert(pidx == 0);
    gm82_path_add_point(&paths, pidx, 10.0, 20.0, 100.0);
    gm82_path_add_point(&paths, pidx, 50.0, 80.0, 100.0);
    gm82_path_add_point(&paths, pidx, 30.0, 10.0, 100.0);

    gm82_path_bind(&paths);

    assert(gml_path_get_number(0.0) == 3.0);
    assert(gml_path_get_point_x(0.0, 1.0) == 50.0);
    assert(gml_path_get_point_y(0.0, 1.0) == 80.0);
    assert(gml_path_get_point_speed(0.0, 1.0) == 100.0);
    assert(gml_path_get_width(0.0) == 40.0); /* max 50 - min 10 */
    assert(gml_path_get_height(0.0) == 70.0); /* max 80 - min 10 */

    /* 4. Test Delta */
    double d1 = gml_get_delta();
    assert(d1 >= 0.0);

    printf("ALL GM82 CORE EXPANSION TESTS PASSED SUCCESSFULLY!\n");
    return 0;
}
