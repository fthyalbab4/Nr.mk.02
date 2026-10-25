# Honest comparison: Nr.mk.02 vs MahmoudMMorsy repos (2026-10-25)

**Claim rejected:** Jules “100% parity with Windows portable”.

## Repos

| Repo | Role |
|------|------|
| `fthyalbab4/Nr.mk.02` | Active modular Android C core (primary) |
| `MahmoudMMorsy/NM.Maker.0..1.0` | Archive + extracted base + docs + APKs + `source/*.zip` GM82 packages |
| `MahmoudMMorsy/Nor-maker-8.2` | Slimmer flat `app/src/main/cpp` (builtins ~8KB, assets stub) |

## Structure

| Area | Nr.mk.02 | NM.Maker.0..1.0 | Nor-maker-8.2 |
|------|----------|----------------|---------------|
| Layout | Modular `cpp/src` + `include` (~40 modules) | Monolith `gm82_android_core.c` (~365KB) under extracted base | Flat few `.c` files |
| Builtins surface | Large `gm82_gml_builtins.c` (~132KB) | Inside monolith + docs claim 1080 names (many **fallback**) | Small `gm82_native_call` (~8KB) |
| Actions / DnD | `gm82_actions.c` with str_args, draw/path, alive-safe fire | Claimed in docs; not same modular file | Minimal via native_call |
| String VM | `gm82_gml_string_vm.c` + eval API | Not as separate module | string ops inside native_call |
| GML frontend/VM | `gml_frontend.c` + `gml_vm.h` + `cpp/gml_vm.c` | `gml_vm.c` ~30KB in extracted base | `gml_vm.c` ~36KB |
| GMK reader | Modular reader + resource walk | Reader + probe tests in extracted | Tiny reader (~1.7KB) |
| Portable helpers | **ported** `gm82_portable_compat` | Original `gm82_portable_compat.c` | Absent |
| Host tests | `run_host_pipeline` + many tests | `test_full_suite` narrative in AGENT_STATE | Small suite (probe + few builtins) |
| Windows portable | Not binary-decompiled REA result | Folder `game maker` + zips; REA still **roadmap** in GAPS | Marketing README |

## What their own docs say (not Jules PR titles)

- `GAPS_HONEST.md`: Win32/DLL **stubs**; device tests needed; REA still planned.
- `GM82_PARITY_MATRIX.md`: GML VM **partial**; runtime smoke only; GMK events **incomplete**.
- Phase 8: “No False 100% Claim” while summary text still says 100% suite pass.

**100% host suite ≠ 100% Windows portable.**

## Unique complete code worth copying (done / skipped)

| Item | Source | Action |
|------|--------|--------|
| `gm82_portable_compat` (token split, color reverse/inverse, dllcheck stub) | NM extracted | **Copied** into Nr.mk.02 |
| `gml_modwrap` / `smoothstep` / `lerproach` | NM claims / pure math | **Added** thin implementations in same file |
| Entire `gm82_android_core.c` | NM | **Not copied** — would replace modular core; architecture mismatch |
| N8 tiny builtins | Nor-maker-8.2 | **Not copied** — subset of what Nr already has |
| `simulate_yyd` / project sim | NM monolith | **Deferred** — needs careful extraction + tests, not bulk paste |

## Verdict

- **Nr.mk.02** is the more complete **modular** runner for continued work.
- **NM** is useful as **reference archive** + one small portable_compat module + honest gap docs.
- **Nor-maker-8.2** is a **smaller** snapshot; not a full portable parity engine.

No percentage of “Windows match” is assigned.
