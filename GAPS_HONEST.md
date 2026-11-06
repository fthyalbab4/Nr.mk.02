# GAPS_HONEST — verified status

## Verified / landed on host
- Host implementations for ds_bag_*, bigchoose family, event helpers, date/moon, registry/mouse no-ops, dss_* aliases in `gm82_batch4_extras.c`.
- Linker wrap intercepts try_stub for batch4 names.
- **AST executor loop_depth restored** (2026-11-05): `break`/`continue` outside any loop fail; loops pass `loop_depth+1`. Closes PR #322 regression. Tri-mirror synced.
- Bytecode path: loop_compile_context + GM82_BC_REPEAT_BREAK already present.
- `test_gml_parser.c` covers in-loop break/continue (AST + bytecode) and switch-case execution.
- Tri-mirror full synchronization confirmed (`python3 tools/verify_core_mirrors.py` PASS).
- Baseline gate PASS: 27 C engine tests PASS, 13 Python reference & security contract tests PASS, 4 GMK sample games verified on host pipeline.
- Android APK build verified: `./gradlew assembleDebug` successfully generates `app/build/outputs/apk/debug/app-debug.apk` (17MB) containing `libgm82_android.so` for arm64-v8a, armeabi-v7a, x86, x86_64.

## Remaining host (rare / non-blocking for MVP)
These are intentional no-ops until larger subsystems exist:
- `draw_*_extra` / `draw_spotlight` / `draw_setb` / `draw_setf` — need real GL draw path
- `ds_list_filter` / `ds_list_foreach` / `ds_list_map` — need GML callback / script execution

They are already intercepted by the wrap and return 0; games that never call them are unaffected.

## Device only (cannot close in CI/sandbox)
See `docs/DEVICE_BLOCKED.md`:
- **U2** physical device playtest + logcat
- **U3** physical device native SO load + touch/hardware keyDown bridge
- **U5** physical device OpenSLES audio output

## Delivery gate
```
host_p0: true
ast_break_continue: fixed
residual_host_stubs: 10 (GL/callback only)
apk_build_verified: true
device_playtest_verified: false (DEVICE_BLOCKED)
is_100: false
claim_100_percent_allowed: false
```
