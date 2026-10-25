# GAPS_HONEST

## Host-closed (code + local pipeline ok=4 fail=0 after APPLY_ALL)
- String: last_string producers, string_repeat, string_concat, format path
- Math: modwrap, smoothstep, lerproach + portable_compat
- DnD batches 1–2 + image transform/color fields
- Runtime draw uses inst image_angle / blend / alpha
- UNMAPPED_ACTION / UNMAPPED_GML_FN logs

## On main right now (verify)
```bash
bash tools/gap_fill_20261013/APPLY_ALL_SEQUENTIAL.sh
python3 tools/gap_fill_20261013/VERIFY_AFTER_APPLY.py
bash tools/run_host_pipeline.sh   # expect SUMMARY ok=4 fail=0
```
Or GitHub Actions → **apply-string-math** → Run (auto-commits tree).

## Cannot close without device / your FAIL logs / REA setup
1. APK on physical device
2. Symbols only known after UNMAPPED_* from real games
3. Full typed string expression VM
4. Every GM8 DnD if-chain action id
5. REA + GM82Core.dll analysis
6. OpenSLES on hardware

**Honest: host gaps above are closed in the APPLY tree; GitHub blob for large eval.c must be materialized via APPLY/Actions. Not 100% Windows portable.**
