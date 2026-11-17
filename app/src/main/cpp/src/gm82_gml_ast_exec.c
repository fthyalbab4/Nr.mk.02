#include "gm82_gml_parser.h"
#include "gm82_gml_eval.h"
#include "gm82_gml_builtins.h"
#include <stdio.h>
#include <string.h>

#define GM82_GML_SOURCE_MAX 8192
#define GM82_GML_EXEC_MAX_STEPS 100000

typedef struct {
    char *out;
    size_t cap;
    size_t len;
} source_buf;

static bool emit_char(source_buf *b, char c) {
    if (b->len + 1 >= b->cap) return false;
    b->out[b->len++] = c;
    b->out[b->len] = '\0';
    return true;
}

static bool emit(source_buf *b, const char *s) {
    if (!s) return true;
    size_t n = strlen(s);
    if (b->len + n >= b->cap) return false;
    memcpy(b->out + b->len, s, n);
    b->len += n;
    b->out[b->len] = '\0';
    return true;
}

static bool emit_node(source_buf *b, const gm82_gml_ast *n);

static bool emit_node(source_buf *b, const gm82_gml_ast *n) {
    if (!n) return true;
    char tmp[64];
    switch (n->kind) {
        case GM82_AST_NUMBER:
            snprintf(tmp, sizeof(tmp), "%.15g", n->number);
            return emit(b, tmp);
        case GM82_AST_STRING:
            if (!emit_char(b, '"')) return false;
            for (const char *p = n->text ? n->text : ""; *p; p++) {
                if (*p == '"' || *p == '\\') {
                    if (!emit_char(b, '\\')) return false;
                }
                if (!emit_char(b, *p)) return false;
            }
            return emit_char(b, '"');
        case GM82_AST_IDENTIFIER:
            return emit(b, n->text ? n->text : "");
        case GM82_AST_MEMBER:
            return emit_node(b, n->a) && emit_char(b, '.') && emit(b, n->text ? n->text : "");
        case GM82_AST_INDEX:
            if (!emit_node(b, n->a) || !emit_char(b, '[') || !emit_node(b, n->b)) return false;
            if (n->c && (!emit(b, ", ") || !emit_node(b, n->c))) return false;
            return emit_char(b, ']');
        case GM82_AST_CALL:
            if (!emit_node(b, n->a) || !emit_char(b, '(')) return false;
            for (const gm82_gml_ast *arg = n->b; arg; arg = arg->next) {
                if (arg != n->b && !emit(b, ", ")) return false;
                if (!emit_node(b, arg)) return false;
            }
            return emit_char(b, ')');
        case GM82_AST_UNARY:
            return emit_char(b, '(') && emit(b, n->text ? n->text : "") &&
                   emit_char(b, ' ') && emit_node(b, n->a) && emit_char(b, ')');
        case GM82_AST_BINARY:
            return emit_char(b, '(') && emit_node(b, n->a) && emit_char(b, ' ') &&
                   emit(b, n->text ? n->text : "") && emit_char(b, ' ') &&
                   emit_node(b, n->b) && emit_char(b, ')');
        case GM82_AST_ASSIGN:
            return emit_node(b, n->a) && emit_char(b, ' ') &&
                   emit(b, n->text ? n->text : "=") && emit_char(b, ' ') &&
                   emit_node(b, n->b);
        case GM82_AST_EXPR_STMT:
            return emit_node(b, n->a) && emit_char(b, ';');
        case GM82_AST_VAR_DECL:
        case GM82_AST_GLOBALVAR_DECL:
            if (!emit(b, n->kind == GM82_AST_GLOBALVAR_DECL ? "globalvar " : "var ")) return false;
            for (const gm82_gml_ast *it = n->a; it; it = it->next) {
                if (it != n->a && !emit(b, ", ")) return false;
                if (!emit_node(b, it)) return false;
            }
            return emit_char(b, ';');
        case GM82_AST_BLOCK:
            if (!emit_char(b, '{')) return false;
            for (const gm82_gml_ast *s = n->a; s; s = s->next) {
                if (!emit_char(b, ' ') || !emit_node(b, s)) return false;
            }
            return emit(b, " }");
        case GM82_AST_IF:
            if (!emit(b, "if (") || !emit_node(b, n->a) || !emit(b, ") ") || !emit_node(b, n->b)) return false;
            return n->c ? (emit(b, " else ") && emit_node(b, n->c)) : true;
        case GM82_AST_WHILE:
            return emit(b, "while (") && emit_node(b, n->a) && emit(b, ") ") && emit_node(b, n->b);
        case GM82_AST_DO_UNTIL:
            return emit(b, "do ") && emit_node(b, n->a) && emit(b, " until (") &&
                   emit_node(b, n->b) && emit_char(b, ')');
        case GM82_AST_REPEAT:
            return emit(b, "repeat (") && emit_node(b, n->a) && emit(b, ") ") && emit_node(b, n->b);
        case GM82_AST_FOR:
            if (!emit(b, "for (")) return false;
            if (n->a && !emit_node(b, n->a)) return false;
            if (!emit(b, "; ")) return false;
            if (n->b && !emit_node(b, n->b)) return false;
            if (!emit(b, "; ")) return false;
            if (n->c && !emit_node(b, n->c)) return false;
            return emit(b, ") ") && emit_node(b, n->d);
        case GM82_AST_WITH:
            return emit(b, "with (") && emit_node(b, n->a) && emit(b, ") ") && emit_node(b, n->b);
        case GM82_AST_SWITCH:
            if (!emit(b, "switch (") || !emit_node(b, n->a) || !emit(b, ") {")) return false;
            for (const gm82_gml_ast *item = n->b; item; item = item->next) {
                if (!emit_char(b, ' ') || !emit_node(b, item)) return false;
            }
            return emit(b, " }");
        case GM82_AST_SWITCH_CASE:
            if (n->a && (!emit(b, "case ") || !emit_node(b, n->a))) return false;
            if (!n->a && !emit(b, "default")) return false;
            return emit_char(b, ':') && emit_node(b, n->b);
        case GM82_AST_RETURN:
            return emit(b, "return") && (n->a ? (emit_char(b, ' ') && emit_node(b, n->a)) : true) && emit_char(b, ';');
        case GM82_AST_BREAK: return emit(b, "break;");
        case GM82_AST_CONTINUE: return emit(b, "continue;");
        default: return false;
    }
}

