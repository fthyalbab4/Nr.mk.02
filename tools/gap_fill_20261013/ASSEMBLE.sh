#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cat "$ROOT"/tools/gap_fill_20261013/gm82_runtime.c.part{0,1} > "$ROOT"/app/src/main/cpp/src/gm82_runtime.c
cat "$ROOT"/tools/gap_fill_20261013/gm82_events.c.part{0,1} > "$ROOT"/app/src/main/cpp/src/gm82_events.c
# optional GML patch
if command -v patch >/dev/null; then
  patch -p1 -d "$ROOT" < "$ROOT"/tools/gap_fill_20261013/gml_xprevious.patch || true
fi
echo "assembled runtime+events; apply gml patch if needed"
