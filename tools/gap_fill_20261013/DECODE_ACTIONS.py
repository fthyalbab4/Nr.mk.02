#!/usr/bin/env python3
import base64, zlib
from pathlib import Path
here = Path(__file__).resolve().parent
blob = (here / "actions_full.zlib.b64").read_text().strip()
body = zlib.decompress(base64.b64decode(blob)).decode()
root = here.parents[1]
targets = [
    root / "app/src/main/cpp/src/gm82_actions.c",
    root / "app/src/main/cpp_backup/src/gm82_actions.c",
    root / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]
for t in targets:
    t.parent.mkdir(parents=True, exist_ok=True)
    t.write_text(body)
    print("wrote", t, len(body))
