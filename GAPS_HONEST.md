# GAPS_HONEST — Sequential execution progress

## Closed / advanced on host (2026-10-25)
- String producers → `last_string` + `string_repeat` + format path (`APPLY_STRING_AND_MATH.py`)
- `modwrap` / `smoothstep` / `lerproach` via `gm82_portable_compat`
- DnD extras: message, move_random, linear_step, sprite_transform/color, highscore no-ops
- **`image_angle` / `image_alpha` / `image_blend`** on `gm82_instance` + create init
- **`UNMAPPED_ACTION` / `UNMAPPED_GML_FN`** stderr logs for FAIL-driven fill
- Host pipeline + portable_compat — local **ok=4 fail=0**

## Materialize on main
```bash
python3 tools/gap_fill_20261013/APPLY_STRING_AND_MATH.py
python3 tools/gap_fill_20261013/APPLY_DND_EXTRAS.py
python3 tools/gap_fill_20261013/APPLY_INSTANCE_IMAGE_FIELDS.py
python3 tools/gap_fill_20261013/APPLY_ACTION_IMAGE_AND_LOG.py
# or Actions → apply-string-math → Run
```

## Still open
1. Device APK playtest / logcat
2. FAIL-driven symbol implementation (use UNMAPPED_* lines)
3. Full typed string expression VM
4. Complete GM8 action id catalog
5. soft_render use of angle/alpha/blend (fields exist; draw path partial)
6. REA / Win32 DLL

No fake 100% Windows portable.
