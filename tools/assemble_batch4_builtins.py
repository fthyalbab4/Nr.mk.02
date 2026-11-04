#!/usr/bin/env python3
"""Assemble batch4 builtins from tools/batch4_b64_*.txt and write to three mirrors."""
from pathlib import Path
import base64, sys
ROOT = Path(__file__).resolve().parents[1]
parts = []
i = 0
while True:
    p = ROOT / "tools" / f"batch4_b64_{i}.txt"
    if not p.exists():
        break
    parts.append(p.read_text().strip())
    i += 1
if not parts:
    print("no parts"); sys.exit(1)
data = base64.b64decode("".join(parts))
print("decoded", len(data), "from", i, "parts")
for rel in [
    "app/src/main/cpp/src/gm82_gml_builtins.c",
    "app/src/main/cpp_backup/src/gm82_gml_builtins.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_builtins.c",
]:
    out = ROOT / rel
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_bytes(data)
    print("wrote", rel, out.stat().st_size)
print("OK")
