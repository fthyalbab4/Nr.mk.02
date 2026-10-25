#!/usr/bin/env python3
from pathlib import Path
import base64, zlib
ROOT = Path(__file__).resolve().parent
parts = sorted(ROOT.joinpath("blobs").glob("gm82_actions.part*.b64"))
if not parts:
    raise SystemExit("no parts")
data = base64.b64decode("".join(p.read_text().strip() for p in parts))
assert b"action_if_number" in data
out = ROOT / "blobs" / "gm82_actions.c.zlib.b64"
out.write_text(base64.b64encode(zlib.compress(data, 9)).decode())
for dest in [
    ROOT.parents[1] / "app/src/main/cpp/src/gm82_actions.c",
    ROOT.parents[1] / "app/src/main/cpp_backup/src/gm82_actions.c",
    ROOT.parents[1] / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]:
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_bytes(data)
    print("wrote", dest, len(data))
print("ASSEMBLE_OK")
