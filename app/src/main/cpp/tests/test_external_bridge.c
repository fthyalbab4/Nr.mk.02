#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "gm82_external.h"

/* Host-only probe of the isolated PR#378 extract. Does not load games. */
int main(void) {
    double id = gml_external_define("nonexistent_lib_xyz.so", "no_such_fn", 0, 0, 2);
    assert(id >= 0.0);
    double z = gml_external_call(id, 1, 2, 3, 4, 5, 6, 7, 8);
    assert(z == 0.0); /* null func_ptr */
    assert(gml_external_free("nonexistent_lib_xyz.so") == 1.0);
    assert(gml_external_free("nonexistent_lib_xyz.so") == 1.0);
    assert(gml_external_call(-1, 0, 0, 0, 0, 0, 0, 0, 0) == 0.0);
    assert(gml_external_define(NULL, "", 0, 0, 0) == -1.0);
    puts("external bridge OK");
    return 0;
}
