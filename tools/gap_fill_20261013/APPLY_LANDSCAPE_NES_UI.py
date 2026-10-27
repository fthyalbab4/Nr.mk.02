#!/usr/bin/env python3
"""Patch Game Runner ONLY — never the IDE / app shell.

Only the container that owns `ref: containerRef` and the known runner
className string is tagged with nm-nes-runner. All CSS is scoped under
.nm-nes-runner so the rest of NOR Maker is untouched.
"""
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
INDEX = ROOT / "app/src/main/assets/www/index.html"

# Unique runner root marker (must stay unique to Game Runner component)
OLD_ROOT = (
    'className: "flex flex-col w-full h-full bg-[#0d0f14] text-white '
    'select-none overflow-hidden touch-none justify-between"'
)
NEW_ROOT = (
    'className: "nm-nes-runner flex flex-row w-full h-full bg-black '
    'text-white select-none overflow-hidden touch-none"'
)

# Only apply chassis/screen/controls patches in the SAME function body
# as containerRef (avoid matching other UI).

def _patch_near_container_ref(t: str) -> str:
    marker = 'ref: containerRef'
    i = t.find(marker)
    if i < 0:
        print("containerRef not found — skip structural patches")
        return t
    # limit window to this component (~25k chars after marker is enough)
    window_end = min(len(t), i + 25000)
    head, body, tail = t[:i], t[i:window_end], t[window_end:]

    if "nm-nes-runner" not in body:
        if OLD_ROOT in body:
            body = body.replace(OLD_ROOT, NEW_ROOT, 1)
            print("root -> nm-nes-runner")
        elif NEW_ROOT in body or "nm-nes-runner" in body:
            print("root already patched")
        else:
            print("WARN: runner root className not found near containerRef")

    if "nm-nes-chassis" not in body and "max-w-[480px] mx-auto p-2 sm:p-3" in body:
        body = body.replace(
            "max-w-[480px] mx-auto p-2 sm:p-3",
            "max-w-none w-full h-full p-0 nm-nes-chassis",
            1,
        )
        print("chassis scoped")

    if "nm-nes-screen-wrap" not in body and "max-h-[58vh] rounded-2xl border-4" in body:
        body = body.replace(
            "max-h-[58vh] rounded-2xl border-4",
            "max-h-none nm-nes-screen-wrap rounded-none border-0",
            1,
        )
        print("screen scoped")

    old_ctrl = (
        'className: "w-full shrink-0 flex items-center justify-between '
        'gap-1 pt-2 pb-1 select-none touch-none"'
    )
    new_ctrl = (
        'className: "nm-nes-controls w-full shrink-0 flex items-center '
        'justify-between gap-3 px-2 py-2 select-none touch-none bg-transparent"'
    )
    if "nm-nes-controls" not in body and old_ctrl in body:
        body = body.replace(old_ctrl, new_ctrl, 1)
        print("controls scoped")

    return head + body + tail


def main():
    if not INDEX.exists():
        print("no index")
        return
    t = INDEX.read_text(encoding="utf-8", errors="ignore")

    # CSS link once (global file is safe — all rules under .nm-nes-runner)
    if "runner-landscape-nes.css" not in t:
        t = t.replace(
            "</head>",
            '<link rel="stylesheet" href="runner-landscape-nes.css" />\n</head>',
            1,
        )
        print("css linked")

    t = _patch_near_container_ref(t)
    INDEX.write_text(t, encoding="utf-8")
    print("APPLY_LANDSCAPE_NES_UI_DONE (runner-only)")


if __name__ == "__main__":
    main()
