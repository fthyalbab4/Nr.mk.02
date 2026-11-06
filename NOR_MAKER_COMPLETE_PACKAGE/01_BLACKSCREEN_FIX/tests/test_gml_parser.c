#include "gm82_gml_parser.h"
#include "gm82_gml_builtins.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

static void test_lexer(void) {
    gm82_gml_lexer l;
    gm82_gml_token t;
    gm82_gml_lexer_init(&l, "// comment\n x += 1.5e+1; s = \"a\\n b\"; if (x >= 2 && !y) {}");
    assert(gm82_gml_lexer_next(&l, &t) && t.kind == GM82_TOK_IDENTIFIER && strcmp(t.text, "x") == 0);
    assert(gm82_gml_lexer_next(&l, &t) && t.kind == GM82_TOK_PLUS_ASSIGN);
    assert(gm82_gml_lexer_next(&l, &t) && t.kind == GM82_TOK_NUMBER && t.number == 15.0);
    assert(gm82_gml_lexer_next(&l, &t) && t.kind == GM82_TOK_SEMICOLON);
    assert(gm82_gml_lexer_next(&l, &t) && t.kind == GM82_TOK_IDENTIFIER && strcmp(t.text, "s") == 0);
    assert(gm82_gml_lexer_next(&l, &t) && t.kind == GM82_TOK_ASSIGN);
    assert(gm82_gml_lexer_next(&l, &t) && t.kind == GM82_TOK_STRING && strcmp(t.text, "a\n b") == 0);
}

static void test_parser(void) {
    const char *code =
        "score = 0;"
        "for (i = 0; i < 5; i += 1) {"
        "  if (i == 2) continue;"
        "  with (obj_enemy) { other.x += i; }"
        "  score += i;"
        "}"
        "while (score < 20) score += 1;"
        "return score;";
    gm82_gml_parser p;
    gm82_gml_parser_init(&p, code);
    gm82_gml_ast *root = gm82_gml_parse_program(&p);
    assert(root != NULL);
    assert(root->kind == GM82_AST_BLOCK);
    assert(root->a != NULL && root->a->kind == GM82_AST_EXPR_STMT);
    assert(root->a->a != NULL && root->a->a->kind == GM82_AST_ASSIGN);
    gm82_gml_ast *for_stmt = root->a->next;
    assert(for_stmt != NULL && for_stmt->kind == GM82_AST_FOR);
    assert(for_stmt->a && for_stmt->b && for_stmt->c && for_stmt->d);
    assert(for_stmt->d->kind == GM82_AST_BLOCK);
    assert(for_stmt->d->a && for_stmt->d->a->kind == GM82_AST_IF);
    assert(for_stmt->d->a->b && for_stmt->d->a->b->kind == GM82_AST_CONTINUE);
    assert(for_stmt->d->a->next && for_stmt->d->a->next->kind == GM82_AST_WITH);
    gm82_gml_ast_free(root);
}

static void test_operator_source_and_empty_for(void) {
    gm82_gml_parser p;
    gm82_gml_parser_init(&p, "if (not x and y or z) break; for (;;) break; q = 7 % 3;");
    gm82_gml_ast *root = gm82_gml_parse_program(&p);
    assert(root != NULL);
    char source[512];
    assert(gm82_gml_ast_to_source(root, source, sizeof(source)));
    fprintf(stderr, "serialized operators: %s\n", source);
    assert(strstr(source, "not x and y") != NULL);
    assert(strstr(source, "or z") != NULL);
    assert(strstr(source, "for (;;)") != NULL);
    assert(strstr(source, "7 % 3") != NULL);
    assert(!gm82_gml_ast_to_source(root, NULL, 0));
    gm82_gml_ast_free(root);
}

static void test_rejection(void) {
    gm82_gml_parser p;
    gm82_gml_parser_init(&p, "if (x { y = 1; }");
    assert(gm82_gml_parse_program(&p) == NULL);
    assert(gm82_gml_parser_error(&p)[0] != 0);
}

