# PR #396 conflict resolution (2026-11-10)

Base: `origin/main` @ `89b5a779`  
PR head: `a520a4d0` (Synchronize C Core Mirrors…)

## Policy
- `main` is authority for critical GML/runtime paths.
- Never auto `--ours`/`--theirs` without reading hunks.
- Unique non-destructive PR deltas may land.

## File decisions

| File | Decision | Reason |
|------|----------|--------|
| `gm82_gml_bytecode.c` (all mirrors) | **KEEP MAIN** | Main has `emit_code_ast`, `BYTECODE_FAIL`, `unwind_bytecode_with`, context pop. PR reverts to weaker `emit_code` / `return false`. |
| `gm82_gml_eval.c` (all mirrors) | **KEEP MAIN** | Main adds native AST eval path; PR side of conflict deletes it. |
| `gm82_gml_eval.h` (all mirrors) | **KEEP MAIN** | Declarations for native AST eval exist only on main. |
| `gm82_batch4_extras.c` (all mirrors) | **MAIN + PR stubs** | Main lacked no-op `draw_*_extra` / `draw_setb` / `draw_setf` residual H0 registrations; PR adds them harmlessly. |
| `STATUS.md` | **KEEP MAIN** | PR only expands audit claim text; no code value. |

## Result
Critical conflicts closed by retaining main.  
Unique batch4 residual stubs applied to tri-mirror identically.

`is_100: false` — this is conflict resolution, not full Portable parity.
