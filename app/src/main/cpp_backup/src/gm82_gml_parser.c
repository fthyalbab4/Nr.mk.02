#include "gm82_gml_parser.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void lex_error(gm82_gml_lexer *l, const char *msg) {
    if (!l->error[0]) snprintf(l->error, sizeof(l->error), "%s at %d:%d", msg, l->line, l->column);
}

void gm82_gml_lexer_init(gm82_gml_lexer *l, const char *source) {
    memset(l, 0, sizeof(*l));
    l->source = source ? source : "";
    l->length = strlen(l->source);
    l->line = 1;
    l->column = 1;
}

static char peek(const gm82_gml_lexer *l) { return l->offset < l->length ? l->source[l->offset] : '\0'; }
static char peek2(const gm82_gml_lexer *l) { return l->offset + 1 < l->length ? l->source[l->offset + 1] : '\0'; }
static char take(gm82_gml_lexer *l) {
    char c = peek(l);
    if (!c) return c;
    l->offset++;
    if (c == '\n') { l->line++; l->column = 1; } else l->column++;
    return c;
}

static void skip_space(gm82_gml_lexer *l) {
    for (;;) {
        while (isspace((unsigned char)peek(l))) take(l);
        if (peek(l) == '/' && peek2(l) == '/') {
            while (peek(l) && peek(l) != '\n') take(l);
            continue;
        }
        if (peek(l) == '/' && peek2(l) == '*') {
            take(l); take(l);
            while (peek(l) && !(peek(l) == '*' && peek2(l) == '/')) take(l);
            if (!peek(l)) { lex_error(l, "unterminated comment"); return; }
            take(l); take(l);
            continue;
        }
        break;
    }
}

static void token_init(gm82_gml_token *t, gm82_gml_token_kind kind, size_t off, int line, int col) {
    memset(t, 0, sizeof(*t)); t->kind = kind; t->offset = off; t->line = line; t->column = col;
}
bool gm82_gml_lexer_next(gm82_gml_lexer *l, gm82_gml_token *t) {
    if (!l || !t) return false;
    skip_space(l);
    size_t off = l->offset; int line = l->line, col = l->column;
    char c = peek(l);
    if (!c) { token_init(t, GM82_TOK_EOF, off, line, col); return !l->error[0]; }
    if (isalpha((unsigned char)c) || c == '_') {
        size_t n = 0; token_init(t, GM82_TOK_IDENTIFIER, off, line, col);
        while (isalnum((unsigned char)peek(l)) || peek(l) == '_') { if (n + 1 < sizeof(t->text)) t->text[n++] = take(l); else take(l); }
        t->text[n] = 0; return true;
    }
    if (isdigit((unsigned char)c) || (c == '.' && isdigit((unsigned char)peek2(l)))) {
        char buf[96]; size_t n = 0; token_init(t, GM82_TOK_NUMBER, off, line, col);
        while (isdigit((unsigned char)peek(l)) || peek(l) == '.' || peek(l) == 'e' || peek(l) == 'E' || peek(l) == '+' || peek(l) == '-') {
            char q = peek(l); if ((q == '+' || q == '-') && n > 0 && buf[n-1] != 'e' && buf[n-1] != 'E') break;
            if (n + 1 < sizeof(buf)) buf[n++] = take(l); else take(l);
        }
        buf[n] = 0; char *end = NULL; t->number = strtod(buf, &end);
        if (!end || *end) { lex_error(l, "invalid number"); return false; }
        snprintf(t->text, sizeof(t->text), "%s", buf); return true;
    }
    if (c == '\'' || c == '"') {
        char quote = take(l); size_t n = 0; token_init(t, GM82_TOK_STRING, off, line, col);
        while (peek(l) && peek(l) != quote) {
            char q = take(l);
            if (q == '\\') {
                q = take(l); if (!q) { lex_error(l, "unterminated string"); return false; }
                if (q == 'n') q = '\n'; else if (q == 'r') q = '\r'; else if (q == 't') q = '\t';
            }
            if (n + 1 < sizeof(t->text)) t->text[n++] = q;
        }
        if (take(l) != quote) { lex_error(l, "unterminated string"); return false; }
        t->text[n] = 0; return true;
    }
    token_init(t, GM82_TOK_EOF, off, line, col); take(l);
    switch (c) {
        case '+': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_PLUS_ASSIGN) : GM82_TOK_PLUS; break;
        case '-': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_MINUS_ASSIGN) : GM82_TOK_MINUS; break;
        case '*': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_STAR_ASSIGN) : GM82_TOK_STAR; break;
        case '/': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_SLASH_ASSIGN) : GM82_TOK_SLASH; break;
        case '%': t->kind = GM82_TOK_PERCENT; break;
        case '=': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_EQUAL) : GM82_TOK_ASSIGN; break;
        case '!': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_NOT_EQUAL) : GM82_TOK_NOT; break;
        case '<': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_LESS_EQUAL) : GM82_TOK_LESS; break;
        case '>': t->kind = (peek(l) == '=') ? (take(l), GM82_TOK_GREATER_EQUAL) : GM82_TOK_GREATER; break;
        case '&': if (peek(l) != '&') { lex_error(l, "expected &&"); return false; } take(l); t->kind = GM82_TOK_AND; break;
        case '|': if (peek(l) != '|') { lex_error(l, "expected ||"); return false; } take(l); t->kind = GM82_TOK_OR; break;
        case '(': t->kind = GM82_TOK_LPAREN; break; case ')': t->kind = GM82_TOK_RPAREN; break;
        case '{': t->kind = GM82_TOK_LBRACE; break; case '}': t->kind = GM82_TOK_RBRACE; break;
        case '[': t->kind = GM82_TOK_LBRACKET; break; case ']': t->kind = GM82_TOK_RBRACKET; break;
        case ',': t->kind = GM82_TOK_COMMA; break; case '.': t->kind = GM82_TOK_DOT; break;
        case ';': t->kind = GM82_TOK_SEMICOLON; break; case ':': t->kind = GM82_TOK_COLON; break;
        default: lex_error(l, "unexpected character"); return false;
    }
    return true;
}

