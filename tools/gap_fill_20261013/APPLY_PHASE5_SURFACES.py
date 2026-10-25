#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
B = ROOT / "tools/gap_fill_20261013/blobs"
blob = B / "surface_block.zlib.b64"
PATHS = [
    ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_gml_builtins.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_builtins.c",
]

def load_block():
    if not blob.exists():
        return None
    raw = blob.read_text().strip()
    try:
        return zlib.decompress(base64.b64decode(raw)).decode()
    except Exception as e:
        print("blob fail", e)
        return None

block = load_block()
if not block or "Phase 5: nested set_target" not in block:
    print("no phase5 surface block")
else:
    for path in PATHS:
        if not path.exists():
            continue
        t = path.read_text(errors="replace")
        if "Phase 5: nested set_target" in t and "gml_surface_copy" in t:
            print("already", path)
            continue
        start = t.find("#define GM82_SURFACE_MAX")
        end = t.find("static gm82_particle_world *g_p", start) if start >= 0 else -1
        if start < 0 or end < 0:
            print("anchors miss", path)
            continue
        t = t[:start] + block + t[end:]
        first = t.find("double gml_draw_surface_ext(")
        second = t.find("double gml_draw_surface_ext(", first + 10) if first >= 0 else -1
        if first >= 0 and second > first:
            i, depth, started = first, 0, False
            while i < len(t):
                if t[i] == "{":
                    depth += 1
                    started = True
                elif t[i] == "}":
                    depth -= 1
                    if started and depth == 0:
                        i += 1
                        if i < len(t) and t[i] == "\n":
                            i += 1
                        break
                i += 1
            t = t[:first] + t[i:]
        path.write_text(t)
        print("surfaces", path, path.stat().st_size)

h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
if h.exists():
    ht = h.read_text()
    if "gml_surface_copy" not in ht:
        ht = ht.replace(
            "double gml_draw_surface(double id, double x, double y);",
            "double gml_draw_surface(double id, double x, double y);\n"
            "double gml_surface_copy(double dest, double src);\n"
            "double gml_surface_getpixel(double id, double x, double y);\n"
            "double gml_surface_clear(double id, double color, double alpha);\n",
        )
        h.write_text(ht)
        print("header")

for ep in [
    ROOT / "app/src/main/cpp/src/gm82_gml_eval.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c",
]:
    if not ep.exists():
        continue
    et = ep.read_text(errors="replace")
    if "surface_copy" in et:
        print("eval already", ep)
        continue
    needle = 'if (strcmp(id, "surface_set_target") == 0)'
    if needle not in et:
        print("eval needle miss", ep)
        continue
    inject = (
        'if (strcmp(id, "surface_copy") == 0) {\n'
        '            *out = gml_surface_copy(arg, nargs >= 2 ? args[1] : 0); return true;\n'
        '        }\n'
        '        if (strcmp(id, "surface_getpixel") == 0) {\n'
        '            *out = gml_surface_getpixel(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0); return true;\n'
        '        }\n'
        '        if (strcmp(id, "surface_clear") == 0) {\n'
        '            *out = gml_surface_clear(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 1); return true;\n'
        '        }\n'
        '        '
    )
    ep.write_text(et.replace(needle, inject + needle, 1))
    print("eval", ep)

print("APPLY_PHASE5_DONE")
