#!/usr/bin/env python3
"""Restore Game Runner layout after landscape CSS caused black screen."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
WWW = ROOT / "app/src/main/assets/www"
INDEX = WWW / "index.html"
CSS = WWW / "runner-landscape-nes.css"

SAFE_CSS = """/* SAFE: no layout !important that collapses the game surface. */
.nm-nes-runner .nm-nes-ab-accent {
  box-shadow: 0 0 12px rgba(60, 180, 255, 0.35);
}
"""

REPLS = [
(
 'className: "nm-nes-runner flex flex-row w-full h-full bg-black text-white select-none overflow-hidden touch-none"',
 'className: "flex flex-col w-full h-full bg-[#0d0f14] text-white select-none overflow-hidden touch-none justify-between"'
),
(
 'className: `w-full flex-1 min-h-[180px] max-h-none nm-nes-screen-wrap rounded-none border-0 ${currentTheme.bezelBorder} ${currentTheme.bezelBg} p-2 flex flex-col items-center justify-between shadow-[inset_0_4px_12px_rgba(0,0,0,0.8)] relative overflow-hidden`',
 'className: `w-full flex-1 min-h-[180px] max-h-[58vh] rounded-2xl border-4 ${currentTheme.bezelBorder} ${currentTheme.bezelBg} p-2 flex flex-col items-center justify-between shadow-[inset_0_4px_12px_rgba(0,0,0,0.8)] relative overflow-hidden`'
),
(
 'className: "nm-nes-controls w-full shrink-0 flex items-center justify-between gap-3 px-2 py-2 select-none touch-none bg-[#0a0a0c]"',
 'className: "w-full shrink-0 flex items-center justify-between gap-1 pt-2 pb-1 select-none touch-none"'
),
(
 'className: "nm-nes-controls w-full shrink-0 flex items-center justify-between gap-3 px-2 py-2 select-none touch-none bg-transparent"',
 'className: "w-full shrink-0 flex items-center justify-between gap-1 pt-2 pb-1 select-none touch-none"'
),
]

def main():
    CSS.write_text(SAFE_CSS, encoding="utf-8")
    if not INDEX.exists():
        print("no index"); return
    t = INDEX.read_text(encoding="utf-8", errors="ignore")
    n = 0
    if "nm-nes-chassis" in t:
        t2 = t.replace("max-w-none w-full h-full p-0 nm-nes-chassis", "max-w-[480px] mx-auto p-2 sm:p-3", 1)
        if t2 != t:
            t = t2; n += 1
    for a, b in REPLS:
        if a in t:
            t = t.replace(a, b, 1); n += 1
    INDEX.write_text(t, encoding="utf-8")
    print("APPLY_FIX_RUNNER_BLACK_SCREEN", n)

if __name__ == "__main__":
    main()
