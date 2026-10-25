#!/usr/bin/env python3
import zlib, base64
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
BLOBDIR = Path(__file__).resolve().parent / "blobs"
MAP = {
  "gm82_actions.c": [
    "app/src/main/cpp/src/gm82_actions.c",
    "app/src/main/cpp_backup/src/gm82_actions.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
  ],
  "gm82_runtime.c": [
    "app/src/main/cpp/src/gm82_runtime.c",
    "app/src/main/cpp_backup/src/gm82_runtime.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_runtime.c",
  ],
  "gm82_gml_eval.c": [
    "app/src/main/cpp/src/gm82_gml_eval.c",
    "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
  ],
}
for key, paths in MAP.items():
    bpath = BLOBDIR / f"{key}.zlib.b64"
    p1 = BLOBDIR / f"{key}.zlib.b64.part1"
    p2 = BLOBDIR / f"{key}.zlib.b64.part2"
    if p1.exists() and p2.exists():
        raw = p1.read_text().strip() + p2.read_text().strip()
    elif bpath.exists():
        raw = bpath.read_text().strip()
    else:
        print("MISSING", key); continue
    data = zlib.decompress(base64.b64decode(raw))
    for rel in paths:
        p = ROOT / rel
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_bytes(data)
        print("wrote", rel, len(data))
print("MATERIALIZE_GAPFILL_OK")
