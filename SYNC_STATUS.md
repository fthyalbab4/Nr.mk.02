# SYNC_STATUS (2026-11-07)

## Done on main (via GitHub API)
- Docs + Makefile gates + verify_core_mirrors.py
- Behavioral tests tri-tree: with, array, event_order, collision, resource, draw/input/sound, corpus
- `test_match_api.c` tri-tree + gates entry [R1]
- MATCH_API.md design note

## Host residual R1 (match_*)
- Local: PASS (`test_match_api`)
- Design: sticky any / overwrite exact / pure not_* / match_clear
- Core C mirrors updated locally; remote large-file push may lag

## Still open (not host upload)
- G13 Portable reference compare
- G14 device OpenSLES / WebView JNI
- True 2D arrays (height still stub=1)
- Pixel-precise / rotated collision

## Local
- mirrors PASS (108 core files)
- is_100: false
