#include "gml_lexer.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

static void test_basic_tokens(void) {
    const char *src = "x = 42 + 3.14; // comment\n y -= $10; /* multi\nline */";
    gml_lexer lexer;
    gml_lexer_init(&lexer, src);

    gml_token t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_IDENTIFIER && strcmp(t.text, "x") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_ASSIGN);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_NUMBER && t.number_value == 42.0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_PLUS);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_NUMBER && t.number_value == 3.14);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_SEMICOLON);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_IDENTIFIER && strcmp(t.text, "y") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_MINUS_ASSIGN);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_NUMBER && t.number_value == 16.0); /* $10 in hex */

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_SEMICOLON);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_EOF);

    puts("PASS test_basic_tokens");
}

static void test_keywords_and_operators(void) {
    const char *src = "if (place_free(x, y + 1) and not solid) { vspeed += 1; } else exit;";
    gml_lexer lexer;
    gml_lexer_init(&lexer, src);

    gml_token t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_KW_IF);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_LPAREN);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_IDENTIFIER && strcmp(t.text, "place_free") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_LPAREN);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_IDENTIFIER && strcmp(t.text, "x") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_COMMA);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_IDENTIFIER && strcmp(t.text, "y") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_PLUS);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_NUMBER && t.number_value == 1.0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_RPAREN);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_AND);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_NOT);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_IDENTIFIER && strcmp(t.text, "solid") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_RPAREN);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_LBRACE);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_IDENTIFIER && strcmp(t.text, "vspeed") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_PLUS_ASSIGN);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_NUMBER && t.number_value == 1.0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_SEMICOLON);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_RBRACE);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_KW_ELSE);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_KW_EXIT);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_SEMICOLON);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_EOF);

    puts("PASS test_keywords_and_operators");
}

static void test_strings_with_escapes(void) {
    const char *src = "\"hello world\\nline2\" 'single quote with \\' escaped'";
    gml_lexer lexer;
    gml_lexer_init(&lexer, src);

    gml_token t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_STRING);
    assert(strcmp(t.text, "hello world\nline2") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_STRING);
    assert(strcmp(t.text, "single quote with ' escaped") == 0);

    t = gml_lexer_next_token(&lexer);
    assert(t.type == TOK_EOF);

    puts("PASS test_strings_with_escapes");
}

int main(void) {
    puts("=== Testing GML Tokenizer & Lexer ===");
    test_basic_tokens();
    test_keywords_and_operators();
    test_strings_with_escapes();
    puts("GML_LEXER_TEST_PASS");
    return 0;
}
