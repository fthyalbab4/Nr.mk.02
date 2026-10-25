#!/usr/bin/env python3
"""Convert a user-supplied GameMaker fnames text file to conservative metadata JSON.

The source list is intentionally not copied into this repository. By default every
entry remains `unverified`; assertions require a separate, reviewed status map.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import sys
from pathlib import Path

ENTRY = re.compile(r"^([A-Za-z_][A-Za-z0-9_]*)(?:\s*\(([^()]*)\))?(?:\s*\[[^]]*\])?\s*([#*]?)\s*;?$")
ALLOWED_STATUSES = {"implemented", "stub", "unsupported"}


def parse_fnames(text: str, source_name: str, status_map: dict | None = None) -> tuple[list[dict], list[str]]:
    entries: list[dict] = []
    warnings: list[str] = []
    status_map = status_map or {}
    for line_no, raw in enumerate(text.splitlines(), 1):
        line = raw.strip()
        if not line or line.startswith("//"):
            continue
        match = ENTRY.fullmatch(line)
        if not match:
            warnings.append(f"{source_name}:{line_no}: unparsed entry: {line[:100]}")
            continue
        name, raw_args, marker = match.groups()
        if raw_args is None:
            kind = "constant" if marker == "#" else "variable"
            arguments = None
            variadic = False
            fixed_arity = None
        else:
            kind = "function"
            args = [part.strip() for part in raw_args.split(",") if part.strip()]
            variadic = any("..." in arg for arg in args)
            fixed_arity = sum(1 for arg in args if "..." not in arg)
            arguments = args
        reviewed = status_map.get(name)
        if isinstance(reviewed, dict):
            status = reviewed.get("status", "unverified")
            evidence = reviewed.get("evidence", [])
            if not isinstance(evidence, list) or not all(isinstance(item, str) for item in evidence):
                raise ValueError(f"evidence for {name} must be an array of strings")
        elif isinstance(reviewed, str):
            status = reviewed
            evidence = []
        elif reviewed is None:
            status = "unverified"
            evidence = []
        else:
            raise ValueError(f"status-map entry for {name} must be a string or object")
        if status not in ALLOWED_STATUSES | {"unverified"}:
            raise ValueError(f"invalid status {status!r} for {name}; use one of {sorted(ALLOWED_STATUSES)}")
        entries.append({
            "name": name,
            "kind": kind,
            "readonly": marker == "*",
            "arguments": arguments,
            "fixed_arity": fixed_arity,
            "variadic": variadic,
            "return_kind": "unknown",
            "side_effects": "unknown",
            "status": status,
            "evidence": evidence,
            "source_line": line_no,
        })
    return entries, warnings


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("fnames", type=Path, help="path to a fnames-style text file (kept external)")
    ap.add_argument("output", type=Path, help="metadata JSON output path")
    ap.add_argument("--status-map", type=Path, help="optional reviewed JSON map: name -> {status,evidence}")
    ap.add_argument("--strict", action="store_true", help="fail if any non-comment source line cannot be parsed")
    args = ap.parse_args()
    try:
        source = args.fnames.read_bytes()
        status_map = json.loads(args.status_map.read_text(encoding="utf-8")) if args.status_map else {}
        if not isinstance(status_map, dict):
            raise ValueError("status-map root must be a JSON object")
        entries, warnings = parse_fnames(source.decode("utf-8-sig", errors="strict"), str(args.fnames), status_map)
        output = {
            "schema_version": 1,
            "source_name": args.fnames.name,
            "source_sha256": hashlib.sha256(source).hexdigest(),
            "policy": "Names/signatures are metadata only; no implementation or Windows parity is implied.",
            "counts": {
                "total": len(entries),
                "functions": sum(item["kind"] == "function" for item in entries),
                "variables": sum(item["kind"] == "variable" for item in entries),
                "constants": sum(item["kind"] == "constant" for item in entries),
                "unverified": sum(item["status"] == "unverified" for item in entries),
            },
            "entries": entries,
            "warnings": warnings,
        }
        args.output.parent.mkdir(parents=True, exist_ok=True)
        args.output.write_text(json.dumps(output, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
        print(json.dumps(output["counts"], sort_keys=True))
        for warning in warnings[:20]:
            print(f"WARN {warning}", file=sys.stderr)
        if len(warnings) > 20:
            print(f"WARN ... {len(warnings) - 20} additional parse warnings", file=sys.stderr)
        return 1 if args.strict and warnings else 0
    except (OSError, UnicodeError, json.JSONDecodeError, ValueError) as exc:
        print(f"ERROR: {exc}", file=sys.stderr)
        return 2


if __name__ == "__main__":
    raise SystemExit(main())
