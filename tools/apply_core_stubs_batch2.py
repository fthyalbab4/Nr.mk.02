#!/usr/bin/env python3
"""Implement more GM82CORE stubs that games actually call; remove them from try_stub list."""
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
TREES = [
    ROOT / "app/src/main/cpp",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX",
    ROOT / "app/src/main/cpp_backup",
]

REMOVE = {
    "code_compile", "code_destroy", "code_execute", "code_exists", "code_get_argcount", "code_return",
    "event_inherit_object", "keyboard_get_keyname",
    "path_get_width", "path_get_height", "path_get_approximate_pos",
    "string_justify", "string_replace_many",
    "match_any", "match_exact", "match_found", "match_not_any", "match_not_exact", "match_not_some", "match_some",
    "mouse_in_window", "extension_detect", "get_frametime_usage",
}

IMPL = r'''
/* ---- batch2 core stubs -> real host implementations ---- */
#define NOR_CODE_MAX 64
static char *g_nor_codes[NOR_CODE_MAX];
static int g_nor_code_count = 0;
static double g_nor_code_return = 0;
static int g_nor_match_found = 0;

double gml_code_compile(const char *src) {
    if (!src) src = "";
    if (g_nor_code_count >= NOR_CODE_MAX) return -1;
    size_t n = strlen(src);
    char *buf = (char *)malloc(n + 1);
    if (!buf) return -1;
    memcpy(buf, src, n + 1);
    g_nor_codes[g_nor_code_count] = buf;
    return (double)g_nor_code_count++;
}

double gml_code_exists(double id) {
    int i = (int)id;
    return (i >= 0 && i < g_nor_code_count && g_nor_codes[i]) ? 1.0 : 0.0;
}

double gml_code_get_argcount(double id) { (void)id; return 0.0; }

double gml_code_execute(double id) {
    int i = (int)id;
    if (i < 0 || i >= g_nor_code_count || !g_nor_codes[i]) return 0.0;
    return gml_execute_string(g_nor_codes[i]);
}

double gml_code_destroy(double id) {
    int i = (int)id;
    if (i < 0 || i >= g_nor_code_count) return 0.0;
    free(g_nor_codes[i]);
    g_nor_codes[i] = NULL;
    return 1.0;
}

double gml_code_return(double val) { g_nor_code_return = val; return val; }
double gml_event_inherit_object(void) { return 1.0; }

double gml_keyboard_get_keyname(double vk) {
    int k = (int)vk;
    const char *name = "key";
    if (k == 37) name = "left";
    else if (k == 38) name = "up";
    else if (k == 39) name = "right";
    else if (k == 40) name = "down";
    else if (k == 32) name = "space";
    else if (k == 13) name = "enter";
    else if (k == 27) name = "escape";
    else if (k >= 65 && k <= 90) {
        static char b[2];
        b[0] = (char)k; b[1] = 0;
        gm82_gml_set_last_string(b);
        return 0;
    }
    gm82_gml_set_last_string(name);
    return 0;
}

double gml_path_get_width(double path_index) { (void)path_index; return 0.0; }
double gml_path_get_height(double path_index) { (void)path_index; return 0.0; }
double gml_path_get_approximate_pos(double path_index, double x, double y) {
    (void)path_index; (void)x; (void)y; return 0.0;
}

double gml_string_justify(const char *s, double width) {
    (void)width;
    if (!s) { gm82_gml_set_last_string(""); return 0; }
    gm82_gml_set_last_string(s);
    return 0;
}

double gml_string_replace_many(const char *s, const char *old, const char *rep) {
    if (!s) { gm82_gml_set_last_string(""); return 0; }
    if (!old || !old[0]) { gm82_gml_set_last_string(s); return 0; }
    if (!rep) rep = "";
    char out[1024];
    size_t oi = 0;
    size_t olen = strlen(old);
    for (const char *p = s; *p && oi + 1 < sizeof(out); ) {
        if (strncmp(p, old, olen) == 0) {
            size_t rl = strlen(rep);
            if (oi + rl >= sizeof(out)) break;
            memcpy(out + oi, rep, rl);
            oi += rl;
            p += olen;
        } else {
            out[oi++] = *p++;
        }
    }
    out[oi] = 0;
    gm82_gml_set_last_string(out);
    return 0;
}

double gml_match_any(double a, double b) {
    g_nor_match_found = (a == b) ? 1 : g_nor_match_found;
    return (a == b) ? 1.0 : 0.0;
}
double gml_match_exact(double a, double b) {
    int ok = (a == b);
    g_nor_match_found = ok;
    return ok ? 1.0 : 0.0;
}
double gml_match_found(void) { return g_nor_match_found ? 1.0 : 0.0; }
double gml_match_not_any(double a, double b) { return gml_match_any(a, b) ? 0.0 : 1.0; }
double gml_match_not_exact(double a, double b) { return gml_match_exact(a, b) ? 0.0 : 1.0; }
double gml_match_some(double a, double b) { return gml_match_any(a, b); }
double gml_match_not_some(double a, double b) { return gml_match_not_any(a, b); }
double gml_mouse_in_window(void) { return 1.0; }
double gml_extension_detect(void) { return 0.0; }
double gml_get_frametime_usage(void) { return 0.0; }

'''

