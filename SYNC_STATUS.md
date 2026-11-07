# SYNC_STATUS (2026-11-07)

## Done on main
- Behavioral tests + MATCH_API + test_match_api + test_array_2d (tests)
- Makefile gates include match + array_2d

## Host residual (local PASS, core C may lag remote if large-file API limits)
- R1 match_*: clear / pure not_* / sticky any — PASS
- R2 limited 2D arrays: create_2d, a[i,j], height/length_2d — PASS
- Tri-mirror local: PASS

## Still open
- G13 Portable reference
- G14 device OpenSLES / WebView JNI
- Pixel-precise / rotated collision
- Full sparse GM8 2D (only fixed 32x32x64 pool)

## Local
- is_100: false
