#include "gml_lexer.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void gml_lexer_init(gml_lexer *lexer, const char *source) {
    if (!lexer) return;
    lexer->source = source ? source : "";
    lexer->cursor = lexer->source;
    lexer->line = 1;
    lexer->col = 1;
}

static char peek(gml_lexer *l) {
    return *l->cursor;
}

static char peek_next(gml_lexer *l) {
    if (*l->cursor == '\0') return '\0';
    return *(l->cursor + 1);
}

static char advance(gml_lexer *l) {
    char c = *l->cursor;
    if (c != '\0') {
        l->cursor++;
        if (c == '\n') {
            l->line++;
            l->col = 1;
        } else {
            l->col++;
        }
    }
    return c;
}

static void skip_whitespace_and_comments(gml_lexer *l) {
    for (;;) {
        char c = peek(l);
        if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
            advance(l);
            continue;
        }
        if (c == '/' && peek_next(l) == '/') {
            /* Single line comment: // ... */
            advance(l);
            advance(l);
            while (peek(l) != '\0' && peek(l) != '\n') {
                advance(l);
            }
            continue;
        }
        if (c == '/' && peek_next(l) == '*') {
            /* Block comment */
            advance(l);
            advance(l);
            while (peek(l) != '\0') {
                if (peek(l) == '*' && peek_next(l) == '/') {
                    advance(l);
                    advance(l);
                    break;
                }
                advance(l);
            }
            continue;
        }
        break;
    }
}

static gml_token_type check_keyword(const char *str, size_t len) {
    if (len == 2) {
        if (memcmp(str, "if", 2) == 0) return GML_TOK_IF;
        if (memcmp(str, "do", 2) == 0) return GML_TOK_DO;
    } else if (len == 3) {
        if (memcmp(str, "for", 3) == 0) return GML_TOK_FOR;
    } else if (len == 4) {
        if (memcmp(str, "else", 4) == 0) return GML_TOK_ELSE;
        if (memcmp(str, "with", 4) == 0) return GML_TOK_WITH;
        if (memcmp(str, "exit", 4) == 0) return GML_TOK_EXIT;
    } else if (len == 5) {
        if (memcmp(str, "while", 5) == 0) return GML_TOK_WHILE;
        if (memcmp(str, "until", 5) == 0) return GML_TOK_UNTIL;
        if (memcmp(str, "break", 5) == 0) return GML_TOK_BREAK;
    } else if (len == 6) {
        if (memcmp(str, "repeat", 6) == 0) return GML_TOK_REPEAT;
        if (memcmp(str, "return", 6) == 0) return GML_TOK_RETURN;
    } else if (len == 8) {
        if (memcmp(str, "continue", 8) == 0) return GML_TOK_CONTINUE;
    }
    return GML_TOK_IDENT;
}

