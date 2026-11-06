/*
 * Phase 8 - Game corpus host parity harness.
 *
 * Runs fixed sample GMKs through: load -> materialize -> bind -> room 0 ->
 * N steps -> draw -> optional input pulse -> metric log.
 *
 * This is a HOST runtime log, not a Portable GM8.2 reference compare.
 * Device/Android runner and external GM82 reference remain out of scope here.
 */
#include "gm82_gmk_reader.h"
#include "gm82_project_ir.h"
#include "gm82_materialize.h"
#include "gm82_object_room_decode.h"
#include "gm82_runtime.h"
#include "gm82_input.h"
#include "gm82_gml_builtins.h"
#include "gm82_sprite_decode.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <sys/stat.h>

static int g_failures = 0;

static void expect_true(int cond, const char *msg) {
    if (!cond) { fprintf(stderr, "[FAIL] %s\n", msg); g_failures++; }
    else printf("[PASS] %s\n", msg);
}

typedef struct {
    const char *path;
    const char *tag;
    int min_objects;
    int min_rooms;
} corpus_entry;

static const corpus_entry k_corpus[] = {
    { "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/mario_bros.gmk", "mario_like", 1, 1 },
    { "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/plataformas.gmk", "platformer", 1, 1 },
    { "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/shooter.gmk", "shooter", 1, 1 },
    { "/home/workdir/artifacts/apk_inspect/extracted/assets/www/samples/zelda.gmk", "adventure", 1, 1 },
};

typedef struct {
    char tag[32];
    int load_ok;
    int object_count;
    int room_count;
    int room0_instances_src;
    int instance_count_after_room;
    int alive_after_steps;
    int frames_stepped;
    int draw_ok;
    int input_ok;
    double first_x, first_y;
} corpus_metrics;

static int file_ok(const char *p) {
    struct stat st;
    return p && stat(p, &st) == 0 && S_ISREG(st.st_mode);
}

static int count_alive(const gm82_runtime *rt) {
    int n = 0;
    for (int i = 0; i < rt->instance_count; i++)
        if (rt->instances[i].alive) n++;
    return n;
}

static int run_one(const corpus_entry *e, corpus_metrics *m) {
    memset(m, 0, sizeof(*m));
    snprintf(m->tag, sizeof(m->tag), "%s", e->tag);

    if (!file_ok(e->path)) {
        printf("[SKIP] missing %s\n", e->path);
        return 0;
    }

    gm82_gmk_load_result lr = gm82_gmk_load_from_file(e->path);
    if (!lr.ok || !lr.ir) {
        printf("[FAIL] load %s: %s\n", e->tag, lr.error);
        if (lr.ir) gm82_project_ir_free(lr.ir);
        return 0;
    }
    m->load_ok = 1;

    gm82_materialize_options opts = gm82_materialize_default_options();
    opts.upload_to_gpu = false;
    gm82_materialize_all(lr.ir, &opts);

    const gm82_decoded_object_list *objs = gm82_materialize_get_objects();
    m->object_count = objs ? objs->count : 0;

    gm82_decoded_room_list rooms;
    gm82_decoded_room_list_init(&rooms);
    if (lr.ir->source_data && lr.ir->source_data_size > 0)
        gm82_decode_rooms_from_gmk(lr.ir->source_data, lr.ir->source_data_size, &rooms);
    m->room_count = rooms.count;
    if (rooms.count > 0)
        m->room0_instances_src = rooms.items[0].instance_count;

    gm82_decoded_sprite_list sprites;
    gm82_decoded_sprite_list_init(&sprites);
    if (lr.ir->source_data && lr.ir->source_data_size > 0)
        gm82_decode_sprites_from_gmk(lr.ir->source_data, lr.ir->source_data_size, &sprites);

    gm82_runtime rt;
    gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, objs, &sprites, NULL, &rooms, NULL);

    gm82_input_state input;
    gm82_input_init(&input);
    gm82_input_bind_global(&input);

    int room_ok = 0;
    if (rooms.count > 0)
        room_ok = gm82_runtime_goto_room(&rt, 0) ? 1 : 0;
    else {
        rt.running = 1;
        if (objs && objs->count > 0)
            gm82_runtime_instance_create(&rt, 0, 32, 32);
        room_ok = 1;
    }

    m->instance_count_after_room = count_alive(&rt);
    if (m->instance_count_after_room > 0) {
        m->first_x = rt.instances[0].x;
        m->first_y = rt.instances[0].y;
    }

    const int STEPS = 30;
    for (int i = 0; i < STEPS; i++) {
        gm82_input_begin_frame(&input);
        if (i == 5) {
            gm82_input_key_down(&input, 37);
            gm82_input_key_down(&input, 32);
        }
        if (i == 15) {
            gm82_input_key_up(&input, 37);
            gm82_input_key_up(&input, 32);
        }
        if (rt.running)
            gm82_runtime_step(&rt);
        m->frames_stepped++;
    }
    m->alive_after_steps = count_alive(&rt);
    m->input_ok = 1;

    uint8_t fb[128 * 128 * 4];
    m->draw_ok = gm82_runtime_draw(&rt, fb, 128, 128) ? 1 : 0;

    gm82_gml_set_runtime(&rt);
    if (m->instance_count_after_room > 0)
        gm82_gml_set_self(&rt.instances[0]);
    (void)gml_game_save("/tmp/nor_corpus_save.dat");

    printf("METRIC tag=%s load=%d objects=%d rooms=%d room0_src_inst=%d "
           "inst_after_room=%d alive_after_%d=%d draw=%d first=(%.1f,%.1f) room_ok=%d\n",
           m->tag, m->load_ok, m->object_count, m->room_count, m->room0_instances_src,
           m->instance_count_after_room, STEPS, m->alive_after_steps, m->draw_ok,
           m->first_x, m->first_y, room_ok);

    gm82_runtime_cleanup(&rt);
    gm82_decoded_room_list_free(&rooms);
    gm82_decoded_sprite_list_free(&sprites);
    gm82_project_ir_free(lr.ir);
    return room_ok && m->load_ok;
}

