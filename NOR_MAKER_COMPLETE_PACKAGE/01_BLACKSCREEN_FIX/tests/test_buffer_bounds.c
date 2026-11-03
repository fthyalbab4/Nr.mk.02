#include "gm82_gml_builtins.h"
#include <assert.h>
#include <math.h>
#include <stdio.h>

int main(void) {
    double id = gml_buffer_create(32, 0, 1);
    assert(id >= 0.0);
    assert(gml_buffer_poke(id, 0, 1, 42.0) == 1.0);
    assert(gml_buffer_peek(id, 0, 1) == 42.0);
    assert(gml_buffer_poke(id, -1.0, 1, 7.0) == 0.0);
    assert(gml_buffer_peek(id, NAN, 1) == 0.0);

    assert(gml_buffer_seek(id, 0, 12.0) == 1.0);
    assert(gml_buffer_tell(id) == 12.0);
    assert(gml_buffer_seek(id, 1, -4.0) == 1.0);
    assert(gml_buffer_tell(id) == 8.0);
    assert(gml_buffer_write(id, 1, 99.0) == 1.0);
    assert(gml_buffer_get_size(id) == 9.0);
    assert(gml_buffer_seek(id, 2, -1.0) == 1.0);
    assert(gml_buffer_tell(id) == 8.0);
    assert(gml_buffer_read(id, 1) == 99.0);

    assert(gml_buffer_seek(id, 0, INFINITY) == 0.0);
    assert(gml_buffer_tell(id) == 9.0);
    assert(gml_buffer_delete(id) == 1.0);
    puts("BUFFER_BOUNDS_OK");
    return 0;
}
