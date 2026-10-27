#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_runtime.h"
#include "gml_frontend.h"
#include "gml_vm.h"

#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char out[32];
    assert(gml_string_repeat("ab", 2.9, out, sizeof(out)) == 4.0);
    assert(strcmp(out, "abab") == 0);
    assert(gml_string_repeat("abc", 2.0, out, 7) == 6.0);
    assert(strcmp(out, "abcabc") == 0);
    assert(gml_string_repeat("abc", 2.0, out, 5) == 3.0);
    assert(strcmp(out, "abc") == 0);
    assert(gml_string_repeat("abc", 1.0, out, 3) == 0.0 && out[0] == '\0');
    assert(gml_string_repeat("x", -2.0, out, sizeof(out)) == 0.0 && out[0] == '\0');
    assert(gml_string_repeat("x", NAN, out, sizeof(out)) == 0.0 && out[0] == '\0');
    assert(gml_string_repeat("x", INFINITY, out, sizeof(out)) == 0.0 && out[0] == '\0');

    char tiny[8];
    assert(gml_string_repeat("xy", 1.0e300, tiny, sizeof(tiny)) == 6.0);
    assert(strcmp(tiny, "xyxyxy") == 0);
    char exact_alias[16] = "ab";
    assert(gml_string_repeat(exact_alias, 2.0, exact_alias, sizeof(exact_alias)) == 4.0);
    assert(strcmp(exact_alias, "abab") == 0);
    char partial_alias[32] = "xxabyy";
    assert(gml_string_repeat(partial_alias + 2, 3.0, partial_alias, sizeof(partial_alias)) == 12.0);
    assert(strcmp(partial_alias, "abyyabyyabyy") == 0);

    const char utf8[] = "\xC3\xA9";
    char utf8_out[3];
    assert(gml_string_repeat(utf8, 4.0, utf8_out, sizeof(utf8_out)) == 2.0);
    assert(memcmp(utf8_out, utf8, 2) == 0 && utf8_out[2] == '\0');
    assert(gml_string_repeat(NULL, 3.0, out, sizeof(out)) == 0.0 && out[0] == '\0');
    assert(gml_string_repeat("x", 3.0, NULL, sizeof(out)) == 0.0);
    assert(gml_string_repeat("x", 3.0, out, 0) == 0.0);

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *inst = gm82_runtime_instance_create(&rt, 0, 0.0, 0.0);
    assert(inst != NULL);
    double value = -1.0;
    assert(gm82_gml_eval_expr(&rt, inst, "string_repeat(\"xy\", 3)", &value));
    assert(value == 0.0 && strcmp(gm82_gml_last_string(), "xyxyxy") == 0);
    assert(gm82_gml_eval_expr(&rt, inst, "string_repeat(\"z\", 1000)", &value));
    assert(strlen(gm82_gml_last_string()) == 64);
    gml_ast *ast = NULL;
    char error[160] = {0};
    assert(gml_parse_program("return string_repeat(\"ab\", 3);", &ast, error, sizeof(error)));
    gml_vm vm;
    gml_vm_init(&vm);
    assert(gml_vm_execute(&vm, ast));
    assert(vm.returned && vm.return_value.kind == GML_V_STRING);
    assert(strcmp(vm.return_value.string, "ababab") == 0);
    gml_value_free(&vm.return_value);
    gml_ast_free(ast);
    gm82_runtime_cleanup(&rt);
    puts("ALL_STRING_REPEAT_TESTS_PASS");
    return 0;
}