static void test_ast_execution(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *self = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(self != NULL);
    gm82_gml_parser p;
    gm82_gml_parser_init(&p,
        "x = 0; for (i = 0; i < 5; i += 1) { "
        "if (i == 2) continue; x += i; } "
        "while (x < 10) x += 1; return x;");
    gm82_gml_ast *root = gm82_gml_parse_program(&p);
    assert(root != NULL);
    gm82_gml_exec_result result;
    assert(gm82_gml_execute_ast(&rt, self, root, &result));
    assert(result.returned && result.return_value == 10.0);
    assert(self->x == 10.0);
    self->x = 0.0;
    gm82_gml_parser do_parser;
    gm82_gml_parser_init(&do_parser, "do { x += 1; break; } until (0); return x;");
    gm82_gml_ast *do_root = gm82_gml_parse_program(&do_parser);
    assert(do_root != NULL);
    gm82_gml_exec_result do_result;
    assert(gm82_gml_execute_ast(&rt, self, do_root, &do_result));
    assert(do_result.returned && do_result.return_value == 1.0 && self->x == 1.0);
    gm82_gml_ast_free(do_root);
    gm82_runtime rt_bc;
    gm82_runtime_init(&rt_bc);
    gm82_instance *self_bc = gm82_runtime_instance_create(&rt_bc, 0, 0, 0);
    assert(self_bc != NULL);
    gm82_gml_parser bytecode_parser;
    gm82_gml_parser_init(&bytecode_parser,
        "x = 0; for (i = 0; i < 5; i += 1) { x += i; } return x;");
    gm82_gml_ast *bytecode_root = gm82_gml_parse_program(&bytecode_parser);
    assert(bytecode_root != NULL);
    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(bytecode_root, &bytecode));
    gm82_gml_exec_result bytecode_result;
    assert(gm82_gml_execute_bytecode(&rt_bc, self_bc, &bytecode, &bytecode_result));
    assert(bytecode_result.returned && bytecode_result.return_value == 10.0);
    assert(self_bc->x == 10.0);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(bytecode_root);
    self_bc->x = 0.0;
    gm82_gml_parser repeat_parser;
    gm82_gml_parser_init(&repeat_parser, "repeat (3) { repeat (2) { x += 1; } } return x;");
    gm82_gml_ast *repeat_root = gm82_gml_parse_program(&repeat_parser);
    assert(repeat_root != NULL);
    assert(gm82_gml_compile_bytecode(repeat_root, &bytecode));
    memset(&bytecode_result, 0, sizeof(bytecode_result));
    assert(gm82_gml_execute_bytecode(&rt_bc, self_bc, &bytecode, &bytecode_result));
    assert(bytecode_result.returned && bytecode_result.return_value == 6.0);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(repeat_root);
    const char *loop_cases[] = {
        "x = 0; for (i = 0; i < 8; i += 1) { if (i == 2) continue; if (i == 5) break; x += i; } return x;",
        "x = 0; i = 0; while (i < 8) { i += 1; if (i == 2) continue; if (i == 5) break; x += i; } return x;",
        "x = 0; repeat (3) { i = 0; repeat (5) { i += 1; if (i == 2) break; } x += i; } return x;",
        "x = 0; i = 0; do { i += 1; if (i < 3) continue; x += i; if (i == 4) break; } until (i >= 8); return x;"
    };
    const double loop_expected[] = { 8.0, 8.0, 6.0, 7.0 };
    for (size_t k = 0; k < sizeof(loop_cases) / sizeof(loop_cases[0]); k++) {
        gm82_gml_parser control_parser;
        gm82_gml_parser_init(&control_parser, loop_cases[k]);
        gm82_gml_ast *control_root = gm82_gml_parse_program(&control_parser);
        assert(control_root != NULL);
        assert(gm82_gml_compile_bytecode(control_root, &bytecode));
        memset(&bytecode_result, 0, sizeof(bytecode_result));
        assert(gm82_gml_execute_bytecode(&rt_bc, self_bc, &bytecode, &bytecode_result));
        assert(bytecode_result.returned && bytecode_result.return_value == loop_expected[k]);
        assert(self_bc->x == loop_expected[k]);
        gm82_gml_bytecode_free(&bytecode);
        gm82_gml_ast_free(control_root);
        self_bc->x = 0.0;
    }
    gm82_gml_parser outside_parser;
    gm82_gml_parser_init(&outside_parser, "break;");
    gm82_gml_ast *outside_root = gm82_gml_parse_program(&outside_parser);
    assert(outside_root != NULL);
    assert(!gm82_gml_compile_bytecode(outside_root, &bytecode));
    gm82_gml_exec_result outside_result;
    assert(!gm82_gml_execute_ast(&rt_bc, self_bc, outside_root, &outside_result));
    gm82_gml_ast_free(outside_root);
    gm82_runtime_cleanup(&rt_bc);
    gm82_gml_ast_free(root);
    gm82_runtime_cleanup(&rt);
}

