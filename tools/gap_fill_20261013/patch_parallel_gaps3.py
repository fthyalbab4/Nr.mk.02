#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
if "room_exists" not in t:
    anchor = 'if (strcmp(id, "game_end") == 0)'
    if anchor not in t:
        raise SystemExit("anchor missing")
    ins = (
        '        if (strcmp(id, "is_real") == 0) { *out = 1; return true; }\n'
        '        if (strcmp(id, "is_string") == 0) { *out = 0; return true; }\n'
        '        if (strcmp(id, "room_exists") == 0) {\n'
        '            int r = (int)arg;\n'
        '            *out = (p->rt && p->rt->rooms && r >= 0 && r < p->rt->rooms->count) ? 1.0 : 0.0;\n'
        '            return true;\n'
        '        }\n'
        '        if (strcmp(id, "event_inherited") == 0) { *out = 1; return true; }\n'
        '        if (strcmp(id, "object_exists") == 0) {\n'
        '            int o = (int)arg;\n'
        '            *out = (p->rt && p->rt->objects && o >= 0 && o < p->rt->objects->count) ? 1.0 : 0.0;\n'
        '            return true;\n'
        '        }\n'
        '        if (strcmp(id, "object_get_parent") == 0) { *out = -1; return true; }\n'
        '        if (strcmp(id, "object_get_name") == 0) { *out = arg; return true; }\n'
    )
    t = t.replace(anchor, ins + "        " + anchor, 1)
    ev.write_text(t)
    print("gml binds")
else:
    print("gml binds already")
ac = ROOT / "app/src/main/cpp/src/gm82_actions.c"
at = ac.read_text()
old = (
    '    if (strcmp(name, "action_set_cursor") == 0) {\n'
    '        /* unimplemented: action_set_cursor */\n'
    '        return true;\n'
    '    }'
)
new = (
    '    if (strcmp(name, "action_set_cursor") == 0) {\n'
    '        return true; /* desktop cursor N/A */\n'
    '    }'
)
if old in at:
    ac.write_text(at.replace(old, new, 1))
    print("cursor")
print("PATCH_PARALLEL_GAPS3_OK")
