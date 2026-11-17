#include "gm82_gml_parser.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static gm82_gml_ast *node(gm82_gml_ast_kind kind, const gm82_gml_token *t) {
    gm82_gml_ast *n = (gm82_gml_ast *)calloc(1, sizeof(*n));
    if (!n) return NULL;
    n->kind = kind;
    if (t) {
        n->line = t->line;
        n->column = t->column;
    }
    return n;
}

static char *copy_text(const char *s) {
    if (!s) s = "";
    size_t n = strlen(s) + 1;
    char *p = (char *)malloc(n);
    if (p) memcpy(p, s, n);
    return p;
}

static void append_node(gm82_gml_ast **head, gm82_gml_ast **tail, gm82_gml_ast *item) {
    if (!item) return;
    if (!*head) *head = item;
    else (*tail)->next = item;
    *tail = item;
}

static void parser_error(gm82_gml_parser *p, const char *msg) {
    if (!p->error[0]) {
        snprintf(p->error, sizeof(p->error), "%s at %d:%d", msg, p->current.line, p->current.column);
    }
}

static bool advance(gm82_gml_parser *p) {
    if (!gm82_gml_lexer_next(&p->lexer, &p->current)) {
        if (!p->error[0] && p->lexer.error[0]) {
            snprintf(p->error, sizeof(p->error), "%s", p->lexer.error);
        }
        return false;
    }
    return true;
}

static bool accept(gm82_gml_parser *p, gm82_gml_token_kind k) {
    if (p->current.kind != k) return false;
    return advance(p);
}

static bool expect(gm82_gml_parser *p, gm82_gml_token_kind k) {
    if (accept(p, k)) return true;
    parser_error(p, "unexpected token");
    return false;
}

static bool is_word(const gm82_gml_parser *p, const char *word) {
    return p->current.kind == GM82_TOK_IDENTIFIER && strcmp(p->current.text, word) == 0;
}

static char *operator_text(const gm82_gml_token *t) {
    if (!t) return copy_text("");
    if (t->kind == GM82_TOK_IDENTIFIER) return copy_text(t->text);
    return copy_text(gm82_gml_token_kind_name(t->kind));
}

static gm82_gml_ast *expression(gm82_gml_parser *p);
static gm82_gml_ast *statement(gm82_gml_parser *p);

static gm82_gml_ast *primary(gm82_gml_parser *p) {
    gm82_gml_token t = p->current;
    gm82_gml_ast *n = NULL;

    if (accept(p, GM82_TOK_NUMBER)) {
        n = node(GM82_AST_NUMBER, &t);
        if (n) n->number = t.number;
        return n;
    }
    if (accept(p, GM82_TOK_STRING)) {
        n = node(GM82_AST_STRING, &t);
        if (n) n->text = copy_text(t.text);
        return n;
    }
    if (accept(p, GM82_TOK_IDENTIFIER)) {
        n = node(GM82_AST_IDENTIFIER, &t);
        if (n) n->text = copy_text(t.text);
    } else if (accept(p, GM82_TOK_LPAREN)) {
        n = expression(p);
        if (!n || !expect(p, GM82_TOK_RPAREN)) {
            gm82_gml_ast_free(n);
            return NULL;
        }
    } else {
        parser_error(p, "expected expression");
        return NULL;
    }

    for (;;) {
        if (accept(p, GM82_TOK_DOT)) {
            gm82_gml_token m = p->current;
            if (!expect(p, GM82_TOK_IDENTIFIER)) {
                gm82_gml_ast_free(n);
                return NULL;
            }
            gm82_gml_ast *q = node(GM82_AST_MEMBER, &m);
            if (!q) { gm82_gml_ast_free(n); return NULL; }
            q->a = n;
            q->text = copy_text(m.text);
            n = q;
        } else if (accept(p, GM82_TOK_LBRACKET)) {
            gm82_gml_ast *q = node(GM82_AST_INDEX, &t);
            if (!q) { gm82_gml_ast_free(n); return NULL; }
            q->a = n;
            q->b = expression(p);
            if (!q->b) { gm82_gml_ast_free(q); return NULL; }
            if (accept(p, GM82_TOK_COMMA)) {
                q->c = expression(p);
                if (!q->c) { gm82_gml_ast_free(q); return NULL; }
            }
            if (!expect(p, GM82_TOK_RBRACKET)) {
                gm82_gml_ast_free(q);
                return NULL;
            }
            n = q;
        } else if (accept(p, GM82_TOK_LPAREN)) {
            gm82_gml_ast *q = node(GM82_AST_CALL, &t);
            gm82_gml_ast *head = NULL, *tail = NULL;
            if (!q) { gm82_gml_ast_free(n); return NULL; }
            q->a = n;
            if (p->current.kind != GM82_TOK_RPAREN) {
                for (;;) {
                    gm82_gml_ast *arg = expression(p);
                    if (!arg) { gm82_gml_ast_free(q); gm82_gml_ast_free(head); return NULL; }
                    append_node(&head, &tail, arg);
                    if (!accept(p, GM82_TOK_COMMA)) break;
                }
            }
            q->b = head;
            if (!expect(p, GM82_TOK_RPAREN)) {
                gm82_gml_ast_free(q);
                return NULL;
            }
            n = q;
        } else {
            break;
        }
    }
    return n;
}

