#!/bin/sh
# Assemble base64 parts and decode to binary .gmk
# Usage: sh assemble_gmk.sh plataformas
set -e
NAME="${1:-plataformas}"
PARTS_DIR="$(dirname "$0")/${NAME}.gmk.b64.parts"
OUT="$(dirname "$0")/${NAME}.gmk"
if [ ! -d "$PARTS_DIR" ]; then
  echo "missing $PARTS_DIR"
  exit 1
fi
cat "$PARTS_DIR"/part_*.txt | tr -d '\n' | base64 -d > "$OUT"
echo "wrote $OUT ($(wc -c < "$OUT") bytes)"
