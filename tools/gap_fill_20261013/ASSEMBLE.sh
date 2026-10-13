#!/usr/bin/env bash
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
DIR="$ROOT/tools/gap_fill_20261013"
decode() {
  local b64="$1" out="$2"
  python3 -c "import base64,zlib,pathlib; pathlib.Path(r'$out').write_bytes(zlib.decompress(base64.b64decode(pathlib.Path(r'$b64').read_text())))"
}
if [[ -f "$DIR/gm82_runtime.c.zlib.b64" ]]; then
  decode "$DIR/gm82_runtime.c.zlib.b64" "$ROOT/app/src/main/cpp/src/gm82_runtime.c"
  echo "wrote gm82_runtime.c"
fi
if [[ -f "$DIR/gm82_events.c.zlib.b64" ]]; then
  decode "$DIR/gm82_events.c.zlib.b64" "$ROOT/app/src/main/cpp/src/gm82_events.c"
  echo "wrote gm82_events.c"
fi
if command -v patch >/dev/null && [[ -f "$DIR/gml_xprevious.patch" ]]; then
  patch -p1 -d "$ROOT" < "$DIR/gml_xprevious.patch" || true
fi
echo done
