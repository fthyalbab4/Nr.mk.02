#define _POSIX_C_SOURCE 200809L
#include "gml_frontend.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

static gml_ast *ast_new(gml_ast_kind kind) {
    gml_ast *n = (gml_ast *)calloc(1, sizeof(gml_ast));
    if (n) n->kind = kind;
    return n;
}

void gml_ast_free(gml_ast *ast) {
    if (!ast) return;
    free(ast->text);
    gml_ast_free(ast->left);
    gml_ast_free(ast->right);
    if (ast->items) {
        for (size_t i = 0; i < ast->count; i++) {
            gml_ast_free(ast->items[i]);
        }
        free(ast->items);
    }
    free(ast);
}

static void ast_add_child(gml_ast *parent, gml_ast *child) {
    if (!parent || !child) return;
    gml_ast **new_items = (gml_ast **)realloc(parent->items, (parent->count + 1) * sizeof(gml_ast *));
    if (new_items) {
        parent->items = new_items;
        parent->items[parent->count++] = child;
    }
}

typedef struct {
    const char *src;
    size_t pos, len;
    char error[160];
} gml_lexer;

static void skip_space_comments(gml_lexer *l) {
    while (l->pos < l->len) {
        char c = l->src[l->pos];
        if (isspace((unsigned char)c)) { l->pos++; continue; }
        if (c == '/' && l->pos + 1 < l->len && l->src[l->pos+1] == '/') {
            l->pos += 2;
            while (l->pos < l->len && l->src[l->pos] != '\n') l->pos++;
            continue;
        }
        if (c == '/' && l->pos + 1 < l->len && l->src[l->pos+1] == '*') {
            l->pos += 2;
            while (l->pos + 1 < l->len && !(l->src[l->pos] == '*' && l->src[l->pos+1] == '/')) l->pos++;
            if (l->pos + 1 < l->len) l->pos += 2;
            continue;
        }
        break;
    }
}

static gml_ast *parse_expression(gml_lexer *l);
static int consume_char(gml_lexer *l, char c);

