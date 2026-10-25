#!/usr/bin/env python3
from pathlib import Path
import zlib, base64
ROOT = Path(__file__).resolve().parents[2]
B = ROOT / "tools/gap_fill_20261013/blobs"

def materialize(name, markers):
    single = B / f"{name}.zlib.b64"
    raw = None
    if single.exists():
        raw = single.read_text().strip()
    if not raw or raw == "PLACEHOLDER" or len(raw) < 100:
        parts = sorted(B.glob(name.replace('.c', '.part*.b64')))
        if parts:
            raw = "".join(p.read_text().strip() for p in parts)
    if not raw or len(raw) < 100:
        print("skip no blob", name)
        return False
    try:
        data = zlib.decompress(base64.b64decode(raw))
    except Exception as e:
        print("decompress fail", name, e)
        return False
    for m in markers:
        if m not in data:
            print("missing marker", m, "in", name)
            return False
    for dest in [
        ROOT / f"app/src/main/cpp/src/{name}",
        ROOT / f"app/src/main/cpp_backup/src/{name}",
        ROOT / f"NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/{name}",
    ]:
        dest.parent.mkdir(parents=True, exist_ok=True)
        dest.write_bytes(data)
        print("wrote", dest, len(data))
    return True

ok_a = materialize("gm82_actions.c", [b"Phase 4: expanded DnD", b"gm82_actions_fire_draw", b"action_if_empty"])
ok_e = materialize("gm82_events.c", [b"gm82_actions_fire_draw"])

# Fallback: light wire of fire_draw into events if blob failed
if not ok_e:
    for path in [
        ROOT / "app/src/main/cpp/src/gm82_events.c",
        ROOT / "app/src/main/cpp_backup/src/gm82_events.c",
        ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c",
    ]:
        if not path.exists():
            continue
        t = path.read_text(errors="replace")
        changed = False
        if "gm82_actions_fire_draw" not in t:
            old = "void gm82_events_fire_draw_single(gm82_runtime *rt, gm82_instance *inst) {\n"
            if old in t:
                t = t.replace(
                    old,
                    old
                    + "    if (rt && inst && inst->alive && rt->actions)\n"
                    + "        gm82_actions_fire_draw(rt, inst, rt->actions);\n",
                    1,
                )
                changed = True
            old2 = "        if (!inst || !inst->alive || !inst->visible) continue;\n        fire_object_ev(rt, inst, GM82_EV_DRAW, 0);"
            new2 = (
                "        if (!inst || !inst->alive || !inst->visible) continue;\n"
                "        if (rt->actions) gm82_actions_fire_draw(rt, inst, rt->actions);\n"
                "        fire_object_ev(rt, inst, GM82_EV_DRAW, 0);"
            )
            if old2 in t:
                t = t.replace(old2, new2, 1)
                changed = True
        if changed:
            path.write_text(t)
            print("wired events", path)

print("APPLY_PHASE4_DONE", "actions", ok_a, "events_blob", ok_e)