static gm82_gml_ast *unary(gm82_gml_parser *p) {
    if (p->current.kind == GM82_TOK_MINUS || p->current.kind == GM82_TOK_PLUS ||
        p->current.kind == GM82_TOK_NOT || p->current.kind == GM82_TOK_BIT_NOT) {
        gm82_gml_token t = p->current;
        advance(p);
        gm82_gml_ast *n = node(GM82_AST_UNARY, &t);
        if (!n) return NULL;
        n->text = operator_text(&t);
        n->a = unary(p);
        if (!n->text || !n->a) { gm82_gml_ast_free(n); return NULL; }
        return n;
    }
    return primary(p);
}

static gm82_gml_ast *binary_level_from(gm82_gml_parser *p,
                                       gm82_gml_ast *left,
                                       gm82_gml_ast *(*sub)(gm82_gml_parser *),
                                       gm82_gml_token_kind k1,
                                       gm82_gml_token_kind k2,
                                       gm82_gml_token_kind k3,
                                       gm82_gml_token_kind k4,
                                       gm82_gml_token_kind k5) {
    if (!left) left = sub(p);
    if (!left) return NULL;
    while (p->current.kind == k1 || p->current.kind == k2 ||
           (k3 != GM82_TOK_EOF && p->current.kind == k3) ||
           (k4 != GM82_TOK_EOF && p->current.kind == k4) ||
           (k5 != GM82_TOK_EOF && p->current.kind == k5)) {
        gm82_gml_token t = p->current;
        advance(p);
        gm82_gml_ast *right = sub(p);
        if (!right) { gm82_gml_ast_free(left); return NULL; }
        gm82_gml_ast *n = node(GM82_AST_BINARY, &t);
        if (!n) { gm82_gml_ast_free(left); gm82_gml_ast_free(right); return NULL; }
        n->text = operator_text(&t);
        n->a = left;
        n->b = right;
        left = n;
    }
    return left;
}

static gm82_gml_ast *mul(gm82_gml_parser *p) {
    return binary_level_from(p, NULL, unary, GM82_TOK_STAR, GM82_TOK_SLASH, GM82_TOK_PERCENT, GM82_TOK_DIV, GM82_TOK_MOD);
}

static gm82_gml_ast *add(gm82_gml_parser *p) {
    return binary_level_from(p, NULL, mul, GM82_TOK_PLUS, GM82_TOK_MINUS, GM82_TOK_EOF, GM82_TOK_EOF, GM82_TOK_EOF);
}

