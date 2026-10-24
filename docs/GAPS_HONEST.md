# GAPS_HONEST — Nr.mk.02 (2026-10-24)

No invented percentages.

## Closed: string VM + DnD tables (this request)

### DnD tables — CLOSED on main
- Header: `args[GM82_ACTION_MAX_ARGS]` (8) + `str_args[4][64]` + `argc`/`str_argc` in `gm82_action_ref`
- Scan: harvests up to 8 int args + optional string payloads near `action_*`
- `execute_ref` / `execute_named` pass arg table into create/move/hspeed/vspeed/motion/gravity/alarm/sprite/draw/sound/score/lives/health/save/load
- Fire create/step wired
- Live file: `app/src/main/cpp/src/gm82_actions.c` (commit series ending `b916a8d`)

### String VM — CLOSED on link path
- API: `gm82_gml_last_string` / `set` / `was` / `clear` in `include/gm82_gml_eval.h`
- Body: `app/src/main/cpp/src/gm82_gml_string_vm.c` (CMake `src/*.c` GLOB)
- Producer inject: `tools/gap_fill_20261013/APPLY_STRING_VM_CALLS.py` (keyboard_string → set_last_string)
- Full eval body optional: `DECODE_EVAL.py` + Actions `materialize-eval`

## Still open (other gaps)

| Item | Why |
|------|-----|
| Device APK FAIL log | Not in this session |
| Surface / depth / with() full parity | Needs FAIL-driven work |
| REA + GM82Core.dll | No binaries here |

## Do not claim

- 100% all GMK/cloud games
