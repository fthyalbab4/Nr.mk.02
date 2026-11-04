#!/usr/bin/env python3
"""Shrink GM82CORE_STUBS to residual 10 in all mirrors."""
from pathlib import Path
import re
ROOT = Path(__file__).resolve().parents[1]
NEW = '''static const char *GM82CORE_STUBS[] = {
  "draw_background_tiled_extra", "draw_setb", "draw_setf", "draw_spotlight",
  "draw_sprite_part_centered", "draw_sprite_part_extra", "draw_sprite_tiled_extra",
  "ds_list_filter", "ds_list_foreach", "ds_list_map"
};
'''
for rel in [
    "app/src/main/cpp_backup/src/gm82_gml_builtins.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_builtins.c",
]:
    p = ROOT / rel
    if not p.exists():
        print("skip", rel); continue
    t = p.read_text(encoding="utf-8", errors="replace")
    m = re.search(r"static const char \*GM82CORE_STUBS\[\] = \{.*?\};", t, re.S)
    if not m:
        print("no match", rel); continue
    if "ds_list_filter" in m.group(0) and m.group(0).count(",") < 15:
        print("already small", rel); continue
    t = t[:m.start()] + NEW.rstrip() + t[m.end():]
    p.write_text(t, encoding="utf-8")
    print("shrunk", rel, "new len", len(t))
print("OK")
