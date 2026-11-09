#!/usr/bin/env python3
"""Audit Portable PE files without loading or executing them."""
from __future__ import annotations
import argparse, hashlib, json, re, subprocess
from pathlib import Path


def run(*args: str) -> str:
    return subprocess.run(args, text=True, stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, check=False).stdout


def audit(path: Path) -> dict:
    data = path.read_bytes()
    kind = run("file", str(path)).strip()
    pe = run("objdump", "-p", str(path))
    imports = sorted(set(re.findall(r"\n\s*DLL Name: ([^\r\n]+)", pe, re.I)))
    export_count = 0
    m = re.search(r"Export Address Table\s+(?:\S+\s+)?([0-9a-fA-F]+)", pe)
    if m:
        try: export_count = int(m.group(1), 16)
        except ValueError: pass
    arch = "x86/PE32" if "PE32 executable" in kind and "PE32+" not in kind else ("x64/PE32+" if "PE32+" in kind else "unknown")
    return {"file": path.name, "bytes": len(data), "sha256": hashlib.sha256(data).hexdigest(), "format": kind, "arch": arch, "export_count": export_count, "imports": imports}


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("root", type=Path)
    ap.add_argument("--out", type=Path, required=True)
    args = ap.parse_args()
    files = sorted([*args.root.glob("*.dll"), *args.root.glob("*.exe")])
    result = {"format": 1, "purpose": "Static audit only; no Portable binary is loaded by NOR", "files": [audit(p) for p in files]}
    args.out.write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({"files": len(files), "architectures": sorted(set(x["arch"] for x in result["files"]))}, ensure_ascii=False))
    return 0

if __name__ == "__main__": raise SystemExit(main())
