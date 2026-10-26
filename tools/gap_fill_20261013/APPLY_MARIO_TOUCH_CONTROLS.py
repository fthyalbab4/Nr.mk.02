#!/usr/bin/env python3
"""Fix Mario/cloud touch: map screen zones to VK left/right/up/space (multi-touch)."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]

TOUCH_C = r'''
void gm82_native_touch(int x, int y, int action) {
    /* Virtual on-screen pad (Mario / GM keyboard parity):
     *  Left 40%:  left half = VK_LEFT(37), right half of zone = VK_RIGHT(39)
     *  Right 40%: jump = VK_SPACE(32) + VK_UP(38)
     *  action: 0=DOWN 1=UP 2=MOVE (Android MotionEvent masked)
     */
    if (!g_bridge_initialized) return;
    int sw = g_bridge_surface_w > 0 ? g_bridge_surface_w : 640;
    int sh = g_bridge_surface_h > 0 ? g_bridge_surface_h : 480;
    if (sw < 1) sw = 640;
    if (sh < 1) sh = 480;

    int left_zone = (x < sw * 40 / 100);
    int right_zone = (x > sw * 60 / 100);
    int lower = (y > sh * 45 / 100);

    int want_left = 0, want_right = 0, want_jump = 0;
    if (action == 0 || action == 2 || action == 5) { /* DOWN / MOVE / POINTER_DOWN */
        if (left_zone && lower) {
            if (x < sw * 20 / 100) want_left = 1;
            else want_right = 1;
        }
        if (right_zone && lower) want_jump = 1;
        /* center tap = jump (fallback) */
        if (!left_zone && !right_zone && lower) want_jump = 1;
    }
    /* UP / POINTER_UP / CANCEL: release handled below when action is up */
    if (action == 1 || action == 6 || action == 3) {
        want_left = want_right = want_jump = 0;
    }

    static int held_left = 0, held_right = 0, held_jump = 0;
    if (want_left && !held_left) { gm82_native_key_down(37); held_left = 1; }
    if (!want_left && held_left) { gm82_native_key_up(37); held_left = 0; }
    if (want_right && !held_right) { gm82_native_key_down(39); held_right = 1; }
    if (!want_right && held_right) { gm82_native_key_up(39); held_right = 0; }
    if (want_jump && !held_jump) {
        gm82_native_key_down(32);
        gm82_native_key_down(38);
        held_jump = 1;
    }
    if (!want_jump && held_jump) {
        gm82_native_key_up(32);
        gm82_native_key_up(38);
        held_jump = 0;
    }
    (void)y;
}
'''

JAVA_TOUCH = r'''
    // Multi-touch virtual pad: left third = move, right third = jump/action
    private final android.util.SparseArray<Integer> pointerKeys = new android.util.SparseArray<>();

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        int action = event.getActionMasked();
        int index = event.getActionIndex();
        int sw = getWidth() > 0 ? getWidth() : 640;
        int sh = getHeight() > 0 ? getHeight() : 480;

        switch (action) {
            case MotionEvent.ACTION_DOWN:
            case MotionEvent.ACTION_POINTER_DOWN: {
                int id = event.getPointerId(index);
                float x = event.getX(index);
                float y = event.getY(index);
                int vk = zoneToVk(x, y, sw, sh);
                if (vk != 0) {
                    pointerKeys.put(id, vk);
                    fireKeyDown(vk);
                }
                // also pass raw for mouse.x/y if needed
                Gm82Native.nativeTouch((int)x, (int)y, 0);
                break;
            }
            case MotionEvent.ACTION_MOVE: {
                for (int i = 0; i < event.getPointerCount(); i++) {
                    int id = event.getPointerId(i);
                    float x = event.getX(i);
                    float y = event.getY(i);
                    int vkNew = zoneToVk(x, y, sw, sh);
                    Integer vkOld = pointerKeys.get(id);
                    if (vkOld != null && vkOld != 0 && vkOld != vkNew) {
                        fireKeyUp(vkOld);
                        pointerKeys.remove(id);
                    }
                    if (vkNew != 0 && (vkOld == null || vkOld != vkNew)) {
                        pointerKeys.put(id, vkNew);
                        fireKeyDown(vkNew);
                    }
                    Gm82Native.nativeTouch((int)x, (int)y, 2);
                }
                break;
            }
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP:
            case MotionEvent.ACTION_CANCEL: {
                int id = event.getPointerId(index);
                Integer vk = pointerKeys.get(id);
                if (vk != null && vk != 0) fireKeyUp(vk);
                pointerKeys.remove(id);
                if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL) {
                    // release all
                    for (int i = 0; i < pointerKeys.size(); i++) {
                        Integer v = pointerKeys.valueAt(i);
                        if (v != null && v != 0) fireKeyUp(v);
                    }
                    pointerKeys.clear();
                }
                Gm82Native.nativeTouch((int)event.getX(index), (int)event.getY(index), 1);
                break;
            }
            default:
                break;
        }
        return true;
    }

    /** 1=left 2=right 3=jump */
    private int zoneToVk(float x, float y, int sw, int sh) {
        if (y < sh * 0.40f) return 0; // upper screen: no pad
        if (x < sw * 0.20f) return Gm82Native.VK_LEFT;
        if (x < sw * 0.40f) return Gm82Native.VK_RIGHT;
        if (x > sw * 0.60f) return 3; // jump marker
        return 0;
    }

    private void fireKeyDown(int code) {
        if (code == 3) {
            Gm82Native.nativeKeyDown(Gm82Native.VK_SPACE);
            Gm82Native.nativeKeyDown(Gm82Native.VK_UP);
        } else if (code > 0) {
            Gm82Native.nativeKeyDown(code);
        }
    }

    private void fireKeyUp(int code) {
        if (code == 3) {
            Gm82Native.nativeKeyUp(Gm82Native.VK_SPACE);
            Gm82Native.nativeKeyUp(Gm82Native.VK_UP);
        } else if (code > 0) {
            Gm82Native.nativeKeyUp(code);
        }
    }
'''

def patch_c():
    p = ROOT / "app/src/main/cpp/src/gm82_jni_java_bridge.c"
    if not p.exists():
        print("jni missing"); return
    t = p.read_text()
    if "Virtual on-screen pad" in t:
        print("c touch ok"); return
    import re
    t2, n = re.subn(
        r"void gm82_native_touch\(int x, int y, int action\)\s*\{[^}]*\}",
        TOUCH_C.strip(),
        t,
        count=1,
        flags=re.S,
    )
    if n != 1:
        # fallback: replace simple version
        old = """void gm82_native_touch(int x, int y, int action) {
    (void)x; (void)y;
    if (action == 0) {
        gm82_native_key_down(32);
    } else if (action == 1) {
        gm82_native_key_up(32);
    }
}"""
        if old in t:
            t2 = t.replace(old, TOUCH_C.strip(), 1)
            n = 1
        else:
            print("c touch needle fail"); return
    p.write_text(t2)
    print("c touch patched")

def patch_java():
    p = ROOT / "app/src/main/java/com/normaker/gm82/Gm82SurfaceView.java"
    if not p.exists():
        print("java missing"); return
    t = p.read_text()
    if "zoneToVk" in t:
        print("java ok"); return
    # replace onTouchEvent method through mapKeyToVk start
    start = t.find("    @Override\n    public boolean onTouchEvent(MotionEvent event)")
    if start < 0:
        start = t.find("public boolean onTouchEvent(MotionEvent event)")
    end = t.find("    @Override\n    public boolean onKeyDown", start)
    if start < 0 or end < 0:
        print("java bounds fail", start, end); return
    t = t[:start] + JAVA_TOUCH + "\n\n    " + t[end:]
    # expand key map
    if "KEYCODE_A" not in t:
        t = t.replace(
            "case KeyEvent.KEYCODE_SPACE: return Gm82Native.VK_SPACE;",
            "case KeyEvent.KEYCODE_SPACE: return Gm82Native.VK_SPACE;\n"
            "            case KeyEvent.KEYCODE_A: return Gm82Native.VK_SPACE;\n"
            "            case KeyEvent.KEYCODE_Z: return Gm82Native.VK_SPACE;\n"
            "            case KeyEvent.KEYCODE_W: return Gm82Native.VK_UP;\n"
            "            case KeyEvent.KEYCODE_S: return Gm82Native.VK_DOWN;\n"
            "            case KeyEvent.KEYCODE_D: return Gm82Native.VK_RIGHT;\n"
            "            case KeyEvent.KEYCODE_BUTTON_A: return Gm82Native.VK_SPACE;",
            1,
        )
    p.write_text(t)
    print("java touch patched")

if __name__ == "__main__":
    patch_c()
    patch_java()
    print("APPLY_MARIO_TOUCH_CONTROLS_DONE")
