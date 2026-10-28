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

## 2026-10-26 — C core tri-tree synchronization & compiler warning elimination
- Synchronized C Engine Core files across `app/src/main/cpp/`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/`, and `app/src/main/cpp_backup/`.
- Cleaned up compiler warnings (`-Wall` 0 warnings): fixed unused static helper declarations in `gm82_gmk_reader.c` and `gm82_gmk_resource_walk.c`, formatting in `gm82_gml_eval.c`, buffer sizing in `gm82_text_reader.c`, and header copying in `gm82_native_bridge.c`.
- Re-verified all test suites: `test_full_suite` (0 warnings), `run_full_verification.py` (16/16 PASS), `run_engine_suite.py` (10/10 PASS), `test_all_games_inlined.js` (100% PASS), and `test_100_percent.js` (100% PASS).

## 2026-10-27 — GML core builtins expansion & tri-tree mirror alignment
- Implemented C engine GML built-ins: `gml_draw_clear_alpha` (clear drawing surface with RGBA color and alpha) and `gml_ds_grid_value_sum` (ds_grid region sum).
- Expanded GML VM strcmp evaluation dispatch in `gm82_gml_eval.c` for 11 functions: `draw_clear_alpha`, `ds_grid_value_sum`, `move_wrap2`, `sound_stop_all`, `string_starts_with_ext`, `string_ends_with_ext`, `color_to_html`, `file_rename`, `directory_rename`, `url_open`, and `window_has_focus`.
- Header prototype synchronization in `gm82_gml_builtins.h` eliminating all implicit declaration compiler warnings.
- Comprehensive unit test assertions in `test_gml_comprehensive.c` for all new GML functions.
- 3-way synchronization across `app/src/main/cpp/`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/`, and `app/src/main/cpp_backup/` verified via `mirror_checker.py`.
- Verified 100% pass across all 6 test targets: Native Engine Suite (18 tests), Python Verification (17 tests), Host Pipeline (4/4 games), C Package Makefile, JS Runner (39 scripts/78 actions), and Android APK Debug build (`./gradlew assembleDebug` SUCCESS for 4 ABIs).
