# GAPS_HONEST — Nr.mk.02 (2026-10-24)

No invented percentages.

## Closed on main

| Item | Where |
|------|--------|
| DnD tables + execute_named | `app/src/main/cpp/src/gm82_actions.c` |
| String VM symbols | `app/src/main/cpp/src/gm82_gml_string_vm.c` (CMake GLOB) |
| String VM API header | `include/gm82_gml_eval.h` |
| Producer inject script | `tools/gap_fill_20261013/APPLY_STRING_VM_CALLS.py` |
| Full eval payload + decode | `gml_eval_full.zlib.b64.*` + `DECODE_EVAL.py` |
| Auto-materialize | `.github/workflows/materialize-eval.yml` (Actions) |

## Still open

| Item | Why |
|------|-----|
| Device APK FAIL log | Needed for cloud-game claims |
| Surface / depth / with() | No FAIL-driven close |
| REA + GM82Core.dll | No binaries in agent session |
| Primary eval fully DECODE'd in tree | Run Actions workflow_dispatch or `DECODE_EVAL.py` locally |

## Do not claim

- 100% GM8.2 parity
- REA decompile done
