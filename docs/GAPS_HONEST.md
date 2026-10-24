# GAPS_HONEST — Nr.mk.02 (updated 2026-10-24)

No invented percentages. Only concrete remaining items.

## Closed on main this session

1. **DnD action tables** — live `gm82_actions.c` (not PLACEHOLDER): scan / execute_named / execute_ref / fire_create / fire_step; header `args[8]`+`str_args`.
2. **String VM body (payload on repo)** — full `gm82_gml_eval.c` with `g_last_string` + API is stored as:
   - `tools/gap_fill_20261013/gml_eval_full.zlib.b64.00` … `.05`
   - Restore: `python3 tools/gap_fill_20261013/DECODE_EVAL.py`
   - After decode: `gm82_gml_last_string` / `set` / `was` / `clear` are implemented in the .c mirrors.
3. **String VM API** already on main headers.
4. **Actions full historical body** optional via `DECODE_ACTIONS.py`.

## Still open (honest)

| Item | Note |
|------|------|
| Materialize eval on primary path | Run `DECODE_EVAL.py` once on a checkout (agent cannot write 111KB via API in one shot without decode step) |
| Device APK FAIL log | Required before claiming cloud games |
| Surface / depth / with() full parity | Not closed without FAIL-driven tests |
| REA/DLL decompile | No GM82Core.dll binaries in this agent session |

## Do not claim

- 100% GM8.2 parity
- Host 4/4 samples = all games play
