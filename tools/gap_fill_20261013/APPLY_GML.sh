#!/usr/bin/env bash
# Inject xprevious/yprevious into gm82_gml_eval.c if missing
set -euo pipefail
ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
F="$ROOT/app/src/main/cpp/src/gm82_gml_eval.c"
if grep -q 'xprevious' "$F" 2>/dev/null; then
  echo GML_XPREVIOUS_ALREADY
  exit 0
fi
python3 - "$F" <<'PY'
import sys
from pathlib import Path
p = Path(sys.argv[1])
t = p.read_text()
needle = '    if (strcmp(name, "y") == 0) { *out = s ? s->y : 0; return true; }\n'
insert = needle + (
    '    if (strcmp(name, "xprevious") == 0) { *out = s ? s->xprevious : 0; return true; }\n'
    '    if (strcmp(name, "yprevious") == 0) { *out = s ? s->yprevious : 0; return true; }\n'
)
if needle not in t:
    raise SystemExit('needle not found')
p.write_text(t.replace(needle, insert, 1))
print('GML_XPREVIOUS_INJECTED')
PY
