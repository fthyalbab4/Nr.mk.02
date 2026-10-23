#!/usr/bin/env bash
set -e
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"
for p in tools/gap_fill_20261013/patch_*.py; do
  echo "== $p =="
  python3 "$p" || true
done
bash tools/run_host_pipeline.sh
