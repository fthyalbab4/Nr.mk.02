#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "gml_lexer.h"

static void test_lexer_numbers_and_strings(void) {
    const char *src = "123 45.67 \"hello \\\"world\\\"\" 'single quoted' .5";
    gml_lexer lexer;
    gml_lexer_init(&lexer, src);

    gml_token tok;
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_INT && tok.as.int_val == 123);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_REAL && tok.as.real_val > 45.66 && tok.as.real_val < 45.68);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_STRING && strcmp(tok.as.str_val, "hello \"world\"") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_STRING && strcmp(tok.as.str_val, "single quoted") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_REAL && tok.as.real_val > 0.49 && tok.as.real_val < 0.51);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_EOF);

    puts("  [PASS] test_lexer_numbers_and_strings");
}

static void test_lexer_keywords_and_identifiers(void) {
    const char *src = "if else while do until repeat for with break continue return exit my_var _score obj_mario";
    gml_lexer lexer;
    gml_lexer_init(&lexer, src);

    gml_token tok;
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IF);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_ELSE);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_WHILE);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_DO);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_UNTIL);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_REPEAT);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_FOR);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_WITH);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_BREAK);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_CONTINUE);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_RETURN);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_EXIT);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT && strcmp(tok.as.str_val, "my_var") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT && strcmp(tok.as.str_val, "_score") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT && strcmp(tok.as.str_val, "obj_mario") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_EOF);

    puts("  [PASS] test_lexer_keywords_and_identifiers");
}

static void test_lexer_operators_and_comments(void) {
    const char *src = "// This is a comment\n"
                      "x += 3.2; /* block comment */\n"
                      "if (x == 10 && y <= 5 || !z != 0) { return (x + y * 2); }";
    gml_lexer lexer;
    gml_lexer_init(&lexer, src);

    gml_token tok;
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT && strcmp(tok.as.str_val, "x") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_PLUS_ASSIGN);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_REAL);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_SEMICOLON);

    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IF);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_LPAREN);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT && strcmp(tok.as.str_val, "x") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_EQ);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_INT && tok.as.int_val == 10);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_AND);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT && strcmp(tok.as.str_val, "y") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_LTE);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_INT && tok.as.int_val == 5);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_OR);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_NOT);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT && strcmp(tok.as.str_val, "z") == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_NEQ);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_INT && tok.as.int_val == 0);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_RPAREN);

    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_LBRACE);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_RETURN);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_LPAREN);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_PLUS);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_IDENT);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_STAR);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_INT);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_RPAREN);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_SEMICOLON);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_RBRACE);
    assert(gml_lexer_next_token(&lexer, &tok) && tok.type == GML_TOK_EOF);

    puts("  [PASS] test_lexer_operators_and_comments");
}

int main(void) {
    puts("=== RUNNING GML LEXER / TOKENIZER TESTS ===");
    test_lexer_numbers_and_strings();
    test_lexer_keywords_and_identifiers();
    test_lexer_operators_and_comments();
    puts("ALL_GML_LEXER_TESTS_PASS");
    return 0;
}