static gm82_gml_ast *shift(gm82_gml_parser *p) {
    return binary_level_from(p, NULL, add, GM82_TOK_SHL, GM82_TOK_SHR, GM82_TOK_EOF, GM82_TOK_EOF, GM82_TOK_EOF);
}

static gm82_gml_ast *bitwise(gm82_gml_parser *p) {
    return binary_level_from(p, NULL, shift, GM82_TOK_BIT_AND, GM82_TOK_BIT_OR, GM82_TOK_BIT_XOR, GM82_TOK_EOF, GM82_TOK_EOF);
}

static gm82_gml_ast *compare_from(gm82_gml_parser *p, gm82_gml_ast *left) {
    if (!left) left = bitwise(p);
    if (!left) return NULL;
    while ((p->current.kind >= GM82_TOK_EQUAL && p->current.kind <= GM82_TOK_GREATER_EQUAL) ||
           p->current.kind == GM82_TOK_ASSIGN) {
        gm82_gml_token t = p->current;
        advance(p);
        gm82_gml_ast *right = bitwise(p);
        if (!right) { gm82_gml_ast_free(left); return NULL; }
        gm82_gml_ast *n = node(GM82_AST_BINARY, &t);
        if (!n) { gm82_gml_ast_free(left); gm82_gml_ast_free(right); return NULL; }
        n->text = copy_text(t.kind == GM82_TOK_ASSIGN ? "==" : gm82_gml_token_kind_name(t.kind));
        n->a = left;
        n->b = right;
        left = n;
    }
    return left;
}

static gm82_gml_ast *compare(gm82_gml_parser *p) {
    return compare_from(p, NULL);
}

static gm82_gml_ast *logic(gm82_gml_parser *p) {
    return binary_level_from(p, NULL, compare, GM82_TOK_AND, GM82_TOK_OR, GM82_TOK_XOR, GM82_TOK_EOF, GM82_TOK_EOF);
}

static gm82_gml_ast *expression(gm82_gml_parser *p) {
    return logic(p);
}

static gm82_gml_ast *block(gm82_gml_parser *p) {
    gm82_gml_ast *b = node(GM82_AST_BLOCK, &p->current);
    gm82_gml_ast *head = NULL, *tail = NULL;
    if (!b || !expect(p, GM82_TOK_LBRACE)) {
        gm82_gml_ast_free(b);
        return NULL;
    }
    while (p->current.kind != GM82_TOK_RBRACE && p->current.kind != GM82_TOK_EOF) {
        gm82_gml_ast *s = statement(p);
        if (!s) {
            gm82_gml_ast_free(b);
            gm82_gml_ast_free(head);
            return NULL;
        }
        append_node(&head, &tail, s);
    }
    if (!expect(p, GM82_TOK_RBRACE)) {
        gm82_gml_ast_free(b);
        gm82_gml_ast_free(head);
        return NULL;
    }
    b->a = head;
    return b;
}

static gm82_gml_ast *body(gm82_gml_parser *p) {
    return p->current.kind == GM82_TOK_LBRACE ? block(p) : statement(p);
}

static gm82_gml_ast *switch_case_body(gm82_gml_parser *p) {
    gm82_gml_ast *block_node = node(GM82_AST_BLOCK, &p->current);
    gm82_gml_ast *head = NULL, *tail = NULL;
    if (!block_node) return NULL;
    while (p->current.kind != GM82_TOK_RBRACE && p->current.kind != GM82_TOK_EOF &&
           !is_word(p, "case") && !is_word(p, "default")) {
        gm82_gml_ast *item = statement(p);
        if (!item) {
            gm82_gml_ast_free(block_node);
            gm82_gml_ast_free(head);
            return NULL;
        }
        append_node(&head, &tail, item);
    }
    block_node->a = head;
    return block_node;
}

