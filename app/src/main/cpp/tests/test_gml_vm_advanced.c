#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "gml_vm.h"
#include "gm82_gml_builtins.h"

static void test_color_functions(void) {
    double col = gml_make_color_rgb(100, 150, 200);
    assert(gml_color_get_red(col) == 100);
    assert(gml_color_get_green(col) == 150);
    assert(gml_color_get_blue(col) == 200);
    printf("test_color_functions PASS\n");
}

static void test_string_format(void) {
    char out[128];
    gml_string_format(12.3456, 5, 2, out, sizeof(out));
    assert(strstr(out, "12.35") != NULL);
    printf("test_string_format PASS\n");
}

static void test_file_find_stubs(void) {
    const char *f = gml_file_find_first("*.md", 0);
    assert(f != NULL && strlen(f) > 0);
    assert(strstr(f, ".md") != NULL);
    gml_file_find_close();
    printf("test_file_find PASS\n");
}

static void test_batch3_gm82core(void) {
    double res = 0.0;
    // Test date_get_moon_phase
    assert(gml_date_get_moon_phase(0, 0) >= 0.0 && gml_date_get_moon_phase(0, 0) <= 1.0);

    // Test datetime_current_filename
    gml_datetime_current_filename();
    const char *fn = gm82_gml_last_string();
    assert(fn != NULL && strlen(fn) > 10);

    // Test draw_setb
    res = gml_draw_setb(16777215, 0.5);
    assert(res == 0.0);

    // Test date_is_easter
    res = gml_date_is_easter(0, 0);
    assert(res == 0.0 || res == 1.0);

    printf("test_batch3_gm82core PASS\n");
}

int main(void) {
    printf("=== Testing Advanced GML VM Built-ins ===\n");
    test_color_functions();
    test_string_format();
    test_file_find_stubs();
    test_batch3_gm82core();
    printf("GML_VM_ADVANCED_TEST_PASS\n");
    return 0;
}
