# GAPS_HONEST — Nr.mk.02 (2026-10-24)

No invented percentages.

## Closed on main (this work)

| Item | Where |
|------|--------|
| DnD `args[8]` / `execute_named` / scan / fire | `app/src/main/cpp/src/gm82_actions.c` (live, not PLACEHOLDER) |
| String VM API header | `include/gm82_gml_eval.h` |
| String VM **symbols on link path** | `app/src/main/cpp/src/gm82_gml_string_vm.c` (CMake GLOB) |
| Full eval body payload | `gml_eval_full.zlib.b64.00`–`.05` + `DECODE_EVAL.py` |
| Full actions historical payload | `actions_full.zlib.b64.0/.1` + `DECODE_ACTIONS.py` |

## Still open

| Item | Why |
|------|-----|
| Full eval materialized on primary path | Run `DECODE_EVAL.py` on checkout; until then producers in old eval may not call `set_last_string` (API still linkable via string_vm.c) |
| Device APK FAIL log | Required for cloud-game claims |
| Surface / depth / with() parity | Not closed without FAIL tests |
| REA + GM82Core.dll | No binaries in agent session |

## Do not claim

- 100% GM8.2 / all cloud games
- REA decompile applied
