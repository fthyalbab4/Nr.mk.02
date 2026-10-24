#!/usr/bin/env python3
"""Inject set_last_string producer calls into gm82_gml_eval.c (idempotent)."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
targets = [
    ROOT / "app/src/main/cpp/src/gm82_gml_eval.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]
old = (
    'if (strcmp(name, "keyboard_string") == 0) {\n'
    '        snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", gml_keyboard_string());\n'
    '        p->str_mask |= 1;\n'
    '        *out = (double)strlen(gml_keyboard_string());\n'
    '        return true;\n'
    '    }'
)
new = (
    'if (strcmp(name, "keyboard_string") == 0) {\n'
    '        snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", gml_keyboard_string());\n'
    '        p->str_mask |= 1;\n'
    '        gm82_gml_set_last_string(p->str_args[0]);\n'
    '        *out = (double)strlen(gml_keyboard_string());\n'
    '        return true;\n'
    '    }'
)
for f in targets:
    if not f.exists():
        print("skip", f)
        continue
    t = f.read_text()
    if "gm82_gml_set_last_string(p->str_args[0])" in t:
        print("already", f)
        continue
    if old in t:
        f.write_text(t.replace(old, new, 1))
        print("patched", f)
    else:
        print("no needle", f)
print("OK")
