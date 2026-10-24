# GAPS_HONEST — Nr.mk.02 (updated 2026-10-24)

No invented percentages. Only concrete remaining items.

## Closed this session (on main)

1. **DnD action tables** — `gm82_actions.h` has `args[8]`, `argc`, `str_args[4]`, `str_argc`.
2. **`gm82_actions.c`** — PLACEHOLDER removed. Live file implements:
   - `gm82_actions_scan_gmk` (inflate + `action_*` harvest + arg ints)
   - `gm82_action_execute_named` (create/destroy/move/bounce/rooms/sound/score/…)
   - `gm82_action_execute_ref` / `fire_create` / `fire_step`
3. **String VM API** — `gm82_gml_eval.h` exposes `gm82_gml_last_string`, `set_last_string`, `last_was_string`, `clear_last_string`.
4. **Full 28KB historical body** stored as zlib parts:
   - `tools/gap_fill_20261013/actions_full.zlib.b64.0`
   - `tools/gap_fill_20261013/actions_full.zlib.b64.1`
   - Restore: `python3 tools/gap_fill_20261013/DECODE_ACTIONS.py`

## Still open (honest)

| Item | Why still open |
|------|----------------|
| String VM **implementation** in `gm82_gml_eval.c` | Header API present; need body wiring so string builtins fill last_string and return path |
| Full historical actions body (optional) | Compact live file is complete API-wise; 28k body is richer scan — run DECODE if you want that exact tree |
| Device APK FAIL log | Host pipeline samples ≠ full GMK/GM82 game on device |
| Surface / depth / with() full parity | Not claimed closed without FAIL-driven tests |

## Do not claim

- 100% GM8.2 parity
- REA/Ghidra decompile applied to DLLs (no binaries in this agent session)
- Host pipeline 4/4 implies all cloud games run
