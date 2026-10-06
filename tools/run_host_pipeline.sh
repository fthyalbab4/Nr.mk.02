#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
cd "$ROOT"
mkdir -p build_host
gcc -O2 -Iinclude -o build_host/pipeline_test tools/host_pipeline_test.c \
  src/gm82_runtime.c src/gm82_events.c src/gm82_gml_builtins.c src/gm82_input.c \
  src/gm82_view.c src/gm82_actions.c src/gm82_object_room_decode.c src/gm82_sprite_decode.c \
  src/gm82_background_decode.c src/gm82_project_ir.c src/gm82_materialize.c \
  src/gm82_runtime_guard.c src/gm82_gmk_reader.c src/gm82_gmk_format.c src/gm82_game_start.c \
  src/gm82_path.c src/gm82_timeline.c src/gm82_loader.c src/gm82_text_reader.c \
  src/gm82_particles.c src/gm82_script.c src/gm82_mp_grid.c src/gm82_gml_eval.c \
  -lz -lm
chmod +x build_host/pipeline_test 2>/dev/null || true
OUT=build_host/pipeline_results.txt
: > "$OUT"
ok=0; fail=0
for gmk in samples/*.gmk; do
  echo "=== $gmk ===" | tee -a "$OUT"
  if build_host/pipeline_test "$gmk" 30 2>&1 | tee -a "$OUT" | grep -q PIPELINE_OK; then
    ok=$((ok+1))
  else
    fail=$((fail+1))
  fi
done
echo "SUMMARY ok=$ok fail=$fail" | tee -a "$OUT"
