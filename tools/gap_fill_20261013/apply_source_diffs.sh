#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
D=tools/gap_fill_20261013/patches
if [[ -f "$D/ALL_SOURCES.diff" ]]; then
  patch -p1 --forward --reject-file=- < "$D/ALL_SOURCES.diff" || true
else
  for f in full_sprite_decode full_runtime full_gml_eval full_gml_builtins full_builtins_h; do
    [[ -f "$D/${f}.diff" ]] || continue
    patch -p1 --forward --reject-file=- < "$D/${f}.diff" || true
  done
fi
echo APPLY_SOURCE_DIFFS_DONE
