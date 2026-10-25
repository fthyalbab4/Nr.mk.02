#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
blob_dir = ROOT / "tools/gap_fill_20261013/blobs"
blob = blob_dir / "gm82_runtime.c.zlib.b64"
parts = sorted(blob_dir.glob("gm82_runtime.part*.b64"))
raw = None
if parts:
    raw = "".join(p.read_text().strip() for p in parts)
elif blob.exists():
    raw = blob.read_text().strip()
if not raw or raw == "PLACEHOLDER" or len(raw) < 100:
    raise SystemExit("no valid runtime blob")
data = zlib.decompress(base64.b64decode(raw))
assert b"gm82_arena_init" in data and b"flush_destroy_queue" in data
blob.write_text(base64.b64encode(zlib.compress(data, 9)).decode())
for dest in [
    ROOT / "app/src/main/cpp/src/gm82_runtime.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_runtime.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_runtime.c",
]:
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_bytes(data)
    print("wrote", dest, len(data))
print("APPLY_PHASE1_RUNTIME_OK")
