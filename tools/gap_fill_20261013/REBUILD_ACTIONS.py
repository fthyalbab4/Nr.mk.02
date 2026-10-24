#!/usr/bin/env python3
"""Reassemble gm82_actions.c from parts committed under tools/gap_fill_20261013/"""
from pathlib import Path
root = Path(__file__).resolve().parents[2]
parts_dir = Path(__file__).resolve().parent
parts = sorted(parts_dir.glob("actions_body_part_*.c"))
body = "".join(p.read_text() for p in parts)
targets = [
    root / "app/src/main/cpp/src/gm82_actions.c",
    root / "app/src/main/cpp_backup/src/gm82_actions.c",
    root / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]
for t in targets:
    t.parent.mkdir(parents=True, exist_ok=True)
    t.write_text(body)
    print("wrote", t, "bytes", len(body))
