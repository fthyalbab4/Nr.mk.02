# Minimal Save / Load System

## Overview
NOR Maker provides a lightweight implementation for saving and loading key game state variables across game restarts or actions.

## Supported Functions & Actions
- `action_save_game` / `game_save(filename)`
- `action_load_game` / `game_load(filename)`

## Persisted Fields
The default save file format (`nor_save.dat` or custom filename) saves and restores:
1. `score` (`g_score`)
2. `lives` (`g_lives`)
3. `health` (`g_health`)
4. Active player instance coordinates (`x`, `y`) and `object_index`

## Implementation Limits
- **Not Full GM Binary Format**: Does not serialize full runtime object instance dynamic lists, active timelines, particle emitter states, dynamic data structures (`ds_map`, `ds_list`, `ds_grid`), or audio buffers.
- **Single Instance Position**: Restores position for the primary active instance matching `object_index` recorded during save.
- **File Format**: Standard line-oriented key-value text format (`score=`, `lives=`, `health=`, `px=`, `py=`, `oi=`).
