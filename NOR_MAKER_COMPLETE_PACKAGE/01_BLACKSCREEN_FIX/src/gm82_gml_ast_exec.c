#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define GM82_GML_EXEC_MAX_STEPS 100000
#define GM82_GML_SOURCE_MAX 8192

typedef struct {
    char *data;
    size_t size;
    size_t used;
} source_buf;

static bool emit(source_buf *b, const char *s) {
    size_t n = strlen(s);
    if (!b || b->used + n + 1 > b->size) return false;
    memcpy(b->data + b->used, s, n); b->used += n; b->data[b->used] = 0; return true;
}
static bool emit_char(source_buf *b, char c) {
    if (!b || b->used + 2 > b->size) return false;
    b->data[b->used++] = c; b->data[b->used] = 0; return true;
}
static bool emit_node(source_buf *b, const gm82_gml_ast *n);
static bool emit_list(source_buf *b, const gm82_gml_ast *n, const char *separator) {
    bool first = true;
    for (; n; n = n->next) {
        if (!first && !emit(b, separator)) return false;
        if (!emit_node(b, n)) return false;
        first = false;
    }
    return true;
}
static bool emit_quoted(source_buf *b, const char *s) {
    if (!emit_char(b, '"')) return false;
    for (; s && *s; s++) {
        if (*s == '"' || *s == '\\') { if (!emit_char(b, '\\')) return false; }
        if (*s == '\n') { if (!emit(b, "\\n")) return false; }
        else if (*s == '\r') { if (!emit(b, "\\r")) return false; }
        else if (*s == '\t') { if (!emit(b, "\\t")) return false; }
        else if (!emit_char(b, *s)) return false;
    }
    return emit_char(b, '"');
}
static bool emit_node(source_buf *b, const gm82_gml_ast *n) {
    char number[64];
    if (!n) return emit(b, "0");
    switch (n->kind) {
        case GM82_AST_NUMBER: snprintf(number, sizeof(number), "%.17g", n->number); return emit(b, number);
        case GM82_AST_STRING: return emit_quoted(b, n->text);
        case GM82_AST_IDENTIFIER: return emit(b, n->text ? n->text : "");
        case GM82_AST_MEMBER: return emit_node(b, n->a) && emit_char(b, '.') && emit(b, n->text ? n->text : "");
        case GM82_AST_INDEX: return emit_node(b, n->a) && emit_char(b, '[') && emit_node(b, n->b) &&
            (n->c ? (emit(b, ", ") && emit_node(b, n->c)) : true) && emit_char(b, ']');
        case GM82_AST_CALL: return emit_node(b, n->a) && emit_char(b, '(') && emit_list(b, n->b, ", ") && emit_char(b, ')');
        case GM82_AST_UNARY:
            return emit(b, n->text ? n->text : "") &&
                   (n->text && (!strcmp(n->text, "not") || !strcmp(n->text, "and") || !strcmp(n->text, "or")) ? emit_char(b, ' ') : true) &&
                   emit_node(b, n->a);
        case GM82_AST_BINARY:
            return emit_char(b, '(') && emit_node(b, n->a) && emit_char(b, ' ') &&
                   emit(b, n->text ? n->text : "") && emit_char(b, ' ') &&
                   emit_node(b, n->b) && emit_char(b, ')');
        case GM82_AST_ASSIGN: return emit_node(b, n->a) && emit(b, n->text ? n->text : "=") && emit_node(b, n->b);
        case GM82_AST_EXPR_STMT: return emit_node(b, n->a) && emit_char(b, ';');
        case GM82_AST_BLOCK: return emit_char(b, '{') && emit_list(b, n->a, " ") && emit_char(b, '}');
        case GM82_AST_IF: return emit(b, "if (") && emit_node(b, n->a) && emit(b, ") ") && emit_node(b, n->b) && (n->c ? (emit(b, " else ") && emit_node(b, n->c)) : true);
        case GM82_AST_WHILE: return emit(b, "while (") && emit_node(b, n->a) && emit(b, ") ") && emit_node(b, n->b);
        case GM82_AST_DO_UNTIL: return emit(b, "do ") && emit_node(b, n->a) && emit(b, " until (") && emit_node(b, n->b) && emit(b, ");");
        case GM82_AST_REPEAT: return emit(b, "repeat (") && emit_node(b, n->a) && emit(b, ") ") && emit_node(b, n->b);
        case GM82_AST_FOR: return emit(b, "for (") && (n->a ? emit_node(b, n->a) : true) && emit(b, ";") && (n->b ? emit_node(b, n->b) : true) && emit(b, ";") && (n->c ? emit_node(b, n->c) : true) && emit(b, ") ") && emit_node(b, n->d);
        case GM82_AST_WITH: return emit(b, "with (") && emit_node(b, n->a) && emit(b, ") ") && emit_node(b, n->b);
        case GM82_AST_SWITCH: {
            if (!emit(b, "switch (") || !emit_node(b, n->a) || !emit(b, ") {")) return false;
            for (const gm82_gml_ast *item = n->b; item; item = item->next) {
                if (!emit_char(b, ' ') || !emit_node(b, item)) return false;
            }
            return emit(b, " }");
        }
        case GM82_AST_SWITCH_CASE:
            if (n->a && (!emit(b, "case ") || !emit_node(b, n->a))) return false;
            if (!n->a && !emit(b, "default")) return false;
            return emit_char(b, ':') && emit_node(b, n->b);
        case GM82_AST_RETURN: return emit(b, "return") && (n->a ? (emit_char(b, ' ') && emit_node(b, n->a)) : true) && emit_char(b, ';');
        case GM82_AST_BREAK: return emit(b, "break;");
        case GM82_AST_CONTINUE: return emit(b, "continue;");
        default: return false;
    }
}

