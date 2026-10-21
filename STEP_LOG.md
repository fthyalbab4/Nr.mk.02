# STEP_LOG

## 2026-10-13 — event order + xprevious + scaled AABB
- gm82_runtime.h/c, gm82_events.h/c, gm82_gml_eval.c
- STATUS/GAPS بدون نسب مزيفة

## 2026-10-24 — scaled bitmask overlap + gml builtins expansion
- Added gm82_bitmask_check_overlap_scaled to support scaled sprite origin pixel mask collision.
- Added missing GML builtins: gml_string_format, gml_colour_get_red/green/blue, gml_make_colour_rgb.
- Re-verified all test suites (run_full_verification.py, test_all_games_inlined.js, run_host_pipeline.sh, C make test).
