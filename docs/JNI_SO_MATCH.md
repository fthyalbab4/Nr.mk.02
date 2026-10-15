# JNI ↔ SO match (evidence from APK + jniLibs)

## Fact
Shipped `libgm82_android.so` exports **only**:
`Java_com_normaker_nativefull_MainActivity_*`

It does **not** export `Java_com_normaker_gm82_Gm82Native_*`.

## Consequence
- `Gm82Native.nativeStep()` / `nativeDraw()` → UnsatisfiedLinkError with current SO
- Working path in the uploaded APK: `MainActivity.nativeRuntimeStep` + inner `NativeBridge` as `window.NorNative`

## Action taken
Restore `MainActivity.java` from decompiled working APK so Java declarations match the SO.
Keep `Gm82Native` / `Gm82SurfaceView` in tree for future SO rebuild that includes those symbols — do not delete.

## Host / C patches
Still apply via `bash tools/gap_fill_20261013/ASSEMBLE.sh` (event order, xprevious, scaled AABB).
Those change **source**; the APK SO will not include them until someone rebuilds the SO (user said no new NDK for now).
