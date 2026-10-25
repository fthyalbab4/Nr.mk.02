#!/usr/bin/env bash
# Prefer blob materialize (exact host-verified tree), else incremental APPLY_*
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
if [[ -f tools/gap_fill_20261013/MATERIALIZE_GAPFILL_BLOB.py ]]; then
  python3 tools/gap_fill_20261013/MATERIALIZE_GAPFILL_BLOB.py
else
  python3 tools/gap_fill_20261013/APPLY_STRING_AND_MATH.py
  python3 tools/gap_fill_20261013/APPLY_DND_EXTRAS.py
  python3 tools/gap_fill_20261013/APPLY_INSTANCE_IMAGE_FIELDS.py
  python3 tools/gap_fill_20261013/APPLY_ACTION_IMAGE_AND_LOG.py
  python3 tools/gap_fill_20261013/APPLY_DRAW_AND_DND2.py
fi
if [[ -f tools/gap_fill_20261013/VERIFY_AFTER_APPLY.py ]]; then
  python3 tools/gap_fill_20261013/VERIFY_AFTER_APPLY.py
fi
echo "APPLY_ALL_SEQUENTIAL_OK"
if [[ "${RUN_PIPELINE:-0}" == "1" ]]; then
  bash tools/run_host_pipeline.sh
fi
