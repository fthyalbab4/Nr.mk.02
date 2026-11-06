#!/usr/bin/env python3
"""Verify source/header parity between the active C core and its mirrors."""
from __future__ import annotations

from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
CANONICAL = ROOT / "app/src/main/cpp"
MIRRORS = (
    ROOT / "app/src/main/cpp_backup",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX",
)
SUFFIXES = {".c", ".h"}


def files(directory: Path) -> dict[str, Path]:
    if not directory.is_dir():
        raise FileNotFoundError(f"missing source directory: {directory}")
    return {
        path.name: path
        for path in directory.iterdir()
        if path.is_file() and path.suffix in SUFFIXES
    }


def verify_pair(canonical: Path, mirror: Path) -> list[str]:
    expected = files(canonical)
    actual = files(mirror)
    errors: list[str] = []
    for name in sorted(expected.keys() - actual.keys()):
        errors.append(f"{mirror}: missing {name}")
    for name in sorted(actual.keys() - expected.keys()):
        errors.append(f"{mirror}: unexpected {name}")
    for name in sorted(expected.keys() & actual.keys()):
        if expected[name].read_bytes() != actual[name].read_bytes():
            errors.append(f"{mirror}: content differs for {name}")
    if not errors:
        print(f"CORE_MIRROR_OK {canonical.relative_to(ROOT)} == {mirror.relative_to(ROOT)} ({len(expected)} files)")
    return errors


def main() -> int:
    errors: list[str] = []
    for subdir in ("src", "include"):
        canonical = CANONICAL / subdir
        for mirror in MIRRORS:
            errors.extend(verify_pair(canonical, mirror / subdir))
    # Some shared core files (notably gml_vm.c) live at each tree's root rather
    # than under src/; compare those too, while leaving build files target-specific.
    for mirror in MIRRORS:
        errors.extend(verify_pair(CANONICAL, mirror))
    regression_tests = (
        "test_gml_vm_execution.c",
        "test_gml_with_scoping.c",
        "test_with_edges.c",
    )
    for mirror in MIRRORS:
        for test_name in regression_tests:
            regression_test = CANONICAL / "tests" / test_name
            mirror_test = mirror / "tests" / test_name
            if not regression_test.is_file():
                errors.append(f"{regression_test}: missing shared regression test")
            elif not mirror_test.is_file():
                errors.append(f"{mirror_test}: missing shared regression test")
            elif regression_test.read_bytes() != mirror_test.read_bytes():
                errors.append(f"{mirror_test}: content differs for {test_name}")
            else:
                print(f"CORE_MIRROR_TEST_OK {mirror_test.relative_to(ROOT)}")
    if errors:
        for error in errors:
            print(f"CORE_MIRROR_ERROR {error}", file=sys.stderr)
        return 1
    print("CORE_MIRRORS_PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