static void test_do_until_control_flow(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *self = gm82_runtime_instance_create(&rt, 0, 0, 0);
    assert(self != NULL);
    gm82_gml_parser p;
    gm82_gml_parser_init(&p,
        "x = 0; do { x += 1; if (x < 2) continue; "
        "if (x >= 4) break; } until (x >= 10);");
    gm82_gml_ast *root = gm82_gml_parse_program(&p);
    assert(root != NULL);
    gm82_gml_exec_result result;
    assert(gm82_gml_execute_ast(&rt, self, root, &result));
    assert(!result.returned && !result.broke && self->x == 4.0);
    gm82_gml_ast_free(root);
    gm82_runtime_cleanup(&rt);
}

static void test_do_until_continue_on_exit(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, "do { continue; } until (1);");
    gm82_gml_ast *root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    gm82_gml_exec_result result;
    assert(gm82_gml_execute_ast(&rt, NULL, root, &result));
    assert(!result.returned && !result.broke && !result.continued);
    gm82_gml_ast_free(root);
    gm82_runtime_cleanup(&rt);
}

static void test_bytecode_with_snapshot(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *first = gm82_runtime_instance_create(&rt, 7, 0, 0);
    gm82_instance *second = gm82_runtime_instance_create(&rt, 7, 0, 0);
    gm82_instance *third = gm82_runtime_instance_create(&rt, 9, 0, 0);
    assert(first && second && third);
    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, "with (-3) { x += 1; }");
    gm82_gml_ast *root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(root, &bytecode));
    gm82_gml_exec_result result;
    assert(gm82_gml_execute_bytecode(&rt, first, &bytecode, &result));
    assert(first->x == 1.0 && second->x == 1.0 && third->x == 1.0);
    assert(gm82_gml_get_self() == first);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(root);
    gm82_runtime_cleanup(&rt);
}

