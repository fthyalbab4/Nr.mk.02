#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
cd "$ROOT"
patch -p1 < "$DIR/gm82_runtime.event_order.patch"
patch -p1 < "$DIR/gm82_events.begin_end.patch"
if [[ -f "$DIR/gml_xprevious.patch" ]]; then
  patch -p1 < "$DIR/gml_xprevious.patch" || true
fi
gcc -O2 -Wall -o /tmp/test_event_order "$DIR/test_event_order.c"
/tmp/test_event_order
echo ASSEMBLE_OK
