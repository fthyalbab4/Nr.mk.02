# STATUS — Event System + GML Progress (2026-10-29)

## Done this session (measured by code presence)
- [x] Restored `gm82_events.c` from PLACEHOLDER
- [x] Collision events set GML `other` (`gm82_gml_set_other`)
- [x] Alarm dispatch unified via `gm82_events_fire_alarm` (parent walk + scripts)
- [x] Key Press / Key Release events wired (`gm82_events_fire_keypress_all` / `_keyrelease_all`)
- [x] Outside Room + Boundary + Animation End (Other subtypes) fire functions
- [x] User events helper (`gm82_events_fire_user`)
- [x] Expanded `gm82_events.h` with Other subtype enums
- [x] Runtime step order: BeginStep → Alarm → Keyboard/Press/Release → Mouse → Step → Motion/Collision → EndStep → Outside/Boundary/AnimEnd → Destroy flush
- [x] Mirror intent for NOR_MAKER_COMPLETE_PACKAGE

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
