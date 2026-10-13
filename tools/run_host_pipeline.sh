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
#include "gm82_runtime.h"
int main(int argc, char **argv) {
    const char *path = argc > 1 ? argv[1] : NULL;
    int frames = argc > 2 ? atoi(argv[2]) : 30;
    if (!path) { fprintf(stderr, "usage: %s file.gmk [frames]\n", argv[0]); return 2; }
    FILE *f = fopen(path, "rb");
    if (!f) { perror(path); return 1; }
    fseek(f, 0, SEEK_END); long sz = ftell(f); fseek(f, 0, SEEK_SET);
    if (sz < 16) { fclose(f); return 1; }
    uint8_t *buf = malloc((size_t)sz);
    if (!buf || fread(buf, 1, (size_t)sz, f) != (size_t)sz) { free(buf); fclose(f); return 1; }
    fclose(f);
    printf("LOADED %s bytes=%ld\n", path, sz);
    gm82_runtime rt; gm82_runtime_init(&rt); rt.running = 1; rt.room_speed = 30;
    for (int i = 0; i < frames; i++) gm82_runtime_step(&rt);
    printf("STEPS %d frame=%d\n", frames, rt.frame);
    uint8_t *rgba = calloc(640 * 480 * 4, 1);
    if (rgba) { printf("DRAW ok=%d\n", gm82_runtime_draw(&rt, rgba, 640, 480) ? 1 : 0); free(rgba); }
    free(buf); printf("PIPELINE_OK\n"); return 0;
}
C

gcc -O2 -I"$INC" -I"$CPP" -o "$ROOT/build_host/pipeline_min" \
  "$ROOT/build_host/host_pipeline_min.c" "$ROOT/build_host/opensles_stub.c" \
  "$SRC/gm82_runtime.c" "$SRC/gm82_events.c" "$SRC/gm82_input.c" \
  "$SRC/gm82_gml_builtins.c" "$SRC/gm82_gml_eval.c" \
  "$SRC/gm82_actions.c" "$SRC/gm82_view.c" "$SRC/gm82_path.c" \
  "$SRC/gm82_timeline.c" "$SRC/gm82_script.c" \
  "$SRC/gm82_particles.c" "$SRC/gm82_mp_grid.c" \
  "$SRC/gm82_sound_runtime.c" "$SRC/gm82_soft_render.c" \
  "$SRC/gm82_sprite_decode.c" -lz -lm

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
