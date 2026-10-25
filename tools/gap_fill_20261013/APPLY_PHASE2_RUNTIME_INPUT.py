#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
B = ROOT / "tools/gap_fill_20261013/blobs"

def load_blob(name):
    single = B / f"{name}.zlib.b64"
    if single.exists():
        raw = single.read_text().strip()
        if raw and raw != "PLACEHOLDER" and len(raw) > 100:
            try:
                return zlib.decompress(base64.b64decode(raw))
            except Exception as e:
                print("single blob fail", name, e)
    parts = sorted(B.glob(name.replace('.c', '.part*.b64')))
    if parts:
        raw = "".join(p.read_text().strip() for p in parts)
        try:
            return zlib.decompress(base64.b64decode(raw))
        except Exception as e:
            print("parts fail", name, e)
    return None

def materialize(name, markers):
    data = load_blob(name)
    if not data:
        print("skip", name)
        return
    for m in markers:
        if m not in data:
            raise SystemExit(f"missing {m} in {name}")
    (B / f"{name}.zlib.b64").write_text(base64.b64encode(zlib.compress(data, 9)).decode())
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
