# Runner continue (honest)

## Done this step
- Sprite frame origin fields in header
- place_meeting / bbox / solid collision: scale + origin (origin values still 0 until GMK decode fills them)
- Phase snapshot for collision instance list
- Host ASSEMBLE tests PASS

## Next runner work
1. Decode sprite origin from GMK into origin_x/y
2. Wire place_meeting to precise mask when bitmask present
3. Full event table decode (Create/Step/Collision from GMK)
4. Device APK verification

Weighted parity remains ~37% per STATUS — no fake 100%.
