# STATUS — 2026-10-17 runner continue

## Host verified
- Sprite origin heuristic: mario **23/47** non-zero origins
- place_meeting: scale + origin AABB + pixel mask
- Solid collision: snapshot + origin resolution
- sprite_get_xoffset / yoffset
- ASSEMBLE: **PASS**

## Apply on your machine (one shot)
```bash
git pull
git fetch --depth=80 origin   # for restore from 02d7da5
bash tools/gap_fill_20261013/apply_runner_patches.sh
```
This restores `gm82_gml_builtins.h`, applies origin/collision patches, runs ASSEMBLE.

Weighted parity still ~37%. Android: **UNVERIFIED**.
