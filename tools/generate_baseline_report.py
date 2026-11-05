#!/usr/bin/env python3
"""Run host audit checks and generate a report from their actual results."""
from __future__ import annotations

import argparse
from datetime import datetime, timezone
from pathlib import Path
import re
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[1]


def run_stage(label: str, command: list[str]) -> dict[str, object]:
    try:
        result = subprocess.run(
            command,
            cwd=ROOT,
            text=True,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            errors="replace",
            check=False,
        )
        output = "\n".join(part for part in (result.stdout, result.stderr) if part).strip()
        return {
            "label": label,
            "command": " ".join(command),
            "returncode": result.returncode,
            "output": output,
        }
    except OSError as exc:
        return {
            "label": label,
            "command": " ".join(command),
            "returncode": 127,
            "output": f"Could not start command: {exc}",
        }


def git_revision() -> str:
    result = subprocess.run(
        ["git", "rev-parse", "--short", "HEAD"],
        cwd=ROOT,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.DEVNULL,
        check=False,
    )
    if result.returncode != 0:
        return "unknown"
    status = subprocess.run(
        ["git", "status", "--porcelain"],
        cwd=ROOT,
        text=True,
        stdout=subprocess.PIPE,
        stderr=subprocess.DEVNULL,
        check=False,
    )
    dirty = status.returncode == 0 and bool(status.stdout.strip())
    return result.stdout.strip() + ("-dirty" if dirty else "")


def markdown_output(text: str) -> str:
    if not text:
        return "(no output)"
    excerpt = text[-3000:]
    return "\n".join("    " + line for line in excerpt.splitlines())


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument(
        "--output",
        default="BASELINE_REPORT.md",
        help="report path (relative paths are resolved from the repository root)",
    )
    args = parser.parse_args()

    started = time.monotonic()
    results = [
        run_stage("Host audit runner", [sys.executable, "tools/audit_runner.py"]),
        run_stage(
            "Python reference/security tests",
            [sys.executable, "-m", "unittest", "discover", "-s", "tests/reference", "-v"],
        ),
    ]
    elapsed = time.monotonic() - started
    all_ok = all(int(result["returncode"]) == 0 for result in results)
    reference_output = str(results[1]["output"])
    count_match = re.search(r"Ran (\d+) tests?", reference_output)
    reference_count = count_match.group(1) if count_match else "not reported"

    output_path = Path(args.output)
    if not output_path.is_absolute():
        output_path = ROOT / output_path
    output_path.parent.mkdir(parents=True, exist_ok=True)

    lines = [
        "# NOR Maker Host Baseline Verification",
        "",
        f"- **Generated (UTC):** {datetime.now(timezone.utc).isoformat(timespec='seconds')}",
        f"- **Git revision:** `{git_revision()}`",
        f"- **Elapsed:** {elapsed:.2f} seconds",
        f"- **Overall status:** {'PASS' if all_ok else 'FAIL'}",
        f"- **Python reference tests reported:** {reference_count}",
        "",
        "This report records only the commands listed below. It does not claim an Android APK build,",
        "physical-device test, release signing, or any test suite that was not run by this script.",
        "",
    ]
    for result in results:
        passed = int(result["returncode"]) == 0
        lines.extend(
            [
                f"## {result['label']}: {'PASS' if passed else 'FAIL'}",
                "",
                f"- Command: `{result['command']}`",
                f"- Exit code: `{result['returncode']}`",
                "",
                "Output excerpt:",
                "",
                str(markdown_output(str(result["output"]))),
                "",
            ]
        )
    output_path.write_text("\n".join(lines), encoding="utf-8")
    print(f"Generated {output_path.relative_to(ROOT) if output_path.is_relative_to(ROOT) else output_path}")
    print(f"BASELINE_REPORT_STATUS={'PASS' if all_ok else 'FAIL'}")
    return 0 if all_ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
