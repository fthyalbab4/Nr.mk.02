# Windows NorMaker — full inventory (verified 2026-11-09)

Reviewed: local artifacts + all fthyalbab4 repos + Nr.mk.02 full tree.

## Primary path: `desktop/windows/` on Nr.mk.02
- NorMakerNativePC.exe / NorMakerStudio.exe (checked-in)
- main.c, nor_studio.c, win_audio.c
- portable_compat: fnames, Lib/*.lib, extensions (data only; no DLL runtime load)
- binary_audit.json: Portable PE static audit (x86)
- CI: windows-build.yml (MinGW + Wine)

## Engine
- `gm82_actions_parse_gmk8` PASS on mario: 16 objects, 51 actions, 31 code blocks
- Host gates green; is_100: false

## Gaps
DnD action *execution* completeness, physical Windows QA, WebView2 embed follow-up.
