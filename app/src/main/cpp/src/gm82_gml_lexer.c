#include "gm82_gml_lexer.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void lex_error(gm82_gml_lexer *l, const char *msg) {
    if (l && !l->error[0]) {
        snprintf(l->error, sizeof(l->error), "%s at %d:%d", msg, l->line, l->column);
    }
}

static char peek_c(const gm82_gml_lexer *l) {
    return (l && l->offset < l->length) ? l->source[l->offset] : '\0';
}

static char peek_next_c(const gm82_gml_lexer *l) {
    return (l && l->offset + 1 < l->length) ? l->source[l->offset + 1] : '\0';
}

static char take_c(gm82_gml_lexer *l) {
    if (!l || l->offset >= l->length) return '\0';
    char c = l->source[l->offset++];
    if (c == '\n') {
        l->line++;
        l->column = 1;
    } else {
        l->column++;
    }
    return c;
}

static void skip_ws_and_comments(gm82_gml_lexer *l) {
    for (;;) {
        while (l->offset < l->length && isspace((unsigned char)peek_c(l))) {
            take_c(l);
        }
        if (peek_c(l) == '/' && peek_next_c(l) == '/') {
            take_c(l);
            take_c(l);
            while (l->offset < l->length && peek_c(l) != '\n') {
                take_c(l);
            }
            continue;
        }
        if (peek_c(l) == '/' && peek_next_c(l) == '*') {
            take_c(l);
            take_c(l);
            while (l->offset < l->length) {
                if (peek_c(l) == '*' && peek_next_c(l) == '/') {
                    take_c(l);
                    take_c(l);
                    break;
                }
                take_c(l);
            }
            continue;
        }
        break;
    }
}

void gm82_gml_lexer_init(gm82_gml_lexer *lexer, const char *source) {
    if (!lexer) return;
    memset(lexer, 0, sizeof(*lexer));
    lexer->source = source ? source : "";
    lexer->length = strlen(lexer->source);
    lexer->line = 1;
    lexer->column = 1;
}

const char *gm82_gml_lexer_error(const gm82_gml_lexer *lexer) {
    return lexer ? lexer->error : "invalid lexer";
}

const char *gm82_gml_token_kind_name(gm82_gml_token_kind k) {
    switch (k) {
        case GM82_TOK_EOF: return "eof";
        case GM82_TOK_NUMBER: return "number";
        case GM82_TOK_STRING: return "string";
        case GM82_TOK_IDENTIFIER: return "identifier";
        case GM82_TOK_PLUS: return "+";
        case GM82_TOK_MINUS: return "-";
        case GM82_TOK_STAR: return "*";
        case GM82_TOK_SLASH: return "/";
        case GM82_TOK_PERCENT: return "%";
        case GM82_TOK_DIV: return "div";
        case GM82_TOK_MOD: return "mod";
        case GM82_TOK_ASSIGN: return "=";
        case GM82_TOK_PLUS_ASSIGN: return "+=";
        case GM82_TOK_MINUS_ASSIGN: return "-=";
        case GM82_TOK_STAR_ASSIGN: return "*=";
        case GM82_TOK_SLASH_ASSIGN: return "/=";
        case GM82_TOK_EQUAL: return "==";
        case GM82_TOK_NOT_EQUAL: return "!=";
        case GM82_TOK_LESS: return "<";
        case GM82_TOK_LESS_EQUAL: return "<=";
        case GM82_TOK_GREATER: return ">";
        case GM82_TOK_GREATER_EQUAL: return ">=";
        case GM82_TOK_AND: return "&&";
        case GM82_TOK_OR: return "||";
        case GM82_TOK_XOR: return "xor";
        case GM82_TOK_NOT: return "!";
        case GM82_TOK_BIT_AND: return "&";
        case GM82_TOK_BIT_OR: return "|";
        case GM82_TOK_BIT_XOR: return "^";
        case GM82_TOK_BIT_NOT: return "~";
        case GM82_TOK_SHL: return "<<";
        case GM82_TOK_SHR: return ">>";
        case GM82_TOK_LPAREN: return "(";
        case GM82_TOK_RPAREN: return ")";
        case GM82_TOK_LBRACE: return "{";
        case GM82_TOK_RBRACE: return "}";
        case GM82_TOK_LBRACKET: return "[";
        case GM82_TOK_RBRACKET: return "]";
        case GM82_TOK_COMMA: return ",";
        case GM82_TOK_DOT: return ".";
        case GM82_TOK_SEMICOLON: return ";";
        case GM82_TOK_COLON: return ":";
        default: return "unknown";
    }
}

