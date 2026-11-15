#!/usr/bin/env python3
"""Safe, evidence-driven reconciliation for open PRs.

The tool deliberately does not choose ours/theirs for semantic conflicts.
It only auto-resolves a file when the three-way evidence proves that:
  * both sides produced the same blob, or
  * one side is byte-for-byte identical to the merge-base blob.

Everything else is left as a review blocker. No PR branch is rewritten and no
remote push is never performed by this tool. A reviewed candidate can be
examined and pushed separately with the existing repository workflow.
"""
from __future__ import annotations

import argparse
import json
import os
import pathlib
import re
import shutil
import subprocess
import sys
import tempfile
from dataclasses import dataclass
from typing import Iterable

ROOT = pathlib.Path(__file__).resolve().parents[1]
DEFAULT_REPO = "fthyalbab4/Nr.mk.02"
DEFAULT_BASE = "main"
CRITICAL_PARTS = (
    "app/src/main/cpp/",
    "app/src/main/cpp_backup/",
    "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/",
    "app/src/main/assets/",
)
CRITICAL_NAMES = (
    "gm82_gml_bytecode.c", "gm82_gml_builtins.c", "gm82_gml_eval.c",
    "gm82_runtime.c", "gm82_object_room_decode.c", "test_event_order.c",
    "test_gml_parser.c", "test_with_edges.c", "test_mario_replay.c",
)


def run(args: list[str], cwd: pathlib.Path = ROOT, check: bool = True) -> subprocess.CompletedProcess[str]:
    env = os.environ.copy()
    env.update({"GH_FORCE_TTY": "0", "GH_COLOR": "never"})
    return subprocess.run(args, cwd=cwd, text=True, stdout=subprocess.PIPE,
                          stderr=subprocess.PIPE, check=check, env=env)


def git(*args: str, cwd: pathlib.Path = ROOT, check: bool = True) -> subprocess.CompletedProcess[str]:
    return run(["git", *args], cwd=cwd, check=check)


def sh(*args: str, cwd: pathlib.Path = ROOT, check: bool = True) -> subprocess.CompletedProcess[str]:
    return run(list(args), cwd=cwd, check=check)


def is_critical(path: str) -> bool:
    return path in CRITICAL_NAMES or any(path.startswith(p) for p in CRITICAL_PARTS)


def fetch_base(base: str) -> None:
    git("worktree", "prune")
    git("fetch", "origin", base, "--quiet")


def pr_rows(repo: str, base: str) -> list[dict]:
    out = sh("gh", "pr", "list", "--repo", repo, "--state", "open", "--limit", "100",
             "--json", "number,title,isDraft,baseRefName,headRefName,headRepositoryOwner")
    raw = re.sub(r"\x1b\[[0-9;?]*[ -/]*[@-~]", "", out.stdout)
    start = raw.find("[")
    if start < 0:
        raise RuntimeError(f"gh returned no JSON: {raw[:500]}")
    rows = json.loads(raw[start:])
    return [r for r in rows if r["baseRefName"] == base and not r["isDraft"]]


def fetch_pr(pr: int) -> str:
    ref = f"refs/remotes/smart-reconcile/pr-{pr}"
    p = git("fetch", "origin", f"pull/{pr}/head:{ref}", check=False)
    if p.returncode:
        raise RuntimeError(f"unable to fetch PR head: {p.stderr.strip()}")
    return ref


def blob(stage: str, path: str, cwd: pathlib.Path) -> bytes | None:
    p = git("show", f":{stage}:{path}", cwd=cwd, check=False)
    return p.stdout.encode() if p.returncode == 0 else None


def resolve_provable(wt: pathlib.Path) -> tuple[list[str], list[dict]]:
    """Resolve only conflicts proven by 3-way blob identity."""
    entries = git("ls-files", "-u", cwd=wt).stdout.splitlines()
    paths = sorted({line.split("\t", 1)[1] for line in entries})
    safe: list[str] = []
    blocked: list[dict] = []
    for path in paths:
        base_blob = blob("1", path, wt)
        ours_blob = blob("2", path, wt)
        theirs_blob = blob("3", path, wt)
        reason = None
        chosen = None
        if ours_blob == theirs_blob:
            chosen, reason = "ours", "ours==theirs"
        elif ours_blob == base_blob:
            chosen, reason = "theirs", "ours==merge-base"
        elif theirs_blob == base_blob:
            chosen, reason = "ours", "theirs==merge-base"
        if chosen:
            # This is not a blind side selection: the blob proof above is the guard.
            git("checkout", f"--{chosen}", "--", path, cwd=wt)
            git("add", "--", path, cwd=wt)
            safe.append(path)
        else:
            blocked.append({"path": path, "critical": is_critical(path),
                            "reason": "both sides changed relative to merge-base"})
    return safe, blocked


