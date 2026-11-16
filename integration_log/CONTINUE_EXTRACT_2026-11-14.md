# Continue extract (no bulk merge)

## Verified on main (raw)
| Item | Status |
|------|--------|
| `gm82_external.c` / `.h` (tri-mirror) | present |
| `test_external_bridge.c` (tri-mirror) | added |
| `gml_array_*` fixed pool in builtins | **already on main** (32 slots, 32×64) |
| PR#393 `gm82_gml_arrays.c` sparse store | **not** dropped in (would dual-implement; needs eval redesign) |
| PR#394 with/bytecode | **already on main** |
| `ds_*_many` real bodies | still stub-listed; use `tools/apply_pr405_ds_many.py` locally |
| `gm82_native_step_dt` + FPS test | present |

## Why arrays from #393 were not force-pushed
Main already implements `gml_array_create_1d/2d`, `gml_array_get/set` in `gm82_gml_builtins.c` and eval calls those symbols. PR#393 adds a parallel `gm82_gml_array_*` API with different limits. Shipping both without rewriting eval creates two stores. Keep main; optional later migration is a dedicated change.

## Safe local next (user machine)
```bash
git pull
python3 tools/apply_pr405_ds_many.py
python3 tools/verify_core_mirrors.py
# in NOR package or cpp tree:
make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX tests/test_external_bridge
./NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/tests/test_external_bridge
```

## Honest
```
is_100: false
G13: NOT_RUN
G14: DEVICE_BLOCKED
bulk_merge: forbidden
eval_dispatch_for_external: not wired (C API only)
```
