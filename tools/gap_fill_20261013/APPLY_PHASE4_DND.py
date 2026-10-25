#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
B = ROOT / "tools/gap_fill_20261013/blobs"

def materialize(name, markers):
    single = B / f"{name}.zlib.b64"
    if not single.exists():
        print("skip no blob", name)
        return
    raw = single.read_text().strip()
    if not raw or raw == "PLACEHOLDER" or len(raw) < 100:
        print("skip empty", name)
        return
    data = zlib.decompress(base64.b64decode(raw))
    for m in markers:
        if m not in data:
            raise SystemExit(f"missing {m} in {name}")
    for dest in [
        ROOT / f"app/src/main/cpp/src/{name}",
        ROOT / f"app/src/main/cpp_backup/src/{name}",
        ROOT / f"NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/{name}",
    ]:
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(data)
        print("wrote", dest, len(data))

materialize("gm82_actions.c", [b"Phase 4: expanded DnD", b"gm82_actions_fire_draw", b"action_if_empty"])
materialize("gm82_events.c", [b"gm82_actions_fire_draw"])
print("APPLY_PHASE4_DONE")
