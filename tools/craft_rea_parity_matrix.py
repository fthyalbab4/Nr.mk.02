#!/usr/bin/env python3
"""
Craft + LeanREA Parity Matrix Generator for NOR Maker 8.2 / GM82 Android.
Parses local static REA classified maps, source GM82 archives, and active
C core symbols in app/src/main/cpp/ to emit an evidence-backed report with
exact raw counts and zero fabricated percentages.
"""

import json
import os
import re
import zipfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MAPS_DIR = ROOT / "source" / "reverse-engineering" / "maps"
STATIC_DIR = ROOT / "source" / "reverse-engineering" / "static"
SOURCE_DIR = ROOT / "source"
CPP_DIR = ROOT / "app" / "src" / "main" / "cpp"
REPORT_PATH = ROOT / "docs" / "CRAFT_REA_PARITY_REPORT.md"


def load_rea_maps():
    maps = []
    if not MAPS_DIR.is_dir():
        return maps
    for p in sorted(MAPS_DIR.glob("*-classified.json")):
        try:
            with p.open("r", encoding="utf-8") as f:
                data = json.load(f)
            maps.append({
                "file": p.name,
                "binary": data.get("binary", p.stem),
                "sha256": data.get("target_sha256", "unknown"),
                "counts": data.get("counts", {}),
            })
        except Exception as exc:
            maps.append({"file": p.name, "binary": p.stem, "error": str(exc), "counts": {}})
    return maps


def scan_cpp_core():
    c_files = sorted(list((CPP_DIR / "src").glob("*.c")) + [CPP_DIR / "gml_vm.c", CPP_DIR / "gm82_jni.c"])
    h_files = sorted((CPP_DIR / "include").glob("*.h"))

    total_lines = 0
    gml_fns = set()
    action_fns = set()
    ged_real_fns = set()
    ged_table_fns = set()
    vm_ops = set()
    unmapped_markers = 0

    str_cmp_re = re.compile(r'strcmp\s*\(\s*(?:id|name|sym)\s*,\s*"([^"]+)"\s*\)')
    ged_entry_re = re.compile(r'\{\s*"([^"]+)"\s*,\s*\d+\s*\}')

    for fpath in c_files:
        if not fpath.exists():
            continue
        text = fpath.read_text(encoding="utf-8", errors="replace")
        total_lines += text.count("\n") + 1
        unmapped_markers += len(re.findall(r'gm82_diag_record_unmapped\s*\(', text))

        if fpath.name in ("gm82_gml_eval.c", "gm82_native_bridge.c", "gm82_gml_builtins.c", "gm82_gml_builtins_rea_motion.c"):
            for m in str_cmp_re.finditer(text):
                fn = m.group(1)
                if fn.startswith("action_"):
                    action_fns.add(fn)
                elif not fn.startswith("vk_") and not fn.startswith("c_") and fn not in ("global", "self", "other", "all", "noone", "true", "false", "pi"):
                    gml_fns.add(fn)

        if fpath.name == "gm82_actions.c":
            for m in str_cmp_re.finditer(text):
                fn = m.group(1)
                if fn.startswith("action_"):
                    action_fns.add(fn)

        if fpath.name == "gm82_ged_extensions.c":
            parts = text.split("k_ged_functions")
            if len(parts) >= 2:
                # Entries before dispatch vs k_ged_functions table
                for m in ged_entry_re.finditer(text):
                    ged_table_fns.add(m.group(1))
                # Real implementations appear after k_ged_functions or inside dispatch_*
                for m in str_cmp_re.finditer(text):
                    ged_real_fns.add(m.group(1))

    vm_h = CPP_DIR / "include" / "gml_vm.h"
    if vm_h.exists():
        htext = vm_h.read_text(encoding="utf-8", errors="replace")
        for m in re.finditer(r'\b(GML_AST_[A-Z0-9_]+|GML_T_[A-Z0-9_]+)\b', htext):
            vm_ops.add(m.group(1))

    return {
        "c_count": len([p for p in c_files if p.exists()]),
        "h_count": len(h_files),
        "total_lines": total_lines,
        "gml_dispatch_names": sorted(gml_fns),
        "action_names": sorted(action_fns),
        "ged_real_names": sorted(ged_real_fns),
        "ged_table_names": sorted(ged_table_fns),
        "vm_tokens_ast": sorted(vm_ops),
        "unmapped_diagnostic_sites": unmapped_markers,
    }


