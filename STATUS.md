# STATUS — Event System + GML Progress (2026-10-29)

## Done (code on main / this push)
- [x] Event order, Alarm, other, KeyPress/Release
- [x] Outside / Boundary / Animation End / User
- [x] Instance Creation Code: struct + runtime wire + **decoder extracts string**
- [x] runtime_draw Pre → Draw → Post
- [x] Destroy queue after End Step
- [x] Bitmask precise collision API present (`gm82_mask.c`)

## Still open
- Wire bitmask into every collision path when masks exist for both sprites (partial/optional)
- Expand Action Lists further
- Device playtest
- 100% — **not claimed**

## Honesty
Decoder now populates `creation_code` when length-prefixed GML follows instance records.
