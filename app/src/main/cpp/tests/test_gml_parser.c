#include "gm82_gml_parser.h"
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
    gm82_runtime_cleanup(&rt_bc);
    gm82_gml_ast_free(root);
    gm82_runtime_cleanup(&rt);
}

int main(void) {
    test_lexer();
    test_parser();
    test_rejection();
    test_ast_execution();
    puts("test_gml_parser PASS");
    return 0;
}
