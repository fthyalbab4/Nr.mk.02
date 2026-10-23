# Runner: sprite origin + precise place_meeting (2026-10-17)

## Host results
- mario_bros: 23/47 frames non-zero origin (e.g. mario 20x32 origin=8,21)
- zelda: 9/49 frames non-zero origin
- ASSEMBLE event/AABB: PASS
- Compile: sprite_decode, builtins, runtime, gml_eval OK

## Changes
1. Origin heuristic in `scan_blob` before frame version tag
2. `place_meeting` AABB (scale+origin) then optional pixel mask
3. `sprite_get_xoffset` / `sprite_get_yoffset`
4. Solid collision phase snapshot + origin boxes

## Apply on tree
```bash
python3 tools/gap_fill_20261013/patch_origin_decode.py
# then ensure place_meeting/runtime patches from local worktree or re-run runner apply
bash tools/gap_fill_20261013/ASSEMBLE.sh
```

Honest: origin is heuristic not full GMK parser; Android still unverified.
