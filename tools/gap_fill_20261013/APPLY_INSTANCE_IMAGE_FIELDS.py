#!/usr/bin/env python3
"""Add image_angle/alpha/blend to gm82_instance + init sites (idempotent)."""
from pathlib import Path
import re
ROOT = Path(__file__).resolve().parents[2]
HEADER_OLD = "double  image_yscale;"
HEADER_NEW = """double  image_yscale;
    double  image_angle;
    double  image_alpha;
    int32_t image_blend;"""
for h in [
    ROOT / "app/src/main/cpp/include/gm82_runtime.h",
    ROOT / "app/src/main/cpp_backup/include/gm82_runtime.h",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_runtime.h",
]:
    if not h.exists():
        continue
    t = h.read_text()
    if "image_angle" in t:
        print("header already", h); continue
    if HEADER_OLD not in t:
        print("no yscale", h); continue
    h.write_text(t.replace(HEADER_OLD, HEADER_NEW, 1))
    print("header", h)
for p in [
    ROOT / "app/src/main/cpp/src/gm82_runtime.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_runtime.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_runtime.c",
]:
    if not p.exists():
        continue
    t = p.read_text()
    bad = (
        "    inst->image_xscale = 1.0; inst->image_yscale = 1.0;\n"
        "    inst->image_xscale = 1.0; inst->image_angle = 0.0;\n"
        "    inst->image_xscale = 1.0; inst->image_alpha = 1.0;\n"
        "    inst->image_xscale = 1.0; inst->image_blend = 0xffffff;"
    )
    good = (
        "    inst->image_xscale = 1.0;\n"
        "    inst->image_yscale = 1.0;\n"
        "    inst->image_angle = 0.0;\n"
        "    inst->image_alpha = 1.0;\n"
        "    inst->image_blend = 0xffffff;"
    )
    if bad in t:
        t = t.replace(bad, good)
        p.write_text(t)
        print("fixed broken init", p)
        continue
    if "image_angle = 0.0" in t and "image_alpha = 1.0" in t:
        print("runtime already", p); continue
    lines = t.splitlines(True)
    out = []
    for line in lines:
        out.append(line)
        m = re.match(r"(\s*)(\w+)->image_yscale\s*=\s*1\.0\s*;", line)
        if m and "image_angle" not in "".join(out[-8:]):
            ind, obj = m.group(1), m.group(2)
            out.append(f"{ind}{obj}->image_angle = 0.0;\n")
            out.append(f"{ind}{obj}->image_alpha = 1.0;\n")
            out.append(f"{ind}{obj}->image_blend = 0xffffff;\n")
    text = "".join(out)
    text = re.sub(
        r"(\s*)(\w+)->image_xscale = 1\.0;\s*\2->image_yscale = 1\.0;",
        r"\1\2->image_xscale = 1.0;\n\1\2->image_yscale = 1.0;\n\1\2->image_angle = 0.0;\n\1\2->image_alpha = 1.0;\n\1\2->image_blend = 0xffffff;",
        text,
    )
    p.write_text(text)
    print("runtime", p)
print("APPLY_INSTANCE_IMAGE_FIELDS_OK")
