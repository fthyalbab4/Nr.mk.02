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

## REA & Portable GM8.2 Audit (2026-10-26)
- Analyzed GM8.2 portable source packages and reverse engineering decompiles using `rea-agents` tools.
- Fixed `gml_keyboard_check_pressed` and `gml_keyboard_check_released` handling for `vk_nokey` (`0.0`) in `gm82_input.c`.
- Restored missing `gm82_runtime_cleanup` and `gm82_runtime_step_dt` symbols in `gm82_runtime.c` to maintain ABI compatibility across tests and JNI bridge.
- Fixed `gm82_runtime_step_dt` speed change reset logic and `gm82_runtime_init` `step_room_speed` initialization.
- Verified 3-way synchronization across C engine mirrors (`app/src/main/cpp/`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/`, and `app/src/main/cpp_backup/`).

## Next
1. Spot-check discard branches then delete.
2. Port individual missing **symbols** only if a game FAIL names them.