static gm82_gml_ast *parse_switch(gm82_gml_parser *p, const gm82_gml_token *start) {
    gm82_gml_ast *sw = node(GM82_AST_SWITCH, start);
    gm82_gml_ast *head = NULL, *tail = NULL;
    if (!sw || !expect(p, GM82_TOK_LPAREN)) {
        gm82_gml_ast_free(sw);
        return NULL;
    }
    sw->a = expression(p);
    if (!sw->a || !expect(p, GM82_TOK_RPAREN) || !expect(p, GM82_TOK_LBRACE)) {
        gm82_gml_ast_free(sw);
        return NULL;
    }
    while (p->current.kind != GM82_TOK_RBRACE && p->current.kind != GM82_TOK_EOF) {
        gm82_gml_token case_token = p->current;
        gm82_gml_ast *item = node(GM82_AST_SWITCH_CASE, &case_token);
        if (!item) {
            gm82_gml_ast_free(sw);
            gm82_gml_ast_free(head);
            return NULL;
        }
        if (is_word(p, "case")) {
            advance(p);
            item->a = expression(p);
            if (!item->a || !expect(p, GM82_TOK_COLON)) {
                gm82_gml_ast_free(item);
                gm82_gml_ast_free(sw);
                gm82_gml_ast_free(head);
                return NULL;
            }
        } else if (is_word(p, "default")) {
            advance(p);
            if (!expect(p, GM82_TOK_COLON)) {
                gm82_gml_ast_free(item);
                gm82_gml_ast_free(sw);
                gm82_gml_ast_free(head);
                return NULL;
            }
        } else {
            parser_error(p, "expected case or default");
            gm82_gml_ast_free(item);
            gm82_gml_ast_free(sw);
            gm82_gml_ast_free(head);
            return NULL;
        }
        item->b = switch_case_body(p);
        if (!item->b) {
            gm82_gml_ast_free(item);
            gm82_gml_ast_free(sw);
            gm82_gml_ast_free(head);
            return NULL;
        }
        append_node(&head, &tail, item);
    }
    if (!expect(p, GM82_TOK_RBRACE)) {
        gm82_gml_ast_free(sw);
        gm82_gml_ast_free(head);
        return NULL;
    }
    sw->b = head;
    return sw;
}

static gm82_gml_ast *assignment_expression(gm82_gml_parser *p) {
    gm82_gml_ast *lhs = unary(p);
    if (!lhs) return NULL;
    if (p->current.kind == GM82_TOK_ASSIGN ||
        (p->current.kind >= GM82_TOK_PLUS_ASSIGN && p->current.kind <= GM82_TOK_SLASH_ASSIGN)) {
        gm82_gml_token op = p->current;
        advance(p);
        gm82_gml_ast *right = expression(p);
        gm82_gml_ast *n = node(GM82_AST_ASSIGN, &op);
        if (!right || !n) {
            gm82_gml_ast_free(lhs);
            gm82_gml_ast_free(right);
            gm82_gml_ast_free(n);
            return NULL;
        }
        n->text = copy_text(gm82_gml_token_kind_name(op.kind));
        n->a = lhs;
        n->b = right;
        return n;
    }
    lhs = binary_level_from(p, lhs, unary, GM82_TOK_STAR, GM82_TOK_SLASH, GM82_TOK_PERCENT, GM82_TOK_DIV, GM82_TOK_MOD);
    lhs = binary_level_from(p, lhs, mul, GM82_TOK_PLUS, GM82_TOK_MINUS, GM82_TOK_EOF, GM82_TOK_EOF, GM82_TOK_EOF);
    lhs = binary_level_from(p, lhs, add, GM82_TOK_SHL, GM82_TOK_SHR, GM82_TOK_EOF, GM82_TOK_EOF, GM82_TOK_EOF);
    lhs = binary_level_from(p, lhs, shift, GM82_TOK_BIT_AND, GM82_TOK_BIT_OR, GM82_TOK_BIT_XOR, GM82_TOK_EOF, GM82_TOK_EOF);
    lhs = compare_from(p, lhs);
    return binary_level_from(p, lhs, compare, GM82_TOK_AND, GM82_TOK_OR, GM82_TOK_XOR, GM82_TOK_EOF, GM82_TOK_EOF);
}

