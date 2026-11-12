#define _POSIX_C_SOURCE 200809L
#include "gm82_runtime.h"
#include <assert.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

static uint64_t now_ns(void) {
    struct timespec ts;
    assert(clock_gettime(CLOCK_MONOTONIC, &ts) == 0);
    return (uint64_t)ts.tv_sec * UINT64_C(1000000000) + (uint64_t)ts.tv_nsec;
}

static void run_case(int instance_count) {
    gm82_runtime rt;
    gm82_runtime_init(&rt);
    rt.running = 1;
    rt.room_width = 4096;
    rt.room_height = 4096;

    for (int i = 0; i < instance_count; ++i) {
        gm82_instance *inst = gm82_runtime_instance_create(
            &rt, i & 3, 8.0 + (double)((i * 37) % 4000),
            8.0 + (double)((i * 61) % 4000));
        assert(inst != NULL);
        inst->hspeed = (i & 1) ? 0.25 : -0.25;
        inst->vspeed = (i & 2) ? 0.125 : -0.125;
        inst->visible = 0;
    }

    uint8_t rgba[64 * 64 * 4];
    gm82_runtime_perf_reset(&rt);
    gm82_runtime_perf_enable(&rt, true);
    uint64_t start = now_ns();
    for (int frame = 0; frame < 60; ++frame) {
        gm82_runtime_step(&rt);
        assert(gm82_runtime_draw(&rt, rgba, 64, 64));
    }
    uint64_t elapsed = now_ns() - start;

    gm82_perf_stats stats;
    gm82_runtime_perf_snapshot(&rt, &stats);
    assert(stats.frames == 60);
    assert(stats.draw_frames == 60);
    assert(stats.phase_ns[GM82_PHASE_MOTION_COLLISION] > 0);
    assert(stats.phase_ns[GM82_PHASE_DRAW] > 0);

    printf("PERF_CASE instances=%d frames=%" PRIu64 " elapsed_ms=%.3f "
           "motion_collision_ms=%.3f draw_ms=%.3f candidates=%" PRIu64
           " overlaps=%" PRIu64 "\n",
           instance_count, stats.frames, (double)elapsed / 1e6,
           (double)stats.phase_ns[GM82_PHASE_MOTION_COLLISION] / 1e6,
           (double)stats.phase_ns[GM82_PHASE_DRAW] / 1e6,
           stats.collision_candidates, stats.collision_overlaps);

    gm82_runtime_perf_enable(&rt, false);
    gm82_runtime_cleanup(&rt);
}

int main(void) {
    run_case(100);
    run_case(500);
    run_case(1000);
    puts("RUNTIME_PERF_BENCHMARK_PASS");
    return 0;
}
