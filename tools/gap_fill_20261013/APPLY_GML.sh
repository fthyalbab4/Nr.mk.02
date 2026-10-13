#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
OUT="$ROOT/app/src/main/cpp/src/gm82_gml_eval.c"
python3 -c "
import base64, zlib, pathlib
d = pathlib.Path('$DIR')
parts = [d / f'gml_eval.zlib.p{i}' for i in range(4)]
b = ''.join(p.read_text().strip() for p in parts)
out = pathlib.Path('$OUT')
data = zlib.decompress(base64.b64decode(b))
out.write_bytes(data)
print('wrote', out, len(data))
assert b'xprevious' in data
print('GML_XPREVIOUS_OK')
"