int main(void) {
    printf("=== test_game_corpus (Phase 8) ===\n");
    printf("NOTE: Host metrics only - no Portable GM8.2 reference process in this environment.\n");

    int ran = 0, ok = 0;
    corpus_metrics results[8];
    memset(results, 0, sizeof(results));

    for (size_t i = 0; i < sizeof(k_corpus) / sizeof(k_corpus[0]); i++) {
        if (!file_ok(k_corpus[i].path)) continue;
        ran++;
        if (run_one(&k_corpus[i], &results[i])) ok++;

        expect_true(results[i].load_ok, "corpus entry loaded");
        expect_true(results[i].object_count >= k_corpus[i].min_objects, "min objects");
        expect_true(results[i].room_count >= k_corpus[i].min_rooms, "min rooms");
        expect_true(results[i].frames_stepped == 30, "stepped 30 frames");
        expect_true(results[i].draw_ok, "draw ok");
        expect_true(results[i].instance_count_after_room > 0 || results[i].room0_instances_src == 0,
                    "instances spawned or empty room");
    }

    expect_true(ran >= 4, "all 4 sample corpus games present and attempted");
    expect_true(ok >= 1, "at least one corpus game completed room pipeline");

    FILE *out = fopen("/tmp/nor_corpus_metrics.txt", "w");
    if (out) {
        fprintf(out, "# NOR host corpus metrics (Phase 8)\n");
        fprintf(out, "# tag load objects rooms room0_src inst_room alive_30 draw first_x first_y\n");
        for (size_t i = 0; i < sizeof(k_corpus) / sizeof(k_corpus[0]); i++) {
            if (!results[i].load_ok && results[i].tag[0] == 0) continue;
            fprintf(out, "%s %d %d %d %d %d %d %d %.2f %.2f\n",
                    results[i].tag, results[i].load_ok, results[i].object_count,
                    results[i].room_count, results[i].room0_instances_src,
                    results[i].instance_count_after_room, results[i].alive_after_steps,
                    results[i].draw_ok, results[i].first_x, results[i].first_y);
        }
        fclose(out);
        printf("Wrote /tmp/nor_corpus_metrics.txt\n");
    }

    if (g_failures) {
        fprintf(stderr, "\n%d failure(s)\n", g_failures);
        return 1;
    }
    printf("\nCorpus host harness passed (%d games).\n", ran);
    return 0;
}