bool gm82_gml_lexer_next(gm82_gml_lexer *l, gm82_gml_token *t) {
    if (!l || !t) return false;
    memset(t, 0, sizeof(*t));
    skip_ws_and_comments(l);

    t->offset = l->offset;
    t->line = l->line;
    t->column = l->column;

    if (l->offset >= l->length) {
        t->kind = GM82_TOK_EOF;
        return true;
    }

    char c = peek_c(l);

    /* Hex literal $RRGGBB or $FF */
    if (c == '$') {
        take_c(l);
        if (!isxdigit((unsigned char)peek_c(l))) {
            lex_error(l, "expected hex digits after '$'");
            return false;
        }
        unsigned long long val = 0;
        size_t pos = 0;
        if (pos < sizeof(t->text) - 1) t->text[pos++] = '$';
        while (isxdigit((unsigned char)peek_c(l))) {
            char hc = take_c(l);
            if (pos < sizeof(t->text) - 1) t->text[pos++] = hc;
            unsigned digit = (unsigned)(isdigit((unsigned char)hc) ? (hc - '0')
                                         : (tolower((unsigned char)hc) - 'a' + 10));
            val = (val << 4) | digit;
        }
        t->text[pos] = '\0';
        t->kind = GM82_TOK_NUMBER;
        t->number = (double)val;
        return true;
    }

    /* Numeric literal (including 0xFF and .5) */
    if (isdigit((unsigned char)c) || (c == '.' && isdigit((unsigned char)peek_next_c(l)))) {
        const char *start = l->source + l->offset;
        char *end = NULL;
        double val = 0.0;
        if (c == '0' && (peek_next_c(l) == 'x' || peek_next_c(l) == 'X')) {
            unsigned long long hval = strtoull(start, &end, 16);
            val = (double)hval;
        } else {
            val = strtod(start, &end);
        }
        if (!end || end == start) {
            lex_error(l, "invalid number literal");
            return false;
        }
        size_t n = (size_t)(end - start);
        for (size_t i = 0; i < n; i++) take_c(l);
        size_t copy_n = n < sizeof(t->text) - 1 ? n : sizeof(t->text) - 1;
        memcpy(t->text, start, copy_n);
        t->text[copy_n] = '\0';
        t->kind = GM82_TOK_NUMBER;
        t->number = val;
        return true;
    }

    /* String literal "..." or '...' */
    if (c == '"' || c == '\'') {
        char quote = take_c(l);
        size_t pos = 0;
        while (l->offset < l->length && peek_c(l) != quote) {
            char ch = take_c(l);
            if (ch == '\\' && l->offset < l->length && peek_c(l) != '\n') {
                char esc = take_c(l);
                if (esc == 'n') ch = '\n';
                else if (esc == 't') ch = '\t';
                else ch = esc;
            }
            if (pos + 1 < sizeof(t->text)) {
                t->text[pos++] = ch;
            }
        }
        if (peek_c(l) != quote) {
            lex_error(l, "unterminated string literal");
            return false;
        }
        take_c(l);
        t->text[pos] = '\0';
        t->kind = GM82_TOK_STRING;
        return true;
    }

    /* Identifier or keyword */
    if (isalpha((unsigned char)c) || c == '_') {
        size_t pos = 0;
        while (isalnum((unsigned char)peek_c(l)) || peek_c(l) == '_') {
            char ic = take_c(l);
            if (pos + 1 < sizeof(t->text)) t->text[pos++] = ic;
        }
        t->text[pos] = '\0';
        if (strcmp(t->text, "and") == 0) t->kind = GM82_TOK_AND;
        else if (strcmp(t->text, "or") == 0) t->kind = GM82_TOK_OR;
        else if (strcmp(t->text, "xor") == 0) t->kind = GM82_TOK_XOR;
        else if (strcmp(t->text, "not") == 0) t->kind = GM82_TOK_NOT;
        else if (strcmp(t->text, "div") == 0) t->kind = GM82_TOK_DIV;
        else if (strcmp(t->text, "mod") == 0) t->kind = GM82_TOK_MOD;
        else if (strcmp(t->text, "begin") == 0) t->kind = GM82_TOK_LBRACE;
        else if (strcmp(t->text, "end") == 0) t->kind = GM82_TOK_RBRACE;
        else t->kind = GM82_TOK_IDENTIFIER;
        return true;
    }

    take_c(l);
    switch (c) {
        case '+':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_PLUS_ASSIGN; }
            else t->kind = GM82_TOK_PLUS;
            break;
        case '-':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_MINUS_ASSIGN; }
            else t->kind = GM82_TOK_MINUS;
            break;
        case '*':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_STAR_ASSIGN; }
            else t->kind = GM82_TOK_STAR;
            break;
        case '/':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_SLASH_ASSIGN; }
            else t->kind = GM82_TOK_SLASH;
            break;
        case '%':
            t->kind = GM82_TOK_PERCENT;
            break;
        case '=':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_EQUAL; }
            else t->kind = GM82_TOK_ASSIGN;
            break;
        case ':':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_ASSIGN; }
            else t->kind = GM82_TOK_COLON;
            break;
        case '!':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_NOT_EQUAL; }
            else t->kind = GM82_TOK_NOT;
            break;
        case '<':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_LESS_EQUAL; }
            else if (peek_c(l) == '>') { take_c(l); t->kind = GM82_TOK_NOT_EQUAL; }
            else if (peek_c(l) == '<') { take_c(l); t->kind = GM82_TOK_SHL; }
            else t->kind = GM82_TOK_LESS;
            break;
        case '>':
            if (peek_c(l) == '=') { take_c(l); t->kind = GM82_TOK_GREATER_EQUAL; }
            else if (peek_c(l) == '>') { take_c(l); t->kind = GM82_TOK_SHR; }
            else t->kind = GM82_TOK_GREATER;
            break;
        case '&':
            if (peek_c(l) == '&') { take_c(l); t->kind = GM82_TOK_AND; }
            else t->kind = GM82_TOK_BIT_AND;
            break;
        case '|':
            if (peek_c(l) == '|') { take_c(l); t->kind = GM82_TOK_OR; }
            else t->kind = GM82_TOK_BIT_OR;
            break;
        case '^':
            if (peek_c(l) == '^') { take_c(l); t->kind = GM82_TOK_XOR; }
            else t->kind = GM82_TOK_BIT_XOR;
            break;
        case '~': t->kind = GM82_TOK_BIT_NOT; break;
        case '(': t->kind = GM82_TOK_LPAREN; break;
        case ')': t->kind = GM82_TOK_RPAREN; break;
        case '{': t->kind = GM82_TOK_LBRACE; break;
        case '}': t->kind = GM82_TOK_RBRACE; break;
        case '[': t->kind = GM82_TOK_LBRACKET; break;
        case ']': t->kind = GM82_TOK_RBRACKET; break;
        case ',': t->kind = GM82_TOK_COMMA; break;
        case '.': t->kind = GM82_TOK_DOT; break;
        case ';': t->kind = GM82_TOK_SEMICOLON; break;
        default:
            lex_error(l, "unexpected character");
            return false;
    }
    return true;
}
