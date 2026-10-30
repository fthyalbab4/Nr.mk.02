# STATUS — Event System + GML Progress (2026-10-30)

## Verified Test Suites Execution
- Comprehensive Verification (`run_full_verification.py`): PASS
- Engine Test Suite (`tools/run_engine_suite.py`): PASS
- Host Pipeline (`tools/run_host_pipeline.sh`): PASS
- C Core Unit Tests (`make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX test`): PASS

## Done (measured by passing code & test suite verification)
- [x] Fixed `gm82_events.c` behavior prefix search (`b->object_name_prefix`) and removed static duplicate signature for `gm82_instance_matches_object`
- [x] Fixed `gm82_runtime.c` pixel mask collision lookup via `gm82_frames_collide_pixel`
- [x] Added missing `gm82_runtime_draw` and `gm82_runtime_event_user` implementations to `app/src/main/cpp/src/gm82_runtime.c`
- [x] Fixed infinite parent index traversal in `fire_object_events` for instances with `parent_index == object_index`
- [x] Prevented duplicate Create event execution using `create_fired` flag on instances
- [x] Collision events set GML `other` (`gm82_gml_set_other`)
- [x] Alarm dispatch unified via `gm82_events_fire_alarm` (parent walk + scripts)
- [x] Key Press / Key Release events wired (`gm82_events_fire_keypress_all` / `_keyrelease_all`)
- [x] Outside Room + Boundary + Animation End (Other subtypes) fire functions
- [x] User events helper (`gm82_events_fire_user`)
- [x] Expanded `gm82_events.h` with Other subtype enums
- [x] Runtime step order: BeginStep → Alarm → Keyboard/Press/Release → Mouse → Step → Motion/Collision → EndStep → Outside/Boundary/AnimEnd → Destroy flush
- [x] Mirror sync verified across `app/src/main/cpp`, `app/src/main/cpp_backup`, and `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`

## Still open / not claimed complete
- Instance Creation Code from Room (data path may exist, not fully verified)
- Destroy queue vs Destroy event ordering needs more tests
- Pre-Draw / Post-Draw call sites from render path (functions exist)
- Full Action Lists expansion
- Precise pixel collision always-on
- Physical Android device verification
- 100% parity — **not claimed**

## Honesty
Overall event/GML layer improved from previous baseline but still partial.
Host pipeline remains the strongest area (see GAPS_HONEST.md).
