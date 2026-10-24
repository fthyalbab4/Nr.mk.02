#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
bash tools/gap_fill_20261013/LAND_PHASE0.sh || true
python3 tools/gap_fill_20261013/patch_phase3_movement_save.py
bash tools/run_host_pipeline.sh
