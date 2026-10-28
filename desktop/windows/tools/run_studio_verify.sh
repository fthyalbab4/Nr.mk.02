#!/usr/bin/env bash
# Verify the Nor Maker Studio PC shell end to end on a headless Linux machine.
#
# It runs the real x64 EXE under Wine, then exercises the served editor UI and the
# NorNative bridge over HTTP: static UI delivery, bridge RPC, loading a GMK by path
# and by bytes, stepping the native engine, rendering a frame, and the failure and
# path-traversal paths. No Windows machine and no display are required.
#
# Requirements: wine64 (>= 9.0), xvfb, curl, python3.
#
# Usage:
#   desktop/windows/tools/run_studio_verify.sh [exe] [samples_dir] [www_root] [port]
set -uo pipefail

REPO_ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/../../.." && pwd)"
EXE="${1:-$REPO_ROOT/desktop/windows/dist/NorMakerStudio.exe}"
SAMPLES="${2:-$REPO_ROOT/app/src/main/assets/www/samples}"
WWW="${3:-$REPO_ROOT/app/src/main/assets/www}"
PORT="${4:-8765}"
PREFIX="${WINEPREFIX:-$HOME/.wineprefix-nor}"
BASE="http://127.0.0.1:$PORT"

export WINEPREFIX="$PREFIX"
export WINEDEBUG="${WINEDEBUG:--all}"
export WINEDLLOVERRIDES="${WINEDLLOVERRIDES:-mscoree,mshtml=}"
export NORMAKER_WWW="$WWW"

echo "=== wine: $(wine --version 2>&1 | tail -1) ==="
if ! xdpyinfo -display :99 >/dev/null 2>&1; then
    pkill -f 'Xvfb :99' 2>/dev/null
    Xvfb :99 -screen 0 1280x800x24 >/tmp/nor-studio-xvfb.log 2>&1 &
    sleep 2
fi
export DISPLAY=:99
timeout 300 wineboot -u >/tmp/nor-studio-wineboot.log 2>&1

pkill -f NorMakerStudio.exe 2>/dev/null
sleep 1
cd "$REPO_ROOT" || exit 1
( wine "$EXE" --serve="$PORT" --bind-all >/tmp/nor-studio-run.log 2>&1 & )
for _ in $(seq 1 40); do
    sleep 1
    curl -s -m 2 -o /dev/null "$BASE/nor_pc_bridge.js" && break
done

status=0
step() { echo; echo "=== $1 ==="; }

step "shell log"
head -5 /tmp/nor-studio-run.log

step "1) editor UI + assets served"
curl -s -o /tmp/nor-studio-index.html -w 'index.html -> HTTP %{http_code}, %{size_download} bytes\n' "$BASE/index.html"
echo "title: $(grep -o '<title>[^<]*</title>' /tmp/nor-studio-index.html | head -1)"
echo "bridge injected: $(grep -c 'nor_pc_bridge.js' /tmp/nor-studio-index.html)"
curl -s -o /dev/null -w 'nor_pc_bridge.js -> HTTP %{http_code} (%{size_download} bytes)\n' "$BASE/nor_pc_bridge.js"
curl -s -o /dev/null -w 'vendor/three.r128.min.js -> HTTP %{http_code} (%{size_download} bytes)\n' "$BASE/vendor/three.r128.min.js"

step "2) bridge identity"
curl -s -X POST --data 'method=coreIdentity' "$BASE/rpc"; echo
curl -s -X POST --data 'method=status' "$BASE/rpc"; echo

step "3) engine: load GMK by path, step, frame"
GMK_WIN="Z:$(printf '%s' "$SAMPLES/mario_bros.gmk" | tr '/' '\\')"
curl -s -X POST --data-urlencode "method=engine.load" --data-urlencode "arg=$GMK_WIN" "$BASE/rpc"; echo
curl -s -X POST --data 'method=engine.step&arg=300' "$BASE/rpc"; echo
curl -s -X POST --data 'method=engine.frameMeta' "$BASE/rpc"; echo
curl -s -o /tmp/nor-studio-frame.bmp -w 'engine/frame.bmp -> HTTP %{http_code} (%{size_download} bytes)\n' "$BASE/engine/frame.bmp"
curl -s -o /tmp/nor-studio-frame-small.bmp -w 'engine/frame.bmp?maxw=384 -> HTTP %{http_code} (%{size_download} bytes)\n' "$BASE/engine/frame.bmp?maxw=384"

step "4) GMK probe + load by bytes"
python3 - "$SAMPLES/shooter.gmk" "$BASE/rpc" <<'PY'
import base64, sys, urllib.parse, urllib.request
path, rpc = sys.argv[1], sys.argv[2]
data = open(path, 'rb').read()
body = urllib.parse.urlencode({'method': 'gmk.probe', 'arg': base64.b64encode(data).decode()}).encode()
print('probe:', urllib.request.urlopen(rpc, body, timeout=20).read().decode())
body = urllib.parse.urlencode({'method': 'engine.loadBase64', 'arg': base64.b64encode(data).decode()}).encode()
print('loadBase64:', urllib.request.urlopen(rpc, body, timeout=30).read().decode())
PY
curl -s -X POST --data 'method=engine.step&arg=60' "$BASE/rpc"; echo
curl -s -X POST --data 'method=engine.frameMeta' "$BASE/rpc"; echo

step "5) failure paths"
curl -s -X POST --data-urlencode 'method=engine.load' --data-urlencode 'arg=Z:\nope\missing.gmk' "$BASE/rpc"; echo
curl -s -X POST --data 'method=nope' "$BASE/rpc"; echo
curl -s -o /dev/null -w '/../index.html -> HTTP %{http_code}\n' --path-as-is "$BASE/../index.html"

step "done"
pkill -f NorMakerStudio.exe 2>/dev/null
exit "$status"