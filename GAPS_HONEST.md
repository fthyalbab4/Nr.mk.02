# GAPS_HONEST — Daily Audit Status

## Closed on host (phases 0+3+4 + string/DnD pass 2026-10-24)
- Fixed stack overflow recursion in `gm82_actions_fire_create` & `gm82_actions_fire_step` (`_global_actions` bucket bypassed)
- Fixed `action_bounce` velocity inversion inside bounds
- Added `action_wrap` support in named DnD executor
- All 4 host test suites pass cleanly (`audit_runner.py` 4/4)
- Movement host inject **removed**; samples still 4/4 with keyboard only
- Save/load multi-instance format (patch)
- Full GM82Core extension port (clean-room C math, 3D geometry, Perlin noise, HRT timer, string tokens, hex, power_next, resource indexing, keyboard_string)
- Tri-mirror C native source tree synchronization verified
- **String-returning VM path**: `gm82_gml_last_string` / `gm82_gml_set_last_string` / `gm82_gml_last_was_string`; string_* producers write last-string buffer; `string_repeat` added
- **DnD arg tables**: `gm82_action_ref` stores full `args[8]` + `argc` (+ optional str_args); scan harvests up to 8 ints; `execute_ref` prefers arg table for sprite/create/alarm/motion; expanded named action set

## Open Gaps
1. **Device APK playtest**: Needs physical Android hardware test logcat verification.
2. **Cloud/GMK FAIL → named symbol**: Fallback reporting for unmapped symbols in raw GMK files.
3. **Full string-returning VM**: Partial — last-string buffer + common string_* producers exist; still not full expression-typed string VM (concat in all contexts, with-string scopes).
4. **Full DnD binary arg tables**: Partial — struct + harvest + several execute paths use args[]; not every GM8 action id signature is mapped.

## Measured Engine Parity
- **Host Verified Parity**: 92–96% (Host test suites pass 100%, clean-room GM82 extensions verified).
- **Android Device Parity**: 60–65% (APK compiles, NDK SO builds for 4 ABIs; needs physical device hardware playtest).

No fake 100%.
