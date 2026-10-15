#include "gml_frontend.h"
#include "gml_vm.h"
#include "gm82_gml_builtins.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <math.h>

extern int gm82_native_call(void *userdata, const char *name, const gml_value *args, size_t count, gml_value *out);

void test_trig_and_math(void) {
    gml_value args[4];
    gml_value out;

    // dsin(90) == 1.0
    args[0] = gml_value_real(90.0);
    assert(gm82_native_call(NULL, "dsin", args, 1, &out) == 1);
    assert(out.kind == GML_V_REAL && fabs(out.real - 1.0) < 1e-5);

    // dcos(0) == 1.0
    args[0] = gml_value_real(0.0);
    assert(gm82_native_call(NULL, "dcos", args, 1, &out) == 1);
    assert(out.kind == GML_V_REAL && fabs(out.real - 1.0) < 1e-5);

    // deg_to_rad(180) == M_PI
    args[0] = gml_value_real(180.0);
    assert(gm82_native_call(NULL, "deg_to_rad", args, 1, &out) == 1);
    assert(out.kind == GML_V_REAL && fabs(out.real - M_PI) < 1e-5);

    // color_inverse(0x00FF00) == 0xFF00FF
    args[0] = gml_value_real(0x00FF00);
    assert(gm82_native_call(NULL, "color_inverse", args, 1, &out) == 1);
    assert(out.kind == GML_V_REAL && (uint32_t)out.real == 0xFF00FF);

    printf("test_trig_and_math PASS\n");
}

void test_string_helpers(void) {
    gml_value args[4];
    gml_value out;

    // string_upper("gm82") == "GM82"
    args[0] = gml_value_string("gm82");
    assert(gm82_native_call(NULL, "string_upper", args, 1, &out) == 1);
    assert(out.kind == GML_V_STRING && strcmp(out.string, "GM82") == 0);
    gml_value_free(&args[0]);
    gml_value_free(&out);

    // string_lower("NORMAKER") == "normaker"
    args[0] = gml_value_string("NORMAKER");
    assert(gm82_native_call(NULL, "string_lower", args, 1, &out) == 1);
    assert(out.kind == GML_V_STRING && strcmp(out.string, "normaker") == 0);
    gml_value_free(&args[0]);
    gml_value_free(&out);

    // string_replace_all("banana", "a", "o") == "bonono"
    args[0] = gml_value_string("banana");
    args[1] = gml_value_string("a");
    args[2] = gml_value_string("o");
    assert(gm82_native_call(NULL, "string_replace_all", args, 3, &out) == 1);
    assert(out.kind == GML_V_STRING && strcmp(out.string, "bonono") == 0);
    gml_value_free(&args[0]);
    gml_value_free(&args[1]);
    gml_value_free(&args[2]);
    gml_value_free(&out);

    printf("test_string_helpers PASS\n");
}

void test_file_and_instances(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_set_runtime(&rt);

    gml_value args[4];
    gml_value out;

    // instance_create(10, 20, 0)
    args[0] = gml_value_real(10.0);
    args[1] = gml_value_real(20.0);
    args[2] = gml_value_real(0.0);
    assert(gm82_native_call(NULL, "instance_create", args, 3, &out) == 1);
    double inst_id = out.real;
    assert(inst_id >= 100000.0);

    // instance_exists(0) == 1.0
    args[0] = gml_value_real(0.0);
    assert(gm82_native_call(NULL, "instance_exists", args, 1, &out) == 1);
    assert(out.real == 1.0);

    printf("test_file_and_instances PASS\n");
}

int main(void) {
    printf("=== Testing Expanded GM82 Core Built-ins ===\n");
    test_trig_and_math();
    test_string_helpers();
    test_file_and_instances();
    printf("GM82_CORE_EXPANDED_TEST_PASS\n");
    return 0;
}
