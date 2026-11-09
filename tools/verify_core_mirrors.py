#!/usr/bin/env python3
"""
verify_core_mirrors.py — Phase 1 CI gate
Single source of truth: app/src/main/cpp/
Mirrors must be byte-identical for src/ + include/ + selected root files.
"""
from __future__ import annotations
import hashlib
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent

CANONICAL = ROOT / "app" / "src" / "main" / "cpp"
MIRRORS = [
    ("cpp_backup", ROOT / "app" / "src" / "main" / "cpp_backup"),
    ("blackscreen", ROOT / "NOR_MAKER_COMPLETE_PACKAGE" / "01_BLACKSCREEN_FIX"),
]

CORE_SUBDIRS = ("src", "include")
ROOT_FILES = (
    "gm82_jni.c",
    "gml_vm.c",
    "test_full_suite.c",
    "CMakeLists.txt",
    "gm82_gmk_format.h",
)

def sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as f:
        for chunk in iter(lambda: f.read(1 << 16), b""):
            h.update(chunk)
    return h.hexdigest()

def collect(tree: Path) -> dict[str, str]:
    out: dict[str, str] = {}
    for sub in CORE_SUBDIRS:
        d = tree / sub
        if not d.is_dir():
            continue
        for p in sorted(d.rglob("*")):
            if p.is_file() and p.suffix in (".c", ".h"):
                rel = str(p.relative_to(tree))
                out[rel] = sha256(p)
    for name in ROOT_FILES:
        p = tree / name
        if p.is_file():
            out[name] = sha256(p)
    return out

def main() -> int:
    if not CANONICAL.is_dir():
        print(f"ERROR: canonical missing: {CANONICAL}", file=sys.stderr)
        return 2

    canon = collect(CANONICAL)
    print(f"canonical: {len(canon)} files under {CANONICAL.relative_to(ROOT)}")
    ok = True
    for label, mirror in MIRRORS:
        if not mirror.is_dir():
            print(f"ERROR: mirror missing: {mirror}", file=sys.stderr)
            ok = False
            continue
        m = collect(mirror)
        print(f"{label}: {len(m)} files under {mirror.relative_to(ROOT)}")
        only_c = sorted(set(canon) - set(m))
        only_m = sorted(set(m) - set(canon))
        common_diff = sorted(
            k for k in set(canon) & set(m) if canon[k] != m[k]
        )
        if only_c:
            print(f"  ONLY in canonical ({len(only_c)}): {only_c[:8]}{'...' if len(only_c)>8 else ''}")
            ok = False
        if only_m:
            print(f"  ONLY in {label} ({len(only_m)}): {only_m[:8]}{'...' if len(only_m)>8 else ''}")
            ok = False
        if common_diff:
            print(f"  CONTENT DIFF ({len(common_diff)}): {common_diff[:8]}{'...' if len(common_diff)>8 else ''}")
            ok = False
        if not only_c and not only_m and not common_diff:
            print(f"  OK — identical to canonical")

    if ok:
        print("\nPASS: all mirrors match canonical (src/ + include/ + root key files)")
        return 0
    print("\nFAIL: mirror divergence detected", file=sys.stderr)
    return 1

if __name__ == "__main__":
    sys.exit(main())
