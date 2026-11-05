# GAPS_HONEST — verified status

## Verified / landed
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for batch4 names.
- **AST executor loop_depth restored** (2026-11-05): `break`/`continue` outside any loop now correctly fail; while/do-until/repeat/for pass `loop_depth+1`. Regression from PR #322 simplification closed. Tri-mirror synced (cpp / package / backup).
- Bytecode path already had proper loop_compile_context + GM82_BC_REPEAT_BREAK.

## Remaining host (rare / residual)
- draw_*_extra / draw_spotlight / draw_setb / draw_setf (need real GL path)
- ds_list_filter / foreach / map (need GML callback / script execution support)

## Device only
See docs/DEVICE_BLOCKED.md (U2 playtest, U3 native load, U5 OpenSLES).

## Delivery gate
`host_p0: true`
`is_100: false` (device items open)
`ast_break_continue: fixed`