bool gm82_gml_ast_to_source(const gm82_gml_ast *n, char *out, size_t size) {
    if (!out || size == 0) return false;
    source_buf b = { out, size, 0 };
    out[0] = '\0';
    return emit_node(&b, n);
}

static bool eval_bool(gm82_runtime *rt, gm82_instance *self, const gm82_gml_ast *n, bool *value) {
    char source[GM82_GML_SOURCE_MAX];
    double result = 0.0;
    if (!gm82_gml_eval_ast_expr(rt, self, n, &result) &&
        (!gm82_gml_ast_to_source(n, source, sizeof(source)) ||
         !gm82_gml_eval_expr(rt, self, source, &result))) {
        return false;
    }
    *value = result != 0.0;
    return true;
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

static gm82_instance *find_alive_id(gm82_runtime *rt, int id) {
    if (!rt) return NULL;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive && rt->instances[i].id == id) return &rt->instances[i];
    }
    return NULL;
}

static int with_special_target(const char *source) {
    const char *start = source ? source : "";
    while (*start == ' ' || *start == '\t' || *start == '\n' || *start == '\r') start++;
    size_t n = strlen(start);
    while (n > 0 && (start[n - 1] == ' ' || start[n - 1] == '\t' ||
                     start[n - 1] == '\n' || start[n - 1] == '\r')) n--;
    if (n == 4 && strncmp(start, "self", n) == 0) return -1;
    if (n == 5 && strncmp(start, "other", n) == 0) return -2;
    if (n == 3 && strncmp(start, "all", n) == 0) return -3;
    if (n == 5 && strncmp(start, "noone", n) == 0) return -4;
    return 0;
}

