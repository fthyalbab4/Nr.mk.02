# Merge PR #192 — conflict resolution (2026-10-25)

**PR:** https://github.com/fthyalbab4/Nr.mk.02/pull/192  
**State before:** `mergeable_state: dirty` (binary test executables + diverged main)

## Conflicts

Only **binary** test artifacts under `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/tests/` (no source conflict markers):
- test_4_game_smoke, test_gml_*, test_mario_physics_parity, test_paths_particles_mpgrid

**Resolution:** keep `main` binaries (rebuild from sources after land).

## Unique code landed (not replace whole engine)

| Item | Where |
|------|--------|
| `gml_hypot`, `gml_clamp_angle`, `gml_lerp_angle` | builtins.c + header + eval dispatch |
| DnD `action_draw_text/score/life`, `action_path`, `action_path_end` | gm82_actions.c |
| phase5 tests for hypot/angles | test_gml_phase5.c |

## How to apply on a checkout

```bash
python3 tools/gap_fill_20261013/APPLY_PR192_UNIQUE.py
```

Idempotent. After apply, primary sources should contain the symbols above.

## PR close

After verify on main, close #192 as superseded by this land (or merge if GitHub becomes clean).
