# PORT_LOG — keep-review → main (2026-10-18)

**No branches deleted.** Complete existing code; no full-branch merges.

## Ported to main
### tools
- `tools/run_engine_suite.py` ← feature/sync-external-repos-gm82-*

### tests
- `app/src/main/cpp/tests/test_4_game_smoke.c`
- `app/src/main/cpp/tests/test_paths_particles_mpgrid.c` (paths smoke)

## Core runtime/events/gml/android
Symbol audit: top keep-review branch had **0 gml_* functions missing** vs current main.
Main already contains ROOM_BOUNDS, origin collision, events fire_*, actions, str_args, ds_grid region APIs, place_meeting helpers.

**Not** blindly merged: jules-147943…, ds-grid-region, architecture refactors (would reintroduce drift).

## Still optional to port as files (local tree had them; push if needed)
- `test_mario_physics_parity.c`
- `test_gml_gm82_core_expanded.c`
(require full native link lines / may need gm82_loader)

## Next
1. Spot-check discard branches then delete.
2. Port individual missing **symbols** only if a game FAIL names them.
