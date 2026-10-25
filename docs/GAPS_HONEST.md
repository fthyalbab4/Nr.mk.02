# GAPS_HONEST — Nr.mk.02 (2026-10-25)

No invented percentages.

## Closed Items on Main

### GMK Resource Decoding & Materialization — CLOSED
- Live files: `app/src/main/cpp/src/gm82_gmk_reader.c`, `gm82_sprite_decode.c`, `gm82_background_decode.c`, `gm82_object_room_decode.c`, `gm82_materialize.c`
- Verification: `tools/run_host_pipeline.sh` decodes sprites, backgrounds, objects, and rooms for all sample GMKs (`mario_bros`, `plataformas`, `shooter`, `zelda`).

### DnD Action Engine & Argument Harvesting — CLOSED
- Live files: `app/src/main/cpp/src/gm82_actions.c`, `app/src/main/cpp/include/gm82_actions.h`
- Verification: Executable tests pass in `run_full_verification.py` (Bounce & Wrap actions) and `daily_audit_runner.py` (78/78 actions mapped).

### GML Evaluation & String VM — CLOSED
- Live files: `app/src/main/cpp/src/gm82_gml_eval.c`, `gm82_gml_builtins.c`, `gm82_gml_string_vm.c`
- Verification: `test_all_games_inlined.js` (39/39 GML scripts verified) and `run_full_verification.py`.

### Software & GLES Drawing Batching — CLOSED
- Live files: `app/src/main/cpp/src/gm82_soft_render.c`, `gm82_gles.c`, `gm82_gl_textures.c`
- Verification: Soft render blitting non-black pixels (`DRAW ok=1 lit > 0`) on all sample GMKs in `docs/HOST_PIPELINE_2026-10-25.md`.

### Audio Engine Non-Crash Queue — CLOSED
- Live files: `app/src/main/cpp/src/gm82_audio_mixer.c`, `gm82_sound_runtime.c`, `gm82_opensles.c`
- Verification: Low-Latency Audio Ring Queue passes in `run_full_verification.py` and silent non-crash during host runtime loops.

## Open / Deferred Items

| Item | Status / Reason |
|------|-----------------|
| REA Static Decompilation Analysis | Deferred: GM82Core.dll / GM82Dx9.dll binaries are not present in repository (documented in `docs/REA_SKIPPED.md`). |
