# Device-blocked items (2026-11-04)

These cannot be closed in CI/host sandbox. Checklist for a physical device or emulator:

## U2 / playtest + logcat
```bash
./gradlew installDebug
adb logcat -c
adb shell am start -n com.normaker.nativefull/.MainActivity
# play mario sample 30s
adb logcat -d | grep -E 'UNMAPPED_ACTION|FATAL|AndroidRuntime' | tee docs/logcat_playtest.txt
```
Close when: no FATAL, and any UNMAPPED_ACTION lines filed as follow-up handlers.

## U3 APK native
- Confirm `libgm82_android.so` loads on arm64-v8a
- Confirm NES runner `NorNative.keyDown` moves player after `apply_keydown_bridge.py`

## U5 OpenSLES
- Play a room with sound; confirm audible output and no OpenSLES error spam in logcat

## U4 REA/DLL/GEX
- Not applicable on pure Android NDK runtime; track only if Windows desktop runner is revived.
