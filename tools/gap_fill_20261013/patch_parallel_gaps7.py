#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
if "show_question" not in t:
    anchor = 'if (strcmp(id, "show_message") == 0)'
    if anchor in t:
        i = t.find(anchor)
        j = t.find("return true;", i)
        j = t.find("\n", j) + 1
        ins = (
            '        if (strcmp(id, "show_question") == 0) { *out = 1; return true; }\n'
            '        if (strcmp(id, "get_integer") == 0) { *out = nargs >= 2 ? args[1] : 0; return true; }\n'
            '        if (strcmp(id, "get_string") == 0) { *out = 0; return true; }\n'
        )
        t = t[:j] + ins + t[j:]
        print("dialogs")
if "room_caption" not in t[t.find("get_var"):t.find("set_var")]:
    if 'if (strcmp(name, "room_persistent") == 0) { *out = 0; return true; }' in t:
        t = t.replace(
            'if (strcmp(name, "room_persistent") == 0) { *out = 0; return true; }',
            'if (strcmp(name, "room_persistent") == 0) { *out = 0; return true; }\n'
            '    if (strcmp(name, "room_caption") == 0) { *out = 0; return true; }',
            1,
        )
        print("room_caption")
ev.write_text(t)
print("PATCH_PARALLEL_GAPS7_OK")
