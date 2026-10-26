# REA runtime notes for NOR Maker (from source/reverse-engineering)

Date: 2026-10-26  
Source: static inventory + GameMaker/anvil/gm82save decompile sample (120 fns/binary)

## What the sample actually shows

### Function mix (GameMaker.exe index)
- ~120 exported decompiles total
- ~58 external/thunk (KERNEL32/USER32/...)
- ~62 internal `FUN_*` with **no original Delphi names**
- Keyword scan of internal bodies for `instance|room|sprite|surface|step|event|sound|collision`: **0 hits** in the current sample
- Largest internals behave like **Delphi RTL allocator / exception paths** (e.g. `FUN_00402e10`), not game tick logic

**Implication:** the current REA dump does **not** yet yield a porting recipe for the event loop. Expanding Tier1+string-xref (Manus task) is required before REA can drive O2/O5 code changes.

## PE import evidence (actionable)

### GameMaker.exe (IDE-heavy)
- Graphics: `gdi32`, `gdiplus`, `msimg32`
- Audio: `winmm.dll`
- Save: `gm82save.dll`
- Net/crypto: `wininet`, `libeay32`, `Crypt32`

### anvil.exe / gm82* tools (runner-like)
- Graphics: `d3d8.dll`, `ddraw.dll` (+ gdi32)
- Audio: `winmm.dll`
- Net: `wsock32.dll`

**Implication for NOR (Android):**
1. Model **runner** behavior (anvil-like), not full IDE (GameMaker.exe UI).
2. Keep **GLES soft/texture path** we already have; do not invent a GDI+ port.
3. Audio parity target remains **device callback + PCM** (O3), analogous to winmm output stage — our `gm82_audio_mixer` + `nativePollAudioCommand` are the right seam.
4. Save/load: prefer correlating with open `source/unpacked/gm82save-main` + existing `gml_game_save/load`, not DLL reverse alone.

## What we already match in Nr.mk.02 (do not regress)
| Windows-side clue | NOR side |
|-------------------|----------|
| Separate runner vs IDE | APK runner + native loop |
| winmm sound stage | mixer + Java poll commands |
| instance/room data in project files | GMK decode + materialize + `goto_room` |
| depth draw order | runtime depth sort before draw |

## What REA does **not** unlock yet
- Exact Begin Step → Step → End → Draw sequence from named functions (not in sample)
- Safe instance-delete algorithm from labeled decompile (use our deferred queue; validate on device)
- Full surface FBO semantics from D3D8 decompile sample (still O4)

## Next REA work that would change code
1. Full function list + Tier1 decompile (size ≥ 64) for **anvil.exe** first (runner).
2. String-xref pass for event/room/instance.
3. Only then write algorithms into `docs/REA_RUNTIME_NOTES.md` and implement in `gm82_*.c`.

Until (1–2), prioritize **device FAIL logs** over more FUN_* files.
