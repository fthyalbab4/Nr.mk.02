# Merge PR #192 — conflict resolution (2026-10-25)

**PR:** https://github.com/fthyalbab4/Nr.mk.02/pull/192  
**GitHub merge:** blocked (`dirty` — binary test conflicts + diverged main)

## Conflict resolution (done locally)

- **Binary tests** under `NOR_MAKER_COMPLETE_PACKAGE/.../tests/`: keep **main** (rebuild from sources).
- **Sources:** auto-merged; unique code ported without replacing whole engine.

## Landed on main

| Item | Status |
|------|--------|
| DnD `action_draw_text/score/life`, `action_path`, `action_path_end` + alive-safe fire | **on main** `gm82_actions.c` (commit `420fc15`) |
| `gml_hypot` / `clamp_angle` / `lerp_angle` | **via** `tools/gap_fill_20261013/APPLY_PR192_UNIQUE.py` + workflow `land-pr192` |

## Apply remaining builtins/eval

```bash
python3 tools/gap_fill_20261013/APPLY_PR192_UNIQUE.py
# or Actions → land-pr192 → Run workflow
```

## Close PR

After hypot symbols visible on main, close #192 as **landed manually** (not GitHub green merge).
