#!/usr/bin/env python3
import os
import subprocess
import sys

def run_cmd(cmd, cwd=None):
    print(f"=== Running: {cmd} (cwd={cwd or '.'}) ===")
    res = subprocess.run(cmd, shell=True, cwd=cwd, capture_output=True, text=True, errors='replace')
    if res.returncode == 0:
        print("  [SUCCESS]")
    else:
        print(f"  [FAILURE] Exit code: {res.returncode}")
        print("--- STDOUT ---")
        print(res.stdout)
        print("--- STDERR ---")
        print(res.stderr)
    return res.returncode == 0, res.stdout, res.stderr

def check_gm82_builtins():
    c_files = [
        "app/src/main/cpp/src/gm82_native_bridge.c",
        "app/src/main/cpp/src/gm82_gml_builtins.c",
        "app/src/main/cpp/src/gm82_gml_eval.c"
    ]
    target_builtins = [
        "angle_difference",
        "approach",
        "color_reverse",
        "sound_play_pitch",
        "ds_grid_set_disk",
        "window_set_size"
    ]
    found = {fn: False for fn in target_builtins}
    for file_path in c_files:
        if os.path.exists(file_path):
            with open(file_path, 'r', encoding='utf-8', errors='ignore') as f:
                content = f.read()
                for fn in target_builtins:
                    if fn in content:
                        found[fn] = True

    print("\n--- Built-in GM82 Functions Audit ---")
    matched = 0
    for fn, is_found in found.items():
        status = "FOUND" if is_found else "MISSING"
        print(f"  {fn}: {status}")
        if is_found:
            matched += 1
    return matched, len(target_builtins)

def main():
    print("=========================================================")
    print(" NOR MAKER GM82 AUTOMATED AUDIT & VERIFICATION SUITE")
    print("=========================================================\n")

    results = {}

    ok, out, _ = run_cmd("python3 run_full_verification.py")
    results["run_full_verification.py"] = ok

    ok, out, _ = run_cmd("node test_all_games_inlined.js")
    results["test_all_games_inlined.js"] = ok

    ok, out, _ = run_cmd("python3 tools/run_engine_suite.py")
    results["run_engine_suite.py"] = ok

    ok, out, _ = run_cmd("make test", cwd="NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX")
    results["01_BLACKSCREEN_FIX make test"] = ok

    matched_fns, total_fns = check_gm82_builtins()

    print("\n=========================================================")
    print(" AUDIT RESULTS SUMMARY")
    print("=========================================================")
    total_suites = len(results)
    passed_suites = sum(1 for v in results.values() if v)

    for suite, pass_status in results.items():
        st = "PASS" if pass_status else "FAIL"
        print(f"  {suite:35s}: [{st}]")

    print(f"\n  Suite Pass Rate: {passed_suites}/{total_suites} ({passed_suites/total_suites*100:.1f}%)")
    print(f"  GM82 Target Functions: {matched_fns}/{total_fns} ({matched_fns/total_fns*100:.1f}%)")

    if passed_suites == total_suites:
        print("\nAll host audit checks passed successfully.")
        sys.exit(0)
    else:
        print("\nOne or more audit checks failed.")
        sys.exit(1)

if __name__ == "__main__":
    main()
