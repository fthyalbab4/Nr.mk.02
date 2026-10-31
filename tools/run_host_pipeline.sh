#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
CPP="$ROOT/app/src/main/cpp"
SRC="$CPP/src"
INC="$CPP/include"
SAMPLES="$ROOT/app/src/main/assets/www/samples"
mkdir -p "$ROOT/build_host"

cat > "$ROOT/build_host/opensles_stub.c" << 'STUB'
void gm82_opensles_stop_all(void) {}
void gm82_opensles_play(int id, float vol, int loop) { (void)id;(void)vol;(void)loop; }
void gm82_opensles_stop(int id) { (void)id; }
int gm82_opensles_init(void) { return 0; }
void gm82_opensles_shutdown(void) {}
STUB

cat > "$ROOT/build_host/host_pipeline_min.c" << 'C'
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include "gm82_runtime.h"
#include "gm82_sprite_decode.h"
#include "gm82_background_decode.h"
#include "gm82_object_room_decode.h"
#include "gm82_actions.h"
#include "gm82_gml_builtins.h"
#include "gm82_input.h"
int main(int argc, char **argv) {
    const char *path = argc > 1 ? argv[1] : NULL;
    int frames = argc > 2 ? atoi(argv[2]) : 60;
    if (!path) { fprintf(stderr, "usage: %s file.gmk [frames]\n", argv[0]); return 2; }
    FILE *f = fopen(path, "rb");
    if (!f) { perror(path); return 1; }
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz < 16) { fclose(f); return 1; }
    uint8_t *buf = malloc((size_t)sz);
    if (!buf || fread(buf, 1, (size_t)sz, f) != (size_t)sz) { free(buf); fclose(f); return 1; }
    fclose(f);
    printf("LOADED %s bytes=%ld\n", path, sz);
    gm82_decoded_sprite_list sprites; memset(&sprites, 0, sizeof(sprites));
    gm82_decoded_background_list bgs; memset(&bgs, 0, sizeof(bgs));
    gm82_decoded_object_list objs; memset(&objs, 0, sizeof(objs));
    gm82_decoded_room_list rooms; memset(&rooms, 0, sizeof(rooms));
    gm82_sprite_group_list groups; memset(&groups, 0, sizeof(groups));
    int ns = gm82_decode_sprites_from_gmk(buf, (size_t)sz, &sprites);
    int nb = gm82_decode_backgrounds_from_gmk(buf, (size_t)sz, &bgs);
    int no = gm82_decode_objects_from_gmk(buf, (size_t)sz, &objs);
    int nr = gm82_decode_rooms_from_gmk(buf, (size_t)sz, &rooms);
    printf("DECODE sprites=%d bgs=%d objs=%d rooms=%d\n", ns, nb, no, nr);
    if (ns > 0) gm82_sprite_groups_build(&sprites, &groups);
    gm82_action_table actions; memset(&actions, 0, sizeof(actions));
    gm82_runtime rt; gm82_runtime_init(&rt);
    gm82_runtime_bind_assets(&rt, &objs, &sprites, &bgs, &rooms, &actions);
    if (groups.count > 0) gm82_runtime_bind_sprite_groups(&rt, &groups);
    gm82_input_state input; gm82_input_init(&input); gm82_input_bind_global(&input);
    if (nr > 0) {
        if (!gm82_runtime_goto_room(&rt, 0)) printf("GOTO_ROOM_FAIL\n");
        else printf("ROOM 0 inst=%d w=%d h=%d\n", rt.instance_count, rt.room_width, rt.room_height);
    } else { rt.running = 1; rt.room_speed = 30; }
    int pi = -1;
    /* Prefer the live player object over death/transition objects whose names
       also contain "mario".  In mario_bros.gmk obj_minimario_pierde appears
       earlier in the room, but obj_minimario is the object carrying the
       keyboard_check/hspeed Step code and must be used for the replay. */
    for (int i = 0; i < rt.instance_count && pi < 0; i++) {
        if (!rt.instances[i].alive || !rt.objects) continue;
        int oi = rt.instances[i].object_index;
        if (oi < 0 || oi >= rt.objects->count) continue;
        const gm82_decoded_object *o = &rt.objects->items[oi];
        if (strcmp(o->name, "obj_minimario") != 0 &&
            strcmp(o->name, "obj_mario") != 0) continue;
        for (int e = 0; e < o->event_count; e++) {
            const char *c = o->events[e].code_snippet;
            if (c && (strstr(c, "keyboard_check") || strstr(c, "hspeed"))) {
                pi = i;
                break;
            }
        }
    }
    for (int i = 0; i < rt.instance_count; i++) {
        if (pi >= 0) break;
        if (!rt.instances[i].alive || !rt.objects) continue;
        int oi = rt.instances[i].object_index;
        if (oi < 0 || oi >= rt.objects->count) continue;
        const char *n = rt.objects->items[oi].name;
        if (!n) continue;
        if (strstr(n, "player") || strstr(n, "Player") || strstr(n, "mario") ||
            strstr(n, "link") || strstr(n, "fantasma") || strstr(n, "heroe") ||
            strstr(n, "obj_player") || strstr(n, "guy")) { pi = i; break; }
    }
    if (pi < 0) {
        for (int i = 0; i < rt.instance_count; i++)
            if (rt.instances[i].alive && !rt.instances[i].solid) { pi = i; break; }
    }
    double x0 = 0, y0 = 0;
    if (pi >= 0) {
        x0 = rt.instances[pi].x; y0 = rt.instances[pi].y;
        printf("PLAYER_IDX %d obj=%d start=(%.1f,%.1f)\n", pi, rt.instances[pi].object_index, x0, y0);
    }
    for (int i = 0; i < frames; i++) {
        gm82_input_begin_frame(&input);
        gm82_input_key_down(&input, 39);
        gm82_runtime_step(&rt);
    }
    double x1 = x0, y1 = y0;
    if (pi >= 0 && pi < rt.instance_count && rt.instances[pi].alive) {
        x1 = rt.instances[pi].x; y1 = rt.instances[pi].y;
    }
    printf("STEPS %d frame=%d moved=%d delta=(%.1f,%.1f)\n", frames, rt.frame, (x1!=x0||y1!=y0)?1:0, x1-x0, y1-y0);
    int bw = rt.room_width > 0 ? rt.room_width : 640;
    int bh = rt.room_height > 0 ? rt.room_height : 480;
    if (bw > 1280) bw = 640; if (bh > 960) bh = 480;
    uint8_t *rgba = calloc((size_t)bw * (size_t)bh * 4, 1);
    int draw_ok = 0, lit = 0;
    if (rgba) {
        draw_ok = gm82_runtime_draw(&rt, rgba, bw, bh) ? 1 : 0;
        for (int i = 0; i < bw * bh; i++)
            if (rgba[i*4+0] > 30 || rgba[i*4+1] > 30 || rgba[i*4+2] > 50) lit++;
        free(rgba);
    }
    printf("DRAW ok=%d lit=%d\n", draw_ok, lit);
    gm82_decoded_sprite_list_free(&sprites);
    gm82_decoded_background_list_free(&bgs);
    free(buf);
    gml_set_score(1234.0); gml_set_lives(5.0); gml_set_health(80.0);
    gml_game_save("test_save.dat");
    gml_set_score(0.0); gml_set_lives(1.0); gml_set_health(10.0);
    gml_game_load("test_save.dat");
    if (gml_get_score() == 1234.0 && gml_get_lives() == 5.0 && gml_get_health() == 80.0)
        printf("SAVE_LOAD_TEST ok\n");
    else
        printf("SAVE_LOAD_TEST fail\n");
    printf("PIPELINE_OK\n");
    return 0;
}
C

