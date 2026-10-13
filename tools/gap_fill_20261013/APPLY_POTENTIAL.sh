#!/usr/bin/env bash
# Inject mp_potential_step / action_potential_step into gml_eval if missing
set -euo pipefail
F="$(cd "$(dirname "$0")/../.." && pwd)/app/src/main/cpp/src/gm82_gml_eval.c"
if grep -q 'action_potential_step' "$F" 2>/dev/null; then
  echo POTENTIAL_ALREADY; exit 0
fi
python3 - "$F" <<'PY'
import sys
from pathlib import Path
p=Path(sys.argv[1])
t=p.read_text()
needle='        if (strcmp(id, "move_towards_point") == 0) {\n            gml_move_towards_point(args[0], args[1], nargs >= 3 ? args[2] : 0); *out = 0; return true;\n        }'
ins=needle+'''\n        if (strcmp(id, "mp_potential_step") == 0 || strcmp(id, "action_potential_step") == 0) {\n            double tx = nargs >= 1 ? args[0] : 0;\n            double ty = nargs >= 2 ? args[1] : 0;\n            double sp = nargs >= 3 ? args[2] : 1;\n            gml_move_towards_point(tx, ty, sp);\n            *out = 1; return true;\n        }'''
if needle not in t:
    raise SystemExit('needle missing')
p.write_text(t.replace(needle,ins,1))
print('POTENTIAL_INJECTED')
PY