static gm82_gml_ast *parse_var_decl(gm82_gml_parser *p, const gm82_gml_token *start, bool is_global) {
    gm82_gml_ast *decl = node(is_global ? GM82_AST_GLOBALVAR_DECL : GM82_AST_VAR_DECL, start);
    gm82_gml_ast *head = NULL, *tail = NULL;
    if (!decl) return NULL;

    for (;;) {
        gm82_gml_token id_tok = p->current;
        if (!expect(p, GM82_TOK_IDENTIFIER)) {
            gm82_gml_ast_free(decl);
            gm82_gml_ast_free(head);
            return NULL;
        }
        gm82_gml_ast *ident = node(GM82_AST_IDENTIFIER, &id_tok);
        if (!ident) {
            gm82_gml_ast_free(decl);
            gm82_gml_ast_free(head);
            return NULL;
        }
        ident->text = copy_text(id_tok.text);

        if (p->current.kind == GM82_TOK_ASSIGN) {
            gm82_gml_token op = p->current;
            advance(p);
            gm82_gml_ast *rhs = expression(p);
            gm82_gml_ast *asgn = node(GM82_AST_ASSIGN, &op);
            if (!rhs || !asgn) {
                gm82_gml_ast_free(ident);
                gm82_gml_ast_free(rhs);
                gm82_gml_ast_free(asgn);
                gm82_gml_ast_free(decl);
                gm82_gml_ast_free(head);
                return NULL;
            }
            asgn->text = copy_text("=");
            asgn->a = ident;
            asgn->b = rhs;
            append_node(&head, &tail, asgn);
        } else {
            append_node(&head, &tail, ident);
        }

        if (!accept(p, GM82_TOK_COMMA)) break;
    }
    decl->a = head;
    return decl;
}