def scan_source_archives(core_info):
    all_implemented = (
        set(core_info["gml_dispatch_names"])
        | set(core_info["action_names"])
        | set(core_info["ged_real_names"])
    )
    all_stubbed = set(core_info["ged_table_names"]) - all_implemented

    archives = []
    if not SOURCE_DIR.is_dir():
        return archives

    fn_re = re.compile(r'#define\s+([A-Za-z_][A-Za-z0-9_]*)\b|function\s+([A-Za-z_][A-Za-z0-9_]*)|export\s+fn\s+([A-Za-z_][A-Za-z0-9_]*)|gmexport\s+[A-Za-z0-9_* ]+?\s+([A-Za-z_][A-Za-z0-9_]*)\s*\(')

    for zpath in sorted(SOURCE_DIR.glob("*.zip")):
        if "(1)" in zpath.name:
            continue
        pkg = zpath.stem.replace("-main", "")
        exported_syms = set()
        has_win32_dll = False
        has_gml = False
        has_native_src = False
        try:
            with zipfile.ZipFile(zpath, "r") as zf:
                for info in zf.infolist():
                    lname = info.filename.lower()
                    if lname.endswith(".dll") or lname.endswith(".exe"):
                        has_win32_dll = True
                    elif lname.endswith(".gml") or lname.endswith(".gej") or lname.endswith(".txt"):
                        has_gml = True
                        if info.file_size < 256 * 1024:
                            raw = zf.read(info.filename).decode("utf-8", errors="ignore")
                            for m in fn_re.finditer(raw):
                                sym = next((g for g in m.groups() if g), None)
                                if sym and len(sym) > 2:
                                    exported_syms.add(sym)
                    elif lname.endswith((".c", ".cpp", ".h", ".rs")):
                        has_native_src = True
                        if info.file_size < 256 * 1024:
                            raw = zf.read(info.filename).decode("utf-8", errors="ignore")
                            for m in fn_re.finditer(raw):
                                sym = next((g for g in m.groups() if g), None)
                                if sym and len(sym) > 2:
                                    exported_syms.add(sym)
        except Exception:
            pass

        matched_impl = sorted(exported_syms & all_implemented)
        matched_stub = sorted(exported_syms & all_stubbed)
        missing = sorted(exported_syms - all_implemented - all_stubbed)

        archives.append({
            "package": pkg,
            "zip": zpath.name,
            "has_win32_bin": has_win32_dll,
            "has_gml_or_gej": has_gml,
            "has_native_src": has_native_src,
            "discovered_symbols": len(exported_syms),
            "implemented_count": len(matched_impl),
            "table_stub_count": len(matched_stub),
            "unmatched_count": len(missing),
            "sample_missing": missing[:8],
        })
    return archives


