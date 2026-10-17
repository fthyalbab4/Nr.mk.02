# PORT_LOG — keep-review → main (2026-10-18)

**Rule:** complete existing engine; do not replace whole core. **No branches deleted.**

## Method
1. keep-review branches (ahead of main + three-dot code under cpp/java/tools).
2. Listed **added** files missing on main tip.
3. Compared `gml_*` symbols on top keep branch vs main → **0 missing functions** (main already has offsets, ds_grid region, place_meeting helpers, etc.).

## Theme: tools
| Source | File | Action |
|--------|------|--------|
| feature/sync-external-repos-gm82-15609141469483167260 | `tools/run_engine_suite.py` | **ported** |

## Theme: tests
| Source | File | Action |
|--------|------|--------|
| feature/sync-external-repos-gm82-* | `tests/test_4_game_smoke.c` | **ported** |
| same | `tests/test_mario_physics_parity.c` | **ported** |
| same | `tests/test_paths_particles_mpgrid.c` | **ported** |
| feat/gm82-core-refactor / builtins-bbox | `tests/test_gml_gm82_core_expanded.c` | **ported** |

## Theme: runtime / events / gml / android
- No unique **new** core source files beyond main.
- Branch diffs on runtime/events/gml/MainActivity largely already on main or merge noise; **no blind full-branch merge**.

## Not done
- Full merge of keep-review branches
- Branch deletion

## Follow-up
Name a missing runtime symbol to port that symbol only from a branch tip.