static gm82_gml_ast *statement(gm82_gml_parser *p) {
    gm82_gml_token t = p->current;
    if (accept(p, GM82_TOK_SEMICOLON)) return node(GM82_AST_BLOCK, &t);
    if (p->current.kind == GM82_TOK_LBRACE) return block(p);

    if (p->current.kind == GM82_TOK_IDENTIFIER) {
        if (strcmp(p->current.text, "var") == 0) {
            advance(p);
            gm82_gml_ast *v = parse_var_decl(p, &t, false);
            if (!v) return NULL;
            accept(p, GM82_TOK_SEMICOLON);
            return v;
        }
        if (strcmp(p->current.text, "globalvar") == 0) {
            advance(p);
            gm82_gml_ast *v = parse_var_decl(p, &t, true);
            if (!v) return NULL;
            accept(p, GM82_TOK_SEMICOLON);
            return v;
        }
        if (strcmp(p->current.text, "if") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_IF, &t);
            if (!n) return NULL;
            if (accept(p, GM82_TOK_LPAREN)) {
                n->a = expression(p);
                if (!n->a || !expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; }
            } else {
                n->a = expression(p);
                if (!n->a) { gm82_gml_ast_free(n); return NULL; }
            }
            if (is_word(p, "then")) advance(p);
            n->b = body(p);
            if (!n->b) { gm82_gml_ast_free(n); return NULL; }
            if (is_word(p, "else")) {
                advance(p);
                n->c = body(p);
                if (!n->c) { gm82_gml_ast_free(n); return NULL; }
            }
            return n;
        }
        if (strcmp(p->current.text, "while") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_WHILE, &t);
            if (!n) return NULL;
            if (accept(p, GM82_TOK_LPAREN)) {
                n->a = expression(p);
                if (!n->a || !expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; }
            } else {
                n->a = expression(p);
                if (!n->a) { gm82_gml_ast_free(n); return NULL; }
            }
            n->b = body(p);
            if (!n->b) { gm82_gml_ast_free(n); return NULL; }
            return n;
        }
        if (strcmp(p->current.text, "do") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_DO_UNTIL, &t);
            if (!n) return NULL;
            n->a = body(p);
            if (!n->a || !is_word(p, "until")) {
                parser_error(p, "expected until");
                gm82_gml_ast_free(n);
                return NULL;
            }
            advance(p);
            if (accept(p, GM82_TOK_LPAREN)) {
                n->b = expression(p);
                if (!n->b || !expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; }
            } else {
                n->b = expression(p);
                if (!n->b) { gm82_gml_ast_free(n); return NULL; }
            }
            accept(p, GM82_TOK_SEMICOLON);
            return n;
        }
        if (strcmp(p->current.text, "repeat") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_REPEAT, &t);
            if (!n) return NULL;
            if (accept(p, GM82_TOK_LPAREN)) {
                n->a = expression(p);
                if (!n->a || !expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; }
            } else {
                n->a = expression(p);
                if (!n->a) { gm82_gml_ast_free(n); return NULL; }
            }
            n->b = body(p);
            if (!n->b) { gm82_gml_ast_free(n); return NULL; }
            return n;
        }
        if (strcmp(p->current.text, "with") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_WITH, &t);
            if (!n) return NULL;
            if (accept(p, GM82_TOK_LPAREN)) {
                n->a = expression(p);
                if (!n->a || !expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; }
            } else {
                n->a = expression(p);
                if (!n->a) { gm82_gml_ast_free(n); return NULL; }
            }
            n->b = body(p);
            if (!n->b) { gm82_gml_ast_free(n); return NULL; }
            return n;
        }
        if (strcmp(p->current.text, "switch") == 0) {
            advance(p);
            return parse_switch(p, &t);
        }
        if (strcmp(p->current.text, "for") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_FOR, &t);
            if (!n || !expect(p, GM82_TOK_LPAREN)) { gm82_gml_ast_free(n); return NULL; }
            if (p->current.kind != GM82_TOK_SEMICOLON) {
                if (is_word(p, "var")) {
                    gm82_gml_token vt = p->current;
                    advance(p);
                    n->a = parse_var_decl(p, &vt, false);
                } else {
                    n->a = assignment_expression(p);
                }
                if (!n->a) { gm82_gml_ast_free(n); return NULL; }
            }
            if (!expect(p, GM82_TOK_SEMICOLON)) { gm82_gml_ast_free(n); return NULL; }
            if (p->current.kind != GM82_TOK_SEMICOLON) {
                n->b = expression(p);
                if (!n->b) { gm82_gml_ast_free(n); return NULL; }
            }
            if (!expect(p, GM82_TOK_SEMICOLON)) { gm82_gml_ast_free(n); return NULL; }
            if (p->current.kind != GM82_TOK_RPAREN) {
                n->c = assignment_expression(p);
                if (!n->c) { gm82_gml_ast_free(n); return NULL; }
            }
            if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; }
            n->d = body(p);
            if (!n->d) { gm82_gml_ast_free(n); return NULL; }
            return n;
        }
        if (strcmp(p->current.text, "return") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_RETURN, &t);
            if (!n) return NULL;
            if (p->current.kind != GM82_TOK_SEMICOLON &&
                p->current.kind != GM82_TOK_RBRACE &&
                p->current.kind != GM82_TOK_EOF) {
                n->a = expression(p);
                if (!n->a) { gm82_gml_ast_free(n); return NULL; }
            }
            accept(p, GM82_TOK_SEMICOLON);
            return n;
        }
        if (strcmp(p->current.text, "exit") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_RETURN, &t);
            accept(p, GM82_TOK_SEMICOLON);
            return n;
        }
        if (strcmp(p->current.text, "break") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_BREAK, &t);
            accept(p, GM82_TOK_SEMICOLON);
            return n;
        }
        if (strcmp(p->current.text, "continue") == 0) {
            advance(p);
            gm82_gml_ast *n = node(GM82_AST_CONTINUE, &t);
            accept(p, GM82_TOK_SEMICOLON);
            return n;
        }
    }

    gm82_gml_ast *left = assignment_expression(p);
    if (!left) return NULL;
    accept(p, GM82_TOK_SEMICOLON);
    gm82_gml_ast *s = node(GM82_AST_EXPR_STMT, &t);
    if (!s) { gm82_gml_ast_free(left); return NULL; }
    s->a = left;
    return s;
}

