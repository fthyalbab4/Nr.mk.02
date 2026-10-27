#!/usr/bin/env python3
"""Scan REA decompile trees for game-logic keywords. Run from repo root."""
from pathlib import Path
import re, json, sys

ROOT = Path(__file__).resolve().parents[1]
BASE = ROOT / "source" / "reverse-engineering" / "decompiles"
KEYS = re.compile(
    r"(instance|room|sprite|surface|draw|step|event|sound|collision|depth|alarm|object|script)",
    re.I,
)

def scan_binary(name: str):
    d = BASE / name / "functions"
    if not d.is_dir():
        return {"binary": name, "error": "missing"}
    hits = []
    for p in d.glob("*.c"):
        t = p.read_text(errors="ignore")
        found = sorted(set(m.group(0).lower() for m in KEYS.finditer(t)))
        if found:
            hits.append({"file": p.name, "size": len(t), "keys": found})
    hits.sort(key=lambda h: -h["size"])
    return {"binary": name, "files": len(list(d.glob('*.c'))), "keyword_hits": len(hits), "top": hits[:20]}

def main():
    if not BASE.is_dir():
        print("no decompiles dir")
        return 1
    out = [scan_binary(p.name) for p in sorted(BASE.iterdir()) if p.is_dir()]
    print(json.dumps(out, indent=2))
    return 0

if __name__ == "__main__":
    sys.exit(main())