static bool execute_node(gm82_runtime *rt, gm82_instance *self, const gm82_gml_ast *n, gm82_gml_exec_result *r) {
    if (!n || r->returned || r->broke || r->continued) return true;
    if (++r->steps > GM82_GML_EXEC_MAX_STEPS) return false;
    switch (n->kind) {
        case GM82_AST_BLOCK:
            for (const gm82_gml_ast *s = n->a; s; s = s->next) {
                if (!execute_node(rt, self, s, r)) return false;
                if (r->returned || r->broke || r->continued) break;
            }
            return true;
        case GM82_AST_EXPR_STMT:
            return execute_expression(rt, self, n->a);
        case GM82_AST_VAR_DECL:
        case GM82_AST_GLOBALVAR_DECL:
            return gm82_gml_eval_ast_stmt(rt, self, n);
        case GM82_AST_IF: {
            bool condition = false;
            if (!eval_bool(rt, self, n->a, &condition)) return false;
            return execute_node(rt, self, condition ? n->b : n->c, r);
        }
        case GM82_AST_WHILE: {
            bool condition = false;
            while (!(r->returned || r->broke) && eval_bool(rt, self, n->a, &condition) && condition) {
                r->continued = false;
                if (!execute_node(rt, self, n->b, r)) return false;
            }
            r->broke = false;
            return true;
        }
        case GM82_AST_DO_UNTIL: {
            bool condition = false;
            do {
                r->continued = false;
                if (!execute_node(rt, self, n->a, r)) return false;
                if (r->broke) { r->broke = false; return true; }
                if (!eval_bool(rt, self, n->b, &condition)) return false;
            } while (!condition && !r->returned);
            return true;
        }
        case GM82_AST_REPEAT: {
            double count = 0.0;
            if (!eval_number(rt, self, n->a, &count)) return false;
            if (count < 0.0) count = 0.0;
            if (count > GM82_GML_EXEC_MAX_STEPS) return false;
            for (int i = 0; i < (int)count && !r->returned; i++) {
                r->continued = false;
                if (!execute_node(rt, self, n->b, r)) return false;
                if (r->broke) { r->broke = false; break; }
            }
            return true;
        }
        case GM82_AST_FOR: {
            if (n->a && !execute_expression(rt, self, n->a)) return false;
            bool condition = true;
            while (!r->returned && !r->broke && condition) {
                if (n->b && !eval_bool(rt, self, n->b, &condition)) return false;
                if (!condition) break;
                r->continued = false;
                if (!execute_node(rt, self, n->d, r)) return false;
                if (r->broke) { r->broke = false; break; }
                if (n->c && !execute_expression(rt, self, n->c)) return false;
            }
            return true;
        }
        case GM82_AST_WITH: {
            double target_value = 0.0;
            char target_source[GM82_GML_SOURCE_MAX];
            if (!gm82_gml_ast_to_source(n->a, target_source, sizeof(target_source)) ||
                !eval_number(rt, self, n->a, &target_value)) return false;
            gm82_instance *previous_self = self;
            gm82_instance *previous_other = gm82_gml_get_other();
            int special = with_special_target(target_source);
            int target = (int)target_value;
            int ids[2048], count = 0;
            int limit = rt ? (rt->instance_count > 2048 ? 2048 : rt->instance_count) : 0;
            for (int i = 0; i < limit; i++) {
                gm82_instance *candidate = &rt->instances[i];
                bool match = candidate->alive &&
                    (special == -3 || (special == 0 && target == -3) ||
                     (special == -1 && candidate == previous_self) ||
                     (special == -2 && previous_other && candidate == previous_other) ||
                     (special == -4 ? false :
                      (special == 0 && target != -3 && target != -4 &&
                       gm82_instance_matches_object(rt, candidate, target))));
                if (match && count < 2048) ids[count++] = candidate->id;
            }
            gm82_gml_set_other(previous_self);
            bool ok = true;
            for (int i = 0; i < count && ok && !r->returned; i++) {
                gm82_instance *current = find_alive_id(rt, ids[i]);
                if (!current) continue;
                gm82_gml_set_self(current);
                ok = execute_node(rt, current, n->b, r);
                if (r->broke || r->continued) break;
            }
            gm82_gml_set_self(previous_self);
            gm82_gml_set_other(previous_other);
            r->broke = false;
            r->continued = false;
            return ok;
        }
        case GM82_AST_SWITCH: {
            double selector = 0.0;
            if (!eval_number(rt, self, n->a, &selector)) return false;
            const gm82_gml_ast *selected = NULL, *fallback = NULL;
            for (const gm82_gml_ast *item = n->b; item; item = item->next) {
                if (!item->a) { fallback = item; continue; }
                double label = 0.0;
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
            double value = 0.0;
            if (n->a && !eval_number(rt, self, n->a, &value)) return false;
            r->returned = true;
            r->return_value = value;
            return true;
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
        default:
            return false;
    }
}

bool gm82_gml_execute_ast(gm82_runtime *rt, gm82_instance *self,
                          const gm82_gml_ast *program,
                          gm82_gml_exec_result *result) {
    if (!program || !result) return false;
    memset(result, 0, sizeof(*result));
    if (!execute_node(rt, self, program, result)) return false;
    if (result->broke || result->continued) return false;
    return result->steps <= GM82_GML_EXEC_MAX_STEPS;
}
