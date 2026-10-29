# STATUS — Event System + GML Progress (2026-10-29)

## Done (code present on main)
- [x] Restored `gm82_events.c` from PLACEHOLDER
- [x] Collision sets GML `other`
- [x] Alarm unified via `gm82_events_fire_alarm`
- [x] Key Press / Key Release events
- [x] Outside / Boundary / Animation End
- [x] User events helper + `gm82_runtime_event_user`
- [x] Expanded Other subtype enums in header
- [x] runtime_step order closer to GM 8.x
- [x] Instance Creation Code path: `gm82_decoded_instance.creation_code` + run after Create in `goto_room`
- [x] `gm82_runtime_draw` calls Pre-Draw → Draw → Post-Draw
- [x] Destroy queue: mid-frame queue, flush after End Step (with Destroy event)

## Still open
- Decoder must populate `creation_code` from GMK (struct+runtime ready; parser fill TBD)
- Broader Action Lists
- Precise collision always-on when mask present
- Physical Android device verification
- 100% parity — **not claimed**

## Honesty
Event/GML layer materially improved. Host pipeline still strongest. No 100% claim.
