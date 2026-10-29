# GAPS_HONEST — NOR Maker / GM82 Honest Gap Audit

## Scope Status: HOST_MVP (Honest Engineering)
Not "every GMK = 100% Windows". Measurable verification weights.

### Implemented & Passing on Main
- **Resource Parsing & Decoding:** Header, zlib, resource lists, sprites (RGBA), backgrounds, fonts, sounds, paths, timelines, objects, rooms, tiles.
- **Runtime & Execution:** Event order sequence (Create/Step/Draw/Alarm), mid-frame instance creation/destruction pools, depth sorting.
- **Physics & Collision:** Gravity, jump, friction, solid platform landing, precise bitmask mask collision, boundary-safe `gml_place_meeting` and `gml_collision_ellipse`.
- **GML / DnD VM:** Math, strings, ds_grid, ds_list, ds_map, ds_stack, ds_queue, ds_priority, buffers, surfaces, particles, mp_grid, alarms, actions (`action_if_dice`, `action_if_empty`, `action_if_collision`, `action_if_variable`).
- **Tri-Mirror Sync:** Identical C core source trees across `app/src/main/cpp`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`, and `app/src/main/cpp_backup`.
- **Audit Verification:** All 5 audit suites fully passing (`daily_audit_runner.py`, `run_full_verification.py`, `run_engine_suite.py`, `run_host_pipeline.sh`, native C `make test`).
- **Android Host Build:** `./gradlew assembleDebug` BUILD SUCCESSFUL across 4 ABIs (`arm64-v8a`, `armeabi-v7a`, `x86`, `x86_64`).

### Open Host Enhancements
- Broader `with()` / `other` scoping edge-cases in complex nested scripts.
- Advanced surface pixel manipulation filters.
- Additional 3D / DLL extension GML stubs.

### Physical Device Hardware Limitations (BLOCKED)
- Steps 4.3, 7.3, and 7.5 (physical device OpenSL/AAudio hardware audio playback, physical touch controls, and logcat video capture on an attached physical Android device) remain **BLOCKED** as no physical device is connected to this headless CI environment.
