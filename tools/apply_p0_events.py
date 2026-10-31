#!/usr/bin/env python3
"""Apply P0 gm82_events.c (collision gml_set_other) from embedded zlib payload."""
import zlib, base64
from pathlib import Path
import urllib.request

# Prefer regenerating from known-good remote patch application if embedded fails
def main():
    # Inline minimal surgical patch against current main
    paths = [
        "app/src/main/cpp/src/gm82_events.c",
        "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c",
    ]
    old = (
        "            if (ev->action_name0[0])\n"
        "                gm82_action_execute_named(rt, inst, ev->action_name0);\n"
        "            if (ev->code_snippet && ev->code_snippet[0]) {\n"
        "                gm82_gml_set_self(inst);\n"
        "                gm82_gml_eval_block(rt, inst, ev->code_snippet);\n"
        "            }\n"
    )
    new = (
        "            if (ev->action_name0[0]) {\n"
        "                if (other) gm82_gml_set_other(other);\n"
        "                gm82_action_execute_named(rt, inst, ev->action_name0);\n"
        "                gm82_gml_set_other(NULL);\n"
        "            }\n"
        "            if (ev->code_snippet && ev->code_snippet[0]) {\n"
        "                gm82_gml_set_self(inst);\n"
        "                if (other) gm82_gml_set_other(other);\n"
        "                gm82_gml_eval_block(rt, inst, ev->code_snippet);\n"
        "                gm82_gml_set_other(NULL);\n"
        "            }\n"
    )
    for rel in paths:
        p = Path(rel)
        if not p.exists():
            print("skip missing", rel)
            continue
        t = p.read_text(encoding="utf-8", errors="replace")
        if "gm82_gml_set_other(other)" in t and "gm82_events_fire_collision" in t:
            # already patched?
            idx = t.find("void gm82_events_fire_collision")
            if idx >= 0 and "gm82_gml_set_other" in t[idx:idx+1200]:
                print("already patched", rel)
                continue
        idx = t.find("void gm82_events_fire_collision")
        if idx < 0:
            print("no collision fn", rel)
            continue
        rest = t[idx:]
        pos = rest.find(old)
        if pos < 0:
            print("pattern not found", rel)
            continue
        t2 = t[:idx] + rest[:pos] + new + rest[pos+len(old):]
        p.write_text(t2, encoding="utf-8")
        print("patched", rel, "other_count", t2.count("gml_set_other"))
    print("OK")

if __name__ == "__main__":
    main()
