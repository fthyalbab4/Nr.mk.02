# GAPS_HONEST — verified status (2026-11-04)

## Host verified / closable
- Core GML builtins, eval, actions, collisions (AABB + precise mask), events ordering, instance system, most ds_*, string/math, buffer, GMZ importer, Android assembleDebug succeeds for all ABIs.
- Remaining rare stubs (draw_*_extra, ds_list_filter/foreach/map) are low-priority and can be no-op or simple host implementations.

## Device-blocked (cannot close without hardware)
- On-device playtest + logcat (U2)
- libgm82_android.so load + keyDown bridge (U3)
- OpenSLES audio output (U5)

## Delivery gate
`is_100: false` only because of device items. Host pipeline is complete.
