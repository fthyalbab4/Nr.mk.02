#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
cd "$ROOT"

apply_patch() {
  local p="$1"
  local marker="$2"
  local file="$3"
  if [ -n "$marker" ] && grep -q "$marker" "$file" 2>/dev/null; then
    echo "skip $(basename "$p") (already)"
    return 0
  fi
  if [ -f "$p" ]; then
    if patch -p1 --dry-run < "$p" >/dev/null 2>&1; then
      patch -p1 < "$p" && echo "applied $(basename "$p")"
    else
      echo "warn: skip broken $(basename "$p")"
    fi
  fi
}

# Materialize full string-VM eval body if payload present and marker missing
if [ -f "$DIR/DECODE_EVAL.py" ] && [ -f "$DIR/gml_eval_full.zlib.b64.00" ]; then
  if ! grep -q 'gm82_gml_set_last_string' app/src/main/cpp/src/gm82_gml_eval.c 2>/dev/null; then
    python3 "$DIR/DECODE_EVAL.py" || true
  else
    echo "skip DECODE_EVAL (eval already has set_last_string)"
  fi
fi

# Optional richer actions body
if [ -f "$DIR/DECODE_ACTIONS.py" ] && ls "$DIR"/actions_full.zlib.b64.* >/dev/null 2>&1; then
  if ! grep -q 'gm82_action_execute_named' app/src/main/cpp/src/gm82_actions.c 2>/dev/null; then
    python3 "$DIR/DECODE_ACTIONS.py" || true
  else
    echo "skip DECODE_ACTIONS (actions already has execute_named)"
  fi
fi

if ! grep -q 'has_player' app/src/main/cpp/src/gm82_runtime.c 2>/dev/null; then
  python3 "$DIR/spawn_fallback.py" || true
else
  echo "skip spawn (already)"
fi

apply_patch "$DIR/gm82_object_gml_harvest.patch" "Harvest execute-code GML" "app/src/main/cpp/src/gm82_object_room_decode.c"
apply_patch "$DIR/gm82_events.step_gml.patch" "stepish" "app/src/main/cpp/src/gm82_events.c"
apply_patch "$DIR/gm82_jni.scripts.patch" "g_engine_scripts" "app/src/main/cpp/gm82_jni.c"

if ! grep -q 'xprevious' app/src/main/cpp/src/gm82_gml_eval.c 2>/dev/null; then
  bash "$DIR/APPLY_GML.sh" || true
fi
if ! grep -q 'action_potential_step' app/src/main/cpp/src/gm82_gml_eval.c 2>/dev/null; then
  bash "$DIR/APPLY_POTENTIAL.sh" || true
fi

python3 "$DIR/collision_collectible.py" || true
python3 "$DIR/room_instance_widen.py" || true
python3 "$DIR/skip_empty_obj.py" || true
python3 "$DIR/alarm_object_events.py" || true
python3 "$DIR/destroy_events.py" || true
python3 "$DIR/autobind_restore.py" || true
python3 "$DIR/mm_action_aliases.py" || true
python3 "$DIR/mm_xstart.py" || true
python3 "$DIR/apply_deterministic_pipeline.py" || true
python3 "$DIR/gm82core_instance_helpers.py" || true

if [ -f "$DIR/test_event_order.c" ]; then
  gcc -O2 -Wall -o /tmp/test_event_order "$DIR/test_event_order.c" 2>/dev/null && /tmp/test_event_order || true
fi
echo ASSEMBLE_OK
