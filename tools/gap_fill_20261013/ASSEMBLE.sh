#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
cd "$ROOT"
if ! grep -q 'spawn first player' app/src/main/cpp/src/gm82_runtime.c 2>/dev/null && ! grep -q 'has_player' app/src/main/cpp/src/gm82_runtime.c 2>/dev/null; then
  patch -p1 < "$DIR/gm82_runtime.spawn_player.patch" || true
fi
if ! grep -q 'xprevious' app/src/main/cpp/src/gm82_gml_eval.c 2>/dev/null; then
  bash "$DIR/APPLY_GML.sh" || true
fi
gcc -O2 -Wall -o /tmp/test_event_order "$DIR/test_event_order.c"
/tmp/test_event_order
echo ASSEMBLE_OK
