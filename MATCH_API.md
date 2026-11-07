# match_* API (host design — 2026-11-07)

## Signature (single design)

| Function | Behavior |
|----------|----------|
| `match_clear()` | Reset sticky `match_found` to 0 |
| `match_any(a,b)` / `match_some` | Return 1 if `a==b`; **sticky OR** into found |
| `match_exact(a,b)` | Return 1 if equal; **overwrite** found |
| `match_found()` | Read sticky flag |
| `match_not_any` / `match_not_some` / `match_not_exact` | Pure compare; **do not touch** found |

## Host status
- Behavioral suite: `tests/test_match_api.c` (PASS on host)
- Removed from `GM82CORE_STUBS` (implemented path)
- Eval dispatch includes `match_clear`
- **Not** claiming Portable GM82core binary parity

## Residual note
Large `gm82_gml_builtins.c` / `gm82_gml_eval.c` updates may lag remote if API size limits hit; local tri-mirror has the fix.
