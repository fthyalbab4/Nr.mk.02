# GAPS_HONEST

## Verified / landed (batch4)
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for 0-arg batch4 names.
- Eval multi-arg dispatch: run `python3 tools/apply_eval_batch4.py` once on a checkout.
- Main builtins no longer PLACEHOLDER (includes cpp_backup).

## Remaining host (rare)
- draw_*_extra / draw_spotlight / draw_setb / draw_setf
- ds_list_filter / foreach / map (need GML callback support)

## Device only
See docs/DEVICE_BLOCKED.md (U2 playtest, U3 native load, U5 OpenSLES).

## Delivery gate
`host_p0: true`
`is_100: false` (device items open)
