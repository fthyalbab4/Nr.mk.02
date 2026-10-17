#!/usr/bin/env python3
import base64, pathlib
ROOT = pathlib.Path(__file__).resolve().parents[2]
parts = sorted(ROOT.glob("docs/RESTORE_BUILTINS_H_*.b64"))
if not parts:
    raise SystemExit("no restore parts")
data = base64.b64decode("".join(p.read_text() for p in parts))
out = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
out.write_bytes(data)
print("RESTORED", out, len(data))
