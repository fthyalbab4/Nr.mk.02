#!/usr/bin/env python3
"""Apply StudioNativeBridge keyDown/keyUp/key → nativeRuntimeKey patch to MainActivity.java"""
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]
TARGET = ROOT / "app/src/main/java/com/normaker/nativefull/MainActivity.java"

OLD = (
    "        @JavascriptInterface public void step(float delta) { synchronized (nativeLock) { nativeRuntimeStep(delta); drainNativeSoundCommands(); } }\n"
    "        @JavascriptInterface public boolean registerSound(int soundId, String path) { return registerSoundResource(soundId, path); }"
)
NEW = (
    "        @JavascriptInterface public void step(float delta) { synchronized (nativeLock) { nativeRuntimeStep(delta); drainNativeSoundCommands(); } }\n"
    "        /** Inject keyboard state from WebView / NES on-screen controls (vk = Windows VK code). */\n"
    "        @JavascriptInterface public void keyDown(int vk) { synchronized (nativeLock) { nativeRuntimeKey(vk, true); } }\n"
    "        @JavascriptInterface public void keyUp(int vk) { synchronized (nativeLock) { nativeRuntimeKey(vk, false); } }\n"
    "        @JavascriptInterface public void key(int vk, boolean down) { synchronized (nativeLock) { nativeRuntimeKey(vk, down); } }\n"
    "        @JavascriptInterface public boolean registerSound(int soundId, String path) { return registerSoundResource(soundId, path); }"
)

def main() -> int:
    if not TARGET.exists():
        print("missing", TARGET)
        return 1
    text = TARGET.read_text(encoding="utf-8")
    if "public void keyDown(int vk)" in text:
        print("already applied")
        return 0
    if OLD not in text:
        print("anchor not found — MainActivity layout changed")
        return 2
    TARGET.write_text(text.replace(OLD, NEW, 1), encoding="utf-8")
    print("applied keyDown/keyUp/key to", TARGET)
    return 0

if __name__ == "__main__":
    sys.exit(main())