bool gml_lexer_next_token(gml_lexer *lexer, gml_token *tok) {
    if (!lexer || !tok) return false;
    skip_whitespace_and_comments(lexer);

    tok->start = lexer->cursor;
    tok->line = lexer->line;
    tok->col = lexer->col;
    tok->length = 0;
    tok->type = GML_TOK_UNKNOWN;
    memset(&tok->as, 0, sizeof(tok->as));

    char c = peek(lexer);
    if (c == '\0') {
        tok->type = GML_TOK_EOF;
        tok->length = 0;
        return true;
    }

    /* Numbers: integers or floats */
    if (isdigit((unsigned char)c) || (c == '.' && isdigit((unsigned char)peek_next(lexer)))) {
        bool is_float = false;
        const char *num_start = lexer->cursor;
        while (isdigit((unsigned char)peek(lexer))) {
            advance(lexer);
        }
        if (peek(lexer) == '.' && isdigit((unsigned char)peek_next(lexer))) {
            is_float = true;
            advance(lexer); /* eat '.' */
            while (isdigit((unsigned char)peek(lexer))) {
                advance(lexer);
            }
        }
        tok->length = (size_t)(lexer->cursor - num_start);
        char buf[64];
        if (tok->length < sizeof(buf)) {
            memcpy(buf, num_start, tok->length);
            buf[tok->length] = '\0';
            if (is_float) {
                tok->type = GML_TOK_REAL;
                tok->as.real_val = strtod(buf, NULL);
            } else {
                tok->type = GML_TOK_INT;
                tok->as.int_val = strtoll(buf, NULL, 10);
                tok->as.real_val = (double)tok->as.int_val;
            }
        }
        return true;
    }

    /* Strings: "..." or '...' */
    if (c == '"' || c == '\'') {
        char quote = advance(lexer);
        size_t str_pos = 0;
        while (peek(lexer) != '\0' && peek(lexer) != quote) {
            char ch = advance(lexer);
            if (ch == '\\' && peek(lexer) != '\0') {
                char esc = advance(lexer);
                switch (esc) {
                    case 'n': ch = '\n'; break;
                    case 'r': ch = '\r'; break;
                    case 't': ch = '\t'; break;
                    case '\\': ch = '\\'; break;
                    case '"': ch = '"'; break;
                    case '\'': ch = '\''; break;
                    default: ch = esc; break;
                }
            }
            if (str_pos < sizeof(tok->as.str_val) - 1) {
                tok->as.str_val[str_pos++] = ch;
            }
        }
        if (peek(lexer) == quote) {
            advance(lexer); /* eat closing quote */
        }
        tok->as.str_val[str_pos] = '\0';
        tok->type = GML_TOK_STRING;
        tok->length = (size_t)(lexer->cursor - tok->start);
        return true;
    }

    /* Identifiers and Keywords */
    if (isalpha((unsigned char)c) || c == '_') {
        const char *id_start = lexer->cursor;
        while (isalnum((unsigned char)peek(lexer)) || peek(lexer) == '_') {
            advance(lexer);
        }
        tok->length = (size_t)(lexer->cursor - id_start);
        if (tok->length < sizeof(tok->as.str_val)) {
            memcpy(tok->as.str_val, id_start, tok->length);
            tok->as.str_val[tok->length] = '\0';
        }
        tok->type = check_keyword(tok->as.str_val, tok->length);
        return true;
    }

    /* Two-character and Single-character Operators */
    advance(lexer);
    tok->length = 1;

    switch (c) {
        case '=':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_EQ; }
            else { tok->type = GML_TOK_ASSIGN; }
            break;
        case '+':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_PLUS_ASSIGN; }
            else { tok->type = GML_TOK_PLUS; }
            break;
        case '-':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_MINUS_ASSIGN; }
            else { tok->type = GML_TOK_MINUS; }
            break;
        case '*':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_MUL_ASSIGN; }
            else { tok->type = GML_TOK_STAR; }
            break;
        case '/':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_DIV_ASSIGN; }
            else { tok->type = GML_TOK_SLASH; }
            break;
        case '%': tok->type = GML_TOK_PERCENT; break;
        case '<':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_LTE; }
            else if (peek(lexer) == '>') { advance(lexer); tok->length = 2; tok->type = GML_TOK_NEQ; }
            else { tok->type = GML_TOK_LT; }
            break;
        case '>':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_GTE; }
            else { tok->type = GML_TOK_GT; }
            break;
        case '!':
            if (peek(lexer) == '=') { advance(lexer); tok->length = 2; tok->type = GML_TOK_NEQ; }
            else { tok->type = GML_TOK_NOT; }
            break;
        case '&':
            if (peek(lexer) == '&') { advance(lexer); tok->length = 2; tok->type = GML_TOK_AND; }
            else { tok->type = GML_TOK_UNKNOWN; }
            break;
        case '|':
            if (peek(lexer) == '|') { advance(lexer); tok->length = 2; tok->type = GML_TOK_OR; }
            else { tok->type = GML_TOK_UNKNOWN; }
            break;
        case '(': tok->type = GML_TOK_LPAREN; break;
        case ')': tok->type = GML_TOK_RPAREN; break;
        case '{': tok->type = GML_TOK_LBRACE; break;
        case '}': tok->type = GML_TOK_RBRACE; break;
        case '[': tok->type = GML_TOK_LBRACKET; break;
        case ']': tok->type = GML_TOK_RBRACKET; break;
        case ',': tok->type = GML_TOK_COMMA; break;
        case ';': tok->type = GML_TOK_SEMICOLON; break;
        case '.': tok->type = GML_TOK_DOT; break;
        default:  tok->type = GML_TOK_UNKNOWN; break;
    }
    return true;
}

const char *gml_token_type_name(gml_token_type type) {
    switch (type) {
        case GML_TOK_EOF: return "EOF";
        case GML_TOK_INT: return "INT";
        case GML_TOK_REAL: return "REAL";
        case GML_TOK_STRING: return "STRING";
        case GML_TOK_IDENT: return "IDENT";
        case GML_TOK_ASSIGN: return "=";
        case GML_TOK_PLUS: return "+";
        case GML_TOK_MINUS: return "-";
        case GML_TOK_STAR: return "*";
        case GML_TOK_SLASH: return "/";
        case GML_TOK_PERCENT: return "%";
        case GML_TOK_EQ: return "==";
        case GML_TOK_NEQ: return "!=";
        case GML_TOK_LT: return "<";
        case GML_TOK_LTE: return "<=";
        case GML_TOK_GT: return ">";
        case GML_TOK_GTE: return ">=";
        case GML_TOK_AND: return "&&";
        case GML_TOK_OR: return "||";
        case GML_TOK_NOT: return "!";
        case GML_TOK_PLUS_ASSIGN: return "+=";
        case GML_TOK_MINUS_ASSIGN: return "-=";
        case GML_TOK_MUL_ASSIGN: return "*=";
        case GML_TOK_DIV_ASSIGN: return "/=";
        case GML_TOK_LPAREN: return "(";
        case GML_TOK_RPAREN: return ")";
        case GML_TOK_LBRACE: return "{";
        case GML_TOK_RBRACE: return "}";
        case GML_TOK_LBRACKET: return "[";
        case GML_TOK_RBRACKET: return "]";
        case GML_TOK_COMMA: return ",";
        case GML_TOK_SEMICOLON: return ";";
        case GML_TOK_DOT: return ".";
        case GML_TOK_IF: return "if";
        case GML_TOK_ELSE: return "else";
        case GML_TOK_WHILE: return "while";
        case GML_TOK_DO: return "do";
        case GML_TOK_UNTIL: return "until";
        case GML_TOK_REPEAT: return "repeat";
        case GML_TOK_FOR: return "for";
        case GML_TOK_WITH: return "with";
        case GML_TOK_BREAK: return "break";
        case GML_TOK_CONTINUE: return "continue";
        case GML_TOK_RETURN: return "return";
        case GML_TOK_EXIT: return "exit";
        default: return "UNKNOWN";
    }
}
