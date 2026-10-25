#define _POSIX_C_SOURCE 200809L
#include "gm82_gml_eval.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char g_last_string[512];
static int g_last_was_string = 0;
static char g_str_stack[8][512];
static int g_str_stack_n = 0;

const char *gm82_gml_last_string(void) { return g_last_string; }

void gm82_gml_set_last_string(const char *s) {
    if (!s) s = "";
    snprintf(g_last_string, sizeof(g_last_string), "%s", s);
    g_last_was_string = 1;
}

bool gm82_gml_last_was_string(void) { return g_last_was_string != 0; }

void gm82_gml_clear_last_string(void) {
    g_last_string[0] = 0;
    g_last_was_string = 0;
}

void gm82_gml_string_push(const char *s) {
    if (g_str_stack_n >= 8) return;
    if (!s) s = "";
    snprintf(g_str_stack[g_str_stack_n], sizeof(g_str_stack[0]), "%s", s);
    g_str_stack_n++;
}

const char *gm82_gml_string_pop(void) {
    if (g_str_stack_n <= 0) return "";
    g_str_stack_n--;
    return g_str_stack[g_str_stack_n];
}

void gm82_gml_value_to_string(double real, int was_string, const char *str_src, char *out, size_t out_sz) {
    if (was_string && str_src) snprintf(out, out_sz, "%s", str_src);
    else snprintf(out, out_sz, "%g", real);
}

double gm82_gml_string_to_real(const char *s) {
    if (!s || !s[0]) return 0.0;
    return strtod(s, NULL);
}
