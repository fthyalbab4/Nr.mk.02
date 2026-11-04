#ifndef GML_LEXER_H
#define GML_LEXER_H

#include <stddef.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    TOK_EOF = 0,
    TOK_NUMBER,
    TOK_STRING,
    TOK_IDENTIFIER,
    /* Operators */
    TOK_PLUS,         /* + */
    TOK_MINUS,        /* - */
    TOK_STAR,         /* * */
    TOK_SLASH,        /* / */
    TOK_PERCENT,      /* % */
    TOK_ASSIGN,       /* = or := */
    TOK_PLUS_ASSIGN,  /* += */
    TOK_MINUS_ASSIGN, /* -= */
    TOK_STAR_ASSIGN,  /* *= */
    TOK_SLASH_ASSIGN, /* /= */
    TOK_EQ,           /* == */
    TOK_NEQ,          /* != or <> */
    TOK_LT,           /* < */
    TOK_LTE,          /* <= */
    TOK_GT,           /* > */
    TOK_GTE,          /* >= */
    TOK_AND,          /* && or and */
    TOK_OR,           /* || or or */
    TOK_NOT,          /* ! or not */
    /* Punctuation */
    TOK_LPAREN,       /* ( */
    TOK_RPAREN,       /* ) */
    TOK_LBRACE,       /* { */
    TOK_RBRACE,       /* } */
    TOK_LBRACKET,     /* [ */
    TOK_RBRACKET,     /* ] */
    TOK_COMMA,        /* , */
    TOK_SEMICOLON,    /* ; */
    TOK_DOT,          /* . */
    TOK_COLON,        /* : */
    /* Keywords */
    TOK_KW_IF,
    TOK_KW_THEN,
    TOK_KW_ELSE,
    TOK_KW_WHILE,
    TOK_KW_DO,
    TOK_KW_UNTIL,
    TOK_KW_REPEAT,
    TOK_KW_FOR,
    TOK_KW_WITH,
    TOK_KW_SWITCH,
    TOK_KW_CASE,
    TOK_KW_DEFAULT,
    TOK_KW_BREAK,
    TOK_KW_CONTINUE,
    TOK_KW_RETURN,
    TOK_KW_EXIT,
    TOK_KW_VAR,
    TOK_KW_GLOBALVAR,
    TOK_ERROR
} gml_token_type;

typedef struct {
    gml_token_type type;
    const char *start;
    size_t length;
    int line;
    int column;
    double number_value;
    char text[256];
} gml_token;

typedef struct {
    const char *source;
    size_t len;
    size_t cursor;
    int line;
    int column;
} gml_lexer;

void gml_lexer_init(gml_lexer *lexer, const char *source);
gml_token gml_lexer_next_token(gml_lexer *lexer);
const char *gml_token_type_name(gml_token_type type);

#ifdef __cplusplus
}
#endif

#endif /* GML_LEXER_H */
