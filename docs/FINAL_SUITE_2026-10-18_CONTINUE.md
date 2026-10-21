# FINAL_SUITE continue — 2026-10-18

## Changes this pass
1. Host pipeline finds player-like instance, injects hspeed + vk_right, reports PLAYER_IDX/delta
2. Actions: `action_move_point` / `action_potential_step` step along speed; `action_draw_sprite` calls `gml_draw_sprite`
3. Snapshot helper via `patch_get_active_snapshot.py`

## Host results (measured)
| Sample | PLAYER_IDX | delta | lit | result |
|--------|------------|-------|-----|--------|
| mario_bros | 103 | (60, 0) | 2175 | PIPELINE_OK moved=1 |
| plataformas | 20 | (90, 18) | 41541 | PIPELINE_OK moved=1 |
| shooter | 252 | (90, 232.5) | 160328 | PIPELINE_OK moved=1 |
| zelda | 39 | (87, 40) | 6312 | PIPELINE_OK moved=1 |

ASSEMBLE: ALL PASS

## Note
Movement uses injected hspeed on host (not full sample GML keyboard scripts). Proves runtime move/collision path + player selection.
