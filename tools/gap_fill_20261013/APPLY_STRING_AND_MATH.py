#!/usr/bin/env python3
"""String producers -> last_string, string_repeat, portable math in eval."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
targets = [
    ROOT / "app/src/main/cpp/src/gm82_gml_eval.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]
for eval_path in targets:
    if not eval_path.exists():
        print("skip", eval_path)
        continue
    t = eval_path.read_text()
    if '#include "gm82_portable_compat.h"' not in t:
        t = t.replace('#include "gm82_gml_eval.h"', '#include "gm82_gml_eval.h"\n#include "gm82_portable_compat.h"', 1)
    old = "p->str_mask |= 1; *out = 0; return true;"
    new = "p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;"
    if "gm82_gml_set_last_string(p->str_args[0]); *out = 0" not in t:
        t = t.replace(old, new)
    old_sf = (
        'if (strcmp(id, "string_format") == 0) { char buf[128] = {0}; '
        'gml_string_format(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, buf, sizeof(buf)); '
        '*out = 0; return true; }'
    )
    new_sf = (
        'if (strcmp(id, "string_format") == 0) { char buf[128] = {0}; '
        'gml_string_format(arg, nargs >= 2 ? args[1] : 0, nargs >= 3 ? args[2] : 0, buf, sizeof(buf)); '
        'snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", buf); p->str_mask |= 1; '
        'gm82_gml_set_last_string(buf); *out = 0; return true; }'
    )
    if old_sf in t:
        t = t.replace(old_sf, new_sf, 1)
    if "string_repeat" not in t:
        needle = 'if (strcmp(id, "string_format") == 0)'
        block = (
            'if (strcmp(id, "string_repeat") == 0) {\n'
            '            const char *src = (p->str_mask & 1) ? p->str_args[0] : "";\n'
            '            int n = (int)(nargs >= 2 ? args[1] : arg);\n'
            '            if (n < 0) n = 0;\n'
            '            if (n > 64) n = 64;\n'
            '            char tmp[256]; tmp[0]=0;\n'
            '            size_t pos=0;\n'
            '            for (int i=0;i<n && pos+1<sizeof(tmp);i++) {\n'
            '                size_t L=strlen(src);\n'
            '                if (pos+L >= sizeof(tmp)-1) break;\n'
            '                memcpy(tmp+pos, src, L); pos+=L; tmp[pos]=0;\n'
            '            }\n'
            '            snprintf(p->str_args[0], sizeof(p->str_args[0]), "%s", tmp);\n'
            '            p->str_mask |= 1; gm82_gml_set_last_string(p->str_args[0]); *out = 0; return true;\n'
            '        }\n'
            '        '
        )
        if needle in t:
            t = t.replace(needle, block + needle, 1)
    if 'strcmp(id, "modwrap")' not in t:
        needle = (
            'if (strcmp(id, "angle_difference") == 0) {\n'
            '            *out = gml_angle_difference(arg, nargs >= 2 ? args[1] : 0); return true;\n'
            '        }'
        )
        add = (
            '\n'
            '        if (strcmp(id, "modwrap") == 0) {\n'
            '            *out = gml_modwrap(arg, nargs >= 2 ? args[1] : 1.0); return true;\n'
            '        }\n'
            '        if (strcmp(id, "smoothstep") == 0) {\n'
            '            *out = gml_smoothstep(arg, nargs >= 2 ? args[1] : 1.0, nargs >= 3 ? args[2] : 0.0); return true;\n'
            '        }\n'
            '        if (strcmp(id, "lerproach") == 0) {\n'
            '            *out = gml_lerproach(arg, nargs >= 2 ? args[1] : 0.0, nargs >= 3 ? args[2] : 0.0); return true;\n'
            '        }\n'
        )
        if needle in t:
            t = t.replace(needle, needle + add, 1)
    eval_path.write_text(t)
    print("OK", eval_path, "set_last", t.count("gm82_gml_set_last_string"))
print("APPLY_STRING_AND_MATH_OK")
