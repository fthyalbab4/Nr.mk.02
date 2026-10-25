# GAPS_HONEST

## Closed on host (pipeline ok=4 fail=0 after materialize)
- String last_string path, string_repeat, string_concat, format
- modwrap / smoothstep / lerproach
- DnD extras + relative score/lives/health + timelines
- image_angle / alpha / blend; draw uses them
- UNMAPPED_ACTION / UNMAPPED_GML_FN logs

## How to put sources on the tree
```bash
python3 tools/gap_fill_20261013/MATERIALIZE_FROM_BLOBS.py
python3 tools/gap_fill_20261013/APPLY_DND_EXTRAS.py
python3 tools/gap_fill_20261013/APPLY_INSTANCE_IMAGE_FIELDS.py
python3 tools/gap_fill_20261013/APPLY_ACTION_IMAGE_AND_LOG.py
python3 tools/gap_fill_20261013/APPLY_DRAW_AND_DND2.py
python3 tools/gap_fill_20261013/VERIFY_AFTER_APPLY.py
# or: Actions → apply-string-math → Run
```

## Still open (needs you / device / REA)
1. APK on device + logcat
2. Implement symbols from real UNMAPPED_* lines
3. Full typed string expression VM
4. Complete DnD if-chain / every action id
5. REA + GM82Core.dll
6. OpenSLES hardware

**Not 100% Windows portable. No invented percentages.**
