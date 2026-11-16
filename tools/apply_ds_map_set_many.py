#!/usr/bin/env python3
"""Add gml_ds_map_set_many body + remove from STUBS + eval dispatch (tri-mirror)."""
from pathlib import Path
import re
import sys

C_PATHS = [
    "app/src/main/cpp/src/gm82_gml_builtins.c",
    "app/src/main/cpp_backup/src/gm82_gml_builtins.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_builtins.c",
]
E_PATHS = [
    "app/src/main/cpp/src/gm82_gml_eval.c",
    "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]
H_PATHS = [
    "app/src/main/cpp/include/gm82_gml_builtins.h",
    "app/src/main/cpp_backup/include/gm82_gml_builtins.h",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/include/gm82_gml_builtins.h",
]

BODY = '''
double gml_ds_map_set_many(double id, const double *args, int count) {
    int i = (int)id;
    if (i < 0 || i >= GM82_DS_MAP_MAX || !g_ds_maps[i].used || !args) return id;
    for (int k = 0; k + 1 < count; k += 2) {
        double key = args[k], value = args[k + 1];
        int found = 0;
        for (int j = 0; j < g_ds_maps[i].size; j++) {
            if (g_ds_maps[i].keys[j] == key) {
                g_ds_maps[i].vals[j] = value;
                found = 1;
                break;
            }
        }
        if (!found) {
            if (g_ds_maps[i].size >= GM82_DS_MAP_CAP) break;
            g_ds_maps[i].keys[g_ds_maps[i].size] = key;
            g_ds_maps[i].vals[g_ds_maps[i].size] = value;
            g_ds_maps[i].size++;
        }
    }
    return id;
}
'''

DECL = "double gml_ds_map_set_many(double id, const double *args, int count);\n"

def patch_c(path: Path) -> bool:
    t = path.read_text(encoding="utf-8")
    if "double gml_ds_map_set_many" in t:
        print("ok body", path)
    else:
        m = re.search(
            r"double gml_ds_map_add\(double id, double key, double value\) \{.*?\n\}",
            t,
            re.S,
        )
        if not m:
            print("FAIL map_add", path)
            return False
        t = t[: m.end()] + "\n" + BODY + t[m.end() :]
        if '"ds_map_set_many", ' in t:
            t = t.replace('"ds_map_set_many", ', "")
        path.write_text(t, encoding="utf-8")
        print("patched body", path)
    return True

def patch_e(path: Path) -> bool:
    t = path.read_text(encoding="utf-8")
    if 'strcmp(id, "ds_map_set_many")' in t:
        print("ok eval", path)
        return True
    m = re.search(
        r'        if \(strcmp\(id, "ds_map_add"\) == 0\) \{\n(?:.*\n){0,3}?        \}\n',
        t,
    )
    if not m:
        print("FAIL eval anchor", path)
        return False
    insert = m.group(0) + (
        '        if (strcmp(id, "ds_map_set_many") == 0) {\n'
        '            *out = gml_ds_map_set_many(arg, nargs > 1 ? &args[1] : NULL, nargs > 1 ? nargs - 1 : 0); return true;\n'
        '        }\n'
    )
    t = t[: m.start()] + insert + t[m.end() :]
    path.write_text(t, encoding="utf-8")
    print("patched eval", path)
    return True

def patch_h(path: Path) -> bool:
    t = path.read_text(encoding="utf-8")
    if "gml_ds_map_set_many" in t:
        print("ok hdr", path)
        return True
    key = "double gml_ds_map_add(double id, double key, double value);\n"
    if key not in t:
        key2 = "double gml_ds_map_add_copy"
        idx = t.find(key2)
        if idx < 0:
            print("FAIL hdr", path)
            return False
        line_start = t.rfind("\n", 0, idx) + 1
        t = t[:line_start] + DECL + t[line_start:]
    else:
        t = t.replace(key, key + DECL, 1)
    path.write_text(t, encoding="utf-8")
    print("patched hdr", path)
    return True

def main():
    ok = True
    for p in C_PATHS:
        ok = patch_c(Path(p)) and ok
    for p in E_PATHS:
        ok = patch_e(Path(p)) and ok
    for p in H_PATHS:
        ok = patch_h(Path(p)) and ok
    sys.exit(0 if ok else 1)

if __name__ == "__main__":
    main()
