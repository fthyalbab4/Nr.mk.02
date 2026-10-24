# GAPS_HONEST — Daily Audit Status

## Closed on host (phases 0+3+4 + string/DnD pass 2026-10-23)
- Gap-fill patches apply path
- Movement host inject **removed**; samples still 4/4 with keyboard only
- Save/load multi-instance format (patch)
- Full GM82Core extension port (clean-room C math, 3D geometry, Perlin noise, HRT timer, string tokens, hex, power_next, resource indexing, keyboard_string)
- Tri-mirror C native source tree synchronization verified (`app/src/main/cpp/src/gm82_actions.c` synchronized with `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_actions.c`)
- Fixed `action_bounce` and `action_wrap` handling in native C engine core and eliminated recursive `action_next_room` spawn loops in `gm82_actions_fire_create`
- Verified `test_full_suite` host test binary (6/6 test suites PASS)
- **String-returning VM path**: `gm82_gml_last_string` / `gm82_gml_set_last_string` / `gm82_gml_last_was_string`; string_* producers write last-string buffer; `string_repeat` added
- **DnD arg tables**: `gm82_action_ref` now stores full `args[8]` + `argc` (+ optional str_args); scan harvests up to 8 ints; `execute_ref` prefers arg table for sprite/create/alarm/motion; expanded named action set

## Open Gaps
1. **Device APK playtest**: Needs physical Android hardware test logcat verification.
2. **Cloud/GMK FAIL → named symbol**: Fallback reporting for unmapped symbols in raw GMK files.
3. **Full string-returning VM**: Partial — last-string buffer + common string_* producers exist; still not full expression-typed string VM (concat in all contexts, with-string scopes).
4. **Full DnD binary arg tables**: Partial — struct + harvest + several execute paths use args[]; not every GM8 action id signature is mapped.

## Measured Engine Parity
- **Host Verified Parity**: do not invent a new %. Re-run host suite after device FAIL logs.
- **Remaining Gap**: device + FAIL-driven symbols + remaining string/DnD edge cases.

No fake 100%.
