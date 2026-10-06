# Android JNI – Native Loop

See **NATIVE_LOOP_INTEGRATION.md** for the full contract.

Quick status:
- `gm82_native_step` / `gm82_native_draw` / `gm82_native_tick` implemented
- Soft RGBA framebuffer (not GLES yet)
- JS helper: `nor_native_loop_bridge.js` → `NorNativeLoop.onFrame`
- Java: `com.normaker.gm82.Gm82Native`
- Legacy JNI names for `com.normaker.nativefull.MainActivity` included in `gm82_jni_java_bridge.c`
