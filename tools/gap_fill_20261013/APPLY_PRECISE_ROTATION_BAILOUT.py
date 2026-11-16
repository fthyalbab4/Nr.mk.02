#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
RT = ROOT / "app/src/main/cpp/src/gm82_runtime.c"
def main():
    if not RT.exists():
        return
    t = RT.read_text()
    if "Rotated sprites: keep AABB" in t:
        print("already"); return
    needle = """    if (!fa->bitmask || !fb->bitmask || fa->bitmask_size == 0 || fb->bitmask_size == 0)\n        return true;"""
    insert = needle + "\n    /* Rotated sprites: keep AABB result (caller already overlapped bounds). */\n    if (a->image_angle != 0.0 || b->image_angle != 0.0)\n        return true;"
    if needle not in t:
        print("anchor miss"); return
    RT.write_text(t.replace(needle, insert, 1))
    print("APPLY_PRECISE_ROTATION_BAILOUT ok")
if __name__ == "__main__":
    main()
