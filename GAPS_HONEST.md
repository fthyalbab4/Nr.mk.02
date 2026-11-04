# GAPS_HONEST

## Verified / landed (batch4 final — HOST P0 CLOSED)
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for batch4 names.
- Eval path supports multi-arg host functions.
- Residual host stubs: 10 only (draw_*_extra family + ds_list_filter/foreach/map).

## Remaining host (rare / non-MVP blocking)
- draw_*_extra / draw_spotlight / draw_setb / draw_setf → need real GL path
- ds_list_filter / foreach / map → need GML callback / script execution support

## Device only
See docs/DEVICE_BLOCKED.md (U2 playtest, U3 native load, U5 OpenSLES).

## Delivery gate
`host_p0: true`
`is_100: false` (device items open)
