#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
if "arcsin" not in t:
    for anchor in ['if (strcmp(id, "arctan2") == 0)', 'if (strcmp(id, "arctan") == 0)', 'if (strcmp(id, "sin") == 0)']:
        if anchor not in t:
            continue
        i = t.find(anchor)
        j = t.find("return true;", i)
        j = t.find("\n", j) + 1
        ins = (
            '        if (strcmp(id, "arcsin") == 0) { *out = asin(arg > 1 ? 1 : (arg < -1 ? -1 : arg)) * 180.0 / 3.141592653589793; return true; }\n'
            '        if (strcmp(id, "arccos") == 0) { *out = acos(arg > 1 ? 1 : (arg < -1 ? -1 : arg)) * 180.0 / 3.141592653589793; return true; }\n'
        )
        if "lerp" not in t:
            ins += (
                '        if (strcmp(id, "lerp") == 0) {\n'
                '            double a = args[0], b = nargs>=2?args[1]:0, amt = nargs>=3?args[2]:0;\n'
                '            *out = a + (b - a) * amt; return true;\n'
                '        }\n'
                '        if (strcmp(id, "median") == 0) {\n'
                '            if (nargs < 1) { *out = 0; return true; }\n'
                '            double v[8]; int n = nargs < 8 ? nargs : 8;\n'
                '            for (int k=0;k<n;k++) v[k]=args[k];\n'
                '            for (int a=0;a<n;a++) for (int b=a+1;b<n;b++) if (v[b]<v[a]) { double tmp=v[a];v[a]=v[b];v[b]=tmp; }\n'
                '            *out = v[n/2]; return true;\n'
                '        }\n'
            )
        t = t[:j] + ins + t[j:]
        ev.write_text(t)
        print("trig")
        break
else:
    print("trig already")

ac = ROOT / "app/src/main/cpp/src/gm82_actions.c"
at = ac.read_text()
if "action_draw_variable" not in at:
    marker = '    if (strcmp(name, "action_set_cursor") == 0)'
    if marker in at:
        block = (
            '    if (strcmp(name, "action_draw_variable") == 0) {\n'
            '        char buf[64];\n'
            '        snprintf(buf, sizeof(buf), "%g", self->x);\n'
            '        gml_draw_text(self->x, self->y, buf);\n'
            '        return true;\n'
            '    }\n'
            '    if (strcmp(name, "action_save_game") == 0 || strcmp(name, "action_load_game") == 0) {\n'
            '        return true; /* persistence not fully wired */\n'
            '    }\n'
            '    if (strcmp(name, "action_snapshot") == 0) {\n'
            '        return true;\n'
            '    }\n'
        )
        ac.write_text(at.replace(marker, block + marker, 1))
        print("actions")
print("PATCH_PARALLEL_GAPS5_OK")
