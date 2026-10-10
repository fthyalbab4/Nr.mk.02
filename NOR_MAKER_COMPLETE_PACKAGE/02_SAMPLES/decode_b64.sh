#!/bin/sh
# Decode base64-encoded .gmk samples back to binary
# Usage: sh decode_b64.sh plataformas.gmk.b64 plataformas.gmk
if [ -z "$1" ] || [ -z "$2" ]; then
  echo "usage: $0 file.gmk.b64 file.gmk"
  exit 1
fi
base64 -d < "$1" > "$2"
echo "wrote $2 ($(wc -c < "$2") bytes)"
