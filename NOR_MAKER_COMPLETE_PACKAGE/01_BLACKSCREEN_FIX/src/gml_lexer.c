#include "gml_lexer.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void gml_lexer_init(gml_lexer *lexer, const char *source) {
    if (!lexer) return;
    lexer->source = source ? source : "";
    lexer->len = strlen(lexer->source);
    lexer->cursor = 0;
    lexer->line = 1;
    lexer->column = 1;
}

static char peek_char(const gml_lexer *lexer) {
    if (lexer->cursor >= lexer->len) return '\0';
    return lexer->source[lexer->cursor];
}

static char peek_next_char(const gml_lexer *lexer) {
    if (lexer->cursor + 1 >= lexer->len) return '\0';
    return lexer->source[lexer->cursor + 1];
}

static char advance_char(gml_lexer *lexer) {
    if (lexer->cursor >= lexer->len) return '\0';
    char c = lexer->source[lexer->cursor++];
    if (c == '\n') {
        lexer->line++;
        lexer->column = 1;
    } else {
        lexer->column++;
    }
    return c;
}

static void skip_whitespace_and_comments(gml_lexer *lexer) {
    while (lexer->cursor < lexer->len) {
        char c = peek_char(lexer);
        if (c == ' ' || c == '\t' || c == '\r' || c == '\n') {
            advance_char(lexer);
        } else if (c == '/' && peek_next_char(lexer) == '/') {
            advance_char(lexer);
            advance_char(lexer);
            while (lexer->cursor < lexer->len && peek_char(lexer) != '\n') {
                advance_char(lexer);
            }
        } else if (c == '/' && peek_next_char(lexer) == '*') {
            advance_char(lexer);
            advance_char(lexer);
            while (lexer->cursor < lexer->len) {
                if (peek_char(lexer) == '*' && peek_next_char(lexer) == '/') {
                    advance_char(lexer);
                    advance_char(lexer);
                    break;
                }
                advance_char(lexer);
            }
        } else {
            break;
        }
    }
}

static gml_token make_token(const gml_lexer *lexer __attribute__((unused)), gml_token_type type, const char *start, size_t len, int line, int col) {
    gml_token tok;
    memset(&tok, 0, sizeof(tok));
    tok.type = type;
    tok.start = start;
    tok.length = len;
    tok.line = line;
    tok.column = col;
    if (len < sizeof(tok.text)) {
        memcpy(tok.text, start, len);
        tok.text[len] = '\0';
    } else {
        memcpy(tok.text, start, sizeof(tok.text) - 1);
        tok.text[sizeof(tok.text) - 1] = '\0';
    }
    return tok;
}

static gml_token lex_number(gml_lexer *lexer) {
    const char *start = &lexer->source[lexer->cursor];
    int line = lexer->line;
    int col = lexer->column;
    bool has_dot = false;

    /* Hex literal support: $FF or 0xFF */
    if (peek_char(lexer) == '$') {
        advance_char(lexer);
        while (isxdigit((unsigned char)peek_char(lexer))) {
            advance_char(lexer);
        }
        size_t len = &lexer->source[lexer->cursor] - start;
        gml_token tok = make_token(lexer, TOK_NUMBER, start, len, line, col);
        tok.number_value = (double)strtol(tok.text + 1, NULL, 16);
        return tok;
    }

    while (isdigit((unsigned char)peek_char(lexer))) {
        advance_char(lexer);
    }
    if (peek_char(lexer) == '.' && isdigit((unsigned char)peek_next_char(lexer))) {
        has_dot = true;
        advance_char(lexer);
        while (isdigit((unsigned char)peek_char(lexer))) {
            advance_char(lexer);
        }
    }
    (void)has_dot;
    size_t len = &lexer->source[lexer->cursor] - start;
    gml_token tok = make_token(lexer, TOK_NUMBER, start, len, line, col);
    tok.number_value = strtod(tok.text, NULL);
    return tok;
}

static gml_token lex_string(gml_lexer *lexer, char quote) {
    const char *start = &lexer->source[lexer->cursor];
    int line = lexer->line;
    int col = lexer->column;

    advance_char(lexer); /* eat opening quote */
    char buffer[256];
    size_t bi = 0;

    while (lexer->cursor < lexer->len && peek_char(lexer) != quote) {
        char c = advance_char(lexer);
        if (c == '\\' && lexer->cursor < lexer->len) {
            char next = advance_char(lexer);
            switch (next) {
                case 'n': c = '\n'; break;
                case 'r': c = '\r'; break;
                case 't': c = '\t'; break;
                case '\\': c = '\\'; break;
                case '\'': c = '\''; break;
                case '\"': c = '\"'; break;
                default: c = next; break;
            }
        }
        if (bi + 1 < sizeof(buffer)) {
            buffer[bi++] = c;
        }
    }
    buffer[bi] = '\0';

    if (peek_char(lexer) == quote) {
        advance_char(lexer); /* eat closing quote */
    }

    size_t len = &lexer->source[lexer->cursor] - start;
    gml_token tok = make_token(lexer, TOK_STRING, start, len, line, col);
    if (bi < sizeof(tok.text)) {
        memcpy(tok.text, buffer, bi + 1);
    } else {
        memcpy(tok.text, buffer, sizeof(tok.text) - 1);
        tok.text[sizeof(tok.text) - 1] = '\0';
    }
    return tok;
}

