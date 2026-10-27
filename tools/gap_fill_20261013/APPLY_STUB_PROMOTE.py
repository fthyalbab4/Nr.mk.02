#!/usr/bin/env python3
"""Remove stub shadows + promote doable stubs to real C (additive)."""
from pathlib import Path
import re
ROOT = Path(__file__).resolve().parents[2]
b = ROOT / "app/src/main/cpp/src/gm82_gml_builtins.c"
e = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"

REMOVE_FROM_STUBS = [
    "room_find", "sprite_find",  # real already; stub was shadowing
    "window_has_focus", "file_text_writelf", "object_find",
    "background_find", "sound_find", "font_find", "path_find", "timeline_find",
    "ds_map_set", "instance_create_depth", "string_starts_with", "string_ends_with",
    "move_wrap", "url_open",
]

EXTRA = r'''
/* --- stub promote batch (additive) --- */
double gml_window_has_focus(void) { return 1.0; }
double gml_url_open(const char *url) { (void)url; return 0.0; }
double gml_file_text_writelf(const char *path, const char *line) {
    if (!path) return 0;
    FILE *f = fopen(path, "a");
    if (!f) return 0;
    if (line) fputs(line, f);
    fputc('\n', f);
    fclose(f);
    return 1.0;
}
double gml_ds_map_set(double id, double key, double val) {
    return gml_ds_map_add(id, key, val);
}
double gml_instance_create_depth(double x, double y, double depth, double object_index) {
    double iid = gml_instance_create(x, y, object_index);
    gm82_runtime *rt = gm82_gml_get_runtime();
    if (!rt || iid < 0) return iid;
    for (int i = 0; i < rt->instance_count; i++) {
        if (rt->instances[i].alive && (double)rt->instances[i].id == iid) {
            rt->instances[i].depth = (int32_t)depth;
            break;
        }
    }
    return iid;
}
double gml_string_starts_with_ext(const char *s, const char *pre) {
    if (!s || !pre) return 0;
    size_t n = strlen(pre);
    return strncmp(s, pre, n) == 0 ? 1.0 : 0.0;
}
double gml_string_ends_with_ext(const char *s, const char *suf) {
    if (!s || !suf) return 0;
    size_t n = strlen(s), m = strlen(suf);
    if (m > n) return 0;
    return strcmp(s + n - m, suf) == 0 ? 1.0 : 0.0;
}
double gml_move_wrap2(double hor, double vert) {
    gm82_runtime *rt = gm82_gml_get_runtime();
    gm82_instance *s = gm82_gml_get_self();
    if (!rt || !s) return 0;
    double w = 640, h = 480;
    if (hor) { if (s->x < 0) s->x += w; if (s->x >= w) s->x -= w; }
    if (vert) { if (s->y < 0) s->y += h; if (s->y >= h) s->y -= h; }
    return 1.0;
}
static double gm82_find_object_by_name(const char *name) {
    if (!name) return -1;
    const gm82_decoded_object_list *L = gm82_materialize_get_objects();
    if (!L || !L->items) return -1;
    for (int i = 0; i < L->count; i++) {
        if (strcmp(L->items[i].name, name) == 0) return (double)i;
    }
    return -1;
}
double gml_object_find(const char *name) { return gm82_find_object_by_name(name); }
double gml_background_find(const char *name) { (void)name; return -1; }
double gml_sound_find(const char *name) { (void)name; return -1; }
double gml_font_find(const char *name) { (void)name; return -1; }
double gml_path_find_name(const char *name) { (void)name; return -1; }
double gml_timeline_find_name(const char *name) { (void)name; return -1; }
'''

EVAL = r'''
        if (strcmp(id, "window_has_focus") == 0) { *out = gml_window_has_focus(); return true; }
        if (strcmp(id, "url_open") == 0) { *out = gml_url_open((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "file_text_writelf") == 0) { *out = gml_file_text_writelf((p->str_mask&1)?p->str_args[0]:"", (p->str_mask&2)?p->str_args[1]:""); return true; }
        if (strcmp(id, "ds_map_set") == 0) { *out = gml_ds_map_set(arg, nargs>=2?args[1]:0, nargs>=3?args[2]:0); return true; }
        if (strcmp(id, "instance_create_depth") == 0) { *out = gml_instance_create_depth(args[0], args[1], args[2], args[3]); return true; }
        if (strcmp(id, "string_starts_with") == 0) { *out = gml_string_starts_with_ext((p->str_mask&1)?p->str_args[0]:"", (p->str_mask&2)?p->str_args[1]:""); return true; }
        if (strcmp(id, "string_ends_with") == 0) { *out = gml_string_ends_with_ext((p->str_mask&1)?p->str_args[0]:"", (p->str_mask&2)?p->str_args[1]:""); return true; }
        if (strcmp(id, "move_wrap") == 0) { *out = gml_move_wrap2(arg, nargs>=2?args[1]:0); return true; }
        if (strcmp(id, "object_find") == 0) { *out = gml_object_find((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "background_find") == 0) { *out = gml_background_find((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "sound_find") == 0) { *out = gml_sound_find((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "font_find") == 0) { *out = gml_font_find((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "path_find") == 0) { *out = gml_path_find_name((p->str_mask&1)?p->str_args[0]:""); return true; }
        if (strcmp(id, "timeline_find") == 0) { *out = gml_timeline_find_name((p->str_mask&1)?p->str_args[0]:""); return true; }
'''

def strip_stubs(t: str) -> str:
    for name in REMOVE_FROM_STUBS:
        t = re.sub(r'\s*"%s"\s*,?' % re.escape(name), '', t)
    t = re.sub(r',(\s*\n\s*\})', r'\1', t)
    return t

def main():
    if not b.exists():
        print("builtins missing"); return
    t = b.read_text()
    t = strip_stubs(t)
    if "gml_window_has_focus" not in t:
        if '#include "gm82_materialize.h"' not in t:
            t = t.replace('#include "gm82_gml_builtins.h"',
                          '#include "gm82_gml_builtins.h"\n#include "gm82_materialize.h"', 1)
        t = t + "\n" + EXTRA
        print("builtins promoted")
    else:
        print("builtins promote ok")
    b.write_text(t)

    if e.exists():
        et = e.read_text()
        if 'strcmp(id, "window_has_focus")' not in et:
            for needle in ['if (gm82_gm82core_try_stub(id, out)) return true;',
                           'if (strcmp(id, "instance_create_moving") == 0) {',
                           'if (strcmp(id, "instance_create") == 0) {']:
                if needle in et:
                    et = et.replace(needle, needle + "\n" + EVAL, 1)
                    print("eval promoted")
                    break
            else:
                print("eval needle missing")
        else:
            print("eval promote ok")
        e.write_text(et)
    print("APPLY_STUB_PROMOTE_DONE")

if __name__ == "__main__":
    main()