const char *gm82_gml_lexer_error(const gm82_gml_lexer *l) { return l ? l->error : "invalid lexer"; }
const char *gm82_gml_token_kind_name(gm82_gml_token_kind k) {
    static const char *names[] = {"eof","number","string","identifier","+","-","*","/","%","=","+=","-=","*=","/=","==","!=","<","<=",">",">=","&&","||","!","(",")","{","}","[","]",",",".",";",":"};
    return (k >= 0 && k <= GM82_TOK_COLON) ? names[k] : "unknown";
}

static gm82_gml_ast *node(gm82_gml_ast_kind kind, const gm82_gml_token *t) {
    gm82_gml_ast *n = (gm82_gml_ast *)calloc(1, sizeof(*n)); if (!n) return NULL;
    n->kind = kind; if (t) { n->line = t->line; n->column = t->column; }
    return n;
}
static char *copy_text(const char *s) { size_t n = strlen(s) + 1; char *p = (char *)malloc(n); if (p) memcpy(p, s, n); return p; }
static void parser_error(gm82_gml_parser *p, const char *msg) {
    if (!p->error[0]) snprintf(p->error, sizeof(p->error), "%s at %d:%d", msg, p->current.line, p->current.column);
}
static bool advance(gm82_gml_parser *p) { return gm82_gml_lexer_next(&p->lexer, &p->current); }
static bool accept(gm82_gml_parser *p, gm82_gml_token_kind k) { if (p->current.kind != k) return false; advance(p); return true; }
static bool expect(gm82_gml_parser *p, gm82_gml_token_kind k) { if (accept(p, k)) return true; parser_error(p, "unexpected token"); return false; }

static gm82_gml_ast *expression(gm82_gml_parser *p);
static gm82_gml_ast *statement(gm82_gml_parser *p);

