# Sequential execution log — 2026-10-25

## Step 1 — String VM producers (code + script)
- All `str_mask |= 1; *out = 0` string producers → `gm82_gml_set_last_string`
- `string_format` writes last-string buffer
- `string_repeat` added
- Materialize on primary tree: `python3 tools/gap_fill_20261013/APPLY_STRING_AND_MATH.py` or Actions **apply-string-math**

## Step 2 — Portable math in eval
- `modwrap`, `smoothstep`, `lerproach` dispatch (via `gm82_portable_compat`)

## Step 3 — DnD expansion (on main via actions push)
- `action_message` / `action_show_message`
- `action_set_cursor`, `action_fullscreen` (no-op safe)
- `action_sprite_transform` (xscale/yscale only — no image_angle field yet)
- `action_sprite_color` (no-op until alpha field exists)
- `action_move_random`, `action_linear_step`
- `action_highscore_*` no-op

## Step 4 — Host pipeline
- Linked `gm82_portable_compat.c`
- Local verify: **SUMMARY ok=4 fail=0**

## Still open (not claimed done)
- Device APK playtest
- Full typed string expression VM
- Every GM8 action id
- REA / Win32 DLL
