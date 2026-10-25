#!/usr/bin/env python3
"""Materialize actions+runtime from zlib.b64 blobs; apply eval patches via APPLY_STRING_AND_MATH."""
import zlib, base64, subprocess, sys
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
}
for key, paths in MAP.items():
    bpath = BLOBDIR / f"{key}.zlib.b64"
    if not bpath.exists():
        print("MISSING", bpath); continue
    data = zlib.decompress(base64.b64decode(bpath.read_text().strip()))
    for rel in paths:
        p = ROOT / rel
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_bytes(data)
        print("wrote", rel, len(data))
# eval: incremental APPLY (avoids truncated large b64 on API)
apply = ROOT / "tools/gap_fill_20261013/APPLY_STRING_AND_MATH.py"
if apply.exists():
    subprocess.check_call([sys.executable, str(apply)], cwd=str(ROOT))
print("MATERIALIZE_GAPFILL_OK")
