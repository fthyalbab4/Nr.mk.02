#!/usr/bin/env python3
"""Mario touch: Java multi-touch keys; C touch = mouse only (no double-bind)."""
from pathlib import Path
import re
ROOT = Path(__file__).resolve().parents[2]

TOUCH_C = '''void gm82_native_touch(int x, int y, int action) {
    /* Mouse position only — virtual pad keys come from Java Gm82SurfaceView */
    if (!g_bridge_initialized) return;
    gm82_input_mouse_move(&g_bridge_input, (double)x, (double)y);
    if (action == 0 || action == 5) gm82_input_mouse_down(&g_bridge_input, 0);
    else if (action == 1 || action == 6 || action == 3) gm82_input_mouse_up(&g_bridge_input, 0);
}
'''

def patch_c():
    p = ROOT / "app/src/main/cpp/src/gm82_jni_java_bridge.c"
    if not p.exists():
        print("jni missing"); return
    t = p.read_text()
    if "virtual pad keys come from Java" in t:
        print("c ok"); return
    t2, n = re.subn(
        r"void gm82_native_touch\(int x, int y, int action\)\s*\{.*?\n\}",
        TOUCH_C.rstrip(),
        t,
        count=1,
        flags=re.S,
    )
    if n != 1:
        print("c replace fail", n); return
    p.write_text(t2)
    print("c mouse-only touch")

def ensure_java():
    p = ROOT / "app/src/main/java/com/normaker/gm82/Gm82SurfaceView.java"
    if not p.exists():
        print("java missing"); return
    t = p.read_text()
    if "zoneToVk" in t:
        print("java pad ok"); return
    print("java pad missing — re-run full apply from previous")

if __name__ == "__main__":
    patch_c()
    ensure_java()
    print("APPLY_MARIO_TOUCH_V2_DONE")
