#include "gm82_runtime.h"
#include "gm82_gml_builtins.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_parser.h"
#include <assert.h>
#include <stdio.h>

static const char *g_mode = "unknown";
static void assert_value(gm82_runtime *rt, gm82_instance *inst, const char *name, double expected) {
    double value = 0;
    assert(gm82_gml_eval_expr(rt, inst, name, &value));
    if (value != expected) fprintf(stderr, "mode=%s id=%d %s got=%.17g expected=%.17g\n", g_mode, inst->id, name, value, expected);
    assert(value == expected);
}

static void setup(gm82_runtime *rt, gm82_instance **root, gm82_instance **a,
                  gm82_instance **b, gm82_instance **other) {
    gm82_runtime_init(rt);
    *root = gm82_runtime_instance_create(rt, 0, 0, 0);
    *a = gm82_runtime_instance_create(rt, 1, 10, 0);
    *b = gm82_runtime_instance_create(rt, 1, 20, 0);
    *other = gm82_runtime_instance_create(rt, 2, 30, 0);
    assert(*root && *a && *b && *other);
    gm82_gml_set_runtime(rt);
    gm82_gml_set_self(*root);
    gm82_gml_set_other(*other);
}

static void assert_result(gm82_runtime *rt, gm82_instance *root,
                          gm82_instance *a, gm82_instance *b,
                          gm82_instance *other) {
    assert(gm82_gml_get_self() == root);
    assert(gm82_gml_get_other() == other);
    assert_value(rt, root, "with_hits", 207);
    assert_value(rt, a, "with_hits", 11);
    assert_value(rt, b, "with_hits", 11);
    assert_value(rt, other, "with_hits", 0);
}

static const char *fixture_code(void) {
    return "with (1) { with_hits += 1; with (self) { with_hits += 10; } "
           "with (other) { with_hits += 100; } } "
           "with (self) { with_hits += 7; } with (noone) { with_hits += 999; }";
}

static void run_ast(void) {
    g_mode = "ast";
    gm82_runtime rt;
    gm82_instance *root, *a, *b, *other;
    setup(&rt, &root, &a, &b, &other);
    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, fixture_code());
    gm82_gml_ast *program = gm82_gml_parse_program(&parser);
    assert(program != NULL);
    gm82_gml_exec_result result;
    assert(gm82_gml_execute_ast(&rt, root, program, &result));
    assert_result(&rt, root, a, b, other);
    gm82_gml_ast_free(program);
    gm82_runtime_cleanup(&rt);
}

static void run_bytecode(void) {
    g_mode = "bytecode";
    gm82_runtime rt;
    gm82_instance *root, *a, *b, *other;
    setup(&rt, &root, &a, &b, &other);
    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, fixture_code());
    gm82_gml_ast *program = gm82_gml_parse_program(&parser);
    assert(program != NULL);
    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(program, &bytecode));
    gm82_gml_exec_result result;
    assert(gm82_gml_execute_bytecode(&rt, root, &bytecode, &result));
    assert_result(&rt, root, a, b, other);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(program);
    gm82_runtime_cleanup(&rt);
}

static void run_simple_evaluator(void) {
    g_mode = "simple";
    gm82_runtime rt;
    gm82_instance *root, *a, *b, *other;
    setup(&rt, &root, &a, &b, &other);
    assert(gm82_gml_eval_block(&rt, root, fixture_code()));
    assert_result(&rt, root, a, b, other);
    gm82_runtime_cleanup(&rt);
}

int main(void) {
    run_ast();
    run_bytecode();
    run_simple_evaluator();
    puts("GML_WITH_NESTED_TEST_PASS");
    return 0;
}
