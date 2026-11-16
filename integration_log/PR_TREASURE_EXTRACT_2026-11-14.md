# PR treasure extract (2026-11-14)

Policy: **no bulk merge**. Only unique, non-destructive deltas.

## Extracted onto main

### From PR #415 (+ linkage intent of #412/#413/#414)
- `gm82_batch4_extras.c` (tri-mirror):
  - draw residual stubs as **`static batch4_draw_*`** (not global `gml_draw_*`)
  - H0 registrations for:
    - draw_background_tiled_extra
    - draw_sprite_part_extra / tiled_extra / part_centered
    - draw_spotlight
    - draw_setb / draw_setf
- **Why:** avoids NDK duplicate-symbol link failures without weak-attribute portability issues.

### Already on main (no re-apply)
- PR #410 path fallbacks for `test_gmk8_action_parse` — already present (candidate path list).
- Host gates / sparse 2D / match_* / event order — prior host work.

## Explicitly NOT merged (dirty / critical / incomplete)
| PR | Why skipped |
|----|-------------|
| #415 whole | dirty; FPS test references `gm82_native_step_dt` not exported on main |
| #412 whole | dirty; weak attrs superseded by static approach |
| #413/#414 | dirty; docs/audit noise + batch4 overlap |
| #393/#394/#396/#405/#406 | dirty; critical core files |
| #411 REA install | not host runtime value |

## Honest status
```
is_100: false
G13: NOT_RUN
G14: DEVICE_BLOCKED
```

Next useful extracts if still unique after this:
1. Export thin `gm82_native_step_dt` wrapper + high-FPS host test (from #415 idea, implemented cleanly on main).
2. Any single builtin from #405 with a failing test first.
