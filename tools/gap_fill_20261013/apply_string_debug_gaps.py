#!/usr/bin/env python3
"""Fill: string args for file/ini, show_debug_message, randomize. Idempotent."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
old_struct = """typedef struct {
    const char *s;
    size_t i, n;
    gm82_runtime *rt;
    gm82_instance *self;
    char err[128];
} gml_parser;"""
new_struct = """typedef struct {
    const char *s;
    size_t i, n;
    gm82_runtime *rt;
    gm82_instance *self;
    char err[128];
    char str_args[8][256];
    int str_mask;
} gml_parser;"""
if "str_args" not in t and old_struct in t:
    t = t.replace(old_struct, new_struct, 1)
    print("struct")
old_args = """    if (match(p, '(')) {
        double args[8] = {0,0,0,0,0,0,0,0};
        int nargs = 0;
        if (peek(p) != ')') {
            for (;;) {
                if (nargs >= 8) return false;
                if (!parse_expr(p, &args[nargs])) return false;
                nargs++;
                if (peek(p) != ',') break;
                getc_(p);
            }
        }
        if (!match(p, ')')) return false;
        double arg = args[0];"""
new_args = """    if (match(p, '(')) {
        double args[8] = {0,0,0,0,0,0,0,0};
        int nargs = 0;
        p->str_mask = 0;
        memset(p->str_args, 0, sizeof(p->str_args));
        if (peek(p) != ')') {
            for (;;) {
                if (nargs >= 8) return false;
                skip_ws(p);
                if (peek(p) == '"' || peek(p) == '\\'') {
                    char quote = (char)peek(p);
                    getc_(p);
                    size_t j = 0;
                    while (p->i < p->n && p->s[p->i] != quote && j + 1 < sizeof(p->str_args[0])) {
                        if (p->s[p->i] == '\\\\' && p->i + 1 < p->n) {
                            p->i++;
                            p->str_args[nargs][j++] = p->s[p->i++];
                        } else {
                            p->str_args[nargs][j++] = p->s[p->i++];
                        }
                    }
                    p->str_args[nargs][j] = 0;
                    if (p->i < p->n && p->s[p->i] == quote) p->i++;
                    args[nargs] = 0;
                    p->str_mask |= (1 << nargs);
                } else {
                    if (!parse_expr(p, &args[nargs])) return false;
                }
                nargs++;
                if (peek(p) != ',') break;
                getc_(p);
            }
        }
        if (!match(p, ')')) return false;
        double arg = args[0];"""
if "p->str_mask = 0" not in t and old_args in t:
    t = t.replace(old_args, new_args, 1)
    print("args")
pairs = [
("""        if (strcmp(id, "file_exists") == 0) {
            *out = gml_file_exists(""); return true;
        }
        if (strcmp(id, "file_delete") == 0) {
            *out = gml_file_delete(""); return true;
        }""",
 """        if (strcmp(id, "file_exists") == 0) {
            *out = gml_file_exists((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }
        if (strcmp(id, "file_delete") == 0) {
            *out = gml_file_delete((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }"""),
("""        if (strcmp(id, "file_rename") == 0) {
            *out = gml_file_rename("", ""); return true;
        }
        if (strcmp(id, "directory_rename") == 0) {
            *out = gml_directory_rename("", ""); return true;
        }""",
 """        if (strcmp(id, "file_rename") == 0) {
            *out = gml_file_rename((p->str_mask & 1) ? p->str_args[0] : "",
                                  (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }
        if (strcmp(id, "directory_rename") == 0) {
            *out = gml_directory_rename((p->str_mask & 1) ? p->str_args[0] : "",
                                       (p->str_mask & 2) ? p->str_args[1] : ""); return true;
        }"""),
("""        if (strcmp(id, "ini_open") == 0) {
            *out = gml_ini_open(""); return true;
        }""",
 """        if (strcmp(id, "ini_open") == 0) {
            *out = gml_ini_open((p->str_mask & 1) ? p->str_args[0] : ""); return true;
        }"""),
]
for a,b in pairs:
    if a in t:
        t = t.replace(a, b, 1)
        print("wire")
if "show_debug_message" not in t:
    needle = """        if (strcmp(id, "game_end") == 0) {
            *out = gml_game_end(); return true;
        }"""
    ins = needle + """
        if (strcmp(id, "show_debug_message") == 0) {
            gml_show_debug_message((p->str_mask & 1) ? p->str_args[0] : "");
            *out = 0; return true;
        }
        if (strcmp(id, "show_message") == 0) {
            gml_show_debug_message((p->str_mask & 1) ? p->str_args[0] : "");
            *out = 1; return true;
        }
        if (strcmp(id, "randomize") == 0) {
            *out = gml_randomize(); return true;
        }
        if (strcmp(id, "random_set_seed") == 0) {
            *out = gml_random_set_seed(arg); return true;
        }
        if (strcmp(id, "random_get_seed") == 0) {
            *out = gml_random_get_seed(); return true;
        }"""
    if needle in t:
        t = t.replace(needle, ins, 1)
        print("debug_eval")
ev.write_text(t)
bu = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
bt = bu.read_text()
if "gml_show_debug_message" not in bt:
    if "#include <time.h>" not in bt:
        bt = bt.replace("#include <stdio.h>", "#include <stdio.h>\n#include <time.h>", 1)
    bt += """
void gml_show_debug_message(const char *msg) {
    if (msg) fprintf(stderr, "[GML] %s\n", msg);
}
double gml_randomize(void) {
    srand((unsigned)time(NULL));
    return 1;
}
double gml_random_set_seed(double seed) {
    srand((unsigned)seed);
    return seed;
}
double gml_random_get_seed(void) { return 0; }
"""
    bu.write_text(bt)
    print("debug_c")
h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
ht = h.read_text()
if "gml_show_debug_message" not in ht:
    decls = """
void gml_show_debug_message(const char *msg);
double gml_randomize(void);
double gml_random_set_seed(double seed);
double gml_random_get_seed(void);
"""
    if ht.rstrip().endswith("#endif"):
        ht = ht.rstrip()[:-6] + decls + "\n#endif\n"
    else:
        ht += decls
    h.write_text(ht)
    print("debug_h")
print("APPLY_STRING_DEBUG_OK")
