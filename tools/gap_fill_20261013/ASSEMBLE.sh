#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
cd "$ROOT"

# runtime: already on main; patch only if missing
if ! grep -q 'gm82_events_fire_begin_step_all(rt)' app/src/main/cpp/src/gm82_runtime.c 2>/dev/null; then
  patch -p1 < "$DIR/gm82_runtime.event_order.patch" || true
fi
if ! grep -q 'void gm82_events_fire_begin_step_all' app/src/main/cpp/src/gm82_events.c 2>/dev/null; then
  patch -p1 < "$DIR/gm82_events.begin_end.patch" || true
fi

# gml xprevious
if ! grep -q 'xprevious' app/src/main/cpp/src/gm82_gml_eval.c 2>/dev/null; then
  if [[ -f "$DIR/gml_eval.zlib.p0" && -f "$DIR/gml_eval.zlib.p1" && -f "$DIR/gml_eval.zlib.p2" && -f "$DIR/gml_eval.zlib.p3" ]]; then
    bash "$DIR/APPLY_GML.sh" || true
  fi
  if ! grep -q 'xprevious' app/src/main/cpp/src/gm82_gml_eval.c 2>/dev/null; then
    if [[ -f "$DIR/gml_xprevious.proper.patch" ]]; then
      patch -p1 < "$DIR/gml_xprevious.proper.patch" || true
    fi
  fi
fi

gcc -O2 -Wall -o /tmp/test_event_order "$DIR/test_event_order.c"
/tmp/test_event_order
echo ASSEMBLE_OK
