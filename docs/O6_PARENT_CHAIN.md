# O6 parent chain (additive, 2026-10-26)

**Policy:** extend existing decode + builtins only. No core rewrite.

## Changes
1. `gm82_decoded_object.parent_index` (-1 if none)
2. Decode reads best-effort int at object blob `off+20` (after persistent)
3. `gml_object_is_child_of` walks up to 32 parents via `gm82_materialize_get_objects()`
4. `object_other_is_child_of` delegates to the same walk

## Limits (honest)
- Parent field layout varies by GMK version; invalid values clamped to -1
- Object list index must match resource index used in GML (same assumption as rest of decoder)
- Does not claim full inheritance event merge (event_inherit still separate)

APPLY: `tools/gap_fill_20261013/APPLY_O6_PARENT_CHAIN.py`
