#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
python3 tools/gap_fill_20261013/restore_builtins_h.py || true
python3 tools/gap_fill_20261013/patch_origin_decode.py || true
if [[ -f tools/gap_fill_20261013/patch_sprite_origin.diff ]]; then
  patch -p1 --forward < tools/gap_fill_20261013/patch_sprite_origin.diff || true
fi
if [[ -f tools/gap_fill_20261013/patch_runtime_origin.diff ]]; then
  patch -p1 --forward < tools/gap_fill_20261013/patch_runtime_origin.diff || true
fi
if [[ -f tools/gap_fill_20261013/patch_builtins_origin.diff ]]; then
  patch -p1 --forward < tools/gap_fill_20261013/patch_builtins_origin.diff || true
fi
if [[ -f tools/gap_fill_20261013/patch_eval_xoffset.diff ]]; then
  patch -p1 --forward < tools/gap_fill_20261013/patch_eval_xoffset.diff || true
fi
bash tools/gap_fill_20261013/ASSEMBLE.sh
echo APPLY_RUNNER_PATCHES_DONE
