# STATUS — 2026-10-17 continue

## Host verified (this session)
- Sprite origin heuristic: mario **23/47** frames non-zero origin
- place_meeting: scale + origin AABB + pixel mask when bitmasks exist
- Solid collision: phase snapshot + origin boxes
- sprite_get_xoffset / yoffset
- ASSEMBLE event/AABB: **PASS**
- Compile: sprite_decode, builtins, runtime, eval OK

## After git pull (required)
```bash
git fetch --depth=80 origin
python3 tools/gap_fill_20261013/restore_builtins_h.py
python3 tools/gap_fill_20261013/patch_origin_decode.py
bash tools/gap_fill_20261013/ASSEMBLE.sh
```

If header still stub/empty, restore from commit `02d7da5`.

Weighted parity still ~37%. Android physical: **UNVERIFIED**.
