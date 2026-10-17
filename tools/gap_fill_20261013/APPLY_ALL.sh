#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
git fetch --depth=80 origin 2>/dev/null || true
python3 tools/gap_fill_20261013/restore_builtins_h.py 2>/dev/null || true
# Prefer unified source diffs if present
if [[ -f tools/gap_fill_20261013/apply_source_diffs.sh ]]; then
  bash tools/gap_fill_20261013/apply_source_diffs.sh || true
fi
bash tools/gap_fill_20261013/apply_runner_patches.sh
python3 tools/gap_fill_20261013/port_file_rename_from_nr01.py
python3 tools/gap_fill_20261013/apply_complete_runner.py
python3 tools/gap_fill_20261013/apply_string_args_room_clamp.py
python3 tools/gap_fill_20261013/apply_string_debug_gaps.py
if [[ "${SKIP_PIPELINE:-0}" != "1" ]]; then
  bash tools/run_host_pipeline.sh || true
fi
echo "APPLY_ALL_DONE"
