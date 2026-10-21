#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
ev = ROOT / "app/src/main/cpp/src/gm82_gml_eval.c"
t = ev.read_text()
if "#include <time.h>" not in t[:1200]:
    t = t.replace("#include <math.h>", "#include <math.h>\n#include <time.h>", 1)
if 'strcmp(id, "fps")' not in t:
    anchor = 'if (strcmp(id, "game_end") == 0)'
    if anchor not in t:
        anchor = 'if (strcmp(id, "is_real") == 0)'
    ins = (
        '        if (strcmp(id, "fps") == 0) {\n'
        '            *out = p->rt ? (double)(p->rt->room_speed > 0 ? p->rt->room_speed : 30) : 30.0;\n'
        '            return true;\n'
        '        }\n'
        '        if (strcmp(id, "current_hour") == 0) {\n'
        '            time_t tt = time(NULL); struct tm *tm = localtime(&tt);\n'
        '            *out = tm ? (double)tm->tm_hour : 0; return true;\n'
        '        }\n'
        '        if (strcmp(id, "current_minute") == 0) {\n'
        '            time_t tt = time(NULL); struct tm *tm = localtime(&tt);\n'
        '            *out = tm ? (double)tm->tm_min : 0; return true;\n'
        '        }\n'
        '        if (strcmp(id, "current_second") == 0) {\n'
        '            time_t tt = time(NULL); struct tm *tm = localtime(&tt);\n'
        '            *out = tm ? (double)tm->tm_sec : 0; return true;\n'
        '        }\n'
        '        if (strcmp(id, "game_id") == 0) { *out = 0; return true; }\n'
        '        if (strcmp(id, "parameter_count") == 0) { *out = 0; return true; }\n'
        '        if (strcmp(id, "parameter_string") == 0) { *out = 0; return true; }\n'
        '        if (strcmp(id, "environment_get_variable") == 0) { *out = 0; return true; }\n'
        '        if (strcmp(id, "working_directory") == 0 || strcmp(id, "temp_directory") == 0 ||\n'
        '            strcmp(id, "program_directory") == 0) { *out = 0; return true; }\n'
    )
    t = t.replace(anchor, ins + "        " + anchor, 1)
    print("fps+time")
else:
    print("fps already")
ev.write_text(t)
ac = ROOT / "app/src/main/cpp/src/gm82_actions.c"
at = ac.read_text()
at2 = at.replace('        /* unimplemented: action_sprite_set requires sprite_index arg */\n', '').replace(
    '        /* unimplemented: action_set_cursor */\n', ''
)
if at2 != at:
    ac.write_text(at2)
    print("actions clean")
print("PATCH_PARALLEL_GAPS6_OK")
