# Manual PR review (code-level) — 2026-11-14

Compared PR heads against live `main` raw files. No bulk merge.

## PR#394 — with/self/other
**Verdict: ALREADY ON MAIN (do not merge)**

On main today:
- `gm82_gml_context_push` / `pop` declared in `gm82_gml_builtins.h`
- Bytecode has `GM82_BC_WITH_BEGIN`, `WITH_NEXT`, full switch opcodes
- `gml_vm_execute_fragment` path and context restore present in current tree

Merging #394 would rewrite bytecode/eval over newer main. **Close as duplicate.**

## PR#393 — arrays / runtime harden
**Verdict: PARTIAL UNIQUE**

Missing on main (404):
- `gm82_gml_arrays.h`
- `gm82_gml_arrays.c` (runtime-owned 1D/2D numeric arrays, 64 arrays, 65536 cells)

Already on main from later work:
- match_* APIs
- scaled AABB notes in docs
- many gate tests

**Next extract:** add arrays files + wire eval index paths carefully (touches eval — high care).

## PR#378 — external bridge
**Verdict: UNIQUE CORE IS external_* only**

Already on main from this PR and later:
- `gm82_int_read.h`
- `gm82_actions_gmk8.c` / `parse_gmk8` / `fire_alarm` / `fire_collision` / `action_ref.code`
- jni frame_rgba / runtime_info / instance_snapshot

Unique (was missing):
- `gml_external_define` / `call` / `free` with dlopen/LoadLibrary

**Extracted now:** `gm82_external.c` on all three mirrors (commit after this doc).
Build picks it up via GLOB / wildcard.

Limits of extract (honest):
- call ABI simplified to 8×double → double
- calltype/restype stored but not fully branched
- header decls still need sync in `gm82_gml_builtins.h` if direct C callers are added

## PR#405 — ds_*_many
Script ready: `tools/apply_pr405_ds_many.py` (local apply on 223KB builtins).

## PR#415 — step_dt / FPS
Already extracted: public `gm82_native_step_dt` + 90/120/144 test.

## Duplicate noise (~25 PRs)
Daily audit / tri-mirror STATUS churn. No unique engine code vs current main.

## Status
```
is_100: false
G13: NOT_RUN
G14: DEVICE_BLOCKED
bulk_merge: forbidden
```
