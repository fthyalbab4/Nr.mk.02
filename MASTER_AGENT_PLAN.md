# MASTER_AGENT_PLAN

**آخر تحديث:** 2026-11-04 (batch4 landed)

## P0 + host gaps — مكتمل على main

## batch4 (2026-11-04) — LANDED
- `gm82_batch4_extras.c`: real host impls (ds_bag_*, bigchoose_*, event_*, date, dss_*)
- linker `--wrap=gm82_gm82core_try_stub` for 0-arg intercept
- `tools/apply_eval_batch4.py`: inserts eval dispatch for multi-arg functions
- main `gm82_gml_builtins.c` includes cpp_backup (no PLACEHOLDER)
- remaining pure stubs: 10 (draw_*_extra + ds_list_filter/foreach/map)

## المتبقي جهاز فقط
انظر `docs/DEVICE_BLOCKED.md` (U2/U3/U5)

**host_p0: true**
**remaining host stubs: 10**
