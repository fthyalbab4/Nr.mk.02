# source/ mirror → Nr.mk.02 gap map (2026-10-26)

## What was added
`source/` is a **GM82 open-source extension mirror** + limited REA/Ghidra static analysis of portable binaries.

- `source/*.zip` — original archives
- `source/unpacked/*` — unpacked projects
- `source/reverse-engineering/` — PE fingerprints + partial decompiles (not full GameMaker.exe source)

## What this is NOT
- **Not** the full Windows `GameMaker.exe` / runner source.
- **gm82core** is a QoL **extension** (helpers, timing, ds accelerators), required by other GM82 extensions — not a drop-in replacement for our Android runtime.
- REA decompiles are **partial**; correlation to full behavior needs more signatures/call-graphs (see `source/reverse-engineering/README.md`).

## High-value modules vs our open gaps

| Module | Path | Useful for | Our gap |
|--------|------|------------|--------|
| gm82core instances | `unpacked/gm82core-main/.../instances.gml` | create_moving, depth_moving helpers, instance QoL | O5 builtins if FAIL shows names |
| gm82core data_structures | `.../data_structures.gml` | ds_list/map accelerators API shape | O5 if games use dslist/etc |
| gm82core strings/math | `strings.gml`, `math.gml` | string_better, geometry helpers | O5 |
| gm82core C | `gm82core.c`, `terrible_gm8_hacking.c` | timing/hacks reference | careful clean-room only |
| gm82audio | `unpacked/gm82audio-main/` + cute_sound/minimp3 | real decode path design | **O3** audible audio |
| gm82snd | `unpacked/gm82snd-main/` | classic sound extension patterns | O3 |
| gm82path | `unpacked/gm82path-main/` | path follow semantics | motion/path parity |
| gm82room | `unpacked/gm82room-main/` | room editor (IDE), **not** runtime room load | low for runner |
| gm82save | `unpacked/gm82save-main/` | save format helpers | save/load edge cases |
| gm82buf | `unpacked/gm82buf-main/` | buffer/memory packs | asset packs |
| REA decompiles | `reverse-engineering/decompiles/GameMaker/` | tick/instance hypotheses | O2/O6 algorithm notes only |

## Port policy (must follow)
1. Prefer **behavior notes** → implement in our modular C (`gm82_*.c`), do not paste entire extension into APK.
2. Only port a symbol after it appears in a **FAIL log** or blocks a named checklist game.
3. GML extension scripts that call Windows-only APIs stay out of Android runtime.
4. Audio: use gm82audio **ideas** (mixer, decode pipeline); wire to OpenSL/AAudio on device — do not assume cute_sound builds on Android as-is.

## Suggested next ports (ordered)
1. **O5 from FAIL** — match missing names against `gm82core` `.gml` first.
2. **O3 design** — read `gm82audio` + our `gm82_audio_mixer.c`; plan PCM decode + device callback.
3. **O2** — use RE notes + our materialize path; do not expect GameMaker.exe decompile to replace GMK reader.
4. Skip gm82room/ui/nsis/hub for runtime parity unless a FAIL explicitly needs them.

## Linked acceptance
Still blocked on device APK logs for 95% checklist (`docs/ACCEPTANCE_SCORE_*.md`).
This mirror improves **how** we close O2–O5; it does not by itself mark them CLOSED.
