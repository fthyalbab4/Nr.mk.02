#!/usr/bin/env bash
# Verify the Windows build of Nor Maker on a headless Linux machine.
#
# It runs the real x64 EXE under Wine on an offscreen X server (Xvfb), loads a GMK
# sample through the host's own command line, advances a fixed number of engine
# frames and dumps the produced RGBA framebuffer as a PPM image. This proves the
# Windows binary loads projects, executes the engine and renders frames; it does
# not require a physical display or a Windows machine.
#
# Requirements: wine64 (>= 9.0), xvfb, optional imagemagick for PNG conversion.
#
# Usage:
#   desktop/windows/tools/run_wine_verify.sh [exe] [samples_dir] [work_dir] [frames]
set -uo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"
EXE="${1:-$REPO_ROOT/desktop/windows/dist/NorMakerNativePC.exe}"
SAMPLES="${2:-$REPO_ROOT/app/src/main/assets/www/samples}"
WORK="${3:-$HOME/nor-wine-verify}"
FRAMES="${4:-300}"
PREFIX="${WINEPREFIX:-$HOME/.wineprefix-nor}"

mkdir -p "$WORK" "$PREFIX"
cp -f "$EXE" "$WORK/NorMakerNativePC.exe"
for g in mario_bros plataformas shooter zelda; do
    [ -f "$SAMPLES/$g.gmk" ] && cp -f "$SAMPLES/$g.gmk" "$WORK/"
done

export WINEPREFIX="$PREFIX"
export WINEDEBUG="${WINEDEBUG:--all}"
export WINEDLLOVERRIDES="${WINEDLLOVERRIDES:-mscoree,mshtml=}"

echo "=== wine: $(wine --version 2>&1 | tail -1) ==="
if ! xdpyinfo -display :99 >/dev/null 2>&1; then
    pkill -f 'Xvfb :99' 2>/dev/null
    Xvfb :99 -screen 0 1280x800x24 >"$WORK/xvfb.log" 2>&1 &
    sleep 2
fi
export DISPLAY=:99

timeout 300 wineboot -u >"$WORK/wineboot.log" 2>&1
echo "wineboot exit=$?"

cd "$WORK" || exit 1
status=0
for g in mario_bros plataformas shooter zelda; do
    [ -f "$WORK/$g.gmk" ] || continue
    echo "--- $g ($FRAMES frames) ---"
    timeout 300 wine ./NorMakerNativePC.exe \
        --open "Z:$(printf '%s' "$WORK/$g.gmk" | tr '/' '\\')" \
        --verify-frames "$FRAMES" \
        --dump-frame "Z:$(printf '%s' "$WORK/frame_$g.ppm" | tr '/' '\\')" 2>&1 |
        grep -E 'verify:|GM82_MATERIALIZE|Unhandled' | sed "s/^/[$g] /"
    rc=${PIPESTATUS[0]}
    echo "[$g] exit=$rc"
    [ "$rc" -eq 0 ] || status=1
    [ -f "$WORK/frame_$g.ppm" ] && command -v convert >/dev/null &&
        convert "$WORK/frame_$g.ppm" "$WORK/frame_$g.png" 2>/dev/null
done

echo "--- missing project (must fail cleanly) ---"
timeout 120 wine ./NorMakerNativePC.exe \
    --open "Z:$(printf '%s' "$WORK/does_not_exist.gmk" | tr '/' '\\')" \
    --verify-frames 10 2>&1 | grep -E 'verify:' | sed 's/^/[missing] /'
rc=${PIPESTATUS[0]}
echo "[missing] exit=$rc (expected 4)"
[ "$rc" -eq 4 ] || status=1

echo "=== artifacts in $WORK ==="
ls -l "$WORK"/frame_*.ppm 2>/dev/null
exit "$status"
