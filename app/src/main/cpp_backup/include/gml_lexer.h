#ifndef GML_LEXER_H
#define GML_LEXER_H

#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GML_TOK_EOF = 0,
    GML_TOK_INT,
    GML_TOK_REAL,
    GML_TOK_STRING,
    GML_TOK_IDENT,

    /* Operators */
    GML_TOK_ASSIGN,          /* = */
    GML_TOK_PLUS,            /* + */
    GML_TOK_MINUS,           /* - */
    GML_TOK_STAR,            /* * */
    GML_TOK_SLASH,           /* / */
    GML_TOK_PERCENT,         /* % */

    GML_TOK_EQ,              /* == */
    GML_TOK_NEQ,             /* != or <> */
    GML_TOK_LT,              /* < */
    GML_TOK_LTE,             /* <= */
    GML_TOK_GT,              /* > */
    GML_TOK_GTE,             /* >= */

    GML_TOK_AND,             /* && */
    GML_TOK_OR,              /* || */
    GML_TOK_NOT,             /* ! */

    GML_TOK_PLUS_ASSIGN,     /* += */
    GML_TOK_MINUS_ASSIGN,    /* -= */
    GML_TOK_MUL_ASSIGN,      /* *= */
    GML_TOK_DIV_ASSIGN,      /* /= */

    /* Delimiters */
    GML_TOK_LPAREN,          /* ( */
    GML_TOK_RPAREN,          /* ) */
    GML_TOK_LBRACE,          /* { */
    GML_TOK_RBRACE,          /* } */
    GML_TOK_LBRACKET,        /* [ */
    GML_TOK_RBRACKET,        /* ] */
    GML_TOK_COMMA,           /* , */
    GML_TOK_SEMICOLON,       /* ; */
    GML_TOK_DOT,             /* . */

    /* Keywords */
    GML_TOK_IF,
    GML_TOK_ELSE,
    GML_TOK_WHILE,
    GML_TOK_DO,
    GML_TOK_UNTIL,
    GML_TOK_REPEAT,
    GML_TOK_FOR,
    GML_TOK_WITH,
    GML_TOK_BREAK,
    GML_TOK_CONTINUE,
    GML_TOK_RETURN,
    GML_TOK_EXIT,

    GML_TOK_UNKNOWN
} gml_token_type;

typedef struct {
    gml_token_type type;
    const char *start;
    size_t length;
    int line;
    int col;
    struct {
        long long int_val;
        double real_val;
        char str_val[256];
    } as;
} gml_token;

typedef struct {
    const char *source;
    const char *cursor;
    int line;
    int col;
} gml_lexer;

void gml_lexer_init(gml_lexer *lexer, const char *source);
bool gml_lexer_next_token(gml_lexer *lexer, gml_token *tok);
const char *gml_token_type_name(gml_token_type type);

#ifdef __cplusplus
}
#endif

#endif /* GML_LEXER_H */
