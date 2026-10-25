#include "gm82_input.h"

#include <assert.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdio.h>

static void assert_invalid_key(double key) {
    assert(gml_keyboard_check(key) == 0.0);
    assert(gml_keyboard_check_pressed(key) == 0.0);
    assert(gml_keyboard_check_released(key) == 0.0);
}

int main(void) {
    gm82_input_state input;
    gm82_input_init(&input);
    gm82_input_bind_global(&input);

    const double invalid_keys[] = {
        NAN,
        INFINITY,
        -INFINITY,
        DBL_MAX,
        -DBL_MAX,
        (double)INT_MAX * 2.0,
        (double)INT_MIN * 2.0,
        -1.0,
        (double)GM82_KEY_MAX
    };
    for (size_t i = 0; i < sizeof(invalid_keys) / sizeof(invalid_keys[0]); ++i)
        assert_invalid_key(invalid_keys[i]);

    /* Preserve the existing GM82 pseudo-key contract. */
    assert(gml_keyboard_check(0.0) == 1.0);
    assert(gml_keyboard_check(1.0) == 0.0);
    assert(gml_keyboard_check_pressed(0.0) == 0.0);
    assert(gml_keyboard_check_released(0.0) == 0.0);
    assert(gml_keyboard_check_pressed(1.0) == 0.0);
    assert(gml_keyboard_check_released(1.0) == 0.0);

    gm82_input_key_down(&input, 65);
    assert(gml_keyboard_check(0.0) == 0.0);
    assert(gml_keyboard_check(1.0) == 1.0);
    assert(gml_keyboard_check(65.75) == 1.0);
    assert(gml_keyboard_check_pressed(65.75) == 1.0);
    assert(gml_keyboard_check_pressed(1.0) == 1.0);
    assert(gml_keyboard_check_pressed(0.0) == 0.0);

    gm82_input_begin_frame(&input);
    assert(gml_keyboard_check_pressed(65.0) == 0.0);
    assert(gml_keyboard_check_pressed(1.0) == 0.0);

    gm82_input_key_up(&input, 65);
    assert(gml_keyboard_check_released(65.75) == 1.0);
    assert(gml_keyboard_check_released(1.0) == 1.0);
    assert(gml_keyboard_check_released(0.0) == 0.0);

    gm82_input_bind_global(NULL);
    assert(gml_keyboard_check(65.0) == 0.0);
    puts("INPUT_KEY_BOUNDS_OK");
    return 0;
}
