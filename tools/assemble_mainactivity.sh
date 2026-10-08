#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
OUT="$ROOT/app/src/main/java/com/normaker/nativefull/MainActivity.java"
cat "$ROOT"/tools/ma_chunks/ch{0,1,2,3,4}.txt > "$OUT"
python3 -c "from pathlib import Path; t=Path(r'$OUT').read_text(); assert t.startswith('package'); assert 'tick()' in t; print('OK', len(t))"
