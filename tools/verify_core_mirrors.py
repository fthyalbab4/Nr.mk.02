#!/usr/bin/env python3
"""Verify core, test, and build-manifest parity across the three source mirrors.

Core production files are compared by relative path. Test sources are compared
by their path under tests/; legacy root-level test_*.c/.h files are normalized
to the same tests/ namespace so the host package may keep its historical layout.
"""
from __future__ import annotations

import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]
CANONICAL = ROOT / "app/src/main/cpp"
MIRRORS = (
    ROOT / "app/src/main/cpp_backup",
    ROOT / "NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX",
)
SOURCE_DIRS = ("src", "include")
REQUIRED_DIRS = (*SOURCE_DIRS, "tests")
SUFFIXES = {".c", ".h"}


def collect_tree(tree: Path) -> tuple[dict[str, Path], list[str]]:
    """Collect mirrored C/H files, normalizing root-level test sources."""
    files: dict[str, Path] = {}
    errors: list[str] = []
    if not tree.is_dir():
        return files, [f"missing tree: {tree}"]

    for directory in REQUIRED_DIRS:
        if not (tree / directory).is_dir():
            errors.append(f"{tree}: missing required directory {directory}/")

    for directory in SOURCE_DIRS:
        base = tree / directory
        if not base.is_dir():
            continue
        for path in sorted(base.rglob("*")):
            if path.is_file() and path.suffix in SUFFIXES:
                files[f"{directory}/{path.relative_to(base).as_posix()}"] = path

    tests = tree / "tests"
    if tests.is_dir():
        for path in sorted(tests.rglob("*")):
            if path.is_file() and path.suffix in SUFFIXES:
                key = f"tests/{path.relative_to(tests).as_posix()}"
                if key in files:
                    errors.append(f"{tree}: duplicate normalized test path {key}")
                files[key] = path

    for path in sorted(tree.iterdir()):
        if not path.is_file() or path.suffix not in SUFFIXES:
            continue
        if path.name.startswith("test_"):
            key = f"tests/{path.name}"
        else:
            key = f"@root/{path.name}"
        if key in files:
            errors.append(f"{tree}: duplicate normalized source path {key}")
        files[key] = path
    return files, errors


def verify_pair(canonical: Path, mirror: Path, recursive: bool = False) -> list[str]:
    """Generic recursive file comparison retained for focused verifier tests."""
    if not canonical.is_dir():
        return [f"missing canonical directory: {canonical}"]
    if not mirror.is_dir():
        return [f"missing mirror directory: {mirror}"]
    candidates = canonical.rglob("*") if recursive else canonical.iterdir()
    expected = {
        path.relative_to(canonical).as_posix(): path
        for path in candidates
        if path.is_file() and path.suffix in SUFFIXES
    }
    candidates = mirror.rglob("*") if recursive else mirror.iterdir()
    actual = {
        path.relative_to(mirror).as_posix(): path
        for path in candidates
        if path.is_file() and path.suffix in SUFFIXES
    }
    errors: list[str] = []
    for name in sorted(expected.keys() - actual.keys()):
        errors.append(f"{mirror}: missing {name}")
    for name in sorted(actual.keys() - expected.keys()):
        errors.append(f"{mirror}: unexpected {name}")
    for name in sorted(expected.keys() & actual.keys()):
        if expected[name].read_bytes() != actual[name].read_bytes():
            errors.append(f"{mirror}: content differs for {name}")
    return errors


def verify_tree_pair(canonical: Path, mirror: Path) -> list[str]:
    """Check required mirrored sources/tests, CMake manifests, and content."""
    expected, expected_errors = collect_tree(canonical)
    actual, actual_errors = collect_tree(mirror)
    errors = expected_errors + actual_errors

    for name in sorted(expected.keys() - actual.keys()):
        errors.append(f"{mirror}: missing {name}")
    for name in sorted(actual.keys() - expected.keys()):
        errors.append(f"{mirror}: unexpected {name}")
    for name in sorted(expected.keys() & actual.keys()):
        if expected[name].read_bytes() != actual[name].read_bytes():
            errors.append(f"{mirror}: content differs for {name}")

    canonical_cmake = canonical / "CMakeLists.txt"
    mirror_cmake = mirror / "CMakeLists.txt"
    if not canonical_cmake.is_file():
        errors.append(f"{canonical}: missing CMakeLists.txt")
    elif not mirror_cmake.is_file():
        errors.append(f"{mirror}: missing CMakeLists.txt")
    elif canonical_cmake.read_bytes() != mirror_cmake.read_bytes():
        errors.append(f"{mirror}: CMakeLists.txt differs from canonical")

    return errors


def verify_host_makefile() -> list[str]:
    host_makefile = MIRRORS[1] / "Makefile"
    if not host_makefile.is_file():
        return [f"{host_makefile}: missing Full Core Makefile"]
    content = host_makefile.read_text(encoding="utf-8")
    required = (
        "SRC = $(filter-out src/gm82_events_stubs.c,$(wildcard src/*.c)) gml_vm.c",
        "TEST_SRCS = $(filter-out tests/reference_fixture_runner.c,$(wildcard tests/*.c))",
    )
    return [f"{host_makefile}: missing expected build rule {line}"
            for line in required if line not in content]


def main() -> int:
    if not CANONICAL.is_dir():
        print(f"ERROR: canonical missing: {CANONICAL}", file=sys.stderr)
        return 2

    errors: list[str] = []
    for mirror in MIRRORS:
        errors.extend(verify_tree_pair(CANONICAL, mirror))
    errors.extend(verify_host_makefile())

    if errors:
        for error in errors:
            print(f"CORE_MIRROR_ERROR {error}", file=sys.stderr)
        return 1

    print("CORE_MIRRORS_PASS: production C/H, normalized tests, CMake, and host Makefile contract")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
