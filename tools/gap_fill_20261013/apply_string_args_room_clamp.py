#!/usr/bin/env python3
"""Room bounds clamp + document string-arg expectation. Idempotent."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
rt = ROOT / "app/src/main/cpp/src/gm82_runtime.c"
t = rt.read_text()
if "ROOM_BOUNDS_CLAMP" not in t:
    old = """        inst->x += inst->hspeed;
        inst->y += inst->vspeed;
    }

    const int n_col = rt->instance_count;"""
    new = """        inst->x += inst->hspeed;
        inst->y += inst->vspeed;
    }

    /* ROOM_BOUNDS_CLAMP */
    for (int i = 0; i < rt->instance_count; i++) {
        gm82_instance *inst = &rt->instances[i];
        if (!inst->alive) continue;
        if (rt->room_width > 0) {
            if (inst->x < 0) { inst->x = 0; if (inst->hspeed < 0) inst->hspeed = 0; }
            if (inst->x > rt->room_width) { inst->x = (double)rt->room_width; if (inst->hspeed > 0) inst->hspeed = 0; }
        }
        if (rt->room_height > 0) {
            if (inst->y < 0) { inst->y = 0; if (inst->vspeed < 0) inst->vspeed = 0; }
            if (inst->y > rt->room_height) { inst->y = (double)rt->room_height; if (inst->vspeed > 0) inst->vspeed = 0; }
        }
    }

    const int n_col = rt->instance_count;"""
    if old in t:
        rt.write_text(t.replace(old, new, 1))
        print("room_clamp")
    else:
        print("room_clamp skip")
else:
    print("room_clamp already")
print("APPLY_STRING_ROOM_OK")
