#!/usr/bin/env python3
"""Wire ds_grid_set_many + ds_priority_add_many into gm82_gml_eval.c (tri-mirror)."""
from pathlib import Path
import sys

PATHS = [
    "app/src/main/cpp/src/gm82_gml_eval.c",
    "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]

GRID_OLD = """        if (strcmp(id, "ds_grid_set") == 0) {
            *out = gml_ds_grid_set(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0); return true;
        }
"""
GRID_NEW = """        if (strcmp(id, "ds_grid_set") == 0) {
            *out = gml_ds_grid_set(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0, (nargs >= 4) ? args[3] : 0); return true;
        }
        if (strcmp(id, "ds_grid_set_many") == 0) {
            *out = gml_ds_grid_set_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;
        }
"""

PRIO_OLD = """        if (strcmp(id, "ds_priority_add") == 0) {
            *out = gml_ds_priority_add(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
"""
PRIO_NEW = """        if (strcmp(id, "ds_priority_add") == 0) {
            *out = gml_ds_priority_add(arg, (nargs >= 2) ? args[1] : 0, (nargs >= 3) ? args[2] : 0); return true;
        }
        if (strcmp(id, "ds_priority_add_many") == 0) {
            *out = gml_ds_priority_add_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;
        }
"""

def patch(path: Path) -> bool:
    t = path.read_text(encoding="utf-8")
    if "gml_ds_grid_set_many" in t and 'strcmp(id, "ds_grid_set_many")' in t:
        print("ok", path)
        return True
    if GRID_OLD not in t:
        print("FAIL grid anchor", path)
        return False
    if PRIO_OLD not in t:
        print("FAIL prio anchor", path)
        return False
    t = t.replace(GRID_OLD, GRID_NEW, 1).replace(PRIO_OLD, PRIO_NEW, 1)
    path.write_text(t, encoding="utf-8")
    print("patched", path)
    return True

def main():
    ok = True
    for p in PATHS:
        path = Path(p)
        if not path.exists():
            print("missing", path)
            ok = False
            continue
        ok = patch(path) and ok
    sys.exit(0 if ok else 1)

if __name__ == "__main__":
    main()
