#!/usr/bin/env python3
"""Port file_rename/directory_rename from Nr.mk.01 into Nr.mk.02 without replacing other code."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
bu = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
t = bu.read_text()
if "gml_file_rename" in t:
    print("file_rename already present")
else:
    old = """double gml_file_delete(const char *path) {
    if (!path) return 0;
    return remove(path) == 0 ? 1.0 : 0.0;
}"""
    new = old + """

/* Ported from Nr.mk.01 — complete, do not replace other file I/O */
double gml_file_rename(const char *oldname, const char *newname) {
    if (!oldname || !newname) return 0.0;
    return rename(oldname, newname) == 0 ? 1.0 : 0.0;
}

double gml_directory_rename(const char *oldname, const char *newname) {
    if (!oldname || !newname) return 0.0;
    return rename(oldname, newname) == 0 ? 1.0 : 0.0;
}"""
    if old not in t:
        raise SystemExit("file_delete anchor missing")
    bu.write_text(t.replace(old, new, 1))
    print("patched builtins")

h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
ht = h.read_text()
if "gml_file_rename" not in ht:
    if "gml_file_delete" in ht:
        ht = ht.replace(
            "double gml_file_delete(const char *path);",
            "double gml_file_delete(const char *path);\ndouble gml_file_rename(const char *oldname, const char *newname);\ndouble gml_directory_rename(const char *oldname, const char *newname);",
        )
        h.write_text(ht)
        print("patched header")
    else:
        raise SystemExit("header has no file_delete")
else:
    print("header ok")

ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
et = ev.read_text()
if "file_rename" not in et:
    old = """        if (strcmp(id, "file_delete") == 0) {
            *out = gml_file_delete(""); return true;
        }
        if (strcmp(id, "ini_open") == 0) {"""
    new = """        if (strcmp(id, "file_delete") == 0) {
            *out = gml_file_delete(""); return true;
        }
        if (strcmp(id, "file_rename") == 0) {
            *out = gml_file_rename("", ""); return true;
        }
        if (strcmp(id, "directory_rename") == 0) {
            *out = gml_directory_rename("", ""); return true;
        }
        if (strcmp(id, "ini_open") == 0) {"""
    if old not in et:
        raise SystemExit("eval anchor missing")
    ev.write_text(et.replace(old, new, 1))
    print("patched eval")
else:
    print("eval ok")
print("PORT_FILE_RENAME_OK")
