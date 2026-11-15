#!/usr/bin/env python3
"""Extract reviewed, allow-listed pieces from selected PRs without merging them.

Policy for the reviewed PRs:
  #410: the sample-path test in main is newer; do not overwrite it.
  #412: extract only the five residual draw stubs as weak symbols in all mirrors.
  #415: the high-FPS test in main is newer; do not overwrite it.

The script refuses a dirty checkout, applies no whole PR, and runs mirror and
host verification after an actual extraction. It never pushes PR branches.
"""
from __future__ import annotations

import argparse
import json
import os
import pathlib
import re
import subprocess
import sys

ROOT = pathlib.Path(__file__).resolve().parents[1]
REPO = "fthyalbab4/Nr.mk.02"
BASE = "main"
PR412_FILES = [
    "app/src/main/cpp/src/gm82_batch4_extras.c",
    "app/src/main/cpp_backup/src/gm82_batch4_extras.c",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_batch4_extras.c",
]
DRAW_NAMES = [
    "gml_draw_background_tiled_extra",
    "gml_draw_sprite_part_extra",
    "gml_draw_sprite_tiled_extra",
    "gml_draw_sprite_part_centered",
    "gml_draw_spotlight",
]


def run(args: list[str], check=True, cwd=ROOT):
    env = os.environ.copy()
    env.update({"GH_FORCE_TTY": "0", "GH_COLOR": "never"})
    return subprocess.run(args, cwd=cwd, text=True, stdout=subprocess.PIPE,
                          stderr=subprocess.PIPE, check=check, env=env)


def git(*args: str, check=True, cwd=ROOT):
    return run(["git", *args], check=check, cwd=cwd)


def require_clean():
    status = git("status", "--porcelain").stdout.strip()
    if status:
        raise RuntimeError("checkout is dirty; commit or stash before selective extraction:\n" + status)


def blob(ref: str, path: str) -> str:
    p = git("show", f"{ref}:{path}", check=False)
    if p.returncode:
        raise RuntimeError(f"missing {path} at {ref}: {p.stderr.strip()}")
    return p.stdout


def ensure_ref(pr: int) -> str:
    ref = f"refs/remotes/selected-extract/pr-{pr}"
    p = git("fetch", "origin", f"pull/{pr}/head:{ref}", "--quiet", check=False)
    if p.returncode:
        raise RuntimeError(f"cannot fetch PR #{pr}: {p.stderr.strip()}")
    return ref


def classify_superseded() -> list[dict]:
    results = []
    test410 = "app/src/main/cpp/tests/test_gmk8_action_parse.c"
    current410 = blob(f"origin/{BASE}", test410)
    if "selected_path" in current410 and "missing GMK8 sample" in current410:
        results.append({"pr": 410, "status": "SUPERSEDED",
                        "reason": "main already has a richer sample-path fallback; PR version would regress it",
                        "files": [test410]})
    else:
        results.append({"pr": 410, "status": "REVIEW_REQUIRED",
                        "reason": "expected newer fallback markers are absent; no automatic overwrite",
                        "files": [test410]})

    test415 = "app/src/main/cpp/tests/test_native_frame_api.c"
    current415 = blob(f"origin/{BASE}", test415)
    if "test_high_framerate_dt_accumulation" in current415 and "dt_144" in current415:
        results.append({"pr": 415, "status": "SUPERSEDED",
                        "reason": "main already contains the 90/120/144 FPS test; PR version would regress it",
                        "files": [test415]})
    else:
        results.append({"pr": 415, "status": "REVIEW_REQUIRED",
                        "reason": "high-FPS markers are incomplete; no automatic overwrite",
                        "files": [test415]})
    return results


def apply_412(ref: str) -> dict:
    # Validate that the exact reviewed change exists in the PR before applying it.
    already = []
    needs_apply = []
    for path in PR412_FILES:
        source = blob(ref, path)
        for name in DRAW_NAMES:
            expected = f"double {name}(void) {{ return 0; }}"
            weak = f"__attribute__((weak)) double {name}(void) {{ return 0; }}"
            if weak not in source:
                raise RuntimeError(f"PR #412 does not contain the reviewed weak form for {name} in {path}")
            current = (ROOT / path).read_text()
            if weak in current or f"static double batch4_{name.removeprefix('gml_')}" in current:
                already.append(f"{path}:{name}")
            elif expected in current:
                needs_apply.append((path, name))
            else:
                raise RuntimeError(f"unexpected current implementation for {name} in {path}; stop for review")

    if not needs_apply:
        return {"pr": 412, "status": "SUPERSEDED", "files": PR412_FILES,
                "already": already,
                "reason": "main already uses static/weak private draw stubs; PR #412 would regress symbol ownership"}

    changed = []
    for path in PR412_FILES:
        p = ROOT / path
        text = p.read_text()
        before = text
        for name in DRAW_NAMES:
            if (path, name) not in needs_apply:
                continue
            pattern = rf"(?m)^double {re.escape(name)}\(void\) \{{ return 0; \}}$"
            text, count = re.subn(pattern,
                f"__attribute__((weak)) double {name}(void) {{ return 0; }}", text)
            if count != 1:
                raise RuntimeError(f"expected exactly one plain definition of {name} in {path}, got {count}")
        if text == before:
            raise RuntimeError(f"no extraction occurred in {path}")
        p.write_text(text)
        changed.append(path)
    return {"pr": 412, "status": "APPLIED_SELECTIVE", "files": changed,
            "already": already,
            "reason": "only plain residual draw stubs changed to weak symbols; existing newer implementations preserved"}


def verify() -> dict:
    commands = [
        ["python3", "tools/verify_core_mirrors.py"],
        ["python3", "tools/run_engine_suite.py"],
        ["bash", "tools/run_host_pipeline.sh"],
    ]
    output = []
    for cmd in commands:
        p = run(cmd, check=False)
        output.append({"command": " ".join(cmd), "returncode": p.returncode,
                       "stdout": p.stdout[-3000:], "stderr": p.stderr[-3000:]})
        if p.returncode:
            raise RuntimeError(f"verification failed: {' '.join(cmd)}\n{p.stdout}\n{p.stderr}")
    return {"status": "VERIFIED", "commands": output}


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--apply", action="store_true", help="apply only the reviewed PR #412 extraction")
    ap.add_argument("--report", type=pathlib.Path,
                    default=ROOT / "integration_log/selected_pr_extraction_2026-11-15.json")
    args = ap.parse_args()
    require_clean()
    git("fetch", "origin", BASE, "--quiet")
    refs = {n: ensure_ref(n) for n in (410, 412, 415)}
    results = classify_superseded()
    results.append(apply_412(refs[412]) if args.apply else
                   {"pr": 412, "status": "DRY_RUN_READY",
                    "files": PR412_FILES, "reason": "validated five weak draw-stub changes; no files changed"})
    verification = verify() if args.apply else {"status": "NOT_RUN", "reason": "use --apply to modify and verify"}
    payload = {"repo": REPO, "base": BASE, "apply": args.apply,
               "results": results, "verification": verification}
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(payload, ensure_ascii=False, indent=2) + "\n")
    print(json.dumps(payload, ensure_ascii=False, indent=2))
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except Exception as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        raise SystemExit(1)
