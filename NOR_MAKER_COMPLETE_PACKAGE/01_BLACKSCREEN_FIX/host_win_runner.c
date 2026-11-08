/*
 * NorMaker host runner (Windows-oriented; builds on POSIX host too).
 * In-tree GM82 core only.
 */
#include "gm82_gmk_reader.h"
#include "gm82_project_ir.h"
#include "gm82_materialize.h"
#include "gm82_runtime.h"
#include "gm82_object_room_decode.h"
#include "gm82_portable_compat.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

static uint32_t fnv1a(const uint8_t *p, size_t n) {
    uint32_t h = 2166136261u;
    for (size_t i = 0; i < n; i++) { h ^= p[i]; h *= 16777619u; }
    return h;
}

int main(int argc, char **argv) {
    if (argc < 2) {
        fprintf(stderr, "usage: %s <game.gmk> [frames=60]\n", argv[0]);
        return 2;
    }
    const char *path = argv[1];
    int frames = argc >= 3 ? atoi(argv[2]) : 60;
    if (frames < 1) frames = 1;
    if (frames > 600) frames = 600;

    printf("NorMaker host_win_runner\n");
    printf("gmk: %s\n", path);
    printf("portable_dllcheck: %d\n", gm82_portable_dllcheck());

    gm82_gmk_load_result lr = gm82_gmk_load_from_file(path);
    if (!lr.ok || !lr.ir) {
        fprintf(stderr, "load failed\n");
        if (lr.ir) gm82_project_ir_free(lr.ir);
        return 1;
    }

    gm82_materialize_options opts = gm82_materialize_default_options();
    opts.upload_to_gpu = false;
    if (!gm82_materialize_all(lr.ir, &opts)) {
        fprintf(stderr, "materialize failed\n");
        gm82_project_ir_free(lr.ir);
        return 1;
    }

    const gm82_decoded_object_list *objs = gm82_materialize_get_objects();
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    if (objs) gm82_runtime_bind_assets(&rt, objs, NULL, NULL, NULL, NULL);
    rt.running = 1;

    int w = 320, h = 240;
    uint8_t *fb = (uint8_t *)calloc((size_t)w * h * 4, 1);
    if (!fb) {
        gm82_runtime_cleanup(&rt);
        gm82_project_ir_free(lr.ir);
        return 1;
    }

    for (int i = 0; i < frames && rt.running; i++) {
        gm82_runtime_step(&rt);
        gm82_runtime_draw(&rt, fb, w, h);
    }

    int alive = 0;
    for (int i = 0; i < rt.instance_count; i++)
        if (rt.instances[i].alive) alive++;

    uint32_t hash = fnv1a(fb, (size_t)w * h * 4);
    printf("frames_ran: %d\n", rt.frame);
    printf("instances_alive: %d\n", alive);
    printf("draw_fingerprint: 0x%08x\n", hash);
    printf("status: OK\n");

    free(fb);
    gm82_runtime_cleanup(&rt);
    gm82_project_ir_free(lr.ir);
    return 0;
}
