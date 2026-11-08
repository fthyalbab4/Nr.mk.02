/*
 * Precise mask collision (host). Uses gm82_bitmask.
 * Does NOT claim rotated/scaled full parity or Portable pixel logs.
 */
#include "gm82_mask.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static int g_failures = 0;
static void expect_true(int c, const char *m) {
    if (!c) { fprintf(stderr, "[FAIL] %s\n", m); g_failures++; }
    else printf("[PASS] %s\n", m);
}

static void fill_solid(uint8_t *rgba, int w, int h) {
    for (int i = 0; i < w * h; i++) {
        rgba[i*4+0]=255; rgba[i*4+1]=255; rgba[i*4+2]=255; rgba[i*4+3]=255;
    }
}

static void fill_partial(uint8_t *rgba, int w, int h) {
    memset(rgba, 0, (size_t)w * h * 4);
    for (int y = 0; y < 4 && y < h; y++)
        for (int x = 0; x < 4 && x < w; x++) {
            int i = y * w + x;
            rgba[i*4+0]=255; rgba[i*4+1]=255; rgba[i*4+2]=255; rgba[i*4+3]=255;
        }
}

int main(void) {
    printf("=== test_precise_collision (mask host) ===\n");
    const int W = 8, H = 8;
    uint8_t a[8*8*4], b[8*8*4];
    fill_solid(a, W, H); fill_solid(b, W, H);
    gm82_bitmask ma, mb;
    expect_true(gm82_bitmask_create(&ma, W, H, a), "mask A create");
    expect_true(gm82_bitmask_create(&mb, W, H, b), "mask B create");
    expect_true(gm82_bitmask_check_overlap(&ma, 0, 0, &mb, 0, 0), "full overlap");
    expect_true(gm82_bitmask_check_overlap(&ma, 0, 0, &mb, 7, 0), "edge touch");
    expect_true(!gm82_bitmask_check_overlap(&ma, 0, 0, &mb, 8, 0), "separated");
    gm82_bitmask_free(&ma); gm82_bitmask_free(&mb);

    fill_partial(a, W, H); fill_partial(b, W, H);
    assert(gm82_bitmask_create(&ma, W, H, a));
    assert(gm82_bitmask_create(&mb, W, H, b));
    expect_true(gm82_bitmask_check_overlap(&ma, 0, 0, &mb, 0, 0), "partial overlap opaque");
    expect_true(!gm82_bitmask_check_overlap(&ma, 0, 0, &mb, 4, 4), "transparent miss");
    gm82_bitmask_free(&ma); gm82_bitmask_free(&mb);

    if (g_failures) { fprintf(stderr, "%d failure(s)\n", g_failures); return 1; }
    printf("\nAll precise mask checks passed.\n");
    return 0;
}