bool gm82_gml_ast_to_source(const gm82_gml_ast *n, char *out, size_t size) {
    if (!out || size == 0) return false;
    source_buf b = { out, size, 0 }; out[0] = 0; return emit_node(&b, n);
}
static bool eval_bool(gm82_runtime *rt, gm82_instance *self, const gm82_gml_ast *n, bool *value) {
    char source[GM82_GML_SOURCE_MAX]; double result = 0;
    if (!gm82_gml_eval_ast_expr(rt, self, n, &result) &&
        (!gm82_gml_ast_to_source(n, source, sizeof(source)) ||
         !gm82_gml_eval_expr(rt, self, source, &result))) return false;
    *value = result != 0.0; return true;
}
static bool eval_number(gm82_runtime *rt, gm82_instance *self, const gm82_gml_ast *n, double *value) {
    char source[GM82_GML_SOURCE_MAX];
    if (gm82_gml_eval_ast_expr(rt, self, n, value)) return true;
    return gm82_gml_ast_to_source(n, source, sizeof(source)) &&
           gm82_gml_eval_expr(rt, self, source, value);
}
static bool execute_expression(gm82_runtime *rt, gm82_instance *self, const gm82_gml_ast *n) {
    char source[GM82_GML_SOURCE_MAX];
    if (gm82_gml_eval_ast_stmt(rt, self, n)) return true;
    return gm82_gml_ast_to_source(n, source, sizeof(source)) &&
           gm82_gml_eval_stmt(rt, self, source);
}

