# GAPS_HONEST — verified status

## Verified / landed on host
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for batch4 names.
- **AST executor loop_depth restored** (2026-11-05): `break`/`continue` outside any loop fail; loops pass `loop_depth+1`. Closes PR #322 regression. Tri-mirror synced.
- Bytecode path: loop_compile_context + GM82_BC_REPEAT_BREAK already present.
- `test_gml_parser.c` covers in-loop break/continue (AST + bytecode) and rejects bare `break;` outside loop.
- **DS-list callbacks are real host implementations** (2026-11-06): `ds_list_filter`, `ds_list_foreach`, and `ds_list_map` snapshot list values, invoke a loaded numeric script index with `argument0` (value) and `argument1` (index), and return a new list/count as appropriate. Invalid script indices fail with `-1` without mutating the source list.
- Callback scripts support numeric `return` expressions and statement-only side effects through the existing evaluator. Closures/method values and arbitrary non-numeric callback values remain outside this numeric host API.

## Remaining host (rare / non-blocking for MVP)
These are intentional no-ops until larger subsystems exist:
- `draw_*_extra` / `draw_spotlight` / `draw_setb` / `draw_setf` — need real GL draw path.

They are intercepted by the wrap and return 0; games that never call them are unaffected.

## Device only (cannot close in CI/sandbox)
See `docs/DEVICE_BLOCKED.md`:
- **U2** playtest + logcat
- **U3** native SO load + keyDown bridge
- **U5** OpenSLES audio

## Delivery gate
```
host_p0: true
ast_break_continue: fixed
ds_list_callbacks: verified
residual_host_stubs: 7 (GL-only)
is_100: false
claim_100_percent_allowed: false
```