static gm82_gml_ast *primary(gm82_gml_parser *p) {
    gm82_gml_token t = p->current; gm82_gml_ast *n = NULL;
    if (accept(p, GM82_TOK_NUMBER)) { n = node(GM82_AST_NUMBER, &t); if (n) n->number = t.number; return n; }
    if (accept(p, GM82_TOK_STRING)) { n = node(GM82_AST_STRING, &t); if (n) n->text = copy_text(t.text); return n; }
    if (accept(p, GM82_TOK_IDENTIFIER)) { n = node(GM82_AST_IDENTIFIER, &t); if (n) n->text = copy_text(t.text); }
    else if (accept(p, GM82_TOK_LPAREN)) { n = expression(p); if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; } }
    else { parser_error(p, "expected expression"); return NULL; }
    for (;;) {
        if (accept(p, GM82_TOK_DOT)) {
            gm82_gml_token m = p->current; if (!expect(p, GM82_TOK_IDENTIFIER)) { gm82_gml_ast_free(n); return NULL; }
            gm82_gml_ast *q = node(GM82_AST_MEMBER, &m); if (!q) { gm82_gml_ast_free(n); return NULL; }
            q->a = n; q->text = copy_text(m.text); n = q;
        } else if (accept(p, GM82_TOK_LBRACKET)) {
            gm82_gml_ast *q = node(GM82_AST_INDEX, &t); q->a = n; q->b = expression(p);
            if (!q->b || !expect(p, GM82_TOK_RBRACKET)) { gm82_gml_ast_free(q); return NULL; } n = q;
        } else if (accept(p, GM82_TOK_LPAREN)) {
            gm82_gml_ast *q = node(GM82_AST_CALL, &t), *head = NULL, *tail = NULL;
            if (!q) { gm82_gml_ast_free(n); return NULL; }
            q->a = n;
            if (p->current.kind != GM82_TOK_RPAREN) for (;;) {
                gm82_gml_ast *arg = expression(p); if (!arg) { gm82_gml_ast_free(q); gm82_gml_ast_free(head); return NULL; }
                if (!head) head = arg; else tail->next = arg; tail = arg;
                if (!accept(p, GM82_TOK_COMMA)) break;
            }
            q->b = head;
            if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(q); return NULL; } n = q;
        } else break;
    }
    return n;
}

