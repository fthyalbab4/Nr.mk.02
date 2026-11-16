# Host continue 2026-11-15

## Verified (this session)
- `bash tools/run_host_pipeline.sh` → **expected=4 ok=4 fail=0**
- mario with right+space/up pulses: moved=1, delta y negative (jump path exercised)
- `python3 tools/run_engine_suite.py` → **54/54** (prior run)
- APPLY_P1: action_move_free, draw_self, draw_background, webpage, snapshot
- builtins header restore via `tools/restore_gml_builtins_headers.py`

## HTML
Full browser play still needs WASM/native; host soft-render is the measured path.

## Open (honest, no Android required for next host work)
- Harvest all GMK instance creation_code blobs in decoder edge cases
- More DnD IDs if samples log UNMAPPED_ACTION
- Portable frame-diff corpus

No 100% claim.
