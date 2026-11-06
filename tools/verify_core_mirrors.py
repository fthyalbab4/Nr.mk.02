#!/usr/bin/env python3
"""Verify core, test, and build-manifest parity across the source mirrors."""
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


def display_path(path: Path) -> str:
    try:
        return path.relative_to(ROOT).as_posix()
    except ValueError:
        return str(path)


def files(directory: Path, recursive: bool = False) -> dict[str, Path]:
    if not directory.is_dir():
        raise FileNotFoundError(f"missing source directory: {directory}")
    candidates = directory.rglob("*") if recursive else directory.iterdir()
    return {
        path.relative_to(directory).as_posix(): path
        for path in candidates
        if path.is_file() and path.suffix in SUFFIXES
    }


def verify_pair(canonical: Path, mirror: Path, recursive: bool = False) -> list[str]:
    expected = files(canonical, recursive=recursive)
    actual = files(mirror, recursive=recursive)
    errors: list[str] = []
    for name in sorted(expected.keys() - actual.keys()):
        errors.append(f"{mirror}: missing {name}")
    for name in sorted(actual.keys() - expected.keys()):
        errors.append(f"{mirror}: unexpected {name}")
    for name in sorted(expected.keys() & actual.keys()):
        if expected[name].read_bytes() != actual[name].read_bytes():
            errors.append(f"{mirror}: content differs for {name}")
    if not errors:
        print(f"CORE_MIRROR_OK {display_path(canonical)} == {display_path(mirror)} ({len(expected)} files)")
    return errors


def verify_build_manifests() -> list[str]:
    errors: list[str] = []
    canonical_cmake = CANONICAL / "CMakeLists.txt"
    for mirror in MIRRORS:
        mirror_cmake = mirror / "CMakeLists.txt"
        if not canonical_cmake.is_file():
            errors.append(f"{canonical_cmake}: missing canonical CMake manifest")
        elif not mirror_cmake.is_file():
            errors.append(f"{mirror_cmake}: missing mirrored CMake manifest")
        elif canonical_cmake.read_bytes() != mirror_cmake.read_bytes():
            errors.append(f"{mirror_cmake}: CMake manifest differs from canonical")
    if not errors:
        print("CORE_CMAKE_OK canonical and both mirrors use the same source set")

    # The host Full Core tree has its own Makefile; the Android trees do not.
    # Validate its source/test discovery contract rather than comparing it to CMake.
    host_makefile = MIRRORS[1] / "Makefile"
    if not host_makefile.is_file():
        errors.append(f"{host_makefile}: missing Full Core Makefile")
    else:
        content = host_makefile.read_text(encoding="utf-8")
        required = (
            "SRC = $(filter-out src/gm82_events_stubs.c,$(wildcard src/*.c)) gml_vm.c",
            "TEST_SRCS = $(filter-out tests/reference_fixture_runner.c,$(wildcard tests/*.c))",
        )
        for line in required:
            if line not in content:
                errors.append(f"{host_makefile}: missing expected build rule {line}")
        if not any(error.startswith(str(host_makefile)) for error in errors):
            print("CORE_MAKEFILE_OK Full Core excludes event stubs and discovers test sources")
    return errors


def main() -> int:
    errors: list[str] = []
    for subdir in ("src", "include", "tests"):
        canonical = CANONICAL / subdir
        for mirror in MIRRORS:
            errors.extend(verify_pair(canonical, mirror / subdir, recursive=True))
    # Some shared core files (notably gml_vm.c) live at each tree's root rather
    # than under src/; compare those too.
    for mirror in MIRRORS:
        errors.extend(verify_pair(CANONICAL, mirror))
    errors.extend(verify_build_manifests())
    if errors:
        for error in errors:
            print(f"CORE_MIRROR_ERROR {error}", file=sys.stderr)
        return 1
    print("CORE_MIRRORS_PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