static gm82_gml_ast *unary(gm82_gml_parser *p) {
    bool word_not = p->current.kind == GM82_TOK_IDENTIFIER && strcmp(p->current.text, "not") == 0;
    if (p->current.kind == GM82_TOK_MINUS || p->current.kind == GM82_TOK_PLUS || p->current.kind == GM82_TOK_NOT || word_not) {
        gm82_gml_token t = p->current; advance(p); gm82_gml_ast *n = node(GM82_AST_UNARY, &t); if (!n) return NULL;
        n->text = word_not ? copy_text("!") : copy_text(gm82_gml_token_kind_name(t.kind));
        n->a = unary(p); if (!n->a) { gm82_gml_ast_free(n); return NULL; } return n;
        n->text = copy_text(gm82_gml_token_kind_name(t.kind)); n->a = unary(p); if (!n->a) { gm82_gml_ast_free(n); return NULL; } return n;
        n->text = copy_text(word_not ? "!" : gm82_gml_token_kind_name(t.kind)); n->a = unary(p); if (!n->a) { gm82_gml_ast_free(n); return NULL; } return n;
    }
    return primary(p);
}
static gm82_gml_ast *binary_level(gm82_gml_parser *p, gm82_gml_ast *(*sub)(gm82_gml_parser *), gm82_gml_token_kind k1, gm82_gml_token_kind k2) {
    gm82_gml_ast *left = sub(p); if (!left) return NULL;
    while (p->current.kind == k1 || p->current.kind == k2) {
        gm82_gml_token t = p->current; advance(p); gm82_gml_ast *right = sub(p); if (!right) { gm82_gml_ast_free(left); return NULL; }
        gm82_gml_ast *n = node(GM82_AST_BINARY, &t); if (!n) { gm82_gml_ast_free(left); gm82_gml_ast_free(right); return NULL; }
        n->text = copy_text(gm82_gml_token_kind_name(t.kind)); n->a = left; n->b = right; left = n;
    }
    return left;
}
static gm82_gml_ast *mul(gm82_gml_parser *p) { return binary_level(p, unary, GM82_TOK_STAR, GM82_TOK_SLASH); }
static gm82_gml_ast *add(gm82_gml_parser *p) { return binary_level(p, mul, GM82_TOK_PLUS, GM82_TOK_MINUS); }
static gm82_gml_ast *compare(gm82_gml_parser *p) {
    gm82_gml_ast *left = add(p); if (!left) return NULL;
    while (p->current.kind >= GM82_TOK_EQUAL && p->current.kind <= GM82_TOK_GREATER_EQUAL) {
        gm82_gml_token t = p->current; advance(p); gm82_gml_ast *right = add(p); if (!right) { gm82_gml_ast_free(left); return NULL; }
        gm82_gml_ast *n = node(GM82_AST_BINARY, &t); if (!n) { gm82_gml_ast_free(left); gm82_gml_ast_free(right); return NULL; }
        n->text = copy_text(gm82_gml_token_kind_name(t.kind)); n->a = left; n->b = right; left = n;
    }
    return left;
}
static gm82_gml_ast *logic(gm82_gml_parser *p) {
    gm82_gml_ast *left = compare(p); if (!left) return NULL;
    while (p->current.kind == GM82_TOK_AND || p->current.kind == GM82_TOK_OR ||
           (p->current.kind == GM82_TOK_IDENTIFIER &&
            (!strcmp(p->current.text, "and") || !strcmp(p->current.text, "or")))) {
        gm82_gml_token t = p->current;
        bool is_and = (t.kind == GM82_TOK_AND || (t.kind == GM82_TOK_IDENTIFIER && !strcmp(t.text, "and")));
        advance(p);
        gm82_gml_ast *right = compare(p); if (!right) { gm82_gml_ast_free(left); return NULL; }
        gm82_gml_ast *n = node(GM82_AST_BINARY, &t); if (!n) { gm82_gml_ast_free(left); gm82_gml_ast_free(right); return NULL; }
        n->text = is_and ? copy_text("&&") : copy_text("||");
        n->a = left; n->b = right; left = n;
        gm82_gml_token t = p->current; advance(p); gm82_gml_ast *right = compare(p); if (!right) { gm82_gml_ast_free(left); return NULL; }
        gm82_gml_ast *n = node(GM82_AST_BINARY, &t); if (!n) { gm82_gml_ast_free(left); gm82_gml_ast_free(right); return NULL; }
        n->text = copy_text(gm82_gml_token_kind_name(t.kind)); n->a = left; n->b = right; left = n;
        const char *op_repr = (t.kind == GM82_TOK_IDENTIFIER) ? (!strcmp(t.text, "and") ? "&&" : "||") : gm82_gml_token_kind_name(t.kind);
        n->text = copy_text(op_repr); n->a = left; n->b = right; left = n;
    }
    return left;
}
static gm82_gml_ast *expression(gm82_gml_parser *p) { return logic(p); }

