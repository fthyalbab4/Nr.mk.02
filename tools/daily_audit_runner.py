#!/usr/bin/env python3
import subprocess
import os
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def run_cmd(cmd, cwd=None):
    res = subprocess.run(cmd, shell=True, cwd=cwd or ROOT, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, errors='replace')
    return res.returncode, res.stdout, res.stderr

def main():
    print("=========================================================")
    print("  NOR MAKER GM82 — DAILY AUDIT & VERIFICATION SUITE")
    print("=========================================================")

    # 1. C Engine Test Suite
    code1, out1, err1 = run_cmd("python3 tools/run_engine_suite.py")
    print("\n--- 1. Engine Test Suite Output ---")
    print(out1)
    if err1:
        print("Stderr:", err1)

    # 2. Comprehensive Python Verification
    code2, out2, err2 = run_cmd("python3 run_full_verification.py")
    print("\n--- 2. Comprehensive Verification Output ---")
    print(out2)
    if err2:
        print("Stderr:", err2)

    # 3. Host Pipeline Verification
    code3, out3, err3 = run_cmd("bash tools/run_host_pipeline.sh")
    print("\n--- 3. Host Pipeline Output ---")
    print(out3)
    if err3:
        print("Stderr:", err3)

    # 4. C Core Makefile Test Suite (NOR_MAKER_COMPLETE_PACKAGE)
    code4, out4, err4 = run_cmd("make test", cwd=os.path.join(ROOT, "NOR_MAKER_COMPLETE_PACKAGE", "01_BLACKSCREEN_FIX"))
    print("\n--- 4. C Core Package Test Output ---")
    print(out4)
    if err4:
        print("Stderr:", err4)
    run_cmd("make clean", cwd=os.path.join(ROOT, "NOR_MAKER_COMPLETE_PACKAGE", "01_BLACKSCREEN_FIX"))

    # 5. JS Verification
    code5, out5, err5 = run_cmd("node test_all_games_inlined.js")
    print("\n--- 5. JS Engine Runner Output ---")
    print(out5)
    if err5:
        print("Stderr:", err5)

    all_pass = (code1 == 0 and code2 == 0 and code3 == 0 and code4 == 0 and code5 == 0)
    print("\n=========================================================")
    print("  DAILY AUDIT SUMMARY")
    print("=========================================================")
    print(f"C Engine Suite: {'PASS' if code1 == 0 else 'FAIL'}")
    print(f"Python Full Verification: {'PASS' if code2 == 0 else 'FAIL'}")
    print(f"Host Pipeline (4/4 games): {'PASS' if code3 == 0 else 'FAIL'}")
    print(f"C Core Package Makefile: {'PASS' if code4 == 0 else 'FAIL'}")
    print(f"JS Engine Verification: {'PASS' if code5 == 0 else 'FAIL'}")
    print(f"OVERALL SYSTEM STATUS: {'PASS' if all_pass else 'FAIL'}")
    print("=========================================================")
    return 0 if all_pass else 1

if __name__ == "__main__":
    sys.exit(main())