WIRE = '''        if (strcmp(id, "code_compile") == 0) {
            *out = gml_code_compile((p->str_mask & 1) ? p->str_args[0] : "");
            return true;
        }
        if (strcmp(id, "code_execute") == 0) { *out = gml_code_execute(arg); return true; }
        if (strcmp(id, "code_exists") == 0) { *out = gml_code_exists(arg); return true; }
        if (strcmp(id, "code_destroy") == 0) { *out = gml_code_destroy(arg); return true; }
        if (strcmp(id, "code_get_argcount") == 0) { *out = gml_code_get_argcount(arg); return true; }
        if (strcmp(id, "code_return") == 0) { *out = gml_code_return(arg); return true; }
        if (strcmp(id, "event_inherit_object") == 0) { *out = gml_event_inherit_object(); return true; }
        if (strcmp(id, "keyboard_get_keyname") == 0) { *out = gml_keyboard_get_keyname(arg); return true; }
        if (strcmp(id, "path_get_width") == 0) { *out = gml_path_get_width(arg); return true; }
        if (strcmp(id, "path_get_height") == 0) { *out = gml_path_get_height(arg); return true; }
        if (strcmp(id, "path_get_approximate_pos") == 0) {
            *out = gml_path_get_approximate_pos(arg, nargs>=2?args[1]:0, nargs>=3?args[2]:0);
            return true;
        }
        if (strcmp(id, "string_justify") == 0) {
            *out = gml_string_justify((p->str_mask & 1) ? p->str_args[0] : "", nargs>=2?args[1]:0);
            return true;
        }
        if (strcmp(id, "string_replace_many") == 0) {
            *out = gml_string_replace_many(
                (p->str_mask & 1) ? p->str_args[0] : "",
                (p->str_mask & 2) ? p->str_args[1] : "",
                (p->str_mask & 4) ? p->str_args[2] : "");
            return true;
        }
        if (strcmp(id, "match_any") == 0 || strcmp(id, "match_some") == 0) {
            *out = gml_match_any(arg, nargs>=2?args[1]:0); return true;
        }
        if (strcmp(id, "match_exact") == 0) { *out = gml_match_exact(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "match_found") == 0) { *out = gml_match_found(); return true; }
        if (strcmp(id, "match_not_any") == 0 || strcmp(id, "match_not_some") == 0) {
            *out = gml_match_not_any(arg, nargs>=2?args[1]:0); return true;
        }
        if (strcmp(id, "match_not_exact") == 0) { *out = gml_match_not_exact(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "mouse_in_window") == 0) { *out = gml_mouse_in_window(); return true; }
        if (strcmp(id, "extension_detect") == 0) { *out = gml_extension_detect(); return true; }
        if (strcmp(id, "get_frametime_usage") == 0) { *out = gml_get_frametime_usage(); return true; }
'''

PROTOS = """
double gml_code_compile(const char *src);
double gml_code_exists(double id);
double gml_code_get_argcount(double id);
double gml_code_execute(double id);
double gml_code_destroy(double id);
double gml_code_return(double val);
double gml_event_inherit_object(void);
double gml_keyboard_get_keyname(double vk);
double gml_path_get_width(double path_index);
double gml_path_get_height(double path_index);
double gml_path_get_approximate_pos(double path_index, double x, double y);
double gml_string_justify(const char *s, double width);
double gml_string_replace_many(const char *s, const char *old, const char *rep);
double gml_match_any(double a, double b);
double gml_match_exact(double a, double b);
double gml_match_found(void);
double gml_match_not_any(double a, double b);
double gml_match_not_exact(double a, double b);
double gml_match_some(double a, double b);
double gml_match_not_some(double a, double b);
double gml_mouse_in_window(void);
double gml_extension_detect(void);
double gml_get_frametime_usage(void);
"""

def fix_builtins(path: Path) -> str:
    if not path.exists():
        return f"skip {path}"
    t = path.read_text(encoding="utf-8")
    if "gml_code_compile" not in t:
        idx = t.find("static const char *GM82CORE_STUBS[]")
        if idx < 0:
            return f"no stubs {path}"
        t = t[:idx] + IMPL + t[idx:]
    m = re.search(r"(static const char \*GM82CORE_STUBS\[\] = \{)(.*?)(\};)", t, re.S)
    if m:
        names = re.findall(r'"([^"]+)"', m.group(2))
        kept = [n for n in names if n not in REMOVE]
        body = ", ".join(f'"{n}"' for n in kept)
        t = t[: m.start(2)] + "\n  " + body + "\n" + t[m.end(2) :]
    path.write_text(t, encoding="utf-8")
    return f"builtins {path}"

def fix_eval(path: Path) -> str:
    if not path.exists():
        return f"skip {path}"
    t = path.read_text(encoding="utf-8")
    if 'strcmp(id, "code_compile")' in t:
        return f"eval already {path}"
    marker = "        if (gm82_gm82core_try_stub(id, out)) return true;\n"
    if marker not in t:
        return f"no try_stub {path}"
    t = t.replace(marker, WIRE + marker, 1)
    path.write_text(t, encoding="utf-8")
    return f"eval {path}"

def fix_header(path: Path) -> str:
    if not path.exists():
        return f"skip {path}"
    t = path.read_text(encoding="utf-8")
    if "gml_code_compile" in t:
        return f"header ok {path}"
    idx = t.rfind("#endif")
    if idx >= 0:
        t = t[:idx] + PROTOS + t[idx:]
    else:
        t += PROTOS
    path.write_text(t, encoding="utf-8")
    return f"header {path}"

def main() -> int:
    for tree in TREES:
        print(fix_builtins(tree / "src" / "gm82_gml_builtins.c"))
        print(fix_eval(tree / "src" / "gm82_gml_eval.c"))
        print(fix_header(tree / "include" / "gm82_gml_builtins.h"))
    return 0

if __name__ == "__main__":
    sys.exit(main())
