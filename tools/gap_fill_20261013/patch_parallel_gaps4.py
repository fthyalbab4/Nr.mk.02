#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
if "background_exists" in t:
    print("already")
    print("PATCH_PARALLEL_GAPS4_OK")
    raise SystemExit(0)
anchor = 'if (strcmp(id, "sprite_exists") == 0)'
if anchor not in t:
    anchor = 'if (strcmp(id, "script_exists") == 0)'
i = t.find(anchor)
if i < 0:
    raise SystemExit("anchor missing")
j = t.find("return true;", i)
j = t.find("\n", j) + 1
ins = (
'        if (strcmp(id, "background_exists") == 0) {\n'
'            int b = (int)arg;\n'
'            *out = (p->rt && p->rt->backgrounds && b >= 0 && b < p->rt->backgrounds->count) ? 1.0 : 0.0;\n'
'            return true;\n'
'        }\n'
'        if (strcmp(id, "sound_exists") == 0) { *out = 0; return true; }\n'
'        if (strcmp(id, "font_exists") == 0) { *out = 0; return true; }\n'
'        if (strcmp(id, "path_exists") == 0) { *out = (arg >= 0) ? 1.0 : 0.0; return true; }\n'
'        if (strcmp(id, "timeline_exists") == 0) { *out = (arg >= 0) ? 1.0 : 0.0; return true; }\n'
'        if (strcmp(id, "variable_global_exists") == 0) { *out = 0; return true; }\n'
'        if (strcmp(id, "variable_local_exists") == 0) { *out = 0; return true; }\n'
'        if (strcmp(id, "variable_instance_exists") == 0) { *out = 0; return true; }\n'
'        if (strcmp(id, "object_get_depth") == 0) {\n'
'            int o = (int)arg; *out = 0;\n'
'            if (p->rt && p->rt->objects && o >= 0 && o < p->rt->objects->count)\n'
'                *out = (double)p->rt->objects->items[o].depth;\n'
'            return true;\n'
'        }\n'
'        if (strcmp(id, "object_get_persistent") == 0) {\n'
'            int o = (int)arg; *out = 0;\n'
'            if (p->rt && p->rt->objects && o >= 0 && o < p->rt->objects->count)\n'
'                *out = p->rt->objects->items[o].persistent ? 1.0 : 0.0;\n'
'            return true;\n'
'        }\n'
'        if (strcmp(id, "merge_color") == 0 || strcmp(id, "merge_colour") == 0) {\n'
'            double c1 = args[0], c2 = nargs >= 2 ? args[1] : 0, a = nargs >= 3 ? args[2] : 0.5;\n'
'            if (a < 0) a = 0; if (a > 1) a = 1;\n'
'            int r1 = ((int)c1) & 255, g1 = (((int)c1)>>8)&255, b1 = (((int)c1)>>16)&255;\n'
'            int r2 = ((int)c2) & 255, g2 = (((int)c2)>>8)&255, b2 = (((int)c2)>>16)&255;\n'
'            int r = (int)(r1 + (r2-r1)*a), g = (int)(g1 + (g2-g1)*a), b = (int)(b1 + (b2-b1)*a);\n'
'            *out = (double)(r | (g<<8) | (b<<16)); return true;\n'
'        }\n'
)
ev.write_text(t[:j] + ins + t[j:])
print("exists+merge")
print("PATCH_PARALLEL_GAPS4_OK")
