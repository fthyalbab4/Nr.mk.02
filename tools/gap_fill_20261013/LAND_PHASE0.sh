#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
if [ -f tools/gap_fill_20261013/LAND_PHASE0.patch ]; then
  patch -p1 --forward < tools/gap_fill_20261013/LAND_PHASE0.patch || true
fi
for p in tools/gap_fill_20261013/patch_*.py tools/gap_fill_20261013/apply_pr161_162_unique.py; do
  [ -f "$p" ] && python3 "$p" || true
done
bash tools/run_host_pipeline.sh