static gml_token_type check_keyword_or_ident(const char *text) {
    if (strcmp(text, "if") == 0) return TOK_KW_IF;
    if (strcmp(text, "then") == 0) return TOK_KW_THEN;
    if (strcmp(text, "else") == 0) return TOK_KW_ELSE;
    if (strcmp(text, "while") == 0) return TOK_KW_WHILE;
    if (strcmp(text, "do") == 0) return TOK_KW_DO;
    if (strcmp(text, "until") == 0) return TOK_KW_UNTIL;
    if (strcmp(text, "repeat") == 0) return TOK_KW_REPEAT;
    if (strcmp(text, "for") == 0) return TOK_KW_FOR;
    if (strcmp(text, "with") == 0) return TOK_KW_WITH;
    if (strcmp(text, "switch") == 0) return TOK_KW_SWITCH;
    if (strcmp(text, "case") == 0) return TOK_KW_CASE;
    if (strcmp(text, "default") == 0) return TOK_KW_DEFAULT;
    if (strcmp(text, "break") == 0) return TOK_KW_BREAK;
    if (strcmp(text, "continue") == 0) return TOK_KW_CONTINUE;
    if (strcmp(text, "return") == 0) return TOK_KW_RETURN;
    if (strcmp(text, "exit") == 0) return TOK_KW_EXIT;
    if (strcmp(text, "var") == 0) return TOK_KW_VAR;
    if (strcmp(text, "globalvar") == 0) return TOK_KW_GLOBALVAR;
    /* GML allows 'and', 'or', 'not' keywords */
    if (strcmp(text, "and") == 0) return TOK_AND;
    if (strcmp(text, "or") == 0) return TOK_OR;
    if (strcmp(text, "not") == 0) return TOK_NOT;
    return TOK_IDENTIFIER;
}

static gml_token lex_identifier_or_keyword(gml_lexer *lexer) {
    const char *start = &lexer->source[lexer->cursor];
    int line = lexer->line;
    int col = lexer->column;

    while (isalnum((unsigned char)peek_char(lexer)) || peek_char(lexer) == '_') {
        advance_char(lexer);
    }
    size_t len = &lexer->source[lexer->cursor] - start;
    gml_token tok = make_token(lexer, TOK_IDENTIFIER, start, len, line, col);
    tok.type = check_keyword_or_ident(tok.text);
    return tok;
}

