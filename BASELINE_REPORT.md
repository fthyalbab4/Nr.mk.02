# Baseline Report — main host (2026-11-09)

> Not a Portable certificate. `is_100: false`.

## Mirrors: PASS
- `app/src/main/cpp` (canonical: 108 files)
- `app/src/main/cpp_backup` (108 files strictly identical)
- `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX` (108 files strictly identical)

## Host verification suite: PASS
- `run_full_verification.py`: 17/17 tests passing (100% host)
- `tools/run_engine_suite.py`: 46/46 engine tests passing
- `tools/run_host_pipeline.sh`: 4/4 sample games executing (mario, plataformas, shooter, zelda)
- `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX` `make test` & `make gates`: ALL PASS
- `tools/daily_audit_runner.py`: PASS across all 5 verification pillars

## Host behavioral contracts PASS
- `with` / `self` / `other` / `all` / `noone` scoping & nesting
- Arrays: 1D + limited 2D (`array_create_2d`, compound assignments, sparse access)
- `match_*` functions API (`match_exact`, `match_any`, `match_not_exact`, `match_not_any`, `match_some`)
- Event lifecycle order (room_start, Create, Begin Step, Alarm, Step, Collision, End Step, Pre-Draw, Draw, Post-Draw / Draw GUI, Destroy)
- Collision: AABB, scaled/oriented bounding boxes, precise bitmask & synthetic `place_meeting_precise`
- Import: GMK v800/v810 header parsing, structured object action walk (`test_gmk8_action_parse`)
- Draw/Input/Sound host queues: edge detection (pressed/released), framebuffer render, sound FIFO queue

## External / Device Gaps (Explicitly Blocked / Not Claimed)
- G13 Portable Parity: `NOT_RUN` (No Windows Portable GM8.2 binary execution environment or golden image hashes available)
- G14 Android Device Parity: `DEVICE_BLOCKED` (OpenSLES native audio hardware driver and physical WebView touch JNI require on-device playtesting)
- Rotated pixel-precise collision: Not fully verified against reference bitmasks
- Overall compatibility claims: Honest metrics only; `claim_100_percent_allowed: false`