def write_report(maps, core_info, archives):
    REPORT_PATH.parent.mkdir(parents=True, exist_ok=True)
    lines = []
    lines.append("# NOR Maker 8.2 / GM82 Android — Craft & LeanREA Parity Matrix\n")
    lines.append("> Generated by `tools/craft_rea_parity_matrix.py`. Uses exact static counts from `source/reverse-engineering/maps/`, `source/*.zip`, and `app/src/main/cpp/`. **No synthetic or inflated percentages.**\n")

    lines.append("## 1. Local Static REA Function Candidate Maps (`source/reverse-engineering/maps/`)\n")
    lines.append("| Binary | SHA-256 (prefix) | Total Functions | `gml_runtime` | `room_instance_suspect` | `graphics` | `audio` | `file_io` | `win32_glue` | `allocator_runtime` | `unknown` |")
    lines.append("|---|---|---:|---:|---:|---:|---:|---:|---:|---:|---:|")
    for m in maps:
        c = m.get("counts", {})
        total = sum(int(v) for v in c.values() if isinstance(v, (int, float)))
        lines.append(
            f"| `{m['binary']}` | `{m.get('sha256', '')[:12]}` | {total} | "
            f"{c.get('gml_runtime', 0)} | {c.get('room_instance_suspect', 0)} | "
            f"{c.get('graphics', 0)} | {c.get('audio', 0)} | {c.get('file_io', 0)} | "
            f"{c.get('win32_glue', 0)} | {c.get('allocator_runtime', 0)} | {c.get('unknown', 0)} |"
        )
    lines.append("")

    lines.append("## 2. Active Android C Engine Core Inventory (`app/src/main/cpp/`)\n")
    lines.append(f"- **C Source Files**: {core_info['c_count']}")
    lines.append(f"- **Header Files**: {core_info['h_count']}")
    lines.append(f"- **Total Native C Lines**: {core_info['total_lines']}")
    lines.append(f"- **GML Builtin Dispatch Names (`gm82_gml_eval.c` + `gm82_native_bridge.c` + builtins)**: {len(core_info['gml_dispatch_names'])}")
    lines.append(f"- **DnD Action Handlers (`gm82_actions.c`)**: {len(core_info['action_names'])}")
    lines.append(f"- **GM82 Extension Real Native Handlers (`gm82_ged_extensions.c`)**: {len(core_info['ged_real_names'])}")
    lines.append(f"- **GM82 Extension Registry Entries (`k_ged_functions`)**: {len(core_info['ged_table_names'])}")
    lines.append(f"- **GML AST/Op Tokens (`gml_vm.h`)**: {len(core_info['vm_tokens_ast'])}")
    lines.append(f"- **Explicit Unmapped Diagnostic Call Sites (`gm82_diag_record_unmapped`)**: {core_info['unmapped_diagnostic_sites']}\n")

    lines.append("## 3. Open GM82 Extension Archive Correlation (`source/*.zip`)\n")
    lines.append("| Package | Win32 PE Binary | GML/GEJ | Native Src | Discovered Symbols | Implemented | Registry-Only Stub | Unmatched | Sample Unmatched |")
    lines.append("|---|---:|---:|---:|---:|---:|---:|---:|---|")
    for a in archives:
        sample = ", ".join(f"`{s}`" for s in a["sample_missing"]) if a["sample_missing"] else "—"
        lines.append(
            f"| `{a['package']}` | {'yes' if a['has_win32_bin'] else 'no'} | "
            f"{'yes' if a['has_gml_or_gej'] else 'no'} | {'yes' if a['has_native_src'] else 'no'} | "
            f"{a['discovered_symbols']} | {a['implemented_count']} | {a['table_stub_count']} | "
            f"{a['unmatched_count']} | {sample} |"
        )
    lines.append("")

    lines.append("## 4. Craft Cycle Discipline & Honest Hardware Gate\n")
    lines.append("- **Craft Loop**: Study local REA map & archive spec → Build failing/reproducible host check → Implement clean-room C module → Refine & re-audit counts.")
    lines.append("- **Win32 DLL Policy**: Closed Win32 `.dll` / GEX calls log via `gm82_diag_record_unmapped(\"dll\", sym)` and never report silent success when hardware-specific Win32 behavior is absent.")
    lines.append("- **Android Runtime Gate**: Remains `PASS=0 / TOTAL=0` until executed on an Android device / emulator with ADB logcat.\n")

    REPORT_PATH.write_text("\n".join(lines), encoding="utf-8")
    return REPORT_PATH


def main():
    maps = load_rea_maps()
    core_info = scan_cpp_core()
    archives = scan_source_archives(core_info)
    out = write_report(maps, core_info, archives)
    print(f"Wrote {out}")
    print(f"REA maps: {len(maps)}, C files: {core_info['c_count']}, GML fns: {len(core_info['gml_dispatch_names'])}, Actions: {len(core_info['action_names'])}, GED real: {len(core_info['ged_real_names'])}/{len(core_info['ged_table_names'])}, Archives: {len(archives)}")


if __name__ == "__main__":
    main()
