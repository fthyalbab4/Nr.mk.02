#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
changed = False

def after_first(t, names, ins, label):
    for a in names:
        needle = f'if (strcmp(id, "{a}") == 0)'
        if needle not in t:
            continue
        i = t.find(needle)
        j = t.find("return true;", i)
        j = t.find("\n", j) + 1
        return t[:j] + ins + t[j:], True
    return t, False

if 'strcmp(id, "ln")' not in t:
    ins = (
        '        if (strcmp(id, "ln") == 0) { *out = (arg > 0) ? log(arg) : 0; return true; }\n'
        '        if (strcmp(id, "logn") == 0) {\n'
        '            double base = nargs >= 2 ? args[1] : 10.0;\n'
        '            if (arg > 0 && base > 0 && base != 1.0) *out = log(arg) / log(base);\n'
        '            else *out = 0;\n'
        '            return true;\n'
        '        }\n'
    )
    t, ok = after_first(t, ["log10", "log2", "exp"], ins, "ln")
    if ok:
        print("ln/logn"); changed = True

if "is_undefined" not in t:
    ins = (
        '        if (strcmp(id, "is_undefined") == 0) { *out = 0; return true; }\n'
        '        if (strcmp(id, "is_bool") == 0) { *out = (arg == 0.0 || arg == 1.0) ? 1 : 0; return true; }\n'
        '        if (strcmp(id, "is_int64") == 0) { *out = (arg == floor(arg)) ? 1 : 0; return true; }\n'
        '        if (strcmp(id, "typeof") == 0) { *out = 0; return true; }\n'
    )
    t, ok = after_first(t, ["is_real", "is_string"], ins, "type")
    if ok:
        print("type checks"); changed = True

if "string_width" not in t:
    ins = (
        '        if (strcmp(id, "string_width") == 0) {\n'
        '            const char *s = (p->str_mask & 1) ? p->str_args[0] : "";\n'
        '            *out = (double)(strlen(s) * 8); return true;\n'
        '        }\n'
        '        if (strcmp(id, "string_height") == 0) { *out = 16; return true; }\n'
    )
    t, ok = after_first(t, ["string_length", "draw_text"], ins, "sw")
    if ok:
        print("string metrics"); changed = True

if "draw_text_transformed" not in t:
    ins = (
        '        if (strcmp(id, "draw_text_transformed") == 0) {\n'
        '            gml_draw_text(args[0], nargs >= 2 ? args[1] : 0, (p->str_mask & 4) ? p->str_args[2] : "");\n'
        '            *out = 1; return true;\n'
        '        }\n'
        '        if (strcmp(id, "draw_clear_alpha") == 0) {\n'
        '            *out = gml_draw_clear(arg); return true;\n'
        '        }\n'
        '        if (strcmp(id, "application_surface") == 0) { *out = -1; return true; }\n'
    )
    t, ok = after_first(t, ["draw_text"], ins, "draw")
    if ok:
        print("draw extras"); changed = True

if changed:
    ev.write_text(t)
print("PATCH_MATH_DRAW_TYPE_OK")
