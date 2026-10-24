#!/usr/bin/env python3
import base64
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
d = Path(__file__).parent
parts = sorted(d.glob("LAND_PHASE0_B64_*.txt"), key=lambda p: int(p.stem.split("_")[-1]))
if not parts:
    single = d / "LAND_PHASE0_B64.txt"
    blob = single.read_text() if single.exists() else ""
else:
    blob = "".join(p.read_text() for p in parts)
cur = None
buf = []
for line in blob.splitlines():
    if line.startswith("FILE "):
        cur = line[5:].strip(); buf = []
    elif line == "ENDFILE":
        if cur:
            data = base64.b64decode("".join(buf))
            path = ROOT / cur
            path.parent.mkdir(parents=True, exist_ok=True)
            path.write_bytes(data)
            print("wrote", cur, len(data))
        cur = None; buf = []
    else:
        if cur is not None: buf.append(line)
print("LAND_PHASE0_DECODE_OK")
