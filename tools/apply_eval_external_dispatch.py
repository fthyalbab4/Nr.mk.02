#!/usr/bin/env python3
"""Wire external_define/call/free into gm82_gml_eval.c (tri-mirror)."""
from pathlib import Path
import sys

PATHS = [
    "app/src/main/cpp/src/gm82_gml_eval.c",
    "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]

INCLUDE_OLD = '#include "gm82_gml_builtins.h"\n'
INCLUDE_NEW = '#include "gm82_gml_builtins.h"\n#include "gm82_external.h"\n'

ANCHOR = '''        if (strcmp(id, "file_exists") == 0) {
            *out = gml_file_exists((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
'''
BLOCK = ANCHOR + '''        if (strcmp(id, "external_define") == 0) {
            *out = gml_external_define(
                (p->str_mask & 1) ? p->str_args[0] : "",
                (p->str_mask & 2) ? p->str_args[1] : "",
                nargs >= 3 ? args[2] : 0,
                nargs >= 4 ? args[3] : 0,
                nargs >= 5 ? args[4] : 0);
            return true;
        }
        if (strcmp(id, "external_call") == 0) {
            *out = gml_external_call(
                arg,
                nargs >= 2 ? args[1] : 0,
                nargs >= 3 ? args[2] : 0,
                nargs >= 4 ? args[3] : 0,
                nargs >= 5 ? args[4] : 0,
                nargs >= 6 ? args[5] : 0,
                nargs >= 7 ? args[6] : 0,
                nargs >= 8 ? args[7] : 0,
                nargs >= 9 ? args[8] : 0);
            return true;
        }
        if (strcmp(id, "external_free") == 0) {
            *out = gml_external_free((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
'''

def patch(path: Path) -> bool:
    t = path.read_text(encoding="utf-8")
    changed = False
    if 'gml_external_define' not in t or 'strcmp(id, "external_define")' not in t:
        if ANCHOR not in t:
            print("FAIL anchor", path)
            return False
        t = t.replace(ANCHOR, BLOCK, 1)
        changed = True
    if '#include "gm82_external.h"' not in t:
        if INCLUDE_OLD not in t:
            print("FAIL include anchor", path)
            return False
        t = t.replace(INCLUDE_OLD, INCLUDE_NEW, 1)
        changed = True
    if changed:
        path.write_text(t, encoding="utf-8")
        print("patched", path)
    else:
        print("ok", path)
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
