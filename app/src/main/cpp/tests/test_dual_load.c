#include "gm82_loader.h"
#include "gm82_project_ir.h"
#include "gm82_runtime_guard.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

static void test_gmk_sample(const char *path) {
    printf("Loading %s ...\n", path);
    char err[512];
    gm82_project_ir *ir = NULL;
    bool playable = gm82_load_and_prepare(path, &ir, err, sizeof(err));

    /* Should be playable when sprites/backgrounds materialize */
    assert(playable == true);
    assert(ir != NULL);
    assert(ir->complete == true);
    printf("  playable=%d, complete=%d, partial_count=%d\n",
           playable, ir->complete, ir->partial_count);
    printf("  message: %s\n", err);
    gm82_project_ir_free(ir);
    puts("test_gmk_sample PASS");
}

static void test_auto_detect(void) {
    gm82_load_result r = gm82_load_auto("/tmp/does_not_exist.gmk");
    assert(r.ok == false);
    puts("test_auto_detect (missing file) PASS");
}

static bool resolve_path(const char *path, char *out, size_t out_sz) {
    FILE *f = fopen(path, "rb");
    if (f) { fclose(f); snprintf(out, out_sz, "%s", path); return true; }
    snprintf(out, out_sz, "../../%s", path);
    f = fopen(out, "rb");
    if (f) { fclose(f); return true; }
    snprintf(out, out_sz, "%s", path);
    return false;
}

int main(int argc, char **argv) {
    const char *sample = NULL;
    char resolved[512];
    if (argc > 1) {
        sample = argv[1];
        resolve_path(sample, resolved, sizeof(resolved));
    } else {
        resolve_path("app/src/main/assets/www/samples/mario_bros.gmk", resolved, sizeof(resolved));
    }

    test_auto_detect();
    test_gmk_sample(resolved);
    puts("ALL_DUAL_LOAD_TESTS_PASS");
    return 0;
}
