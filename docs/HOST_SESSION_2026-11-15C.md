# Host session 2026-11-15C

Measured locally (no claims beyond tests):

- `bash tools/run_host_pipeline.sh` → **SUMMARY expected=4 ok=4 fail=0**
- `python3 tools/run_engine_suite.py` → **RESULT OK** after `gml_ds_map_set_many` is declared in builtins header
- mario 200 frames → PIPELINE_OK

Fixes this session:
- `tools/restore_gml_builtins_headers.py` always ensures `gml_ds_map_set_many` decl
- host pipeline supports `DUMP_PPM` + periodic space/up key pulses (local script)

Not done: full HTML/WASM play, Android device, all-catalog 100%.