static gm82_gml_ast *block(gm82_gml_parser *p) {
    gm82_gml_ast *b = node(GM82_AST_BLOCK, &p->current), *head = NULL, *tail = NULL;
    if (!b || !expect(p, GM82_TOK_LBRACE)) { gm82_gml_ast_free(b); return NULL; }
    while (p->current.kind != GM82_TOK_RBRACE && p->current.kind != GM82_TOK_EOF) {
        gm82_gml_ast *s = statement(p); if (!s) { gm82_gml_ast_free(b); gm82_gml_ast_free(head); return NULL; }
        if (!head) head = s; else tail->next = s; tail = s;
    }
    if (!expect(p, GM82_TOK_RBRACE)) { gm82_gml_ast_free(b); gm82_gml_ast_free(head); return NULL; }
    b->a = head; return b;
}
static gm82_gml_ast *body(gm82_gml_parser *p) { return p->current.kind == GM82_TOK_LBRACE ? block(p) : statement(p); }
static gm82_gml_ast *assignment_expression(gm82_gml_parser *p) {
    gm82_gml_token start = p->current;
    gm82_gml_ast *left = expression(p);
    if (!left) return NULL;
    if (p->current.kind == GM82_TOK_ASSIGN ||
        (p->current.kind >= GM82_TOK_PLUS_ASSIGN && p->current.kind <= GM82_TOK_SLASH_ASSIGN)) {
        gm82_gml_token op = p->current; advance(p);
        gm82_gml_ast *right = expression(p);
        gm82_gml_ast *n = node(GM82_AST_ASSIGN, &op);
        if (!right || !n) { gm82_gml_ast_free(left); gm82_gml_ast_free(right); gm82_gml_ast_free(n); return NULL; }
        n->text = copy_text(gm82_gml_token_kind_name(op.kind)); n->a = left; n->b = right; return n;
    }
    (void)start;
    return left;
}
static gm82_gml_ast *statement(gm82_gml_parser *p) {
    gm82_gml_token t = p->current;
    if (accept(p, GM82_TOK_SEMICOLON)) return node(GM82_AST_BLOCK, &t);
    if (p->current.kind == GM82_TOK_LBRACE) return block(p);
    if (p->current.kind == GM82_TOK_IDENTIFIER) {
        if (!strcmp(p->current.text, "if")) { advance(p); gm82_gml_ast *n = node(GM82_AST_IF, &t); if (accept(p, GM82_TOK_LPAREN)) { n->a = expression(p); if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; } } else n->a = expression(p); n->b = body(p); if (p->current.kind == GM82_TOK_IDENTIFIER && !strcmp(p->current.text, "else")) { advance(p); n->c = body(p); } return n; }
        if (!strcmp(p->current.text, "while")) { advance(p); gm82_gml_ast *n = node(GM82_AST_WHILE, &t); if (!expect(p, GM82_TOK_LPAREN)) return n; n->a = expression(p); if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; } n->b = body(p); return n; }
        if (!strcmp(p->current.text, "do")) { advance(p); gm82_gml_ast *n = node(GM82_AST_DO_UNTIL, &t); n->a = body(p); if (p->current.kind != GM82_TOK_IDENTIFIER || strcmp(p->current.text, "until")) { parser_error(p, "expected until"); gm82_gml_ast_free(n); return NULL; } advance(p); if (!expect(p, GM82_TOK_LPAREN)) { gm82_gml_ast_free(n); return NULL; } n->b = expression(p); if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; } return n; }
        if (!strcmp(p->current.text, "repeat")) { advance(p); gm82_gml_ast *n = node(GM82_AST_REPEAT, &t); if (!expect(p, GM82_TOK_LPAREN)) return n; n->a = expression(p); if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; } n->b = body(p); return n; }
        if (!strcmp(p->current.text, "with")) { advance(p); gm82_gml_ast *n = node(GM82_AST_WITH, &t); if (!expect(p, GM82_TOK_LPAREN)) return n; n->a = expression(p); if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; } n->b = body(p); return n; }
        if (!strcmp(p->current.text, "for")) {
            advance(p); gm82_gml_ast *n = node(GM82_AST_FOR, &t);
            if (!expect(p, GM82_TOK_LPAREN)) { gm82_gml_ast_free(n); return NULL; }
            if (p->current.kind != GM82_TOK_SEMICOLON) n->a = assignment_expression(p);
            if (!expect(p, GM82_TOK_SEMICOLON)) { gm82_gml_ast_free(n); return NULL; }
            if (p->current.kind != GM82_TOK_SEMICOLON) n->b = expression(p);
            if (!expect(p, GM82_TOK_SEMICOLON)) { gm82_gml_ast_free(n); return NULL; }
            if (p->current.kind != GM82_TOK_RPAREN) n->c = assignment_expression(p);
            if (!expect(p, GM82_TOK_RPAREN)) { gm82_gml_ast_free(n); return NULL; }
            n->d = body(p); return n;
        }
        if (!strcmp(p->current.text, "return")) { advance(p); gm82_gml_ast *n = node(GM82_AST_RETURN, &t); if (p->current.kind != GM82_TOK_SEMICOLON && p->current.kind != GM82_TOK_RBRACE && p->current.kind != GM82_TOK_EOF) n->a = expression(p); accept(p, GM82_TOK_SEMICOLON); return n; }
        if (!strcmp(p->current.text, "break")) { advance(p); gm82_gml_ast *n = node(GM82_AST_BREAK, &t); accept(p, GM82_TOK_SEMICOLON); return n; }
        if (!strcmp(p->current.text, "continue")) { advance(p); gm82_gml_ast *n = node(GM82_AST_CONTINUE, &t); accept(p, GM82_TOK_SEMICOLON); return n; }
    }
    gm82_gml_ast *left = assignment_expression(p); if (!left) return NULL;
    accept(p, GM82_TOK_SEMICOLON); gm82_gml_ast *s = node(GM82_AST_EXPR_STMT, &t); if (!s) { gm82_gml_ast_free(left); return NULL; } s->a = left; return s;
}

