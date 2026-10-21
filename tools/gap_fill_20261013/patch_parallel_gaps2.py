#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

evp = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
et = evp.read_text()
if "position_empty" not in et:
    for needle in ['if (strcmp(id, "place_empty") == 0)', 'if (strcmp(id, "place_free") == 0)']:
        i = et.find(needle)
        if i >= 0:
            j = et.find("return true;", i)
            j = et.find("\n", j) + 1
            et = et[:j] + '''        if (strcmp(id, "position_empty") == 0) {
            *out = gml_place_empty(args[0], nargs >= 2 ? args[1] : 0); return true;
        }
''' + et[j:]
            print("position_empty")
            break
if "timeline_position" not in et[et.find("get_var"):et.find("set_var")]:
    if 'if (strcmp(name, "path_endaction") == 0)' in et:
        et = et.replace(
            'if (strcmp(name, "path_endaction") == 0)',
            '''if (strcmp(name, "timeline_index") == 0) { *out = s ? (double)s->timeline_index : -1; return true; }
    if (strcmp(name, "timeline_position") == 0) { *out = s ? s->timeline_position : 0; return true; }
    if (strcmp(name, "timeline_speed") == 0) { *out = s ? s->timeline_speed : 0; return true; }
    if (strcmp(name, "timeline_running") == 0) { *out = s ? (double)s->timeline_running : 0; return true; }
    if (strcmp(name, "path_endaction") == 0)''',
            1,
        )
        print("timeline vars")
evp.write_text(et)

ep = ROOT / "app/src/main/cpp/src/gm82_events.c"
et2 = ep.read_text()
if '"obj_ship"' not in et2:
    et2 = et2.replace(
        '{ "link",          beh_player_create, beh_player_step },',
        '''{ "link",          beh_player_create, beh_player_step },
    { "obj_guy",       beh_player_create, beh_player_step },
    { "guy",           beh_player_create, beh_player_step },
    { "obj_ship",      beh_player_create, beh_player_step },
    { "ship",          beh_player_create, beh_player_step },
    { "jugador",       beh_player_create, beh_player_step },
    { "obj_jugador",   beh_player_create, beh_player_step },''',
    )
    ep.write_text(et2)
    print("player prefixes")
print("PATCH_PARALLEL_GAPS2_OK")
