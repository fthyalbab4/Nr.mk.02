#ifndef GM82_GML_PARSER_H
#define GM82_GML_PARSER_H

#include <stdbool.h>
#include <stddef.h>
#include "gm82_runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    GM82_TOK_EOF = 0,
    GM82_TOK_NUMBER,
    GM82_TOK_STRING,
    GM82_TOK_IDENTIFIER,
    GM82_TOK_PLUS, GM82_TOK_MINUS, GM82_TOK_STAR, GM82_TOK_SLASH, GM82_TOK_PERCENT,
    GM82_TOK_ASSIGN, GM82_TOK_PLUS_ASSIGN, GM82_TOK_MINUS_ASSIGN,
    GM82_TOK_STAR_ASSIGN, GM82_TOK_SLASH_ASSIGN,
    GM82_TOK_EQUAL, GM82_TOK_NOT_EQUAL, GM82_TOK_LESS, GM82_TOK_LESS_EQUAL,
    GM82_TOK_GREATER, GM82_TOK_GREATER_EQUAL,
    GM82_TOK_AND, GM82_TOK_OR, GM82_TOK_NOT,
    GM82_TOK_LPAREN, GM82_TOK_RPAREN, GM82_TOK_LBRACE, GM82_TOK_RBRACE,
    GM82_TOK_LBRACKET, GM82_TOK_RBRACKET, GM82_TOK_COMMA, GM82_TOK_DOT,
    GM82_TOK_SEMICOLON, GM82_TOK_COLON
} gm82_gml_token_kind;

typedef struct {
    gm82_gml_token_kind kind;
    double number;
    char text[128];
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

typedef enum {
    GM82_AST_BLOCK = 1,
    GM82_AST_NUMBER, GM82_AST_STRING, GM82_AST_IDENTIFIER,
    GM82_AST_MEMBER, GM82_AST_INDEX, GM82_AST_CALL,
    GM82_AST_UNARY, GM82_AST_BINARY, GM82_AST_ASSIGN,
    GM82_AST_EXPR_STMT, GM82_AST_IF, GM82_AST_WHILE, GM82_AST_DO_UNTIL,
    GM82_AST_REPEAT, GM82_AST_FOR, GM82_AST_WITH, GM82_AST_SWITCH, GM82_AST_SWITCH_CASE,
    GM82_AST_RETURN, GM82_AST_BREAK, GM82_AST_CONTINUE
} gm82_gml_ast_kind;

typedef struct gm82_gml_ast gm82_gml_ast;
struct gm82_gml_ast {
    gm82_gml_ast_kind kind;
    int line;
    int column;
    char *text;
    double number;
    gm82_gml_ast *a;
    gm82_gml_ast *b;
    gm82_gml_ast *c;
    gm82_gml_ast *d;
    gm82_gml_ast *next;
};

typedef struct {
    gm82_gml_lexer lexer;
    gm82_gml_token current;
    char error[192];
} gm82_gml_parser;

void gm82_gml_parser_init(gm82_gml_parser *parser, const char *source);
gm82_gml_ast *gm82_gml_parse_program(gm82_gml_parser *parser);
void gm82_gml_ast_free(gm82_gml_ast *node);
const char *gm82_gml_parser_error(const gm82_gml_parser *parser);
const char *gm82_gml_ast_kind_name(gm82_gml_ast_kind kind);
bool gm82_gml_ast_to_source(const gm82_gml_ast *node, char *out, size_t out_size);

typedef struct {
    bool returned;
    bool broke;
    bool continued;
    double return_value;
    int steps;
} gm82_gml_exec_result;

/* Execute the parsed AST through the existing runtime/evaluator bridge. */
bool gm82_gml_execute_ast(gm82_runtime *rt, gm82_instance *self,
                          const gm82_gml_ast *program,
                          gm82_gml_exec_result *result);

typedef enum {
    GM82_BC_HALT = 0,
    GM82_BC_EVAL_STMT,
    GM82_BC_EVAL_EXPR,
    GM82_BC_JUMP,
    GM82_BC_JUMP_IF_FALSE,
    GM82_BC_REPEAT_INIT,
    GM82_BC_REPEAT_NEXT,
    GM82_BC_RETURN,
    GM82_BC_REPEAT_BREAK,
    GM82_BC_WITH_BEGIN,
    GM82_BC_WITH_NEXT,
    GM82_BC_SWITCH_BEGIN,
    GM82_BC_SWITCH_CASE,
    GM82_BC_SWITCH_DEFAULT,
    GM82_BC_SWITCH_END
} gm82_gml_bc_opcode;

typedef struct {
    gm82_gml_bc_opcode opcode;
    int target;
    int alternate;
    char *source;
    const gm82_gml_ast *ast; /* borrowed from the parsed program during execution */
} gm82_gml_bc_instruction;

typedef struct {
    gm82_gml_bc_instruction *code;
    size_t count;
    size_t capacity;
    char error[192];
} gm82_gml_bytecode;

bool gm82_gml_compile_bytecode(const gm82_gml_ast *program, gm82_gml_bytecode *bytecode);
void gm82_gml_bytecode_free(gm82_gml_bytecode *bytecode);
bool gm82_gml_execute_bytecode(gm82_runtime *rt, gm82_instance *self,
                               const gm82_gml_bytecode *bytecode,
                               gm82_gml_exec_result *result);

#ifdef __cplusplus
}
#endif
#endif
