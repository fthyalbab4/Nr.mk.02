#include "gml_frontend.h"
#include "gml_vm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static int with_probe(void *user, gml_vm *vm, const gml_value *target, const gml_ast *body) {
    (void)vm;
    assert(user != NULL);
    assert(target && target->kind == GML_V_REAL && target->real == 7.0);
    assert(body && body->kind == GML_AST_BLOCK && body->count == 1);
    (*(int *)user)++;
    return 1;
}

void test_ast_parse_and_execute(void) {
    const char *code =
        "a = 10;\n"
        "b = 20;\n"
        "c = a * b + 5;\n"
        "return c;\n";

    gml_ast *ast = NULL;
    char err[160] = {0};
    int ok = gml_parse_program(code, &ast, err, sizeof(err));
    assert(ok);
    assert(ast != NULL);

    gml_vm vm;
    gml_vm_init(&vm);
    ok = gml_vm_execute(&vm, ast);
    assert(ok);
    assert(vm.returned == 1);
    assert(vm.return_value.kind == GML_V_REAL);
    assert(vm.return_value.real == 205.0);

    gml_ast_free(ast);
    printf("  AST Parse & Execute PASS\n");
}

void test_script_invoke_args(void) {
    const char *code =
        "res = arg0 + arg1 * 2;\n"
        "return res;\n";

    gml_ast *ast = NULL;
    char err[160] = {0};
    int ok = gml_parse_program(code, &ast, err, sizeof(err));
    assert(ok);

    gml_vm vm;
    gml_vm_init(&vm);

    gml_value args[2];
    args[0] = gml_value_real(5.0);
    args[1] = gml_value_real(10.0);
    gml_value out;

    ok = gml_vm_invoke(&vm, ast, args, 2, &out);
    assert(ok);
    assert(out.kind == GML_V_REAL);
    assert(out.real == 25.0);

    gml_ast_free(ast);
    gml_value_free(&out);
    printf("  Script Invoke Args PASS\n");
}

static void run_string_case(const char *code, const char *expected) {
    gml_ast *ast = NULL;
    char err[160] = {0};
    assert(gml_parse_program(code, &ast, err, sizeof(err)));
    assert(ast != NULL);

    gml_vm vm;
    gml_vm_init(&vm);
    assert(gml_vm_execute(&vm, ast));
    assert(vm.returned == 1);
    assert(vm.return_value.kind == GML_V_STRING);
    if (strcmp(vm.return_value.string, expected) != 0) {
        fprintf(stderr, "string concat expected '%s', got '%s'\n", expected,
                vm.return_value.string ? vm.return_value.string : "<null>");
    }
    assert(strcmp(vm.return_value.string, expected) == 0);

    gml_value_free(&vm.return_value);
    for (size_t i = 0; i < vm.count; ++i) gml_value_free(&vm.vars[i].value);
    gml_ast_free(ast);
}

static void test_string_concatenation(void) {
    run_string_case("return \"mario \" + 1;", "mario 1");
    run_string_case("label = \"mario \"; label += 1; return label;", "mario 1");
    printf("  String + number concatenation PASS\n");
}

void test_typed_with_and_postfix_syntax(void) {
    gml_ast *ast = NULL;
    char err[160] = {0};
    assert(gml_parse_program("with (7) { value = 1; }", &ast, err, sizeof(err)));
    assert(ast && ast->kind == GML_AST_BLOCK && ast->count == 1);
    assert(ast->items[0]->kind == GML_AST_WITH);
    gml_vm vm;
    gml_vm_init(&vm);
    int calls = 0;
    gml_vm_set_with_callback(&vm, with_probe, &calls);
    assert(gml_vm_execute(&vm, ast));
    assert(calls == 1);
    gml_ast_free(ast);

    gml_value arr = gml_value_array(1);
    assert(arr.array != NULL);
    arr.array->items[0] = gml_value_string("ok");
    assert(gml_vm_set(&vm, "a", arr));
    gml_value_free(&arr);
    assert(gml_parse_program("return a[0];", &ast, err, sizeof(err)));
    assert(gml_vm_execute(&vm, ast));
    assert(vm.returned && vm.return_value.kind == GML_V_STRING);
    assert(strcmp(vm.return_value.string, "ok") == 0);
    gml_ast_free(ast);
    gml_value_free(&vm.return_value);

    assert(gml_parse_program("return \"line\\n\\\"ok\";", &ast, err, sizeof(err)));
    assert(gml_vm_execute(&vm, ast));
    assert(vm.return_value.kind == GML_V_STRING);
    assert(strcmp(vm.return_value.string, "line\n\"ok") == 0);
    gml_ast_free(ast);
    gml_value_free(&vm.return_value);
    printf("  Typed with/index/escape syntax PASS\n");
}

int main(void) {
    printf("--- Running GML VM Execution Test Suite ---\n");
    test_ast_parse_and_execute();
    test_script_invoke_args();
    test_string_concatenation();
    test_typed_with_and_postfix_syntax();
    printf("--- GML VM Execution Tests Passed! ---\n");
    return 0;
}
