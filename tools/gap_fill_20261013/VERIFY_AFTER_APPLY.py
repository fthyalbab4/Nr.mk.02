#!/usr/bin/env python3
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
e=(ROOT/"app/src/main/cpp/src/gm82_gml_eval.c").read_text()
a=(ROOT/"app/src/main/cpp/src/gm82_actions.c").read_text()
r=(ROOT/"app/src/main/cpp/src/gm82_runtime.c").read_text()
checks=[
 ("set_last>=8", e.count("gm82_gml_set_last_string")>=8),
 ("string_repeat", "string_repeat" in e),
 ("string_concat", "string_concat" in e),
 ("modwrap", "modwrap" in e),
 ("action_message", "action_message" in a),
 ("action_draw_health", "action_draw_health" in a),
 ("UNMAPPED_ACTION", "UNMAPPED_ACTION" in a),
 ("draw_image_angle", "inst->image_angle" in r),
]
for name,ok in checks:
    print(("PASS" if ok else "FAIL"), name)
raise SystemExit(0 if all(o for _,o in checks) else 1)