static gml_ast *parse_primary_expr(gml_lexer *l) {
    skip_space_comments(l);
    if (l->pos >= l->len) return NULL;
    char c = l->src[l->pos];

    /* Number literal */
    if (isdigit((unsigned char)c) || (c == '.' && l->pos + 1 < l->len && isdigit((unsigned char)l->src[l->pos+1]))) {
        char *end = NULL;
        double val = strtod(l->src + l->pos, &end);
        l->pos = (size_t)(end - l->src);
        gml_ast *n = ast_new(GML_AST_NUMBER);
        if (n) n->number = val;
        return n;
    }

    /* String literal */
    if (c == '"' || c == '\'') {
        char quote = c;
        l->pos++;
        gml_ast *n = ast_new(GML_AST_STRING);
        if (n) {
            size_t cap = l->len - l->pos + 1, out = 0;
            n->text = (char *)malloc(cap ? cap : 1);
            if (n->text) {
                while (l->pos < l->len && l->src[l->pos] != quote) {
                    unsigned char ch = (unsigned char)l->src[l->pos++];
                    if (ch == '\\' && l->pos < l->len) {
                        unsigned char esc = (unsigned char)l->src[l->pos++];
                        if (esc == 'n') ch = '\n';
                        else if (esc == 'r') ch = '\r';
                        else if (esc == 't') ch = '\t';
                        else ch = esc;
                    }
                    n->text[out++] = (char)ch;
                }
                n->text[out] = 0;
            }
        }
        if (l->pos < l->len) l->pos++;
        return n;
    }

    /* Parenthesized expression */
    if (c == '(') {
        l->pos++;
        gml_ast *sub = parse_expression(l);
        skip_space_comments(l);
        if (l->pos < l->len && l->src[l->pos] == ')') l->pos++;
        return sub;
    }

    /* Identifier or function call */
    if (isalpha((unsigned char)c) || c == '_') {
        size_t start = l->pos;
        while (l->pos < l->len && (isalnum((unsigned char)l->src[l->pos]) || l->src[l->pos] == '_')) l->pos++;
        size_t idlen = l->pos - start;
        char name[64];
        if (idlen >= sizeof(name)) idlen = sizeof(name) - 1;
        memcpy(name, l->src + start, idlen);
        name[idlen] = 0;

        skip_space_comments(l);
        if (l->pos < l->len && l->src[l->pos] == '(') {
            /* Function call */
            l->pos++;
            gml_ast *call_node = ast_new(GML_AST_CALL);
            if (call_node) {
                call_node->text = strdup(name);
                skip_space_comments(l);
                if (l->pos < l->len && l->src[l->pos] != ')') {
                    for (;;) {
                        gml_ast *arg = parse_expression(l);
                        if (arg) ast_add_child(call_node, arg);
                        skip_space_comments(l);
                        if (l->pos < l->len && l->src[l->pos] == ',') { l->pos++; continue; }
                        break;
                    }
                }
                if (l->pos < l->len && l->src[l->pos] == ')') l->pos++;
            }
            return call_node;
        }

        gml_ast *var_node = ast_new(GML_AST_NAME);
        if (var_node) var_node->text = strdup(name);
        gml_ast *node = var_node;
        for (;;) {
            skip_space_comments(l);
            if (l->pos < l->len && l->src[l->pos] == '[') {
                l->pos++;
                gml_ast *index = parse_expression(l);
                if (!consume_char(l, ']')) snprintf(l->error, sizeof(l->error), "expected ']' after index");
                gml_ast *wrapped = ast_new(GML_AST_INDEX);
                if (wrapped) { wrapped->left = node; wrapped->right = index; node = wrapped; }
                continue;
            }
            if (l->pos < l->len && l->src[l->pos] == '.') {
                l->pos++;
                skip_space_comments(l);
                size_t ms = l->pos;
                while (l->pos < l->len && (isalnum((unsigned char)l->src[l->pos]) || l->src[l->pos] == '_')) l->pos++;
                if (l->pos == ms) { snprintf(l->error, sizeof(l->error), "expected member name after '.'"); break; }
                size_t ml = l->pos - ms;
                gml_ast *wrapped = ast_new(GML_AST_MEMBER);
                if (wrapped) {
                    wrapped->left = node;
                    wrapped->text = (char *)malloc(ml + 1);
                    if (wrapped->text) { memcpy(wrapped->text, l->src + ms, ml); wrapped->text[ml] = 0; }
                    node = wrapped;
                }
                continue;
            }
            break;
        }
        return node;
    }

    return NULL;
}

static gml_ast *parse_binary_expr(gml_lexer *l, int min_prec) {
    gml_ast *lhs = parse_primary_expr(l);
    if (!lhs) return NULL;

    for (;;) {
        skip_space_comments(l);
        if (l->pos >= l->len) break;
        char op = l->src[l->pos];
        gml_op gop = GML_T_NONE;
        int prec = 0;

        /* Leave compound assignment (+=, -=, *=, /=, %=) for the
         * assignment layer below; it is not a binary expression. */
        if ((op == '+' || op == '-' || op == '*' || op == '/' || op == '%') &&
            l->pos + 1 < l->len && l->src[l->pos + 1] == '=') {
            break;
        }
        if (op == '+' || op == '-') { gop = (op == '+') ? GML_T_PLUS : GML_T_MINUS; prec = 10; }
        else if (op == '*' || op == '/') { gop = (op == '*') ? GML_T_STAR : GML_T_SLASH; prec = 20; }
        else if (op == '%') { gop = GML_T_PERCENT; prec = 20; }
        else if (op == '=') {
            if (l->pos + 1 < l->len && l->src[l->pos+1] == '=') { gop = GML_T_EQ; l->pos++; prec = 5; }
            else { break; /* Assignment operator handled separately */ }
        }
        else if (op == '!' && l->pos + 1 < l->len && l->src[l->pos+1] == '=') { gop = GML_T_NE; l->pos++; prec = 5; }
        else if (op == '<') {
            if (l->pos + 1 < l->len && l->src[l->pos+1] == '=') { gop = GML_T_LE; l->pos++; prec = 5; }
            else { gop = GML_T_LT; prec = 5; }
        }
        else if (op == '>') {
            if (l->pos + 1 < l->len && l->src[l->pos+1] == '=') { gop = GML_T_GE; l->pos++; prec = 5; }
            else { gop = GML_T_GT; prec = 5; }
        }
        else break;

        if (prec < min_prec) break;
        l->pos++; /* Consume operator */

        gml_ast *rhs = parse_binary_expr(l, prec + 1);
        gml_ast *bin = ast_new(GML_AST_BINARY);
        if (bin) {
            bin->op = gop;
            bin->left = lhs;
            bin->right = rhs;
            lhs = bin;
        }
    }
    return lhs;
}

