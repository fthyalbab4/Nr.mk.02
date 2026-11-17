#ifndef GM82_GML_LEXER_H
#define GM82_GML_LEXER_H

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GM82_TOK_EOF = 0,
    GM82_TOK_NUMBER,
    GM82_TOK_STRING,
    GM82_TOK_IDENTIFIER,
    GM82_TOK_PLUS,
    GM82_TOK_MINUS,
    GM82_TOK_STAR,
    GM82_TOK_SLASH,
    GM82_TOK_PERCENT,
    GM82_TOK_DIV,
    GM82_TOK_MOD,
    GM82_TOK_ASSIGN,
    GM82_TOK_PLUS_ASSIGN,
    GM82_TOK_MINUS_ASSIGN,
    GM82_TOK_STAR_ASSIGN,
    GM82_TOK_SLASH_ASSIGN,
    GM82_TOK_EQUAL,
    GM82_TOK_NOT_EQUAL,
    GM82_TOK_LESS,
    GM82_TOK_LESS_EQUAL,
    GM82_TOK_GREATER,
    GM82_TOK_GREATER_EQUAL,
    GM82_TOK_AND,
    GM82_TOK_OR,
    GM82_TOK_XOR,
    GM82_TOK_NOT,
    GM82_TOK_BIT_AND,
    GM82_TOK_BIT_OR,
    GM82_TOK_BIT_XOR,
    GM82_TOK_BIT_NOT,
    GM82_TOK_SHL,
    GM82_TOK_SHR,
    GM82_TOK_LPAREN,
    GM82_TOK_RPAREN,
    GM82_TOK_LBRACE,
    GM82_TOK_RBRACE,
    GM82_TOK_LBRACKET,
    GM82_TOK_RBRACKET,
    GM82_TOK_COMMA,
    GM82_TOK_DOT,
    GM82_TOK_SEMICOLON,
    GM82_TOK_COLON
} gm82_gml_token_kind;

typedef struct {
    gm82_gml_token_kind kind;
    double number;
    char text[512];
    size_t offset;
    int line;
    int column;
} gm82_gml_token;

typedef struct {
    const char *source;
    size_t length;
    size_t offset;
    int line;
    int column;
    char error[160];
} gm82_gml_lexer;

void gm82_gml_lexer_init(gm82_gml_lexer *lexer, const char *source);
bool gm82_gml_lexer_next(gm82_gml_lexer *lexer, gm82_gml_token *token);
const char *gm82_gml_token_kind_name(gm82_gml_token_kind kind);
const char *gm82_gml_lexer_error(const gm82_gml_lexer *lexer);

#ifdef __cplusplus
}
#endif

#endif
