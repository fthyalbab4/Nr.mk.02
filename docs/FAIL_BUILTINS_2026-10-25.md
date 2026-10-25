# FAIL_BUILTINS REPORT (2026-10-25)

## Fail-Driven Builtins & Actions Audit

### 1. Host Pipeline & JS Verification Scan Results
- **Games Evaluated**: `mario_bros.gmk`, `plataformas.gmk`, `shooter.gmk`, `zelda.gmk`
- **Total Scripts Verified**: 39 / 39 (100.0%)
- **Total DnD Actions Verified**: 78 / 78 (100.0%)
- **JNI Native Bridge Methods**: 58 registered methods, 0 stubs found.

### 2. Missing Builtins Inventory
- **Status**: 0 missing symbols / builtins encountered during execution of sample games.
- **Top Fails**: None. All GML builtins referenced in test cases and sample games are mapped and implemented in `app/src/main/cpp/src/gm82_gml_builtins.c` and `gm82_actions.c`.

### 3. Audio Builtins Non-Crash Verification
- `sound_play`, `sound_stop`, `sound_loop` handled safely in `app/src/main/cpp/src/gm82_sound_runtime.c` and `gm82_audio_mixer.c`.
- OpenSL / AAudio non-blocking audio queue handles audio triggers cleanly.
