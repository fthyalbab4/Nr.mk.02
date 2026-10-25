#!/usr/bin/env python3
"""Wire sprite transform/color to image_* + UNMAPPED_ACTION / UNMAPPED_GML_FN logs."""
from pathlib import Path
import re
ROOT = Path(__file__).resolve().parents[2]
for base in [
    ROOT / "app/src/main/cpp/src/gm82_actions.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_actions.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c",
]:
    if not base.exists():
        continue
    t = base.read_text()
    if "action_sprite_transform" in t and "image_angle" not in t:
        t = t.replace(
            '    if (strcmp(name, "action_sprite_transform") == 0) {\n'
            '        if (argc >= 1) self->image_xscale = (double)args[0] != 0.0 ? (double)args[0] : 1.0;\n'
            '        if (argc >= 2) self->image_yscale = (double)args[1] != 0.0 ? (double)args[1] : 1.0;\n'
            '        return true;\n'
            '    }',
            '    if (strcmp(name, "action_sprite_transform") == 0) {\n'
            '        if (argc >= 1) self->image_xscale = (double)args[0] != 0.0 ? (double)args[0] : 1.0;\n'
            '        if (argc >= 2) self->image_yscale = (double)args[1] != 0.0 ? (double)args[1] : 1.0;\n'
            '        if (argc >= 3) self->image_angle = (double)args[2];\n'
            '        return true;\n'
            '    }',
        )
    if "action_sprite_color" in t and "image_blend" not in t:
        t = re.sub(
            r'    if \(strcmp\(name, "action_sprite_color"\) == 0\) \{[^}]*return true;\n    \}',
            '    if (strcmp(name, "action_sprite_color") == 0) {\n'
            '        if (argc >= 1) self->image_blend = (int32_t)args[0];\n'
            '        if (argc >= 2) {\n'
            '            double a = (double)args[1];\n'
            '            self->image_alpha = (a > 1.0) ? (a / 255.0) : a;\n'
            '        }\n'
            '        return true;\n'
            '    }',
            t, count=1, flags=re.S,
        )
    if "UNMAPPED_ACTION" not in t:
        needle = "    return false;\n}\n\nbool gm82_action_execute_named"
        if needle in t:
            t = t.replace(needle,
                '    fprintf(stderr, "UNMAPPED_ACTION %s\\n", name);\n    return false;\n}\n\nbool gm82_action_execute_named', 1)
    base.write_text(t)
    print("OK", base)
for ev in [
    ROOT / "app/src/main/cpp/src/gm82_gml_eval.c",
    ROOT / "app/src/main/cpp_backup/src/gm82_gml_eval.c",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_gml_eval.c",
]:
    if not ev.exists():
        continue
    t = ev.read_text()
    if "UNMAPPED_GML_FN" in t:
        print("eval already", ev); continue
    t = t.replace(
        'snprintf(p->err, sizeof(p->err), "unknown fn %s", id);',
        'snprintf(p->err, sizeof(p->err), "unknown fn %s", id); fprintf(stderr, "UNMAPPED_GML_FN %s\\n", id);',
        1,
    )
    ev.write_text(t)
    print("eval", ev)
print("APPLY_ACTION_IMAGE_AND_LOG_OK")
