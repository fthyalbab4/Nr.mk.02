# Phase 11 — Host residual gate cleanup (2026-11-07)

> Not in original roadmap (roadmap ends at Phase 10).
> Defined here as: close remaining **host-only** gate gaps left after Phase 10.

## Scope
1. Fix **G12** `test_full_suite` link surface (link against full `$(OBJ)`).
2. Fix **G11** `make test` / runner on noexec overlay (always run via `ld-linux` + `./path`).
3. Add `make gates` one-shot host acceptance target.
4. Re-affirm G1–G10 still green; do **not** claim device/Portable.

## Results this session
```
make gates → EXIT 0
python3 tools/verify_core_mirrors.py → PASS
```

## Still out of scope
- G13 Portable reference compare
- G14 device OpenSLES / WebView JNI
- match_* API design
- pixel-precise collision / Draw GUI parity
