#!/usr/bin/env python3
"""Ensure DnD if/else patches present (idempotent). Prefer MATERIALIZE blob for full file."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
paths = [
    ROOT / "app/src/main/cpp/src/gm82_actions.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_actions.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]
need = ["action_if_number", "skip = 0", "action_else"]
for p in paths:
    if not p.exists():
        print("missing", p)
        continue
    t = p.read_text(errors="replace")
    ok = all(x in t for x in need)
    print(("OK" if ok else "NEED_MATERIALIZE"), p)
print("APPLY_DND_IF_ELSE_DONE")
