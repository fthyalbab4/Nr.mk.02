/*
 * Deterministic software-draw fingerprint (host).
 * Not a Portable reference image suite.
 */
#include "gm82_gml_builtins.h"
#include "gm82_runtime.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

static int g_failures = 0;
static void expect_true(int c, const char *m) {
    if (!c) { fprintf(stderr, "[FAIL] %s\n", m); g_failures++; }
    else printf("[PASS] %s\n", m);
}
static uint32_t fnv1a(const uint8_t *p, size_t n) {
    uint32_t h = 2166136261u;
    for (size_t i = 0; i < n; i++) { h ^= p[i]; h *= 16777619u; }
    return h;
}
int main(void) {
    printf("=== test_draw_fingerprint (host) ===\n");
    const int W = 32, H = 32;
    uint8_t *fb = (uint8_t *)calloc((size_t)W * H * 4, 1);
    if (!fb) return 1;
    gm82_draw_set_target(fb, W, H);
    gml_draw_set_color(0xFF0000);
    gml_draw_set_alpha(1.0);
    gml_draw_rectangle(4, 4, 12, 12, 0);
    uint32_t h1 = fnv1a(fb, (size_t)W * H * 4);
    memset(fb, 0, (size_t)W * H * 4);
    gm82_draw_set_target(fb, W, H);
    gml_draw_set_color(0xFF0000);
    gml_draw_set_alpha(1.0);
    gml_draw_rectangle(4, 4, 12, 12, 0);
    uint32_t h2 = fnv1a(fb, (size_t)W * H * 4);
    expect_true(h1 == h2 && h1 != 0, "identical draws same fingerprint");
    memset(fb, 0, (size_t)W * H * 4);
    gm82_draw_set_target(fb, W, H);
    gml_draw_set_color(0x00FF00);
    gml_draw_rectangle(4, 4, 12, 12, 0);
    uint32_t h3 = fnv1a(fb, (size_t)W * H * 4);
    expect_true(h3 != h1, "different color changes fingerprint");
    free(fb);
    if (g_failures) { fprintf(stderr, "%d failure(s)\n", g_failures); return 1; }
    printf("\nDraw fingerprint checks passed.\n");
    return 0;
}
