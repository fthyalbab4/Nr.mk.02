#!/usr/bin/env bash
# Run from repo root before any NDK/SO build
set -euo pipefail
bash tools/gap_fill_20261013/ASSEMBLE.sh
echo "Core patches applied. Safe to rebuild libgm82_android.so"
