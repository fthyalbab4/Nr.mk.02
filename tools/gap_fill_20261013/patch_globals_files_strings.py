#!/usr/bin/env python3
"""Fill gaps: global get/set/exists, directory_exists, string_letters/repeat binds, keyboard_string length."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

bp = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
bt = bp.read_text()
if "gml_variable_global_set_name" not in bt:
    if "#include <sys/stat.h>" not in bt:
        bt = bt.replace("#include <string.h>", "#include <string.h>\n#include <sys/stat.h>", 1)
    block = r'''
#define GM82_GLOBAL_MAX 64
static struct { char name[48]; double value; } g_globals[GM82_GLOBAL_MAX];
static int g_global_n = 0;

double gml_variable_global_exists_name(const char *name) {
    if (!name || !name[0]) return 0;
    for (int i = 0; i < g_global_n; i++)
        if (strcmp(g_globals[i].name, name) == 0) return 1;
    return 0;
}
double gml_variable_global_get_name(const char *name) {
    if (!name) return 0;
    for (int i = 0; i < g_global_n; i++)
        if (strcmp(g_globals[i].name, name) == 0) return g_globals[i].value;
    return 0;
}
double gml_variable_global_set_name(const char *name, double v) {
    if (!name || !name[0]) return 0;
    for (int i = 0; i < g_global_n; i++) {
        if (strcmp(g_globals[i].name, name) == 0) { g_globals[i].value = v; return 1; }
    }
    if (g_global_n >= GM82_GLOBAL_MAX) return 0;
    strncpy(g_globals[g_global_n].name, name, sizeof(g_globals[0].name) - 1);
    g_globals[g_global_n].name[sizeof(g_globals[0].name) - 1] = 0;
    g_globals[g_global_n].value = v;
    g_global_n++;
    return 1;
}

'''
    if "double gml_game_save" in bt:
        bt = bt.replace("double gml_game_save", block + "double gml_game_save", 1)
    else:
        bt += block
    print("globals")
if "gml_directory_exists" not in bt:
    ins = '''
double gml_directory_exists(const char *path) {
    if (!path || !path[0]) return 0;
    struct stat st;
    if (stat(path, &st) != 0) return 0;
    return S_ISDIR(st.st_mode) ? 1.0 : 0.0;
}
'''
    if "double gml_file_rename" in bt:
        i = bt.find("double gml_file_rename")
        j = bt.find("\n}\n", i) + 3
        bt = bt[:j] + ins + bt[j:]
    else:
        bt += ins
    if "#include <sys/stat.h>" not in bt:
        bt = bt.replace("#include <string.h>", "#include <string.h>\n#include <sys/stat.h>", 1)
    print("directory_exists")
bp.write_text(bt)

h = ROOT / "app/src/main/cpp/include/gm82_gml_builtins.h"
ht = h.read_text()
for decl in [
    "double gml_variable_global_exists_name(const char *name);",
    "double gml_variable_global_get_name(const char *name);",
    "double gml_variable_global_set_name(const char *name, double v);",
    "double gml_directory_exists(const char *path);",
]:
    if decl not in ht:
        if ht.rstrip().endswith("#endif"):
            ht = ht.rstrip()[:-6] + decl + "\n#endif\n"
        else:
            ht += decl + "\n"
h.write_text(ht)

ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
et = ev.read_text()
old = 'if (strcmp(id, "variable_global_exists") == 0) { *out = 0; return true; }'
new = (
    'if (strcmp(id, "variable_global_exists") == 0) {\n'
    '            *out = gml_variable_global_exists_name((p->str_mask & 1) ? p->str_args[0] : ""); return true;\n'
    '        }\n'
    '        if (strcmp(id, "variable_global_get") == 0) {\n'
    '            *out = gml_variable_global_get_name((p->str_mask & 1) ? p->str_args[0] : ""); return true;\n'
    '        }\n'
    '        if (strcmp(id, "variable_global_set") == 0) {\n'
    '            *out = gml_variable_global_set_name((p->str_mask & 1) ? p->str_args[0] : "", nargs >= 2 ? args[1] : 0); return true;\n'
    '        }'
)
if old in et:
    et = et.replace(old, new, 1)
    print("eval globals")
elif "variable_global_get" not in et:
    print("WARN: could not wire variable_global_get")

if 'strcmp(id, "directory_exists")' not in et:
    for a in ["file_exists", "file_delete", "file_rename"]:
        needle = f'if (strcmp(id, "{a}") == 0)'
        if needle in et:
            i = et.find(needle)
            j = et.find("return true;", i)
            j = et.find("\n", j) + 1
            et = et[:j] + (
                '        if (strcmp(id, "directory_exists") == 0) {\n'
                '            *out = gml_directory_exists((p->str_mask & 1) ? p->str_args[0] : ""); return true;\n'
                '        }\n'
                '        if (strcmp(id, "string_repeat") == 0) {\n'
                '            const char *s = (p->str_mask & 1) ? p->str_args[0] : "";\n'
                '            int n = (int)(nargs >= 2 ? args[1] : 1); if (n < 0) n = 0; if (n > 64) n = 64;\n'
                '            *out = (double)(strlen(s) * (size_t)n); return true;\n'
                '        }\n'
                '        if (strcmp(id, "string_letters") == 0) {\n'
                '            char tmp[512];\n'
                '            gml_string_letters((p->str_mask & 1) ? p->str_args[0] : "", tmp, sizeof(tmp));\n'
                '            *out = (double)strlen(tmp); return true;\n'
                '        }\n'
            ) + et[j:]
            print("dir/string binds")
            break

if "keyboard_string" not in et[et.find("get_var"):et.find("set_var")]:
    if "keyboard_lastchar" in et:
        et = et.replace(
            'if (strcmp(name, "keyboard_lastchar") == 0) { *out = gml_keyboard_lastchar(); return true; }',
            'if (strcmp(name, "keyboard_lastchar") == 0) { *out = gml_keyboard_lastchar(); return true; }\n'
            '    if (strcmp(name, "keyboard_string") == 0) {\n'
            '        const char *ks = gml_keyboard_string();\n'
            '        *out = ks ? (double)strlen(ks) : 0; return true;\n'
            '    }',
            1,
        )
        print("keyboard_string")

ev.write_text(et)

ip = ROOT / "app/src/main/cpp/src/gm82_input.c"
it = ip.read_text()
if "gml_keyboard_string" not in it:
    if "g_keyboard_string" not in it:
        it = it.replace(
            "static gm82_input_state *g_input = NULL;",
            "static gm82_input_state *g_input = NULL;\nstatic char g_keyboard_string[256];",
            1,
        )
    it += "\nconst char *gml_keyboard_string(void) { return g_keyboard_string; }\nvoid gml_keyboard_string_clear(void) { g_keyboard_string[0] = 0; }\n"
    ip.write_text(it)
    print("input")
ih = ROOT / "app/src/main/cpp/include/gm82_input.h"
iht = ih.read_text()
if "gml_keyboard_string" not in iht:
    iht = iht.replace(
        "void gm82_input_bind_global",
        "const char *gml_keyboard_string(void);\nvoid gml_keyboard_string_clear(void);\nvoid gm82_input_bind_global",
    )
    ih.write_text(iht)

print("PATCH_GLOBALS_FILES_STRINGS_OK")
