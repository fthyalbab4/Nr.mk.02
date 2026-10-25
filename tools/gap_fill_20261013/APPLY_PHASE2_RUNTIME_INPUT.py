#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
B = ROOT / "tools/gap_fill_20261013/blobs"

def materialize(name, markers):
    parts = sorted(B.glob(name.replace('.c','.part*.b64')))
    raw = None
    if parts:
        raw = "".join(p.read_text().strip() for p in parts)
    single = B / f"{name}.zlib.b64"
    if not raw and single.exists():
        raw = single.read_text().strip()
    if not raw or len(raw) < 50:
        print("skip", name)
        return
    data = zlib.decompress(base64.b64decode(raw))
    for m in markers:
        if m not in data:
            raise SystemExit(f"missing {m} in {name}")
    single.write_text(base64.b64encode(zlib.compress(data, 9)).decode())
    for dest in [
        ROOT / f"app/src/main/cpp/src/{name}",
        ROOT / f"app/src/main/cpp_backup/src/{name}",
        ROOT / f"NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/{name}",
    ]:
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(data)
        print("wrote", dest, len(data))

materialize("gm82_runtime.c", [b"Phase 2: spatial", b"gm82_arena_init"])
materialize("gm82_input.c", [b"gml_gamepad_axis_value", b"buf_push"])
print("APPLY_PHASE2_OK")
