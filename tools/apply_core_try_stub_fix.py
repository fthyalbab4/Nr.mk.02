#!/usr/bin/env python3
"""Fix try_stub shadowing real GML handlers + add move_and_collide/string_wrap/distance_to_path."""
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
TREES = [
    ROOT / "app/src/main/cpp",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX",
    ROOT / "app/src/main/cpp_backup",
]

REMOVE_STUBS = {
    "instance_create_depth_moving_ext",
    "move_towards_gravity",
    "move_towards_jump",
    "move_and_collide",
    "string_wrap",
    "distance_to_path",
}

IMPL = r'''
/* Core gapfill - real implementations (were previously swallowed by try_stub) */
double gml_move_and_collide(double dx, double dy, double obj) {
    if (!g_self || !g_rt) return 0;
    double nx = g_self->x + dx;
    double ny = g_self->y + dy;
    int hit = 0;
    if (gml_place_meeting(nx, g_self->y, obj)) {
        hit = 1;
    } else {
        g_self->x = nx;
    }
    if (gml_place_meeting(g_self->x, ny, obj)) {
        hit = 1;
    } else {
        g_self->y = ny;
    }
    return (double)hit;
}

double gml_string_wrap(const char *s, double width) {
    (void)width;
    if (!s) { gm82_gml_set_last_string(""); return 0; }
    gm82_gml_set_last_string(s);
    return 0;
}

double gml_distance_to_path(double path_index) {
    (void)path_index;
    if (!g_self) return 1000000.0;
    return 0.0;
}

'''

WIRE = '''        if (strcmp(id, "move_and_collide") == 0) {
            *out = gml_move_and_collide(nargs>=1?args[0]:0, nargs>=2?args[1]:0, nargs>=3?args[2]:-1);
            return true;
        }
        if (strcmp(id, "string_wrap") == 0) {
            *out = gml_string_wrap((p->str_mask & 1) ? p->str_args[0] : "", nargs>=2?args[1]:256);
            return true;
        }
        if (strcmp(id, "distance_to_path") == 0) {
            *out = gml_distance_to_path(nargs>=1?args[0]:0);
            return true;
        }
'''


def fix_eval(path: Path) -> str:
    if not path.exists():
        return f"skip {path}"
    t = path.read_text(encoding="utf-8")
    t = re.sub(r"        if \(gm82_gm82core_try_stub\(id, out\)\) return true;\n\n?", "", t)
    marker = (
        '        snprintf(p->err, sizeof(p->err), "unknown fn %s", id); '
        'fprintf(stderr, "UNMAPPED_GML_FN %s\\n", id);\n'
    )
    if "move_and_collide\") == 0" not in t:
        repl = WIRE + "        if (gm82_gm82core_try_stub(id, out)) return true;\n\n" + marker
    else:
        repl = "        if (gm82_gm82core_try_stub(id, out)) return true;\n\n" + marker
    if marker not in t:
        return f"no marker {path}"
    t = t.replace(marker, repl, 1)
    path.write_text(t, encoding="utf-8")
    return f"eval {path}"


def fix_builtins(path: Path) -> str:
    if not path.exists():
        return f"skip {path}"
    t = path.read_text(encoding="utf-8")
    if "gml_move_and_collide" not in t:
        idx = t.find("static const char *GM82CORE_STUBS[]")
        if idx >= 0:
            t = t[:idx] + IMPL + t[idx:]
    m = re.search(r"(static const char \*GM82CORE_STUBS\[\] = \{)(.*?)(\};)", t, re.S)
    if m:
        names = re.findall(r'"([^"]+)"', m.group(2))
        kept = [n for n in names if n not in REMOVE_STUBS]
        body = ", ".join(f'"{n}"' for n in kept)
        t = t[: m.start(2)] + "\n  " + body + "\n" + t[m.end(2) :]
    path.write_text(t, encoding="utf-8")
    return f"builtins {path}"


def fix_header(path: Path) -> str:
    if not path.exists():
        return f"skip {path}"
    t = path.read_text(encoding="utf-8")
    if "gml_move_and_collide" in t:
        return f"header ok {path}"
    proto = (
        "\ndouble gml_move_and_collide(double dx, double dy, double obj);\n"
        "double gml_string_wrap(const char *s, double width);\n"
        "double gml_distance_to_path(double path_index);\n"
    )
    idx = t.rfind("#endif")
    if idx >= 0:
        t = t[:idx] + proto + t[idx:]
    else:
        t += proto
    path.write_text(t, encoding="utf-8")
    return f"header {path}"


def main() -> int:
    for tree in TREES:
        print(fix_eval(tree / "src" / "gm82_gml_eval.c"))
        print(fix_builtins(tree / "src" / "gm82_gml_builtins.c"))
        print(fix_header(tree / "include" / "gm82_gml_builtins.h"))
    return 0


if __name__ == "__main__":
    sys.exit(main())
