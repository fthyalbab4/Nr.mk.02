#!/usr/bin/env bash
set -Eeuo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
PKG="com.normaker.nativefull.ulalqd"
ACTIVITY="$PKG/.MainActivity"
SERIAL="${ANDROID_SERIAL:-}"
AVD="${ANDROID_AVD:-}"
REPORT_DIR="$ROOT/build/emulator-smoke-$(date +%Y%m%d-%H%M%S)"
BUILD=1
KEEP_EMULATOR=0
EMULATOR_PID=""

usage() {
  cat <<EOF
Usage: $(basename "$0") [options]
  --serial SERIAL       use an existing adb device/emulator
  --avd NAME            boot this AVD when no device is connected
  --no-build            use the existing app/build/outputs/apk/debug/app-debug.apk
  --keep-emulator       do not stop an emulator started by this script
  --report-dir DIR      write artifacts to DIR

Environment: ANDROID_SERIAL, ANDROID_AVD, ANDROID_HOME/ANDROID_SDK_ROOT
EOF
}
while (($#)); do
  case "$1" in
    --serial) SERIAL="$2"; shift 2;;
    --avd) AVD="$2"; shift 2;;
    --no-build) BUILD=0; shift;;
    --keep-emulator) KEEP_EMULATOR=1; shift;;
    --report-dir) REPORT_DIR="$2"; shift 2;;
    -h|--help) usage; exit 0;;
    *) echo "Unknown option: $1" >&2; usage >&2; exit 2;;
  esac
done

ADB="${ADB:-adb}"
EMULATOR="${EMULATOR:-emulator}"
APK="$ROOT/app/build/outputs/apk/debug/app-debug.apk"
mkdir -p "$REPORT_DIR"

fail() { echo "SMOKE FAIL: $*" | tee "$REPORT_DIR/FAILURE.txt" >&2; exit 1; }
cleanup() {
  if [[ -n "$EMULATOR_PID" && "$KEEP_EMULATOR" -eq 0 ]]; then
    kill "$EMULATOR_PID" 2>/dev/null || true
  fi
}
trap cleanup EXIT

command -v "$ADB" >/dev/null || fail "adb not found; install Android platform-tools"
if [[ "$BUILD" -eq 1 ]]; then
  [[ -x "$ROOT/gradlew" ]] || fail "Gradle wrapper is missing: $ROOT/gradlew"
  (cd "$ROOT" && ./gradlew :app:assembleDebug --no-daemon --stacktrace) \
    >"$REPORT_DIR/gradle.log" 2>&1 || { tail -n 80 "$REPORT_DIR/gradle.log" >&2; fail "APK build failed"; }
fi
[[ -f "$APK" ]] || fail "APK not found: $APK"

if [[ -z "$SERIAL" ]]; then
  SERIAL="$($ADB devices | awk 'NR>1 && $2=="device" {print $1; exit}')"
fi
if [[ -z "$SERIAL" ]]; then
  command -v "$EMULATOR" >/dev/null || fail "no adb device and emulator command not found"
  [[ -n "$AVD" ]] || AVD="$($EMULATOR -list-avds | head -n 1)"
  [[ -n "$AVD" ]] || fail "no AVD found; create one or pass --avd NAME"
  "$EMULATOR" -avd "$AVD" -no-window -no-audio -no-boot-anim -gpu swiftshader_indirect \
    >"$REPORT_DIR/emulator.log" 2>&1 &
  EMULATOR_PID=$!
  SERIAL="emulator-$(awk 'BEGIN{n=0} {n++} END{print 5554+2*(n-1)}' <<< "$("$EMULATOR" -list-avds 2>/dev/null || true)")"
  # Prefer the first actual emulator serial reported by adb.
  for _ in {1..60}; do
    found="$($ADB devices | awk 'NR>1 && $1 ~ /^emulator-/ && $2=="device" {print $1; exit}')"
    [[ -n "$found" ]] && { SERIAL="$found"; break; }
    sleep 2
  done
fi
[[ -n "$SERIAL" ]] || fail "could not select an adb serial"
export ANDROID_SERIAL="$SERIAL"

for _ in {1..60}; do
  state="$($ADB -s "$SERIAL" get-state 2>/dev/null || true)"
  [[ "$state" == "device" ]] && break
  sleep 2
done
[[ "$($ADB -s "$SERIAL" get-state 2>/dev/null || true)" == "device" ]] || fail "adb device did not become ready: $SERIAL"
for _ in {1..90}; do
  boot="$($ADB -s "$SERIAL" shell getprop sys.boot_completed 2>/dev/null | tr -d '\r')"
  [[ "$boot" == "1" ]] && break
  sleep 2
done
[[ "$boot" == "1" ]] || fail "emulator boot timeout"

$ADB -s "$SERIAL" install -r "$APK" >"$REPORT_DIR/install.log" 2>&1 || { cat "$REPORT_DIR/install.log" >&2; fail "APK install failed"; }
$ADB -s "$SERIAL" logcat -c
$ADB -s "$SERIAL" shell am force-stop "$PKG"
$ADB -s "$SERIAL" shell am start -W -n "$ACTIVITY" --ez nor_emulator_smoke true >"$REPORT_DIR/activity_start.log" 2>&1 || fail "activity launch failed"

# Real adb input stimuli: key presses plus tap/swipe. The deterministic native
# probe below validates event semantics; these commands validate Android input delivery.
$ADB -s "$SERIAL" shell input keyevent 21
$ADB -s "$SERIAL" shell input keyevent 22
$ADB -s "$SERIAL" shell input tap 120 120
$ADB -s "$SERIAL" shell input swipe 80 160 420 160 350
$ADB -s "$SERIAL" shell input tap 240 320

result=""
for _ in {1..30}; do
  result="$($ADB -s "$SERIAL" logcat -d -s NOR_NATIVE:I '*:S' | grep 'NOR_SMOKE_RESULT=' | tail -n 1 || true)"
  [[ -n "$result" ]] && break
  sleep 1
done
$ADB -s "$SERIAL" logcat -d -v threadtime >"$REPORT_DIR/logcat.txt"
$ADB -s "$SERIAL" shell dumpsys activity activities >"$REPORT_DIR/activity.txt" 2>&1 || true
$ADB -s "$SERIAL" shell uiautomator dump /sdcard/nor-smoke-ui.xml >/dev/null 2>&1 || true
$ADB -s "$SERIAL" shell cat /sdcard/nor-smoke-ui.xml >"$REPORT_DIR/ui.xml" 2>/dev/null || true
printf 'serial=%s\napk=%s\n%s\n' "$SERIAL" "$APK" "$result" >"$REPORT_DIR/summary.txt"

[[ "$result" == *'NOR_SMOKE_RESULT='* ]] || fail "native smoke result not found; see $REPORT_DIR/logcat.txt"
json="${result#*NOR_SMOKE_RESULT=}"
python3 - "$json" <<'PY' || { echo "SMOKE FAIL: invalid probe result" >&2; exit 1; }
import json, sys
r=json.loads(sys.argv[1])
required=('collision','alarm','keyboard','mouse')
missing=[k for k in required if r.get(k) is not True]
if missing:
    raise SystemExit('failed paths: '+', '.join(missing))
print('native probe PASS:', ', '.join(required))
PY

echo "SMOKE PASS: APK + emulator input stimuli + native Collision/Alarm/Keyboard/Mouse probe"
echo "Report: $REPORT_DIR"
