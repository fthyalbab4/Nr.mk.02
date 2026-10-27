# Source merge into NOR Maker (gm82core) — 2026-10-26

Clean-room C from behavior of `source/unpacked/gm82core` (not Delphi REA paste).

| Symbol | Role |
|--------|------|
| instance_create_moving | create + speed/direction/gravity |
| instance_farthest | farthest instance |
| distance_to_center | distance to nearest target |
| file_text_read_all / write_all | whole-file helpers |

APPLY: `tools/gap_fill_20261013/APPLY_SOURCE_MERGE_CORE.py`
Host after local merge: ok=4 fail=0.
Not merged: full 216 gm82core helpers, FUN_* bodies.