void gm82_gml_parser_init(gm82_gml_parser *p, const char *source) {
    if (!p) return;
    memset(p, 0, sizeof(*p));
    gm82_gml_lexer_init(&p->lexer, source);
    advance(p);
}

gm82_gml_ast *gm82_gml_parse_program(gm82_gml_parser *p) {
    if (!p) return NULL;
    gm82_gml_ast *root = node(GM82_AST_BLOCK, &p->current);
    gm82_gml_ast *head = NULL, *tail = NULL;
    if (!root) return NULL;
    while (p->current.kind != GM82_TOK_EOF) {
        gm82_gml_ast *s = statement(p);
        if (!s) {
            gm82_gml_ast_free(root);
            gm82_gml_ast_free(head);
            return NULL;
        }
        append_node(&head, &tail, s);
    }
    if (p->lexer.error[0]) {
        snprintf(p->error, sizeof(p->error), "%s", p->lexer.error);
        gm82_gml_ast_free(root);
        gm82_gml_ast_free(head);
        return NULL;
    }
    root->a = head;
    return root;
}

const char *gm82_gml_parser_error(const gm82_gml_parser *p) {
    return p ? p->error : "invalid parser";
}

const char *gm82_gml_ast_kind_name(gm82_gml_ast_kind k) {
    switch (k) {
        case GM82_AST_BLOCK: return "block";
        case GM82_AST_NUMBER: return "number";
        case GM82_AST_STRING: return "string";
        case GM82_AST_IDENTIFIER: return "identifier";
        case GM82_AST_MEMBER: return "member";
        case GM82_AST_INDEX: return "index";
        case GM82_AST_CALL: return "call";
        case GM82_AST_UNARY: return "unary";
        case GM82_AST_BINARY: return "binary";
        case GM82_AST_ASSIGN: return "assign";
        case GM82_AST_EXPR_STMT: return "expr_stmt";
        case GM82_AST_VAR_DECL: return "var_decl";
        case GM82_AST_GLOBALVAR_DECL: return "globalvar_decl";
        case GM82_AST_IF: return "if";
        case GM82_AST_WHILE: return "while";
        case GM82_AST_DO_UNTIL: return "do_until";
        case GM82_AST_REPEAT: return "repeat";
        case GM82_AST_FOR: return "for";
        case GM82_AST_WITH: return "with";
        case GM82_AST_SWITCH: return "switch";
        case GM82_AST_SWITCH_CASE: return "switch_case";
        case GM82_AST_RETURN: return "return";
        case GM82_AST_BREAK: return "break";
        case GM82_AST_CONTINUE: return "continue";
        default: return "unknown";
    }
}

void gm82_gml_ast_free(gm82_gml_ast *n) {
    while (n) {
        gm82_gml_ast *next = n->next;
        gm82_gml_ast_free(n->a);
        gm82_gml_ast_free(n->b);
        gm82_gml_ast_free(n->c);
        gm82_gml_ast_free(n->d);
        free(n->text);
        free(n);
        n = next;
    }
}
