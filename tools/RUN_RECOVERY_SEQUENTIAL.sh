#!/usr/bin/env bash
# Sequential recovery + next-step extracts. Run from repo root.
set -euo pipefail
echo "[1/7] restore gm82_gml_builtins.h (tri-mirror)"
python3 tools/restore_gml_builtins_headers.py
echo "[2/7] apply ds_grid/priority *_many bodies"
python3 tools/apply_pr405_ds_many.py
echo "[3/7] apply ds_map_set_many body + eval"
python3 tools/apply_ds_map_set_many.py
echo "[4/7] wire eval ds_grid/priority *_many"
python3 tools/apply_eval_ds_many_dispatch.py
echo "[5/7] wire eval external_define/call/free"
python3 tools/apply_eval_external_dispatch.py
echo "[6/7] verify tri-mirror"
python3 tools/verify_core_mirrors.py
echo "[7/7] status"
git status --short | head -50
echo "OK — review, commit, push"
