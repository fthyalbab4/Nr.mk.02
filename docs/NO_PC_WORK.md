# Work done without your PC

Environment: cloud agent (Linux). No Ghidra GUI. No Windows PE decompile of GameMaker.exe here.

## Done for you
1. Installed `rea-agents` CLI where the agent runs (not on your phone).
2. Used portable **fnames** (GML API list) as evidence of symbol names.
3. Implemented priority **built-in variables** in Nor Maker:
   - path_index / position / speed / scale / orientation / endaction / positionprevious
   - sprite_xoffset / sprite_yoffset
   - instance_id / instance_count
   - room / room_width / height / speed / first / last / persistent (basic)
   - keyboard_key / keyboard_lastkey / mouse_button / mouse_lastbutton
4. Host pipeline still **4/4 PIPELINE_OK** after changes.
5. Apply script: `tools/gap_fill_20261013/patch_fnames_builtin_vars.py`

## Apply on any builder (Jules / CI)
```bash
python3 tools/gap_fill_20261013/patch_fnames_builtin_vars.py
bash tools/run_host_pipeline.sh
```

## Still impossible without a build machine / Ghidra
- Full PE reverse of GameMaker.exe / runner DLLs
- Building and signing APK on the phone alone
- Claiming 100% GM8.2 parity

You test by installing an APK artifact when one is published; engine work continues on GitHub without your laptop.