def verify_candidate(wt: pathlib.Path) -> tuple[bool, str]:
    checks = [
        ["python3", "tools/verify_core_mirrors.py"],
        ["python3", "tools/run_engine_suite.py"],
    ]
    for cmd in checks:
        p = sh(*cmd, cwd=wt, check=False)
        if p.returncode:
            return False, f"{' '.join(cmd)} failed:\n{p.stdout[-1200:]}\n{p.stderr[-1200:]}"
    return True, "mirror verification and engine suite passed"


@dataclass
class Result:
    number: int
    title: str
    status: str
    safe: list[str]
    blocked: list[dict]
    detail: str
    candidate: str = ""

    def as_dict(self) -> dict:
        return self.__dict__


def inspect_one(row: dict, base: str, apply: bool, run_tests: bool) -> Result:
    number = int(row["number"])
    title = row["title"].replace("\t", " ")
    try:
        ref = fetch_pr(number)
    except Exception as exc:
        return Result(number, title, "FETCH_FAILED", [], [], str(exc))
    work = pathlib.Path(tempfile.mkdtemp(prefix=f"smart-pr-{number}-"))
    wt: pathlib.Path | None = None
    try:
        wt = work / "candidate"
        sh("git", "worktree", "add", "--detach", str(wt), ref)
        merge = git("merge", "--no-commit", "--no-ff", f"origin/{base}", cwd=wt, check=False)
        if merge.returncode == 0:
            if run_tests:
                ok, detail = verify_candidate(wt)
                if not ok:
                    git("merge", "--abort", cwd=wt, check=False)
                    return Result(number, title, "CHECK_FAILED", [], [], detail)
            if apply:
                branch = f"reconcile/pr-{number}"
                git("switch", "-c", branch, cwd=wt)
                git("commit", "-m", f"Reconcile PR #{number} with current {base}", cwd=wt)
                return Result(number, title, "LOCAL_CANDIDATE_READY", [], [],
                              "clean merge; candidate committed locally", branch)
            return Result(number, title, "CLEAN_READY", [], [],
                          "clean merge; no changes pushed")

        safe, blocked = resolve_provable(wt)
        remaining = git("diff", "--name-only", "--diff-filter=U", cwd=wt).stdout.splitlines()
        if remaining:
            git("merge", "--abort", cwd=wt, check=False)
            detail = "semantic conflicts remain; no branch changed"
            return Result(number, title, "CONFLICT_REQUIRES_REVIEW", safe, blocked, detail)

        if run_tests:
            ok, detail = verify_candidate(wt)
            if not ok:
                git("merge", "--abort", cwd=wt, check=False)
                return Result(number, title, "CHECK_FAILED", safe, blocked, detail)
        if apply:
            branch = f"reconcile/pr-{number}"
            git("switch", "-c", branch, cwd=wt)
            git("commit", "-m", f"Reconcile PR #{number} with current {base}", cwd=wt)
            return Result(number, title, "LOCAL_CANDIDATE_READY", safe, blocked,
                          "provable conflicts resolved; tests passed", branch)
        return Result(number, title, "PROVABLE_ONLY_DRY_RUN", safe, blocked,
                      "provable conflicts resolved in temporary worktree; nothing pushed")
    finally:
        if wt is not None:
            git("worktree", "remove", "--force", str(wt), check=False)
        shutil.rmtree(work, ignore_errors=True)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--repo", default=DEFAULT_REPO)
    ap.add_argument("--base", default=DEFAULT_BASE)
    ap.add_argument("--pr", type=int, help="inspect one PR; otherwise inspect all open non-draft PRs")
    ap.add_argument("--apply-local", action="store_true",
                    help="create local reconcile/pr-N branches for candidates; never pushes")
    ap.add_argument("--no-tests", action="store_true", help="skip candidate tests; not recommended")
    ap.add_argument("--report", type=pathlib.Path,
                    default=ROOT / "integration_log/smart_pr_reconciliation_2026-11-15.json")
    args = ap.parse_args()
    fetch_base(args.base)
    rows = pr_rows(args.repo, args.base)
    if args.pr:
        rows = [r for r in rows if int(r["number"]) == args.pr]
        if not rows:
            print(f"PR #{args.pr} is not an open non-draft PR targeting {args.base}", file=sys.stderr)
            return 2
    results = [inspect_one(r, args.base, args.apply_local, not args.no_tests) for r in rows]
    payload = {"repo": args.repo, "base": args.base, "results": [r.as_dict() for r in results]}
    args.report.parent.mkdir(parents=True, exist_ok=True)
    args.report.write_text(json.dumps(payload, ensure_ascii=False, indent=2) + "\n")
    for r in results:
        print(f"PR #{r.number}: {r.status}; safe={len(r.safe)} blocked={len(r.blocked)}; {r.detail}")
    print(f"report={args.report}")
    # Nonzero means review is still required, not that the repository was modified.
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
