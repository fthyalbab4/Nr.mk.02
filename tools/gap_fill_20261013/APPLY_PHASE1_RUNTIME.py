#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
blob = ROOT / "tools/gap_fill_20261013/blobs/gm82_runtime.c.zlib.b64"
if not blob.exists():
    raise SystemExit("no runtime blob")
data = zlib.decompress(base64.b64decode(blob.read_text().strip()))
assert b"gm82_arena_init" in data and b"flush_destroy_queue" in data
for dest in [
    ROOT / "app/src/main/cpp/src/gm82_runtime.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_runtime.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_runtime.c",
]:
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_bytes(data)
    print("wrote", dest, len(data))
print("APPLY_PHASE1_RUNTIME_OK")
