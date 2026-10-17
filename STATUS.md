# STATUS — 2026-10-17

## Host
- origin: mario 23/47 non-zero
- place_meeting scale+origin+mask: OK
- ASSEMBLE: PASS

## Critical after pull
```bash
python3 tools/gap_fill_20261013/restore_builtins_h.py
python3 tools/gap_fill_20261013/patch_origin_decode.py
bash tools/gap_fill_20261013/ASSEMBLE.sh
```
Parity ~37%. Android UNVERIFIED.
