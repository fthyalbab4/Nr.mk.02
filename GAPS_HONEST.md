# GAPS_HONEST — Nr.mk.02 (NOR Maker)

**Goal:** Execute target GMK/cloud games on the internal simulator with strict acceptance criteria, without claiming 100% global game compatibility or GameMaker source recovery.

---

## Mandated Rules (Anti-Hallucination)
1. No completion percentages derived from REA file counts or phase counts.
2. No pasting decompiled `FUN_*` blocks into `app/src/main/cpp`.
3. No new builtins unless requested by a real **FAIL log** or present in anvil table `0x63a5a8`.
4. `unknown` (~8,000 decompiled functions) is an archive, NOT a task queue.
5. `anvil` = runner engine structure priority; `GameMaker.exe` = IDE reference.
6. Definition of "Complete" = Named game checklist + logcat verification (`PASS/TOTAL >= 0.95`).

---

## Current Status Summary

### Verified on Host / Main Codebase
| Component | Evidence |
|-----------|----------|
| 4 Sample Games Load/Step/Draw | `tools/run_host_pipeline.sh` -> ok=4 fail=0 |
| C Engine Suite & Python Suite | `tools/daily_audit_runner.py` -> OVERALL SYSTEM STATUS: PASS |
| Mirror Synchronization | 0 diff files across `app/src/main/cpp`, `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`, `app/src/main/cpp_backup` |
| Android Gradle Build | `./gradlew assembleDebug` -> BUILD SUCCESSFUL (4 ABIs) |

---

## Open Gap Inventory (Nr.mk.02)

| Gap ID | Gap Description | Reason & Next Steps |
|--------|-----------------|---------------------|
| **O1** | Physical Device APK & logcat | Hardware device required for `CLOUD_RUN_<game>_<date>.md` logging. |
| **O2** | Materialize for heavy cloud games | Host verified 4 samples; complex games will be fixed driven by device logcat errors. |
| **O3** | OpenSL / AAudio PCM Output | Logical audio mixer verified on host; device speaker playback pending device log verification. |
| **O4** | Hardware GLES FBO | Soft surfaces/FBO active; hardware GLES FBO to be added if device FAIL logs request it. |
| **O5** | Logcat FAIL-driven Builtins | Collect `missing`/`unimplemented` builtins from logcat; implement top 10 per iteration. |
| **O6** | Anvil 12+10 Title Review | Candidate review for `room_instance_suspect` (12) and `gml_runtime` (10) for clean-room implementation. |

---

## Definition of Done (Per Game Checklist)
For every target game in `CLOUD_GAME_LIST`:
1. [1] Launches without immediate crash.
2. [2] First room is not silent black screen (renders sprites or shows clear error message).
3. [3] Basic user input & movement response.
4. [4] Room transition or `game_restart` succeeds.
5. [5] `sound_play` executes without crashing.
