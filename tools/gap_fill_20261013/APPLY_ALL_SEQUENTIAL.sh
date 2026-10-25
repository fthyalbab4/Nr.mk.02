#!/usr/bin/env bash
# Idempotent sequential gap-fill — no device required
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
python3 tools/gap_fill_20261013/APPLY_STRING_AND_MATH.py
python3 tools/gap_fill_20261013/APPLY_DND_EXTRAS.py
python3 tools/gap_fill_20261013/APPLY_INSTANCE_IMAGE_FIELDS.py
python3 tools/gap_fill_20261013/APPLY_ACTION_IMAGE_AND_LOG.py
python3 tools/gap_fill_20261013/APPLY_DRAW_AND_DND2.py
echo "APPLY_ALL_SEQUENTIAL_OK"
if [[ "${RUN_PIPELINE:-0}" == "1" ]]; then
  bash tools/run_host_pipeline.sh
fi
