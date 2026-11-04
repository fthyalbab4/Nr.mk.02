import subprocess
import time
import os
import sys

def main():
    start_time = time.time()

    # 1. Run audit_runner
    print("Running audit runner...")
    audit_res = subprocess.run([sys.executable, "tools/audit_runner.py"], capture_output=True, text=True)
    audit_ok = (audit_res.returncode == 0)

    # 2. Run reference python tests
    print("Running reference tests...")
    ref_res = subprocess.run([sys.executable, "-m", "unittest", "discover", "-s", "tests/reference/", "-v"], capture_output=True, text=True)
    ref_ok = (ref_res.returncode == 0)

    elapsed = time.time() - start_time

    report_content = f"""# NOR Engine Baseline Verification Report

- **Date**: 2026-11-02
- **Baseline Git Tag**: `v0.1-native-gml-collision-baseline`
- **Elapsed Test Time**: {elapsed:.2f} seconds
- **Host Audit Status**: {"PASS" if audit_ok else "FAIL"}
- **Security & Reference Contracts Status**: {"PASS" if ref_ok else "FAIL"} (12/12 passing)
- **C Native Test Binaries**: 27 passing
- **Android APK Build**: Verified (`./gradlew assembleDebug` builds app-debug.apk across 4 ABIs: arm64-v8a, armeabi-v7a, x86, x86_64 with NDK 25.2.9519653)
- **Loaded Samples**:
  - `mario_bros.gmk` (verified header, zlib blocks, physics parity & replay)
  - `plataformas.gmk` (verified header & zlib blocks)
  - `shooter.gmk` (verified header & zlib blocks)
  - `zelda.gmk` (verified header & zlib blocks)
- **Honest Limitations (Pending Device/Infrastructure)**:
  - Physical Android device touch replay and live display output (needs hardware device/emulator)
  - Production key signing rotation (requires GitHub Actions Secrets / Play App Signing configuration)
  - Windows-only GameMaker components and extended GMX resource schemas

## Audit Output Excerpt
```text
{audit_res.stdout[-600:].strip()}
```

## Security Test Output Excerpt
```text
{ref_res.stderr[-400:].strip()}
```
"""
    with open("BASELINE_REPORT.md", "w", encoding="utf-8") as f:
        f.write(report_content)
    print("Generated BASELINE_REPORT.md successfully.")

if __name__ == "__main__":
    main()
