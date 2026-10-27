# Source merge batch 2 (gm82core math/strings) — 2026-10-26

Clean-room C from `source/unpacked/gm82core` math.gml / strings.gml / accelerators patterns.

| Symbol | Role |
|--------|------|
| esign | sign with default at zero |
| invlerp | inverse lerp |
| gauss | gaussian random |
| angle_wrap / angle_normalize | angle utilities |
| arcsin / arccos | degrees |
| is_equal | epsilon compare |
| random_color | BGR-ish packed color |
| object_is_child_of | equal-index stub until parent chain |
| string_width / height | fixed-font estimate |
| string_letters / pad / trim | via last_string where needed |

APPLY: `tools/gap_fill_20261013/APPLY_SOURCE_MERGE_BATCH2.py`
Host: ok=4 fail=0 after local apply.