static void test_bytecode_with_nested_context_and_failure_cleanup(void) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_instance *first = gm82_runtime_instance_create(&rt, 7, 0, 0);
    gm82_instance *second = gm82_runtime_instance_create(&rt, 7, 0, 0);
    gm82_instance *other = gm82_runtime_instance_create(&rt, 9, 0, 0);
    assert(first && second && other);
    gm82_gml_set_self(first);
    gm82_gml_set_other(other);

    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser,
        "with (7) { with (self) { x += 2; } }");
    gm82_gml_ast *root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(root, &bytecode));
    gm82_gml_exec_result result;
    assert(gm82_gml_execute_bytecode(&rt, first, &bytecode, &result));
    assert(first->x == 2.0 && second->x == 2.0 && other->x == 0.0);
    assert(gm82_gml_get_self() == first);
    assert(gm82_gml_get_other() == other);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(root);

    gm82_gml_parser_init(&parser, "with (other) { x += 10; }");
    root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    assert(gm82_gml_compile_bytecode(root, &bytecode));
    assert(gm82_gml_execute_bytecode(&rt, first, &bytecode, &result));
    assert(first->x == 2.0 && second->x == 2.0 && other->x == 10.0);
    assert(gm82_gml_get_self() == first);
    assert(gm82_gml_get_other() == other);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(root);

    gm82_gml_parser_init(&parser, "with (noone) { x += 100; }");
    root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    assert(gm82_gml_compile_bytecode(root, &bytecode));
    assert(gm82_gml_execute_bytecode(&rt, first, &bytecode, &result));
    assert(first->x == 2.0 && second->x == 2.0 && other->x == 10.0);
    assert(gm82_gml_get_self() == first);
    assert(gm82_gml_get_other() == other);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(root);

    gm82_gml_parser_init(&parser, "with (7) { return x; }");
    root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    assert(gm82_gml_compile_bytecode(root, &bytecode));
    assert(gm82_gml_execute_bytecode(&rt, first, &bytecode, &result));
    assert(result.returned && result.return_value == first->x);
    assert(gm82_gml_get_self() == first);
    assert(gm82_gml_get_other() == other);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(root);

    gm82_gml_parser_init(&parser, "with (7) { x += 1; }");
    root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    assert(gm82_gml_compile_bytecode(root, &bytecode));
    assert(bytecode.count >= 4);
    assert(bytecode.code[0].opcode == GM82_BC_WITH_BEGIN);
    assert(bytecode.code[1].opcode == GM82_BC_EVAL_STMT);
    bytecode.code[1].source[0] = '(';
    bytecode.code[1].source[1] = '\0';
    assert(!gm82_gml_execute_bytecode(&rt, first, &bytecode, &result));
    assert(gm82_gml_get_self() == first);
    assert(gm82_gml_get_other() == other);
    gm82_gml_bytecode_free(&bytecode);
    gm82_gml_ast_free(root);

    gm82_gml_set_self(NULL);
    gm82_gml_set_other(NULL);
    gm82_runtime_cleanup(&rt);
}

static void test_switch_control_flow(void) {
    const char *source = "x = 0; switch (2) { case 1: x = 10; break; "
                         "case 2: x = 20; case 3: x += 3; break; "
                         "default: x = 99; } return x;";
    gm82_gml_parser parser;
    gm82_gml_parser_init(&parser, source);
    gm82_gml_ast *root = gm82_gml_parse_program(&parser);
    assert(root != NULL);
    assert(root->a && root->a->next && root->a->next->kind == GM82_AST_SWITCH);
    char serialized[1024];
    assert(gm82_gml_ast_to_source(root, serialized, sizeof(serialized)));
    assert(strstr(serialized, "switch") != NULL && strstr(serialized, "default") != NULL);

    gm82_runtime ast_rt;
    gm82_runtime_init(&ast_rt);
    gm82_instance *ast_self = gm82_runtime_instance_create(&ast_rt, 0, 0, 0);
    assert(ast_self != NULL);
    gm82_gml_exec_result ast_result;
    assert(gm82_gml_execute_ast(&ast_rt, ast_self, root, &ast_result));
    assert(ast_result.returned && ast_result.return_value == 23.0);
    gm82_runtime_cleanup(&ast_rt);

    gm82_runtime bc_rt;
    gm82_runtime_init(&bc_rt);
    gm82_instance *bc_self = gm82_runtime_instance_create(&bc_rt, 0, 0, 0);
    assert(bc_self != NULL);
    gm82_gml_bytecode bytecode;
    assert(gm82_gml_compile_bytecode(root, &bytecode));
    gm82_gml_exec_result bc_result;
    assert(gm82_gml_execute_bytecode(&bc_rt, bc_self, &bytecode, &bc_result));
    assert(bc_result.returned && bc_result.return_value == 23.0);
    gm82_gml_bytecode_free(&bytecode);
    gm82_runtime_cleanup(&bc_rt);
    gm82_gml_ast_free(root);
}

int main(void) {
    test_lexer();
    test_parser();
    test_operator_source_and_empty_for();
    test_rejection();
    test_ast_execution();
    test_do_until_control_flow();
    test_do_until_continue_on_exit();
    test_bytecode_with_snapshot();
    test_bytecode_with_nested_context_and_failure_cleanup();
    test_switch_control_flow();
    puts("test_gml_parser PASS");
    return 0;
}
