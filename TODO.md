# TODO

## Done (host)
- [x] Event system / actions / collision other
- [x] Bitmask via precise_mask_overlap in place_meeting
- [x] with() edge test file
- [x] Rare DnD gapfill script + workflow
- [x] keyDown bridge script + workflow

## Apply once (scripts already on main)
```bash
python3 tools/apply_actions_gapfill.py && python3 tools/apply_keydown_bridge.py && git add -A && git commit -m "apply gaps" && git push
# or: GitHub Actions → apply-host-gaps
```

## Device-only
- [ ] playtest + logcat (`docs/DEVICE_BLOCKED.md`)
- [ ] OpenSLES hardware
- [ ] NDK instrumentation on device
