#!/usr/bin/env python3
import subprocess
import sys
import os

TESTS = [
    ("test_full_suite", "app/src/main/cpp/test_full_suite.c"),
    ("test_runtime_guard", "app/src/main/cpp/tests/test_runtime_guard.c"),
    ("test_dual_load", "app/src/main/cpp/tests/test_dual_load.c"),
    ("test_input_key_bounds", "app/src/main/cpp/tests/test_input_key_bounds.c"),
    ("test_4_game_smoke", "app/src/main/cpp/tests/test_4_game_smoke.c"),
    ("test_mario_physics_parity", "app/src/main/cpp/tests/test_mario_physics_parity.c"),
    ("test_gml_comprehensive", "app/src/main/cpp/tests/test_gml_comprehensive.c"),
    ("test_gml_vm_execution", "app/src/main/cpp/tests/test_gml_vm_execution.c"),
    ("test_gml_vm_expanded", "app/src/main/cpp/tests/test_gml_vm_expanded.c"),
    ("test_gml_ds_collisions", "app/src/main/cpp/tests/test_gml_ds_collisions.c"),
    ("test_paths_particles_mpgrid", "app/src/main/cpp/tests/test_paths_particles_mpgrid.c"),
    ("test_event_order", "app/src/main/cpp/tests/test_event_order.c"),
    ("test_phase1_arena_sprites_lifecycle", "app/src/main/cpp/tests/test_phase1_arena_sprites_lifecycle.c"),
    ("test_gml_string_repeat", "app/src/main/cpp/tests/test_gml_string_repeat.c"),
    ("test_nr01_compat_apis", "app/src/main/cpp/tests/test_nr01_compat_apis.c"),
    ("test_native_frame_api", "app/src/main/cpp/tests/test_native_frame_api.c"),
    ("test_gm82_text_project", "app/src/main/cpp/tests/test_gm82_text_project.c"),
    ("test_gm82_text_runtime", "app/src/main/cpp/tests/test_gm82_text_runtime.c"),
    # Imported from the friend's Full Core package; compiled against the current modular core.
    ("test_friend_gmk_probe", "app/src/main/cpp/tests/friend_reference/test_friend_gmk_probe.c"),
    ("test_friend_gml_exec", "app/src/main/cpp/tests/friend_reference/test_friend_gml_exec.c"),
    ("test_friend_format_import", "app/src/main/cpp/tests/friend_reference/test_friend_format_import.c"),
]

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))

def run_test(name, src):
    print(f"=== {name} ===")
    src_path = os.path.join(ROOT, src)
    if not os.path.isfile(src_path):
        print(f"  SKIP missing {src}")
        return True
    bin_path = f"/tmp/{name}_bin"
    cmd_build = f"gcc -O2 -Iapp/src/main/cpp/include -Iapp/src/main/cpp {src_path} app/src/main/cpp/gml_vm.c app/src/main/cpp/src/*.c -lz -lm -o {bin_path}"
    res_build = subprocess.run(cmd_build, shell=True, cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, errors='replace')
    if res_build.returncode != 0:
        print(f"  FAIL build {src}:\n{res_build.stderr}")
        return False
    res_run = subprocess.run(bin_path, shell=True, cwd=ROOT, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True, errors='replace')
    if res_run.returncode != 0:
        print(f"  FAIL run {bin_path}:\n{res_run.stderr}")
        return False
    print(f"  PASS {src}")
    return True

def main():
    os.chdir(ROOT)
    ok = True
    for name, src in TESTS:
        if not run_test(name, src):
            ok = False
    # Prefer existing host pipeline when present
    pipe = os.path.join(ROOT, "tools", "run_host_pipeline.sh")
    if os.path.isfile(pipe):
        print("=== run_host_pipeline.sh ===")
        r = subprocess.run(["bash", pipe], cwd=ROOT)
        if r.returncode != 0:
            ok = False
            print("FAIL pipeline")
        else:
            print("PASS pipeline invoke")
    print("RESULT", "OK" if ok else "FAIL")
    return 0 if ok else 1

if __name__ == "__main__":
    sys.exit(main())
