# PR Treasure Map — full review without bulk merge (2026-11-14)

## Policy
- `main` is authoritative
- Extract unique compile-safe deltas only
- Never bulk-merge dirty Jules PRs
- Critical keep-main: `gm82_gml_bytecode.c`, `gm82_gml_eval.c/.h`, event-order tests

## Open PRs (36) — classification

### EXTRACTED / already on main
| PR | Treasure | Status |
|----|----------|--------|
| #415/#412 | static batch4_draw_* + H0 | ON MAIN |
| #415 | `gm82_native_step_dt` public + 90/120/144 FPS test | ON MAIN |
| #405 | real `ds_grid_set_many` / `ds_priority_add_many` | Script: `tools/apply_pr405_ds_many.py` |
| host phases | match_*, sparse 2d, precise collision | ON MAIN |
| #410 | test path candidates | ON MAIN |

### HIGH VALUE — extract next (manual / script)
| PR | Treasure | Risk |
|----|----------|------|
| #378 | `gml_external_define/call/free` (DLL/SO bridge) | Medium — isolate to new .c only |
| #394 | nested with/self/other context | HIGH — touches bytecode/eval |
| #393 | runtime semantics harden | HIGH — critical files |
| #364 | DnD / core builtins gaps | Medium — diff vs main first |
| #361 | events + match parity | Likely partial overlap |

### LOW VALUE / DUPLICATE audit noise (do not merge)
#414 #413 #411 #406 #396 #392 #391 #390 #389 #388 #387 #386 #384 #383 #381 #380 #377 #376 #375 #373 #372 #371 #370 #367 #365 #358 #356

Most are tri-mirror sync / daily audit / STATUS.md churn replaying older trees over current main.

### Conflict resolution rules
1. KEEP main on bytecode/eval/parser critical paths
2. Prefer static rename over weak attrs for linkage
3. One function / one test at a time
4. After extract: `verify_core_mirrors.py` + host gates
5. Close duplicate PRs with pointer to this map

## Honest status
```
is_100: false
G13: NOT_RUN
G14: DEVICE_BLOCKED
open_prs: 36
bulk_merge: forbidden
```
