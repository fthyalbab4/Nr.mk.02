#!/usr/bin/env bash
# Sequential recovery — run from repo root on a clean worktree of main.
set -euo pipefail
echo "[1/5] restore gm82_gml_builtins.h (tri-mirror)"
python3 tools/restore_gml_builtins_headers.py
echo "[2/5] apply ds_*_many bodies into builtins.c"
python3 tools/apply_pr405_ds_many.py
echo "[3/5] wire eval dispatch for ds_*_many"
python3 tools/apply_eval_ds_many_dispatch.py
echo "[4/5] verify tri-mirror"
python3 tools/verify_core_mirrors.py
echo "[5/5] status"
git status --short | head -40
echo "OK — review, commit, push"
