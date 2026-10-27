#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
WWW = ROOT / "app/src/main/assets/www"
INDEX = WWW / "index.html"
CSS = WWW / "runner-landscape-nes.css"

def main():
    if not INDEX.exists():
        print("no index"); return
    t = INDEX.read_text(encoding="utf-8", errors="ignore")
    if "runner-landscape-nes.css" not in t:
        t = t.replace("</head>", '<link rel="stylesheet" href="runner-landscape-nes.css" />\n</head>', 1)
    t = t.replace(
        'className: "flex flex-col w-full h-full bg-[#0d0f14] text-white select-none overflow-hidden touch-none justify-between"',
        'className: "nm-nes-runner flex flex-row w-full h-full bg-black text-white select-none overflow-hidden touch-none"',
        1,
    )
    if "nm-nes-chassis" not in t:
        t = t.replace("max-w-[480px] mx-auto p-2 sm:p-3", "max-w-none w-full h-full p-0 nm-nes-chassis", 1)
    if "nm-nes-screen-wrap" not in t:
        t = t.replace("max-h-[58vh] rounded-2xl border-4", "max-h-none nm-nes-screen-wrap rounded-none border-0", 1)
    if "nm-nes-controls" not in t:
        t = t.replace(
            'className: "w-full shrink-0 flex items-center justify-between gap-1 pt-2 pb-1 select-none touch-none"',
            'className: "nm-nes-controls w-full shrink-0 flex items-center justify-between gap-3 px-2 py-2 select-none touch-none bg-[#0a0a0c]"',
            1,
        )
    INDEX.write_text(t, encoding="utf-8")
    print("APPLY_LANDSCAPE_NES_UI_DONE")

if __name__ == "__main__":
    main()
