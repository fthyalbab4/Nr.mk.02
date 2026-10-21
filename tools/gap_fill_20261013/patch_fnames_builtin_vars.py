#!/usr/bin/env python3
"""Wire priority GML built-in variables from portable fnames into get_var/set_var + input."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

h = ROOT / "app/src/main/cpp/include/gm82_runtime.h"
ht = h.read_text()
old = """    int32_t path_index;\n    double  path_position;\n    double  path_speed;"""
new = """    int32_t path_index;\n    double  path_position;\n    double  path_positionprevious;\n    double  path_speed;\n    double  path_scale;\n    double  path_orientation;\n    int32_t path_endaction;"""
if "path_positionprevious" not in ht:
    if old not in ht:
        raise SystemExit("runtime.h path fields missing")
    h.write_text(ht.replace(old, new, 1))
    print("header")
else:
    print("header already")

ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
needle = """    if (strcmp(name, \"sprite_height\") == 0) {\n        int sh = 16;\n        if (p->rt && p->rt->sprites && s && s->sprite_index >= 0 && s->sprite_index < p->rt->sprites->count)\n            sh = p->rt->sprites->frames[s->sprite_index].height;\n        *out = (double)sh; return true;\n    }"""
block = needle + """\n    if (strcmp(name, \"sprite_xoffset\") == 0) {\n        int ox = 0;\n        if (p->rt && p->rt->sprites && s && s->sprite_index >= 0 && s->sprite_index < p->rt->sprites->count)\n            ox = p->rt->sprites->frames[s->sprite_index].origin_x;\n        *out = (double)ox; return true;\n    }\n    if (strcmp(name, \"sprite_yoffset\") == 0) {\n        int oy = 0;\n        if (p->rt && p->rt->sprites && s && s->sprite_index >= 0 && s->sprite_index < p->rt->sprites->count)\n            oy = p->rt->sprites->frames[s->sprite_index].origin_y;\n        *out = (double)oy; return true;\n    }\n    if (strcmp(name, \"path_index\") == 0) { *out = s ? (double)s->path_index : -1; return true; }\n    if (strcmp(name, \"path_position\") == 0) { *out = s ? s->path_position : 0; return true; }\n    if (strcmp(name, \"path_positionprevious\") == 0) { *out = s ? s->path_positionprevious : 0; return true; }\n    if (strcmp(name, \"path_speed\") == 0) { *out = s ? s->path_speed : 0; return true; }\n    if (strcmp(name, \"path_scale\") == 0) { *out = s ? (s->path_scale != 0 ? s->path_scale : 1) : 1; return true; }\n    if (strcmp(name, \"path_orientation\") == 0) { *out = s ? s->path_orientation : 0; return true; }\n    if (strcmp(name, \"path_endaction\") == 0) { *out = s ? (double)s->path_endaction : 0; return true; }\n    if (strcmp(name, \"instance_id\") == 0) { *out = s ? (double)s->id : 0; return true; }\n    if (strcmp(name, \"instance_count\") == 0) {\n        int n = 0;\n        if (p->rt) {\n            for (int i = 0; i < p->rt->instance_count; i++)\n                if (p->rt->instances[i].alive) n++;\n        }\n        *out = (double)n; return true;\n    }\n    if (strcmp(name, \"room\") == 0) { *out = p->rt ? (double)p->rt->current_room : 0; return true; }\n    if (strcmp(name, \"room_width\") == 0) { *out = p->rt ? (double)p->rt->room_width : 0; return true; }\n    if (strcmp(name, \"room_height\") == 0) { *out = p->rt ? (double)p->rt->room_height : 0; return true; }\n    if (strcmp(name, \"room_speed\") == 0) { *out = p->rt ? (double)p->rt->room_speed : 30; return true; }\n    if (strcmp(name, \"room_first\") == 0) { *out = 0; return true; }\n    if (strcmp(name, \"room_last\") == 0) {\n        *out = (p->rt && p->rt->rooms && p->rt->rooms->count > 0) ? (double)(p->rt->rooms->count - 1) : 0;\n        return true;\n    }\n    if (strcmp(name, \"room_persistent\") == 0) { *out = 0; return true; }\n    if (strcmp(name, \"keyboard_key\") == 0 || strcmp(name, \"keyboard_lastkey\") == 0) {\n        *out = gml_keyboard_key(); return true;\n    }\n    if (strcmp(name, \"mouse_button\") == 0) { *out = gml_mouse_button_code(); return true; }\n    if (strcmp(name, \"mouse_lastbutton\") == 0) { *out = gml_mouse_lastbutton(); return true; }\n"""
if "sprite_xoffset" not in t[t.find("get_var"):t.find("set_var")]:
    if needle not in t:
        raise SystemExit("get_var needle missing")
    t = t.replace(needle, block, 1)
    print("get_var")
else:
    print("get_var already")

set_needle = '    if (strcmp(name, "friction") == 0) { s->friction = v; return true; }'
set_ins = set_needle + """\n    if (strcmp(name, \"path_index\") == 0) { s->path_index = (int32_t)v; return true; }\n    if (strcmp(name, \"path_position\") == 0) { s->path_positionprevious = s->path_position; s->path_position = v; return true; }\n    if (strcmp(name, \"path_speed\") == 0) { s->path_speed = v; return true; }\n    if (strcmp(name, \"path_scale\") == 0) { s->path_scale = v; return true; }\n    if (strcmp(name, \"path_orientation\") == 0) { s->path_orientation = v; return true; }\n    if (strcmp(name, \"path_endaction\") == 0) { s->path_endaction = (int32_t)v; return true; }\n"""
si = t.find("static bool set_var")
if "path_endaction" not in t[si:si+2500]:
    t = t[:si] + t[si:].replace(set_needle, set_ins, 1)
    print("set_var")
else:
    print("set_var already")
ev.write_text(t)

inp = ROOT / "app/src/main/cpp/src/gm82_input.c"
it = inp.read_text()
if "gml_keyboard_key" not in it:
    if "static gm82_input_state *g_input = NULL;" in it and "g_mouse_lastbutton" not in it:
        it = it.replace(
            "static gm82_input_state *g_input = NULL;",
            "static gm82_input_state *g_input = NULL;\nstatic int g_mouse_lastbutton = 0;",
            1,
        )
    it += """\ndouble gml_keyboard_key(void) {\n    if (!g_input) return 0;\n    for (int i = 0; i < GM82_KEY_MAX; i++)\n        if (g_input->down[i]) return (double)i;\n    return 0;\n}\ndouble gml_mouse_button_code(void) {\n    if (!g_input) return 0;\n    for (int b = 0; b < 3; b++)\n        if (g_input->mouse_button[b]) return (double)(b + 1);\n    return 0;\n}\ndouble gml_mouse_lastbutton(void) { return (double)g_mouse_lastbutton; }\n"""
    if "void gm82_input_mouse_down(gm82_input_state *in, int button) {" in it:
        it = it.replace(
            "void gm82_input_mouse_down(gm82_input_state *in, int button) {",
            "void gm82_input_mouse_down(gm82_input_state *in, int button) {\n    if (button >= 0 && button <= 2) g_mouse_lastbutton = button + 1;",
            1,
        )
    inp.write_text(it)
    print("input")
else:
    print("input already")

ih = ROOT / "app/src/main/cpp/include/gm82_input.h"
iht = ih.read_text()
for decl in [
    "double gml_keyboard_key(void);",
    "double gml_mouse_button_code(void);",
    "double gml_mouse_lastbutton(void);",
]:
    if decl not in iht:
        if "#endif" in iht:
            iht = iht.replace("#endif", decl + "\n#endif", 1)
        else:
            iht += decl + "\n"
ih.write_text(iht)
print("PATCH_FNAMES_BUILTIN_VARS_OK")
