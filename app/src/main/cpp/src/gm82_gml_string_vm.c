#define _POSIX_C_SOURCE 200809L
#include "gm82_gml_eval.h"
#include <stdio.h>
#include <string.h>

/* String-returning VM buffer — linked via CMake GLOB src/*.c */
static char g_last_string[512];
static int g_last_was_string = 0;

const char *gm82_gml_last_string(void) {
    return g_last_string;
}

void gm82_gml_set_last_string(const char *s) {
    if (!s) s = "";
    snprintf(g_last_string, sizeof(g_last_string), "%s", s);
    g_last_was_string = 1;
}

bool gm82_gml_last_was_string(void) {
    return g_last_was_string != 0;
}

void gm82_gml_clear_last_string(void) {
    g_last_string[0] = 0;
    g_last_was_string = 0;
}
