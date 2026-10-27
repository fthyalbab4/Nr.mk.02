#!/usr/bin/env python3
"""Fix Game Runner sendKey for Mario: no iframe-only early return; all pad keys."""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
INDEX = ROOT / "app/src/main/assets/www/index.html"


def main():
    if not INDEX.exists():
        print("index.html missing")
        return
    t = INDEX.read_text(encoding="utf-8", errors="replace")
    n = 0

    old1 = (
        "const sendKey = (key, type) => {\n"
        "    const iwin = iframeRef.current?.contentWindow;\n"
        "    if (!iwin) return;\n"
        "    const isDown = type === \"keydown\";"
    )
    # actual file uses normal double quotes
    old1 = (
        "const sendKey = (key, type) => {\n"
        "    const iwin = iframeRef.current?.contentWindow;\n"
        "    if (!iwin) return;\n"
        '    const isDown = type === "keydown";'
    )
    new1 = (
        "const sendKey = (key, type) => {\n"
        "    /* MARIO_FIX: parent may host Input */\n"
        "    const iwin = (iframeRef.current && iframeRef.current.contentWindow) "
        "? iframeRef.current.contentWindow : null;\n"
        '    const isDown = type === "keydown";'
    )
    if "MARIO_FIX: parent may host Input" not in t:
        if old1 in t:
            t = t.replace(old1, new1, 1)
            n += 1
            print("fixed early return")
        else:
            print("early return needle missing")
    else:
        print("early return ok")

    old2 = '    if (typeof iwin.syncKeyboardToPlayers === "function") {'
    new2 = (
        "    /* MARIO_FIX: sync parent + iframe Input */\n"
        "    try {\n"
        "      const _tgts = [];\n"
        "      if (typeof window !== \"undefined\") _tgts.push(window);\n"
        "      if (iwin) _tgts.push(iwin);\n"
        "      for (const w of _tgts) {\n"
        "        if (!w) continue;\n"
        "        try {\n"
        "          if (typeof w.syncKeyboardToPlayers === \"function\") {\n"
        "            w.syncKeyboardToPlayers(keyCode || code || key, isDown);\n"
        "            if (code) w.syncKeyboardToPlayers(code, isDown);\n"
        "          }\n"
        "          if (w.Input && typeof w.Input.syncKey === \"function\") {\n"
        "            w.Input.syncKey(keyCode || code || key, isDown);\n"
        "            if (code) w.Input.syncKey(code, isDown);\n"
        "            if (keyCode) w.Input.syncKey(keyCode, isDown);\n"
        "          }\n"
        "          if (w.P1_Input && typeof w.P1_Input.syncKey === \"function\") {\n"
        "            w.P1_Input.syncKey(keyCode || code || key, isDown);\n"
        "            if (code) w.P1_Input.syncKey(code, isDown);\n"
        "          }\n"
        "        } catch (_e) {}\n"
        "      }\n"
        "    } catch (_e2) {}\n"
        '    if (iwin && typeof iwin.syncKeyboardToPlayers === "function") {'
    )
    # fix escaped quotes in new2 - write cleanly
    new2 = """    /* MARIO_FIX: sync parent + iframe Input */
    try {
      const _tgts = [];
      if (typeof window !== "undefined") _tgts.push(window);
      if (iwin) _tgts.push(iwin);
      for (const w of _tgts) {
        if (!w) continue;
        try {
          if (typeof w.syncKeyboardToPlayers === "function") {
            w.syncKeyboardToPlayers(keyCode || code || key, isDown);
            if (code) w.syncKeyboardToPlayers(code, isDown);
          }
          if (w.Input && typeof w.Input.syncKey === "function") {
            w.Input.syncKey(keyCode || code || key, isDown);
            if (code) w.Input.syncKey(code, isDown);
            if (keyCode) w.Input.syncKey(keyCode, isDown);
          }
          if (w.P1_Input && typeof w.P1_Input.syncKey === "function") {
            w.P1_Input.syncKey(keyCode || code || key, isDown);
            if (code) w.P1_Input.syncKey(code, isDown);
          }
        } catch (_e) {}
      }
    } catch (_e2) {}
    if (iwin && typeof iwin.syncKeyboardToPlayers === "function") {"""

    if "MARIO_FIX: sync parent + iframe Input" not in t:
        if old2 in t:
            t = t.replace(old2, new2, 1)
            n += 1
            print("injected parent sync")
        else:
            print("sync needle missing")
    else:
        print("parent sync ok")

    old3 = (
        '    const primaryKey = arr.length > 0 ? arr[0] : null;\n'
        '    if (primaryKey !== null) sendKey(primaryKey, "keydown");\n'
        "  };\n\n  const handleBtnUp"
    )
    new3 = (
        '    arr.forEach(function(k){ try { sendKey(k, "keydown"); } catch(e){} });\n'
        "  };\n\n  const handleBtnUp"
    )
    if 'arr.forEach(function(k){ try { sendKey(k, "keydown")' not in t:
        if old3 in t:
            t = t.replace(old3, new3, 1)
            n += 1
            print("btnDown all keys")
        else:
            print("btnDown needle missing")
    else:
        print("btnDown ok")

    old4 = (
        '    const primaryKey = arr.length > 0 ? arr[0] : null;\n'
        '    if (primaryKey !== null) sendKey(primaryKey, "keyup");\n'
        "  };"
    )
    new4 = (
        '    arr.forEach(function(k){ try { sendKey(k, "keyup"); } catch(e){} });\n'
        "  };"
    )
    if 'arr.forEach(function(k){ try { sendKey(k, "keyup")' not in t:
        if old4 in t:
            t = t.replace(old4, new4, 1)
            n += 1
            print("btnUp all keys")
        else:
            print("btnUp needle missing")
    else:
        print("btnUp ok")

    if n:
        INDEX.write_text(t, encoding="utf-8")
    print("APPLY_MARIO_SENDKEY_FIX done", n)


if __name__ == "__main__":
    main()