static gml_ast *parse_expression(gml_lexer *l) {
    gml_ast *lhs = parse_binary_expr(l, 0);
    if (!lhs) return NULL;

    skip_space_comments(l);
    char compound = 0;
    if (l->pos + 1 < l->len &&
        (l->src[l->pos] == '+' || l->src[l->pos] == '-' ||
         l->src[l->pos] == '*' || l->src[l->pos] == '/' ||
         l->src[l->pos] == '%') && l->src[l->pos + 1] == '=') {
        compound = l->src[l->pos];
        l->pos += 2;
    } else if (l->pos < l->len && l->src[l->pos] == '=') {
        l->pos++;
    } else {
        return lhs;
    }

    /* Assignment and compound assignment share the same AST shape. */
    {
        gml_ast *target = lhs;
        gml_ast *rhs = parse_expression(l);
        gml_ast *assign = ast_new(GML_AST_ASSIGN);
        if (assign) {
            assign->left = target;
            assign->right = rhs;
            assign->op = compound == '+' ? GML_T_PLUS :
                         compound == '-' ? GML_T_MINUS :
                         compound == '*' ? GML_T_STAR :
                         compound == '/' ? GML_T_SLASH :
                         compound == '%' ? GML_T_PERCENT : GML_T_NONE;
            return assign;
        }
    }
    return lhs;
}

static int keyword_matches(gml_lexer *l, const char *word) {
    skip_space_comments(l);
    size_t n = strlen(word);
    if (l->pos + n > l->len || strncmp(l->src + l->pos, word, n) != 0) return 0;
    if (l->pos + n < l->len) {
        unsigned char next = (unsigned char)l->src[l->pos + n];
        if (isalnum(next) || next == '_') return 0;
    }
    return 1;
}

static int consume_keyword(gml_lexer *l, const char *word) {
    if (!keyword_matches(l, word)) return 0;
    l->pos += strlen(word);
    return 1;
}

static int consume_char(gml_lexer *l, char c) {
    skip_space_comments(l);
    if (l->pos >= l->len || l->src[l->pos] != c) return 0;
    l->pos++;
    return 1;
}

static gml_ast *parse_statement(gml_lexer *l);

static gml_ast *parse_block(gml_lexer *l) {
    if (!consume_char(l, '{')) return NULL;
    gml_ast *block = ast_new(GML_AST_BLOCK);
    while (l->pos < l->len) {
        skip_space_comments(l);
        if (consume_char(l, '}')) return block;
        if (l->pos >= l->len) break;
        if (consume_char(l, ';')) continue;
        size_t before = l->pos;
        gml_ast *stmt = parse_statement(l);
        if (stmt) ast_add_child(block, stmt);
        if (l->pos == before) {
            snprintf(l->error, sizeof(l->error), "unexpected token at byte %zu", l->pos);
            break;
        }
    }
    if (!l->error[0]) snprintf(l->error, sizeof(l->error), "unterminated block");
    return block;
}

