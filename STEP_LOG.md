# STEP_LOG

## 2026-10-13 — event order + xprevious + scaled AABB
- gm82_runtime.h/c, gm82_events.h/c, gm82_gml_eval.c
- STATUS/GAPS بدون نسب مزيفة

## 2026-10-16 — sprite origins + origin-aware bbox + periodic audit
- gm82_sprite_decode.h/c, gm82_gml_builtins.h/c, gm82_gml_eval.c, test_full_suite.c
- Integrated xoffset/yoffset into frame and sprite group structures.
- Implemented sprite_xoffset, sprite_yoffset, sprite_get_xoffset, sprite_get_yoffset.
- Fixed bbox_left, bbox_right, bbox_top, bbox_bottom calculation to account for sprite origin and scale.
- Verified test_full_suite, test_guard, test_all_games_inlined.js, test_100_percent.js, run_full_verification.py (100% PASS).
- Updated DAILY_AUDIT_REPORT.md, GAPS_HONEST.md, and STATUS.md with honest 38.00% weighted parity metric.
