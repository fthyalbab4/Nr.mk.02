# Full treasure audit & conflict solutions (2026-11-14)

## Policy
- No bulk merge of dirty Jules PRs
- Extract only unique, compile-safe deltas
- Tri-mirror parity required
- is_100: false · G13 NOT_RUN · G14 DEVICE_BLOCKED

## Already extracted to main
| Source | Treasure | Status |
|--------|----------|--------|
| #415/#412 | static batch4_draw_* stubs + H0 | ON MAIN (tri-mirror) |
| #410 | test_gmk8 path candidates | Already on main |
| host phases | match_*, sparse 2d, precise collision, gates | ON MAIN |

## Ready extract (recipe in PR405_DS_MANY_EXTRACT.md)
| Source | Treasure | Blocker |
|--------|----------|--------|
| #405 | Real `gml_ds_grid_set_many` + `gml_ds_priority_add_many` | Large builtins.c (~223KB) — apply via local patch or next API push |
| #415 | `gm82_native_step_dt` + 90/120/144 FPS test | Need public wrapper over existing `gm82_runtime_step_dt` |

## Explicitly NOT merged (dirty / critical)
| PR | Reason |
|----|--------|
| #393/#394/#396 | bytecode / eval / with-scoping critical |
| #405 whole | mixes image_index type change + bytecode loop ctx |
| #378 whole | huge surface; gmk8 parser largely already present |
| #411 REA install | not host runtime |
| #406–#415 whole trees | mergeable_state dirty |

## Scripts audit
| Script | Verdict |
|--------|---------|
| tools/verify_core_mirrors.py | OK — canonical app/src/main/cpp |
| tools/progressive_pr_integrate.sh | OK — aborts on conflict; no ours/theirs |
| Makefile gates | OK — host acceptance |
| windows-build.yml | Separate from PR merge path |

## Conflict resolution rules (repeatable)
1. KEEP main for gm82_gml_bytecode.c, gm82_gml_eval.c/.h, test_event_order.c
2. Extract single-function/body only when symbols/types already match main
3. Prefer static rename over weak attrs for linkage
4. After every extract: verify_core_mirrors.py + make gates

## Next actions
1. Apply PR405_DS_MANY_EXTRACT.md on tri-mirror builtins + remove batch4 zero-arg stubs
2. Export gm82_native_step_dt thin wrapper + high-FPS test
3. Close superseded dirty PRs with comment pointing to this log
