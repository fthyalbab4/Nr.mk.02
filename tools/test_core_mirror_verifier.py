#!/usr/bin/env python3
"""Negative tests for recursive mirror-file verification."""
from pathlib import Path
from tempfile import TemporaryDirectory

from verify_core_mirrors import verify_pair


def main() -> int:
    with TemporaryDirectory(prefix="core-mirror-verifier-") as temp:
        root = Path(temp)
        canonical = root / "canonical"
        mirror = root / "mirror"
        source = canonical / "nested" / "core.c"
        counterpart = mirror / "nested" / "core.c"
        source.parent.mkdir(parents=True)
        counterpart.parent.mkdir(parents=True)
        source.write_text("int core(void) { return 1; }\n", encoding="utf-8")
        counterpart.write_text(source.read_text(encoding="utf-8"), encoding="utf-8")

        if verify_pair(canonical, mirror, recursive=True):
            raise AssertionError("identical trees must pass")

        counterpart.write_text("int core(void) { return 2; }\n", encoding="utf-8")
        if not any("content differs for nested/core.c" in error
                   for error in verify_pair(canonical, mirror, recursive=True)):
            raise AssertionError("different content must fail")

        counterpart.unlink()
        if not any("missing nested/core.c" in error
                   for error in verify_pair(canonical, mirror, recursive=True)):
            raise AssertionError("missing files must fail")

    print("CORE_MIRROR_VERIFIER_NEGATIVE_TESTS_PASS")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