gcc -O2 -I"$INC" -I"$CPP" -o "$ROOT/build_host/pipeline_min" \
  "$ROOT/build_host/host_pipeline_min.c" "$ROOT/build_host/opensles_stub.c" \
  "$SRC/gm82_arena.c" "$SRC/gm82_runtime.c" "$SRC/gm82_events.c" "$SRC/gm82_input.c" \
  "$SRC/gm82_materialize.c" "$SRC/gm82_gmk_reader.c" "$SRC/gm82_gmk_format.c" "$SRC/gm82_sound_decode.c" \
  "$SRC/gm82_project_ir.c" \
  "$SRC/gm82_gml_builtins.c" "$SRC/gm82_gml_eval.c" "$SRC/gm82_gml_string_vm.c" \
  "$SRC/gm82_audio_mixer.c" \
  "$SRC/gm82_portable_compat.c" \
  "$SRC/gm82_actions.c" "$SRC/gm82_actions_extra.c" "$SRC/gm82_view.c" "$SRC/gm82_path.c" \
  "$SRC/gm82_timeline.c" "$SRC/gm82_script.c" \
  "$SRC/gm82_particles.c" "$SRC/gm82_mp_grid.c" \
  "$SRC/gm82_sound_runtime.c" "$SRC/gm82_soft_render.c" \
  "$SRC/gm82_sprite_decode.c" "$SRC/gm82_background_decode.c" \
  "$SRC/gm82_object_room_decode.c" -lz -lm

OUT="$ROOT/build_host/pipeline_results.txt"
: > "$OUT"
ok=0; fail=0
for gmk in "$SAMPLES"/*.gmk; do
  [[ -f "$gmk" ]] || continue
  echo "=== $gmk ===" | tee -a "$OUT"
  if "$ROOT/build_host/pipeline_min" "$gmk" 30 2>&1 | tee -a "$OUT" | grep -q PIPELINE_OK; then
    ok=$((ok+1))
  else
    fail=$((fail+1))
  fi
done
echo "SUMMARY ok=$ok fail=$fail" | tee -a "$OUT"
