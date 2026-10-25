# Code implementation of remaining gaps (no device required)

## Done in this pass
1. Materialize retains objects/scripts via get_objects/get_scripts.
2. Audio mixer path: gml_sound_* + gm82_audio_host_mix (synthetic click until real PCM).
3. Soft FBO: gm82_gles_soft_fbo_* (not hardware GLES FBO).

## Still needs device/assets
- OpenSL/AAudio callback
- Real GLES FBO
- Real GMK sound PCM
- Cloud FAIL logs
