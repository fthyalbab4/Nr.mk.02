#!/usr/bin/env python3
"""Apply user-approved landscape emu skin tags (safe, no black screen)."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
INDEX = ROOT / "app/src/main/assets/www/index.html"

def main():
    if not INDEX.exists():
        print("no index"); return
    t = INDEX.read_text(encoding="utf-8", errors="ignore")
    n = 0
    if "runner-emu-ref.css" not in t:
        t = t.replace("</head>", '<link rel="stylesheet" href="runner-emu-ref.css" />\n</head>', 1)
        n += 1
    pairs = [
        ('className: "flex flex-col w-full h-full bg-[#0d0f14] text-white select-none overflow-hidden touch-none justify-between"',
         'className: "nm-emu-ref flex flex-col w-full h-full bg-[#0d0f14] text-white select-none overflow-hidden touch-none justify-between"'),
        ('className: `flex-1 flex flex-col items-center justify-between w-full max-w-[480px] mx-auto p-2 sm:p-3 ${currentTheme.bodyBg} border-x-4 border-b-4 ${currentTheme.bodyBorder} shadow-[inset_0_2px_4px_rgba(255,255,255,0.3),0_10px_30px_rgba(0,0,0,0.8)] overflow-hidden select-none`',
         'className: `nm-emu-chassis flex-1 flex flex-col items-center justify-between w-full max-w-[480px] mx-auto p-2 sm:p-3 ${currentTheme.bodyBg} border-x-4 border-b-4 ${currentTheme.bodyBorder} shadow-[inset_0_2px_4px_rgba(255,255,255,0.3),0_10px_30px_rgba(0,0,0,0.8)] overflow-hidden select-none`'),
        ('className: `w-full flex-1 min-h-[180px] max-h-[58vh] rounded-2xl border-4 ${currentTheme.bezelBorder} ${currentTheme.bezelBg} p-2 flex flex-col items-center justify-between shadow-[inset_0_4px_12px_rgba(0,0,0,0.8)] relative overflow-hidden`',
         'className: `nm-emu-screen w-full flex-1 min-h-[180px] max-h-[58vh] rounded-2xl border-4 ${currentTheme.bezelBorder} ${currentTheme.bezelBg} p-2 flex flex-col items-center justify-between shadow-[inset_0_4px_12px_rgba(0,0,0,0.8)] relative overflow-hidden`'),
    ]
    for a, b in pairs:
        if a in t and b.split()[0] not in t:  # crude
            t = t.replace(a, b, 1); n += 1
        elif a in t and "nm-emu-" not in a:
            # already may have nm-emu on left of className
            pass
        if a in t:
            t = t.replace(a, b, 1); n += 1
    # controls via marker
    if "nm-emu-controls" not in t:
        marker = "CONTROLS DECK (PERMANENTLY PINNED AT BOTTOM"
        i = t.find(marker)
        old = 'className: "w-full shrink-0 flex items-center justify-between gap-1 pt-2 pb-1 select-none touch-none"'
        new = 'className: "nm-emu-controls w-full shrink-0 flex items-center justify-between gap-1 pt-2 pb-1 select-none touch-none"'
        if i > 0:
            j = t.find(old, i)
            if j > 0:
                t = t[:j] + new + t[j+len(old):]; n += 1
    INDEX.write_text(t, encoding="utf-8")
    print("APPLY_EMU_REF_SKIN", n)

if __name__ == "__main__":
    main()
