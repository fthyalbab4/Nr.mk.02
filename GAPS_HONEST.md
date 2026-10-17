# GAPS_HONEST — 2026-10-18 (post J7 audit)

## Host suite (measured this run)
- ASSEMBLE: **ALL PASS**
- Pipeline 4 samples: **ok=4 fail=0** (decode + room + draw lit)
- zelda: movement observed; mario/plataformas/shooter: moved=0 on first alive instance (not suite FAIL by itself)

## Closed (grep-verified)
- ROOM_BOUNDS_CLAMP + origin collision
- str_args / file_* strings in eval
- events fire_* including create/destroy/draw
- gm82_action_execute_named present
- gm82_runtime_get_active_snapshot (added 2026-10-18; was link break)

## Remaining gaps (code / tests)
1. Player-driven movement proof on mario/plataformas/shooter without injected input.
2. Line-by-line audit of DnD `return true` no-ops in execute_named.
3. GML only as needed from real FAIL logs / cloud catalog.
4. Full -Wall -Werror clean not claimed.
5. Possible drift of cpp_backup / NOR_MAKER_COMPLETE_PACKAGE vs app/src/main/cpp.

## Remaining gaps (device/hardware)
- Android APK playtest: touch, no black screen, audio — **UNVERIFIED on device**
- OpenSL on real hardware
- Low-end performance

No invented % parity.
