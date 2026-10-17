# STATUS

## Runner 2026-10-17
- Origin heuristic: mario 23/47 frames non-zero origin (host)
- place_meeting: AABB scale+origin + optional bitmask
- sprite_get_xoffset/yoffset
- ASSEMBLE PASS on host
- If `gm82_gml_builtins.h` empty: `python3 tools/gap_fill_20261013/restore_builtins_h.py`
- Then: `python3 tools/gap_fill_20261013/patch_origin_decode.py && bash tools/gap_fill_20261013/ASSEMBLE.sh`

Parity ~37%. Android: UNVERIFIED.
