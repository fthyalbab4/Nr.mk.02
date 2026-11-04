# GAPS_HONEST

## Verified / landed (batch4 final)
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for all batch4 names (0-arg and simple).
- Main `gm82_gml_eval.c` restored (was PLACEHOLDER).
- STUBS table in cpp_backup shrunk to 10 residual items.

## Remaining host (rare)
- draw_*_extra / draw_spotlight / draw_setb / draw_setf (need real GL path)
- ds_list_filter / foreach / map (need GML callback / script execution support)

## Device only
See docs/DEVICE_BLOCKED.md (U2 playtest, U3 native load, U5 OpenSLES).

## Delivery gate
`host_p0: true`
`is_100: false` (device items open)