void gm82_gml_parser_init(gm82_gml_parser *p, const char *source) { memset(p, 0, sizeof(*p)); gm82_gml_lexer_init(&p->lexer, source); advance(p); }
gm82_gml_ast *gm82_gml_parse_program(gm82_gml_parser *p) {
    if (!p) return NULL;
    gm82_gml_ast *root = node(GM82_AST_BLOCK, &p->current), *head = NULL, *tail = NULL;
    if (!root) return NULL;
    while (p->current.kind != GM82_TOK_EOF) { gm82_gml_ast *s = statement(p); if (!s) { gm82_gml_ast_free(root); gm82_gml_ast_free(head); return NULL; } if (!head) head = s; else tail->next = s; tail = s; }
    if (p->lexer.error[0]) { snprintf(p->error, sizeof(p->error), "%s", p->lexer.error); gm82_gml_ast_free(root); gm82_gml_ast_free(head); return NULL; }
    root->a = head; return root;
}
const char *gm82_gml_parser_error(const gm82_gml_parser *p) { return p ? p->error : "invalid parser"; }
const char *gm82_gml_ast_kind_name(gm82_gml_ast_kind k) {
    switch (k) { case GM82_AST_BLOCK:return "block"; case GM82_AST_NUMBER:return "number"; case GM82_AST_STRING:return "string"; case GM82_AST_IDENTIFIER:return "identifier"; case GM82_AST_MEMBER:return "member"; case GM82_AST_INDEX:return "index"; case GM82_AST_CALL:return "call"; case GM82_AST_UNARY:return "unary"; case GM82_AST_BINARY:return "binary"; case GM82_AST_ASSIGN:return "assign"; case GM82_AST_EXPR_STMT:return "expr_stmt"; case GM82_AST_IF:return "if"; case GM82_AST_WHILE:return "while"; case GM82_AST_DO_UNTIL:return "do_until"; case GM82_AST_REPEAT:return "repeat"; case GM82_AST_FOR:return "for"; case GM82_AST_WITH:return "with"; case GM82_AST_RETURN:return "return"; case GM82_AST_BREAK:return "break"; case GM82_AST_CONTINUE:return "continue"; default:return "unknown"; }
}
void gm82_gml_ast_free(gm82_gml_ast *n) {
    while (n) { gm82_gml_ast *next = n->next; gm82_gml_ast_free(n->a); gm82_gml_ast_free(n->b); gm82_gml_ast_free(n->c); gm82_gml_ast_free(n->d); free(n->text); free(n); n = next; }
}
