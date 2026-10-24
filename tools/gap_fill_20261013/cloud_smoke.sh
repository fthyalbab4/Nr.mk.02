#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
OUT="${TMPDIR:-/tmp}/nor_cloud_gmk"
mkdir -p "$OUT"
URLS=(
  "https://raw.githubusercontent.com/floowsnaake/GMK8_Examples/master/Scripts.gmk"
  "https://raw.githubusercontent.com/floowsnaake/GMK8_Examples/master/Timelines.gmk"
  "https://raw.githubusercontent.com/floowsnaake/GMK8_Examples/master/While%20-%20copia.gmk"
)
echo "Downloading ${#URLS[@]} cloud GMKs..."
for u in "${URLS[@]}"; do
  fn=$(basename "${u//%20/ }")
  curl -fsSL "$u" -o "$OUT/$fn" && echo "OK $fn" || echo "FAIL $u"
done
echo "Bundled samples:"
ls "$ROOT/app/src/main/assets/www/samples/"*.gmk
echo "Catalog in UI: ~146 GMK (floowsnaake/GMK8_Examples). See docs/CLOUD_GAMES.md"