static bool execute_node(gm82_runtime *rt, gm82_instance *self, const gm82_gml_ast *n, gm82_gml_exec_result *r) {
    if (!n || r->returned || r->broke || r->continued) return true;
    if (++r->steps > GM82_GML_EXEC_MAX_STEPS) return false;
    switch (n->kind) {
        case GM82_AST_BLOCK:
            for (const gm82_gml_ast *s = n->a; s; s = s->next) if (!execute_node(rt, self, s, r)) return false;
            return true;
        case GM82_AST_EXPR_STMT: {
            char source[GM82_GML_SOURCE_MAX];
            if (gm82_gml_eval_ast_stmt(rt, self, n->a)) return true;
            return gm82_gml_ast_to_source(n->a, source, sizeof(source)) &&
                   gm82_gml_eval_stmt(rt, self, source);
        }
        case GM82_AST_IF: {
            bool condition; if (!eval_bool(rt, self, n->a, &condition)) return false;
            return execute_node(rt, self, condition ? n->b : n->c, r);
        }
        case GM82_AST_WHILE: {
            bool condition;
            while (!(r->returned || r->broke) && (!eval_bool(rt, self, n->a, &condition) ? false : condition)) {
                r->continued = false; if (!execute_node(rt, self, n->b, r)) return false;
            }
            r->broke = false; return true;
        }
        case GM82_AST_DO_UNTIL: {
            bool condition = false;
            do {
                r->continued = false;
                if (!execute_node(rt, self, n->a, r)) return false;
                if (r->broke) { r->broke = false; return true; }
                if (!eval_bool(rt, self, n->b, &condition)) return false;
                r->continued = false;
            } while (!condition && !r->returned);
            return true;
        }
        case GM82_AST_REPEAT: {
            double count; if (!eval_number(rt, self, n->a, &count)) return false;
            if (count < 0) count = 0;
            if (count > GM82_GML_EXEC_MAX_STEPS) return false;
            for (int i = 0; i < (int)count && !r->returned; i++) { r->continued = false; if (!execute_node(rt, self, n->b, r)) return false; if (r->broke) { r->broke = false; break; } }
            return true;
        }
        case GM82_AST_FOR: {
            if (n->a && !execute_expression(rt, self, n->a)) return false;
            bool condition = true;
            while (!r->returned && !r->broke && condition) {
                if (n->b && !eval_bool(rt, self, n->b, &condition)) return false;
                if (!condition) break;
                r->continued = false; if (!execute_node(rt, self, n->d, r)) return false;
                if (r->broke) { r->broke = false; break; }
                if (n->c && !execute_expression(rt, self, n->c)) return false;
            }
            return true;
        }
        case GM82_AST_WITH: {
            char source[GM82_GML_SOURCE_MAX];
            return gm82_gml_ast_to_source(n, source, sizeof(source)) && gm82_gml_eval_stmt(rt, self, source);
        }
        case GM82_AST_SWITCH: {
            double selector = 0;
            if (!eval_number(rt, self, n->a, &selector)) return false;
            const gm82_gml_ast *selected = NULL, *fallback = NULL;
            for (const gm82_gml_ast *item = n->b; item; item = item->next) {
                if (!item->a) { fallback = item; continue; }
                double label = 0;
                if (!eval_number(rt, self, item->a, &label)) return false;
                if (selector == label) { selected = item; break; }
            }
            if (!selected) selected = fallback;
            for (const gm82_gml_ast *item = selected; item && !r->returned && !r->continued; item = item->next) {
                if (!execute_node(rt, self, item->b, r)) return false;
                if (r->broke) { r->broke = false; break; }
            }
            return true;
        }
        case GM82_AST_RETURN: {
            double value = 0; if (n->a && !eval_number(rt, self, n->a, &value)) return false;
            r->returned = true; r->return_value = value; return true;
        }
        case GM82_AST_BREAK: r->broke = true; return true;
        case GM82_AST_CONTINUE: r->continued = true; return true;
        case GM82_AST_ASSIGN:
        case GM82_AST_CALL:
        case GM82_AST_BINARY:
        case GM82_AST_UNARY:
        case GM82_AST_MEMBER:
        case GM82_AST_INDEX:
            return execute_expression(rt, self, n);
        default: return false;
    }
}

bool gm82_gml_execute_ast(gm82_runtime *rt, gm82_instance *self, const gm82_gml_ast *program, gm82_gml_exec_result *result) {
    if (!rt || !program || !result) return false;
    memset(result, 0, sizeof(*result));
    if (!execute_node(rt, self, program, result)) return false;
    if (result->broke || result->continued) return false;
    return result->steps <= GM82_GML_EXEC_MAX_STEPS;
}