static gml_ast *parse_statement(gml_lexer *l) {
    skip_space_comments(l);
    if (l->pos >= l->len) return NULL;

    if (l->src[l->pos] == '{') return parse_block(l);

    if (consume_keyword(l, "return")) {
        gml_ast *ret = ast_new(GML_AST_RETURN);
        if (ret) ret->left = parse_expression(l);
        consume_char(l, ';');
        return ret;
    }
    if (consume_keyword(l, "exit")) {
        gml_ast *node = ast_new(GML_AST_EXIT);
        consume_char(l, ';');
        return node;
    }
    if (consume_keyword(l, "break")) {
        gml_ast *node = ast_new(GML_AST_BREAK);
        consume_char(l, ';');
        return node;
    }
    if (consume_keyword(l, "continue")) {
        gml_ast *node = ast_new(GML_AST_CONTINUE);
        consume_char(l, ';');
        return node;
    }
    if (consume_keyword(l, "if")) {
        gml_ast *node = ast_new(GML_AST_IF);
        node->left = parse_expression(l);
        consume_keyword(l, "then");
        node->right = parse_statement(l);
        if (consume_keyword(l, "else")) ast_add_child(node, parse_statement(l));
        return node;
    }
    if (consume_keyword(l, "while")) {
        gml_ast *node = ast_new(GML_AST_WHILE);
        node->left = parse_expression(l);
        node->right = parse_statement(l);
        return node;
    }
    if (consume_keyword(l, "do")) {
        gml_ast *node = ast_new(GML_AST_DO_UNTIL);
        node->right = parse_statement(l);
        if (!consume_keyword(l, "until")) snprintf(l->error, sizeof(l->error), "expected 'until' after do body");
        node->left = parse_expression(l);
        consume_char(l, ';');
        return node;
    }
    if (consume_keyword(l, "for")) {
        gml_ast *node = ast_new(GML_AST_FOR);
        if (!consume_char(l, '(')) snprintf(l->error, sizeof(l->error), "expected '(' after for");
        gml_ast *init = parse_expression(l);
        if (!consume_char(l, ';')) snprintf(l->error, sizeof(l->error), "expected ';' after for initializer");
        gml_ast *condition = parse_expression(l);
        if (!consume_char(l, ';')) snprintf(l->error, sizeof(l->error), "expected ';' after for condition");
        gml_ast *post = parse_expression(l);
        if (!consume_char(l, ')')) snprintf(l->error, sizeof(l->error), "expected ')' after for clauses");
        if (!init) init = ast_new(GML_AST_NUMBER);
        if (!condition) {
            condition = ast_new(GML_AST_NUMBER);
            if (condition) condition->number = 1.0;
        }
        if (!post) post = ast_new(GML_AST_NUMBER);
        ast_add_child(node, init);
        ast_add_child(node, condition);
        ast_add_child(node, post);
        ast_add_child(node, parse_statement(l));
        return node;
    }
    if (consume_keyword(l, "repeat")) {
        gml_ast *node = ast_new(GML_AST_REPEAT);
        node->left = parse_expression(l);
        node->right = parse_statement(l);
        return node;
    }
    if (consume_keyword(l, "with")) {
        gml_ast *node = ast_new(GML_AST_WITH);
        if (!consume_char(l, '(')) snprintf(l->error, sizeof(l->error), "expected '(' after with");
        node->left = parse_expression(l);
        if (!consume_char(l, ')')) snprintf(l->error, sizeof(l->error), "expected ')' after with target");
        node->right = parse_statement(l);
        return node;
    }

    gml_ast *expr = parse_expression(l);
    if (expr) {
        consume_char(l, ';');
        gml_ast *stmt = ast_new(GML_AST_EXPR_STMT);
        if (stmt) stmt->left = expr;
        return stmt;
    }

    return NULL;
}

int gml_parse_program(const char *code, gml_ast **out_ast, char *errbuf, size_t errbuf_size) {
    if (!code || !out_ast) {
        if (errbuf && errbuf_size > 0) snprintf(errbuf, errbuf_size, "invalid argument");
        return 0;
    }
    gml_lexer l = { code, 0, strlen(code), {0} };
    gml_ast *block = ast_new(GML_AST_BLOCK);

    while (l.pos < l.len) {
        skip_space_comments(&l);
        if (l.pos >= l.len) break;
        if (l.src[l.pos] == ';') { l.pos++; continue; }
        size_t before = l.pos;
        gml_ast *stmt = parse_statement(&l);
        if (stmt) ast_add_child(block, stmt);
        if (l.error[0]) break;
        if (l.pos == before) {
            snprintf(l.error, sizeof(l.error), "unexpected token at byte %zu", l.pos);
            break;
        }
    }

    if (l.error[0]) {
        if (errbuf && errbuf_size > 0) snprintf(errbuf, errbuf_size, "%s", l.error);
        gml_ast_free(block);
        *out_ast = NULL;
        return 0;
    }

    *out_ast = block;
    return 1;
}
