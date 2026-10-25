# GAPS_HONEST — Nr.mk.02 (2026-10-26)

No invented “100% of all GMK”. Acceptance = checklist cells on named targets.

## CLOSED on main (code + host evidence where noted)

| Area | Evidence |
|------|----------|
| DnD args[8]/str_args + execute_named | `gm82_actions.c` |
| String VM API | `gm82_gml_string_vm.c` |
| Event order + deferred destroy + arena | `gm82_runtime.c` / `gm82_arena.*` |
| Input + motion/collision path | `gm82_input.c` / runtime step |
| Surfaces soft + nest/copy | `gm82_gml_builtins.c` |
| with() GM8 ids + id snapshot | `gm82_gml_eval.c` |
| Soft audio mixer + host_mix | `gm82_audio_mixer.c` / builtins |
| Soft FBO | `gm82_gles.c` |
| Materialize retain objects/scripts | `gm82_materialize_get_*` |
| JNI bind prefers materialize objects | `gm82_jni_java_bridge.c` |
| Host pipeline samples | `tools/run_host_pipeline.sh` → **ok=4 fail=0** |

## OPEN (device / richer assets — not mystery phases)

| ID | Gap | Unblocks |
|----|-----|----------|
| O1 | Device APK logcat for samples/cloud | L0–L3 on phone |
| O2 | Complex GMK full event/script materialize | Non-black complex games |
| O3 | Real sound PCM + OpenSL | Audible audio |
| O4 | Hardware GLES FBO | Advanced surfaces |
| O5 | FAIL-builtin batches from real logs | Remaining GML symbols |
| O6 | REA/DLL | Only if user provides DLL |

## Score rule
`docs/ACCEPTANCE_SCORE_*.md` = PASS cells / TOTAL cells on listed games.
Host ok=4 is not “95% all games”.