gml_token gml_lexer_next_token(gml_lexer *lexer) {
    if (!lexer) {
        gml_token err = { TOK_EOF, NULL, 0, 0, 0, 0, "" };
        return err;
    }
    skip_whitespace_and_comments(lexer);

    if (lexer->cursor >= lexer->len) {
        return make_token(lexer, TOK_EOF, &lexer->source[lexer->cursor], 0, lexer->line, lexer->column);
    }

    const char *start = &lexer->source[lexer->cursor];
    int line = lexer->line;
    int col = lexer->column;
    char c = peek_char(lexer);

    if (isdigit((unsigned char)c) || c == '$' || (c == '.' && isdigit((unsigned char)peek_next_char(lexer)))) {
        return lex_number(lexer);
    }

    if (c == '\"' || c == '\'') {
        return lex_string(lexer, c);
    }

    if (isalpha((unsigned char)c) || c == '_') {
        return lex_identifier_or_keyword(lexer);
    }

    advance_char(lexer);
    switch (c) {
        case '+':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_PLUS_ASSIGN, start, 2, line, col); }
            return make_token(lexer, TOK_PLUS, start, 1, line, col);
        case '-':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_MINUS_ASSIGN, start, 2, line, col); }
            return make_token(lexer, TOK_MINUS, start, 1, line, col);
        case '*':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_STAR_ASSIGN, start, 2, line, col); }
            return make_token(lexer, TOK_STAR, start, 1, line, col);
        case '/':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_SLASH_ASSIGN, start, 2, line, col); }
            return make_token(lexer, TOK_SLASH, start, 1, line, col);
        case '%':
            return make_token(lexer, TOK_PERCENT, start, 1, line, col);
        case '=':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_EQ, start, 2, line, col); }
            return make_token(lexer, TOK_ASSIGN, start, 1, line, col);
        case ':':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_ASSIGN, start, 2, line, col); }
            return make_token(lexer, TOK_COLON, start, 1, line, col);
        case '!':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_NEQ, start, 2, line, col); }
            return make_token(lexer, TOK_NOT, start, 1, line, col);
        case '<':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_LTE, start, 2, line, col); }
            if (peek_char(lexer) == '>') { advance_char(lexer); return make_token(lexer, TOK_NEQ, start, 2, line, col); }
            return make_token(lexer, TOK_LT, start, 1, line, col);
        case '>':
            if (peek_char(lexer) == '=') { advance_char(lexer); return make_token(lexer, TOK_GTE, start, 2, line, col); }
            return make_token(lexer, TOK_GT, start, 1, line, col);
        case '&':
            if (peek_char(lexer) == '&') { advance_char(lexer); return make_token(lexer, TOK_AND, start, 2, line, col); }
            return make_token(lexer, TOK_AND, start, 1, line, col);
        case '|':
            if (peek_char(lexer) == '|') { advance_char(lexer); return make_token(lexer, TOK_OR, start, 2, line, col); }
            return make_token(lexer, TOK_OR, start, 1, line, col);
        case '(': return make_token(lexer, TOK_LPAREN, start, 1, line, col);
        case ')': return make_token(lexer, TOK_RPAREN, start, 1, line, col);
        case '{': return make_token(lexer, TOK_LBRACE, start, 1, line, col);
        case '}': return make_token(lexer, TOK_RBRACE, start, 1, line, col);
        case '[': return make_token(lexer, TOK_LBRACKET, start, 1, line, col);
        case ']': return make_token(lexer, TOK_RBRACKET, start, 1, line, col);
        case ',': return make_token(lexer, TOK_COMMA, start, 1, line, col);
        case ';': return make_token(lexer, TOK_SEMICOLON, start, 1, line, col);
        case '.': return make_token(lexer, TOK_DOT, start, 1, line, col);
        default:
            return make_token(lexer, TOK_ERROR, start, 1, line, col);
    }
}

const char *gml_token_type_name(gml_token_type type) {
    switch (type) {
        case TOK_EOF: return "EOF";
        case TOK_NUMBER: return "NUMBER";
        case TOK_STRING: return "STRING";
        case TOK_IDENTIFIER: return "IDENTIFIER";
        case TOK_PLUS: return "+";
        case TOK_MINUS: return "-";
        case TOK_STAR: return "*";
        case TOK_SLASH: return "/";
        case TOK_PERCENT: return "%";
        case TOK_ASSIGN: return "=";
        case TOK_PLUS_ASSIGN: return "+=";
        case TOK_MINUS_ASSIGN: return "-=";
        case TOK_STAR_ASSIGN: return "*=";
        case TOK_SLASH_ASSIGN: return "/=";
        case TOK_EQ: return "==";
        case TOK_NEQ: return "!=";
        case TOK_LT: return "<";
        case TOK_LTE: return "<=";
        case TOK_GT: return ">";
        case TOK_GTE: return ">=";
        case TOK_AND: return "&&";
        case TOK_OR: return "||";
        case TOK_NOT: return "!";
        case TOK_LPAREN: return "(";
        case TOK_RPAREN: return ")";
        case TOK_LBRACE: return "{";
        case TOK_RBRACE: return "}";
        case TOK_LBRACKET: return "[";
        case TOK_RBRACKET: return "]";
        case TOK_COMMA: return ",";
        case TOK_SEMICOLON: return ";";
        case TOK_DOT: return ".";
        case TOK_COLON: return ":";
        case TOK_KW_IF: return "if";
        case TOK_KW_THEN: return "then";
        case TOK_KW_ELSE: return "else";
        case TOK_KW_WHILE: return "while";
        case TOK_KW_DO: return "do";
        case TOK_KW_UNTIL: return "until";
        case TOK_KW_REPEAT: return "repeat";
        case TOK_KW_FOR: return "for";
        case TOK_KW_WITH: return "with";
        case TOK_KW_SWITCH: return "switch";
        case TOK_KW_CASE: return "case";
        case TOK_KW_DEFAULT: return "default";
        case TOK_KW_BREAK: return "break";
        case TOK_KW_CONTINUE: return "continue";
        case TOK_KW_RETURN: return "return";
        case TOK_KW_EXIT: return "exit";
        case TOK_KW_VAR: return "var";
        case TOK_KW_GLOBALVAR: return "globalvar";
        case TOK_ERROR: default: return "ERROR";
    }
}
