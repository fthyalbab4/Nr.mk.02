#!/usr/bin/env python3
"""Negative and layout tests for the three-tree mirror verifier."""
from pathlib import Path
from tempfile import TemporaryDirectory

from verify_core_mirrors import verify_pair, verify_tree_pair


def write_tree(root: Path, root_test: bool = False) -> None:
    for directory in ("src", "include", "tests"):
        (root / directory).mkdir(parents=True, exist_ok=True)
    (root / "src/core.c").write_text("int core(void) { return 1; }\n", encoding="utf-8")
    (root / "include/core.h").write_text("int core(void);\n", encoding="utf-8")
    (root / "CMakeLists.txt").write_text("add_library(core core.c)\n", encoding="utf-8")
    test_path = root / ("test_sample.c" if root_test else "tests/test_sample.c")
    test_path.write_text("int test_sample(void) { return 0; }\n", encoding="utf-8")
    (root / "tests/reference_fixture_runner.c").write_text(
        "int fixture_runner(void) { return 0; }\n", encoding="utf-8")


def main() -> int:
    with TemporaryDirectory(prefix="core-mirror-verifier-") as temp:
        root = Path(temp)
        canonical = root / "canonical"
        mirror = root / "mirror"
        write_tree(canonical, root_test=True)
        write_tree(mirror, root_test=False)

        if verify_tree_pair(canonical, mirror):
            raise AssertionError("identical trees with normalized test layouts must pass")

        package = root / "01_BLACKSCREEN_FIX"
        write_tree(package, root_test=False)
        (package / "host_win_runner.c").write_text(
            "int host_runner(void) { return 0; }\n", encoding="utf-8")
        if verify_tree_pair(canonical, package, ("@root/host_win_runner.c",)):
            raise AssertionError("the single package-only Windows runner may be external")
        (package / "extra_runner.c").write_text(
            "int extra_runner(void) { return 0; }\n", encoding="utf-8")
        errors = verify_tree_pair(canonical, package, ("@root/host_win_runner.c",))
        if not any("unexpected @root/extra_runner.c" in error for error in errors):
            raise AssertionError("the package-only exception must not allow other files")

        (mirror / "src/core.c").write_text(
            "int core(void) { return 2; }\n", encoding="utf-8")
        errors = verify_tree_pair(canonical, mirror)
        if not any("content differs for src/core.c" in error for error in errors):
            raise AssertionError("different production source must fail")

        (mirror / "src/core.c").write_text(
            "int core(void) { return 1; }\n", encoding="utf-8")
        (mirror / "tests/test_sample.c").unlink()
        errors = verify_tree_pair(canonical, mirror)
        if not any("missing tests/test_sample.c" in error for error in errors):
            raise AssertionError("missing normalized test must fail")

        (mirror / "tests/test_sample.c").write_text(
            "int test_sample(void) { return 0; }\n", encoding="utf-8")
        (mirror / "include/core.h").unlink()
        (mirror / "include").rmdir()
        errors = verify_tree_pair(canonical, mirror)
        if not any("missing include/core.h" in error for error in errors):
            raise AssertionError("missing required header must fail")
        if not any("missing required directory include/" in error for error in errors):
            raise AssertionError("missing required directory must fail explicitly")

        generic_canonical = root / "generic-canonical"
        generic_mirror = root / "generic-mirror"
        (generic_canonical / "nested").mkdir(parents=True)
        (generic_mirror / "nested").mkdir(parents=True)
        source = generic_canonical / "nested/core.c"
        counterpart = generic_mirror / "nested/core.c"
        source.write_text("int nested(void) { return 1; }\n", encoding="utf-8")
        counterpart.write_text(source.read_text(encoding="utf-8"), encoding="utf-8")
        if verify_pair(generic_canonical, generic_mirror, recursive=True):
            raise AssertionError("identical generic trees must pass")
        counterpart.unlink()
        if not any("missing nested/core.c" in error
                   for error in verify_pair(generic_canonical, generic_mirror, recursive=True)):
            raise AssertionError("generic missing-file comparison must fail")

    print("CORE_MIRROR_VERIFIER_TESTS_PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
