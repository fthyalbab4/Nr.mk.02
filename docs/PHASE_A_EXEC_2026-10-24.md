# Phase A execution — 2026-10-24

## Status

| Step | Status | Notes |
|------|--------|-------|
| A1 materialize DECODE_EVAL | deferred | optional full body; surgical inject preferred |
| A2 APPLY_STRING_VM_CALLS | **ready** | script + patch on main; workflow `phase-a-string-vm` |
| A3 ASSEMBLE | ready to run after A2 lands on eval | `bash tools/gap_fill_20261013/ASSEMBLE.sh` |
| A4 APK build | **blocked here** | needs Android SDK/NDK (Jules/CI/device) |
| A5 host pipeline | **blocked here** | needs full tree compile machine |

## How A2 lands on primary `gm82_gml_eval.c`

1. GitHub → Actions → **phase-a-string-vm** → Run workflow  
   **or**  
2. On any clone: `python3 tools/gap_fill_20261013/APPLY_STRING_VM_CALLS.py`

Verify:
```bash
grep -n 'gm82_gml_set_last_string(p->str_args\[0\])' app/src/main/cpp/src/gm82_gml_eval.c
```

Symbols: `app/src/main/cpp/src/gm82_gml_string_vm.c` (already linked via CMake GLOB).

## Next after A2 on main

- Phase B: load path (GMK → room → instances) — needs sample GMK + device/host log  
- Update `GAPS_HONEST.md` when grep verifies A2 on primary path  

## Not claimed

- 100% GMK/cloud games  
- APK built in this agent session  
