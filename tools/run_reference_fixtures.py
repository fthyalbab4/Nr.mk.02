#!/usr/bin/env python3
"""Compile the native typed-GML fixture harness and compare JSON snapshots."""
from __future__ import annotations

import argparse
import json
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CPP = ROOT / "app/src/main/cpp"
FIXTURES = ROOT / "tests/reference"


def build(binary: Path) -> None:
    sources = sorted((CPP / "src").glob("*.c"))
    cmd = [
        "gcc", "-std=c11", "-O2",
        f"-I{CPP / 'include'}", f"-I{CPP}",
        str(CPP / "tests/reference_fixture_runner.c"),
        str(CPP / "gml_vm.c"),
        *map(str, sources),
        "-lz", "-lm", "-o", str(binary),
    ]
    result = subprocess.run(cmd, cwd=ROOT, text=True, capture_output=True)
    if result.returncode:
        sys.stderr.write(result.stdout)
        sys.stderr.write(result.stderr)
        raise SystemExit(f"fixture harness compilation failed (exit {result.returncode})")
    if result.stderr.strip():
        sys.stderr.write(result.stderr)


def run_case(binary: Path, fixture: Path) -> dict:
    result = subprocess.run([str(binary), str(fixture)], cwd=ROOT, text=True, capture_output=True)
    if result.returncode:
        raise RuntimeError((result.stderr or result.stdout).strip() or f"exit {result.returncode}")
    try:
        return json.loads(result.stdout)
    except json.JSONDecodeError as exc:
        raise RuntimeError(f"harness returned invalid JSON: {result.stdout!r}") from exc


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--update-snapshots", action="store_true", help="write current results (review changes before committing)")
    args = parser.parse_args()
    fixtures = sorted(FIXTURES.glob("*.gml"))
    if not fixtures:
        print(f"FAIL: no .gml fixtures found in {FIXTURES}", file=sys.stderr)
        return 2

    with tempfile.TemporaryDirectory(prefix="nr-ref-fixtures-") as temp:
        binary = Path(temp) / "reference_fixture_runner"
        build(binary)
        failed = 0
        for fixture in fixtures:
            snapshot = fixture.with_suffix(".expected.json")
            try:
                actual = run_case(binary, fixture)
                if args.update_snapshots:
                    snapshot.write_text(json.dumps(actual, ensure_ascii=False, sort_keys=True, separators=(",", ":")) + "\n", encoding="utf-8")
                    print(f"UPDATED {fixture.name}")
                    continue
                expected = json.loads(snapshot.read_text(encoding="utf-8"))
                if actual != expected:
                    failed += 1
                    print(f"FAIL {fixture.name}: expected {expected!r}; got {actual!r}")
                else:
                    print(f"PASS {fixture.name}: {actual}")
            except (OSError, json.JSONDecodeError, RuntimeError) as exc:
                failed += 1
                print(f"FAIL {fixture.name}: {exc}")

    if args.update_snapshots:
        print(f"UPDATED {len(fixtures)} snapshot(s); review the diff and rerun without --update-snapshots")
        return 0
    print(f"SUMMARY passed={len(fixtures) - failed} failed={failed}")
    return 1 if failed else 0


if __name__ == "__main__":
    raise SystemExit(main())
