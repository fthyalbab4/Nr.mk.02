#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
OUT="$ROOT/app/src/main/cpp/src/gm82_object_room_decode.c"
if grep -q 'Reject zlib false-positives' "$OUT" 2>/dev/null; then
  echo OBJECT_FILTER_ALREADY
  exit 0
fi
if [[ -f "$DIR/object_decode.zlib.p0" && -f "$DIR/object_decode.zlib.p1" ]]; then
  python3 -c "
import base64, zlib, pathlib
d = pathlib.Path('$DIR')
b = (d/'object_decode.zlib.p0').read_text().strip() + (d/'object_decode.zlib.p1').read_text().strip()
out = pathlib.Path('$OUT')
data = zlib.decompress(base64.b64decode(b))
out.write_bytes(data)
assert b'Reject zlib false-positives' in data
print('OBJECT_FILTER_MERGED', len(data))
"
elif [[ -f "$DIR/gm82_object_filter.patch" ]]; then
  cd "$ROOT" && patch -p1 < "$DIR/gm82_object_filter.patch"
  echo OBJECT_FILTER_PATCHED
fi
