#!/usr/bin/env python3
"""Fix Game Runner touch: sendKey works without iframe + all keys on btn down/up."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/assets/www/index.html"

def main():
    if not p.exists():
        print("index.html missing"); return
    t = p.read_text(encoding="utf-8", errors="replace")
    changed = 0

    old_early = """const sendKey = (key, type) => {
    const iwin = iframeRef.current?.contentWindow;
    if (!iwin) return;
    const isDown = type === \"keydown\";"""
    # file may use normal quotes
    old_early = '''const sendKey = (key, type) => {
    const iwin = iframeRef.current?.contentWindow;
    if (!iwin) return;
    const isDown = type === "keydown";'''

    new_early = '''const sendKey = (key, type) => {
    /* MARIO_FIX: parent window may host Input — never bail only because iframe missing */
    const iwin = (iframeRef.current && iframeRef.current.contentWindow) ? iframeRef.current.contentWindow : null;
    const isDown = type === "keydown";'''

    if "MARIO_FIX: parent window may host Input" not in t:
        if old_early in t:
            t = t.replace(old_early, new_early, 1)
            changed += 1
            print("sendKey early return fixed")
        else:
            print("sendKey early needle missing")
    else:
        print("sendKey early ok")

    # After key resolve, inject parent Input sync before iframe-only block
    needle = '''    if (typeof iwin.syncKeyboardToPlayers === "function") {'''
    inject = '''    /* MARIO_FIX: always sync parent Input/P1 */
    try {
      const targets = [];
      if (typeof window !== "undefined") targets.push(window);
      if (iwin) targets.push(iwin);
      for (const w of targets) {
        if (!w) continue;
        if (typeof w.syncKeyboardToPlayers === "function") {
          try { w.syncKeyboardToPlayers(keyCode || code || key, isDown); if (code) w.syncKeyboardToPlayers(code, isDown); } catch (e) {}
        }
        if (w.Input && typeof w.Input.syncKey === "function") {
          try { w.Input.syncKey(keyCode || code || key, isDown); if (code) w.Input.syncKey(code, isDown); if (keyCode) w.Input.syncKey(keyCode, isDown); } catch (e) {}
        }
        if (w.P1_Input && typeof w.P1_Input.syncKey === "function") {
          try { w.P1_Input.syncKey(keyCode || code || key, isDown); if (code) w.P1_Input.syncKey(code, isDown); } catch (e) {}
        }
      }
    } catch (e) {}
    if (iwin && typeof iwin.syncKeyboardToPlayers === "function") {'''

    if "MARIO_FIX: always sync parent Input" not in t:
        if needle in t:
            t = t.replace(needle, inject, 1)
            changed += 1
            print("parent Input sync injected")
        else:
            print("syncKeyboard needle missing")
    else:
        print("parent sync ok")

    # Guard iframe dispatch when iwin null
    old_disp = '''    try {
      const event = new KeyboardEvent(type, {
        key: String(key),
        code: code || String(key),
        keyCode: keyCode || 0,
        which: keyCode || 0,
        bubbles: true,
        cancelable: true,
        view: iwin
      });'''
    new_disp = '''    try {
      if (!iwin) {
        /* dispatch on parent document so same-window runners still get events */
        const eventP = new KeyboardEvent(type, {
          key: String(key), code: code || String(key), keyCode: keyCode || 0, which: keyCode || 0,
          bubbles: true, cancelable: true, view: window
        });
        try { window.dispatchEvent(eventP); document.dispatchEvent(eventP); } catch (e) {}
      } else {
      const event = new KeyboardEvent(type, {
        key: String(key),
        code: code || String(key),
        keyCode: keyCode || 0,
        which: keyCode || 0,
        bubbles: true,
        cancelable: true,
        view: iwin
      });'''
    if "if (!iwin) {" not in t[t.find("const sendKey"):t.find("const handleBtnDown")]:
        if old_disp in t:
            t = t.replace(old_disp, new_disp, 1)
            # close extra brace before end of sendKey try - fragile; also fix closing
            # find end of canvas dispatch block
            marker = "if (canvas) canvas.dispatchEvent(event);\n      }\n    } catch (e) {}\n  };"
            if marker in t:
                t = t.replace(marker, "if (canvas) canvas.dispatchEvent(event);\n      }\n      }\n    } catch (e) {}\n  };", 1)
            changed += 1
            print("dispatch parent fallback")
        else:
            print("dispatch needle missing")

    old_down = '''    const primaryKey = arr.length > 0 ? arr[0] : null;
    if (primaryKey !== null) sendKey(primaryKey, "keydown");
  };

  const handleBtnUp'''
    new_down = '''    arr.forEach((k) => { try { sendKey(k, "keydown"); } catch (e) {} });
  };

  const handleBtnUp'''
    if "arr.forEach((k) => { try { sendKey(k, \"keydown\")" not in t and "arr.forEach((k) => { try { sendKey(k, "keydown")" not in t:
        if old_down in t:
            t = t.replace(old_down, new_down, 1)
            changed += 1
            print("handleBtnDown all keys")
        else:
            print("handleBtnDown needle missing")
    else:
        print("handleBtnDown ok")

    old_up = '''    const primaryKey = arr.length > 0 ? arr[0] : null;
    if (primaryKey !== null) sendKey(primaryKey, "keyup");
  };'''
    new_up = '''    arr.forEach((k) => { try { sendKey(k, "keyup"); } catch (e) {} });
  };'''
    if "arr.forEach((k) => { try { sendKey(k, "keyup")" not in t:
        if old_up in t:
            t = t.replace(old_up, new_up, 1)
            changed += 1
            print("handleBtnUp all keys")
        else:
            print("handleBtnUp needle missing")
    else:
        print("handleBtnUp ok")

    if changed:
        p.write_text(t, encoding="utf-8")
    print("APPLY_MARIO_SENDKEY_FIX changed", changed)

if __name__ == "__main__":
    main()
