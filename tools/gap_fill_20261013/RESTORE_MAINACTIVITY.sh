#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
OUT="$ROOT/app/src/main/java/com/normaker/nativefull/MainActivity.java"
cat "$DIR/MainActivity.apk_restore.p0" "$DIR/MainActivity.apk_restore.p1" "$DIR/MainActivity.apk_restore.p2" > "$OUT"
echo "Restored MainActivity: $(wc -c < "$OUT") bytes"
grep -c nativeRuntimeStep "$OUT"
grep -c 'addJavascriptInterface(new NativeBridge' "$OUT"
echo RESTORE_OK
