#!/usr/bin/env python3
"""Build deterministic, read-only compatibility catalogs from Portable data."""
from __future__ import annotations

import argparse
import json
import re
from pathlib import Path

ASCII_RUN = re.compile(rb"[ -~]{3,}")
CALL_SIG = re.compile(r"^[A-Za-z_][A-Za-z0-9_]*\s*\([^\r\n()]*\)$")


def ascii_strings(path: Path) -> list[str]:
    data = path.read_bytes()
    values: list[str] = []
    for match in ASCII_RUN.finditer(data):
        text = match.group().decode("ascii", "replace").strip()
        if text and text not in values:
            values.append(text)
    return values


def parse_fnames(path: Path) -> dict:
    constants: list[str] = []
    readonly: list[str] = []
    functions: list[str] = []
    for raw in path.read_text(encoding="utf-8", errors="replace").splitlines():
        value = raw.strip().lstrip("\ufeff")
        if not value or value.startswith("/"):
            continue
        if value.endswith("#"):
            constants.append(value[:-1])
        elif value.endswith("*"):
            readonly.append(value[:-1])
        elif "(" in value and value.endswith(")"):
            functions.append(value)
    return {
        "source": path.as_posix(),
        "constants": constants,
        "readonly": readonly,
        "functions": functions,
        "counts": {
            "constants": len(constants),
            "readonly": len(readonly),
            "functions": len(functions),
        },
    }


def parse_ged(path: Path) -> dict:
    strings = ascii_strings(path)
    signatures = []
    for value in strings:
        if CALL_SIG.match(value) and value not in signatures:
            signatures.append(value)
    title = strings[0] if strings else path.stem
    extension_id = strings[1] if len(strings) > 1 else ""
    version = strings[2] if len(strings) > 2 else ""
    return {
        "file": path.name,
        "title": title,
        "extension_id": extension_id,
        "version": version,
        "functions": signatures,
        "counts": {"strings": len(strings), "functions": len(signatures)},
    }


def parse_lib(path: Path) -> dict:
    strings = ascii_strings(path)
    # The LIB format is binary; preserve the raw file and expose stable names
    # and action-like records without pretending to fully decode its ABI.
    action_names = []
    for value in strings:
        if value and not value.startswith(("Argument", "item ", "One of ", "This ", "It ", "----")) and len(value) <= 96:
            if re.match(r"^[A-Za-z][A-Za-z0-9 _-]*$", value) and value not in action_names:
                action_names.append(value)
    return {
        "file": path.name,
        "library": strings[0] if strings else path.stem,
        "description": strings[4] if len(strings) > 4 else "",
        "action_names": action_names,
        "counts": {"strings": len(strings), "action_names": len(action_names)},
    }


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path("desktop/windows/portable_compat"))
    parser.add_argument("--out", type=Path, default=Path("desktop/windows/portable_compat/catalog.json"))
    args = parser.parse_args()
    root = args.root
    catalog = {
        "format": 1,
        "purpose": "NOR Windows compatibility catalog generated from imported Game Maker Portable data",
        "fnames": parse_fnames(root / "fnames"),
        "extensions": [parse_ged(p) for p in sorted((root / "extensions").glob("*.ged"))],
        "action_libraries": [parse_lib(p) for p in sorted((root / "Lib").glob("*.lib"))],
    }
    args.out.write_text(json.dumps(catalog, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({
        "fnames": catalog["fnames"]["counts"],
        "extensions": len(catalog["extensions"]),
        "action_libraries": len(catalog["action_libraries"]),
        "output": args.out.as_posix(),
    }, ensure_ascii=False))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
