# Windows NorMaker assets — inventory (2026-11-08)

Scope: **your** Windows / host materials only.

## Found
- Engine core C (tri-mirror)
- `gm82_portable_compat` (your helpers)
- `nor-maker-standalone.exe` — NOR Maker 8.2 UI shell (~9MB); not a native DLL runner set
- GMK samples
- Host gates PASS

## Not found
- Separate `.dll` modules for native Windows runner
- Clean extractable DLL payload from standalone exe
- Dedicated WinMain editor tree

## Direction
Native **host_win_runner** on existing GM82 core: load GMK → step → soft-draw metrics. Windows-ready flags in core. `is_100: false`.
