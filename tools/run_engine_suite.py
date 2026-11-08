#!/usr/bin/env python3
"""Build and run the native C test suite from a fresh, isolated object directory."""
from pathlib import Path
import subprocess
import sys
import tempfile

ROOT = Path(__file__).resolve().parent.parent
TESTS = [
    ("test_full_suite", "app/src/main/cpp/test_full_suite.c"),
    ("test_runtime_guard", "app/src/main/cpp/tests/test_runtime_guard.c"),
    ("test_runtime_rendering_collision", "app/src/main/cpp/tests/test_runtime_rendering_collision.c"),
    ("test_draw_extras", "app/src/main/cpp/tests/test_draw_extras.c"),
    ("test_gml_bytecode_native_ast", "app/src/main/cpp/tests/test_gml_bytecode_native_ast.c"),
    ("test_gml_native_builtin_calls", "app/src/main/cpp/tests/test_gml_native_builtin_calls.c"),
    ("test_dual_load", "app/src/main/cpp/tests/test_dual_load.c"),
    ("test_input_key_bounds", "app/src/main/cpp/tests/test_input_key_bounds.c"),
    ("test_4_game_smoke", "app/src/main/cpp/tests/test_4_game_smoke.c"),
    ("test_mario_physics_parity", "app/src/main/cpp/tests/test_mario_physics_parity.c"),
    ("test_mario_replay", "app/src/main/cpp/tests/test_mario_replay.c"),
    ("test_mario_scripts_fixtures", "app/src/main/cpp/tests/test_mario_scripts_fixtures.c"),
    ("test_gml_lexer", "app/src/main/cpp/tests/test_gml_lexer.c"),
    ("test_gml_comprehensive", "app/src/main/cpp/tests/test_gml_comprehensive.c"),
    ("test_gml_ds_callbacks", "app/src/main/cpp/tests/test_gml_ds_callbacks.c"),
    ("test_gml_parser", "app/src/main/cpp/tests/test_gml_parser.c"),
    ("test_gm82_core_math_expansion", "app/src/main/cpp/tests/test_gm82_core_math_expansion.c"),
    ("test_gml_phase5", "app/src/main/cpp/tests/test_gml_phase5.c"),
    ("test_gml_vm_advanced", "app/src/main/cpp/tests/test_gml_vm_advanced.c"),
    ("test_gml_vm_execution", "app/src/main/cpp/tests/test_gml_vm_execution.c"),
    ("test_gml_with_scoping", "app/src/main/cpp/tests/test_gml_with_scoping.c"),
    ("test_phase1", "app/src/main/cpp/tests/test_phase1.c"),
    ("test_buffer_bounds", "app/src/main/cpp/tests/test_buffer_bounds.c"),
    ("test_gmz_import_limits", "app/src/main/cpp/tests/test_gmz_import_limits.c"),
    ("test_gml_vm_execution", "app/src/main/cpp/tests/test_gml_vm_execution.c"),
    ("test_gml_vm_expanded", "app/src/main/cpp/tests/test_gml_vm_expanded.c"),
    ("test_gml_ds_collisions", "app/src/main/cpp/tests/test_gml_ds_collisions.c"),
    ("test_paths_particles_mpgrid", "app/src/main/cpp/tests/test_paths_particles_mpgrid.c"),
    ("test_path_and_instance_list", "app/src/main/cpp/tests/test_path_and_instance_list.c"),
    ("test_event_order", "app/src/main/cpp/tests/test_event_order.c"),
    ("test_with_edges", "app/src/main/cpp/tests/test_with_edges.c"),
    ("test_action_global_dispatch", "app/src/main/cpp/tests/test_action_global_dispatch.c"),
    ("test_phase1_arena_sprites_lifecycle", "app/src/main/cpp/tests/test_phase1_arena_sprites_lifecycle.c"),
    ("test_gml_string_repeat", "app/src/main/cpp/tests/test_gml_string_repeat.c"),
    ("test_nr01_compat_apis", "app/src/main/cpp/tests/test_nr01_compat_apis.c"),
    ("test_native_frame_api", "app/src/main/cpp/tests/test_native_frame_api.c"),
    ("test_gm82core_math", "app/src/main/cpp/tests/test_gm82core_math.c"),
    ("test_gm82_text_project", "app/src/main/cpp/tests/test_gm82_text_project.c"),
    ("test_gm82_text_runtime", "app/src/main/cpp/tests/test_gm82_text_runtime.c"),
    ("test_friend_gmk_probe", "app/src/main/cpp/tests/friend_reference/test_friend_gmk_probe.c"),
    ("test_friend_gml_exec", "app/src/main/cpp/tests/friend_reference/test_friend_gml_exec.c"),
    ("test_friend_format_import", "app/src/main/cpp/tests/friend_reference/test_friend_format_import.c"),
    # Regression fixtures carried by the external GM8.2 reference package.
    ("test_reference_gml_do_until", "app/src/main/assets/core_validation/gml_do_until_test.c"),
    ("test_reference_gml_invoke_scope", "app/src/main/assets/core_validation/gml_invoke_test.c"),
]


def run(command, label):
    result = subprocess.run(command, cwd=ROOT, text=True, stdout=subprocess.PIPE,
                            stderr=subprocess.STDOUT, errors="replace")
    if result.returncode:
        print(f"FAIL {label} (exit {result.returncode})\n{result.stdout}")
        return False
    if result.stdout:
        print(result.stdout, end="" if result.stdout.endswith("\n") else "\n")
    return True


def main():
    missing = [src for _, src in TESTS if not (ROOT / src).is_file()]
    if missing:
        for src in missing:
            print(f"FAIL missing required test: {src}")
        return 1

    with tempfile.TemporaryDirectory(prefix="normaker-engine-") as temp:
        build_dir = Path(temp)
        objects_dir = build_dir / "obj"
        objects_dir.mkdir()
        core_sources = [ROOT / "app/src/main/cpp/gml_vm.c"] + sorted(
            (ROOT / "app/src/main/cpp/src").glob("*.c"))
        object_files = []
        for source in core_sources:
            obj = objects_dir / (source.stem + ".o")
            cmd = ["gcc", "-O2", "-Iapp/src/main/cpp/include", "-Iapp/src/main/cpp",
                   "-c", str(source), "-o", str(obj)]
            if not run(cmd, f"compile {source.relative_to(ROOT)}"):
                return 1
            object_files.append(str(obj))

        passed = 0
        for name, src in TESTS:
            print(f"=== {name} ===")
            binary = build_dir / name
            cmd = ["gcc", "-O2", "-Iapp/src/main/cpp/include", "-Iapp/src/main/cpp",
                   str(ROOT / src), *object_files, "-lz", "-lm", "-o", str(binary)]
            if not run(cmd, f"build {src}"):
                return 1
            if not run([str(binary)], f"run {src}"):
                return 1
            print(f"PASS {src}")
            passed += 1

        print(f"ENGINE_TESTS_PASS={passed}/{len(TESTS)}")
        pipeline = ROOT / "tools/run_host_pipeline.sh"
        if pipeline.is_file():
            if not run(["bash", str(pipeline)], "run_host_pipeline.sh"):
                return 1
            print("PASS pipeline")
        else:
            print("FAIL missing tools/run_host_pipeline.sh")
            return 1

    print("RESULT OK")
    return 0


if __name__ == "__main__":
    sys.exit(main())
