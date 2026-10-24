#!/usr/bin/env python3
import base64, zlib
from pathlib import Path
here = Path(__file__).resolve().parent
parts = sorted(here.glob("gml_eval_full.zlib.b64.*"))
if not parts:
    raise SystemExit("no eval zlib parts")
blob = "".join(p.read_text().strip() for p in parts)
body = zlib.decompress(base64.b64decode(blob)).decode()
root = here.parents[1]
targets = [
    root / "app/src/main/cpp/src/gm82_gml_eval.c",
    root / "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    root / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]
for t in targets:
    t.parent.mkdir(parents=True, exist_ok=True)
    t.write_text(body)
    print("wrote", t, len(body))
assert "gm82_gml_last_string" in body
assert "g_last_string" in body
print("OK string VM body present")
