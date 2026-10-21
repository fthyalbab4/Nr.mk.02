# Step B — Native loop wiring (done on main)

## Problem found (evidence from repo files)
- `MainActivity` loaded WebView + `Gm82SurfaceView` but **never** called `addJavascriptInterface(..., "NorNative")`.
- Package copy of `NorNativeWebBridge` called `Gm82Native.tick()` / `step()` which **do not exist**.
- Real JNI names: `nativeStep`, `nativeDraw`, `nativeIsRunning`, `nativeLoadGame`, ...

## Fix applied (completion, not replacement)
1. Added `app/src/main/java/com/normaker/gm82/NorNativeWebBridge.java` mapping to real JNI.
2. Updated `MainActivity` to register `NorNative` on the WebView.

## Two loops (both valid)
| Path | Who ticks |
|------|-----------|
| `Gm82SurfaceView` | GL `onDrawFrame` → `nativeStep` + `nativeDraw` |
| WebView + JS | `NorNativeLoop.onFrame` → `NorNative.tick` → `nativeStep` |

Uses existing `jniLibs/*/libgm82_android.so`. No new NDK required for this step.

## Not proven yet
Device playtest. Rebuild APK and run one GMK sample.
