#!/usr/bin/env python3
"""Apply PR#405 ds_*_many extract onto tri-mirror gm82_gml_builtins.c + headers.
Run from repo root. Does not touch bytecode/eval.
"""
from pathlib import Path
import re
import sys

PRIO = """
double gml_ds_priority_add_many(double id, const double *args, int count) {
    int i = (int)id;
    if (i < 0 || i >= GM82_DS_PRIO_MAX || !g_ds_prios[i].used || !args) return id;
    for (int k = 0; k + 1 < count; k += 2) {
        if (g_ds_prios[i].size >= GM82_DS_PRIO_CAP) break;
        g_ds_prios[i].vals[g_ds_prios[i].size] = args[k];
        g_ds_prios[i].prios[g_ds_prios[i].size] = args[k + 1];
        g_ds_prios[i].size++;
    }
    return id;
}
"""

GRID = """
double gml_ds_grid_set_many(double id, const double *args, int count) {
    int i = (int)id;
    if (i < 0 || i >= MAX_DS_GRIDS || !g_ds_grid_active[i] || !args) return id;
    for (int k = 0; k + 2 < count; k += 3) {
        int ix = (int)args[k];
        int iy = (int)args[k + 1];
        double val = args[k + 2];
        if (ix >= 0 && ix < g_ds_grids[i].width && iy >= 0 && iy < g_ds_grids[i].height) {
            g_ds_grids[i].data[iy * g_ds_grids[i].width + ix] = val;
        }
    }
    return id;
}
"""

DECLS = (
    "double gml_ds_grid_set_many(double id, const double *args, int count);\n"
    "double gml_ds_priority_add_many(double id, const double *args, int count);\n"
)

C_PATHS = [
    "app/src/main/cpp/src/gm82_gml_builtins.c",
    "app/src/main/cpp_backup/src/gm82_gml_builtins.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_builtins.c",
]
H_PATHS = [
    "app/src/main/cpp/include/gm82_gml_builtins.h",
    "app/src/main/cpp_backup/include/gm82_gml_builtins.h",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h",
]


def patch_c(path: Path) -> bool:
    t = path.read_text(encoding="utf-8")
    changed = False
    if "double gml_ds_priority_add_many" not in t:
        anchor = """double gml_ds_priority_add(double id, double value, double priority) {
    int i = (int)id;
    if (i < 0 || i >= GM82_DS_PRIO_MAX || !g_ds_prios[i].used) return 0;
    if (g_ds_prios[i].size >= GM82_DS_PRIO_CAP) return 0;
    g_ds_prios[i].vals[g_ds_prios[i].size] = value;
    g_ds_prios[i].prios[g_ds_prios[i].size] = priority;
    g_ds_prios[i].size++;
    return 1;
}
"""
        if anchor not in t:
            print("FAIL prio anchor", path)
            return False
        t = t.replace(anchor, anchor + PRIO, 1)
        changed = True
    if "double gml_ds_grid_set_many" not in t:
        m = re.search(
            r"double gml_ds_grid_set\(double id, double x, double y, double val\) \{.*?\n\}",
            t,
            re.S,
        )
        if not m:
            print("FAIL grid anchor", path)
            return False
        t = t[: m.end()] + "\n" + GRID + t[m.end() :]
        changed = True
    for name in ('"ds_grid_set_many", ', '"ds_priority_add_many", '):
        if name in t:
            t = t.replace(name, "")
            changed = True
    if changed:
        path.write_text(t, encoding="utf-8")
    print(("patched" if changed else "ok"), path)
    return True


def patch_h(path: Path) -> bool:
    t = path.read_text(encoding="utf-8")
    if "gml_ds_grid_set_many" in t:
        print("ok", path)
        return True
    key = "double gml_ds_grid_set_region_compat(double id, double x1, double y1, double x2, double y2, double val);\n"
    if key not in t:
        print("FAIL header anchor", path)
        return False
    path.write_text(t.replace(key, key + DECLS, 1), encoding="utf-8")
    print("patched", path)
    return True


def main():
    root = Path(".")
    ok = True
    for p in C_PATHS:
        ok = patch_c(root / p) and ok
    for p in H_PATHS:
        ok = patch_h(root / p) and ok
    sys.exit(0 if ok else 1)


if __name__ == "__main__":
    main()
