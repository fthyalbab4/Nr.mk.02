#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
PATHS = [
    ROOT / "app/src/main/cpp/src/gm82_gml_eval.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]
NEW_ADD = r'''static bool parse_additive(gml_parser *p, double *out) {
    if (!parse_term(p, out)) return false;
    for (;;) {
        char c = peek(p);
        if (c != '+' && c != '-') break;
        getc_(p);
        /* Phase 3: GM8-style implicit string concat on + */
        char left[512];
        int left_str = gm82_gml_last_was_string() ? 1 : 0;
        if (left_str)
            snprintf(left, sizeof(left), "%s", gm82_gml_last_string());
        else
            snprintf(left, sizeof(left), "%g", *out);
        gm82_gml_clear_last_string();
        double r;
        if (!parse_term(p, &r)) return false;
        if (c == '+') {
            int right_str = gm82_gml_last_was_string() ? 1 : 0;
            if (left_str || right_str) {
                char right[512], cat[1024];
                if (right_str)
                    snprintf(right, sizeof(right), "%s", gm82_gml_last_string());
                else
                    snprintf(right, sizeof(right), "%g", r);
                snprintf(cat, sizeof(cat), "%s%s", left, right);
                gm82_gml_set_last_string(cat);
                *out = 0;
            } else {
                *out += r;
            }
        } else {
            *out -= r;
        }
    }
    return true;
}

'''
for path in PATHS:
    if not path.exists():
        print("missing", path)
        continue
    t = path.read_text(errors="replace")
    if "Phase 3: capture string literal" not in t:
        start = t.find('    if (c == \'"\' || c ==')
        end = t.find('    if (c == \'(\')', start) if start >= 0 else -1
        if start >= 0 and end > start:
            NEW_LIT = (
                '    if (c == \'"\' || c == \'\\\'\') {\n'
                '        char quote = c;\n'
                '        p->i++;\n'
                '        /* Phase 3: capture string literal into last_string */\n'
                '        char buf[512];\n'
                '        size_t j = 0;\n'
                '        while (p->i < p->n && p->s[p->i] != quote && j + 1 < sizeof(buf)) {\n'
                '            buf[j++] = p->s[p->i++];\n'
                '        }\n'
                '        buf[j] = 0;\n'
                '        if (p->i < p->n && p->s[p->i] == quote) p->i++;\n'
                '        gm82_gml_set_last_string(buf);\n'
                '        *out = 0;\n'
                '        return true;\n'
                '    }\n'
            )
            t = t[:start] + NEW_LIT + t[end:]
            print("lit", path)
    if "implicit string concat" not in t:
        a0 = t.find("static bool parse_additive")
        a1 = t.find("static bool parse_comparison")
        if a0 >= 0 and a1 > a0:
            t = t[:a0] + NEW_ADD + t[a1:]
            print("add", path)
    if 'strcmp(id, "execute_string")' not in t and "string_format" in t:
        t = t.replace(
            'if (strcmp(id, "string_format") == 0)',
            'if (strcmp(id, "execute_string") == 0) {\n'
            '            const char *code = (p->str_mask & 1) ? p->str_args[0] : gm82_gml_last_string();\n'
            '            *out = gml_execute_string(code); return true;\n'
            '        }\n'
            '        if (strcmp(id, "is_real") == 0) { *out = gml_is_real(arg); return true; }\n'
            '        if (strcmp(id, "is_string") == 0) { *out = gml_is_string(arg); return true; }\n'
            '        if (strcmp(id, "string_format") == 0)',
            1,
        )
        print("hooks", path)
    path.write_text(t)
print("APPLY_PHASE3_DONE")
