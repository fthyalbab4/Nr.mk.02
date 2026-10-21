# STEP_LOG

## 2026-10-13 — event order + xprevious + scaled AABB
- gm82_runtime.h/c, gm82_events.h/c, gm82_gml_eval.c
- STATUS/GAPS بدون نسب مزيفة

## 2026-10-24 — scaled bitmask overlap + gml builtins expansion
- Added gm82_bitmask_check_overlap_scaled to support scaled sprite origin pixel mask collision.
- Added missing GML builtins: gml_string_format, gml_colour_get_red/green/blue, gml_make_colour_rgb.
- Re-verified all test suites (run_full_verification.py, test_all_games_inlined.js, run_host_pipeline.sh, C make test).

## 2026-10-25 — GM 8.2 reverse engineering alignment & core refactoring
- Core Event Loop alignment in `gm82_runtime.c` & `gm82_events.c`: Begin Step -> Alarms -> Inputs -> Step -> Motion -> Collisions -> End Step -> Pre-Draw -> Background/Tiles/Draw -> Post-Draw/GUI.
- GML VM & AST Runner argument alignment: bound `arg0`..`15` and `argument0`..`15` across AST and VM evaluators.
- Sprite & Surface rendering: origin/bounding box offset math precision and memory cleanups during room transitions.
- Full dual-path source synchronization between `app/src/main/cpp/` and `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/`.
- Verified 100% test pass on host test suite (`test_full_suite`), `run_full_verification.py`, `test_all_games_inlined.js`, and `test_100_percent.js`.
