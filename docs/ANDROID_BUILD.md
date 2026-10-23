# Android build path (from repo code)

Package: `com.normaker.nativefull`  
Entry: `app/src/main/java/com/normaker/nativefull/MainActivity.java`  
Native: `app/src/main/cpp/gm82_jni.c`

## Engine path (code-verified symbols)
1. `nativeRuntimeCreate(width, height)`
2. `nativeImportGmkSnapshot(bytes, outputDir)` → decode + `gm82_runtime_goto_room(..., 0)`
3. Loop: `nativeRuntimeStep(delta)` → `nativeRuntimeRenderBitmap(bitmap)`
4. Input: `nativeRuntimeKey(keyCode, down)`
5. Optional: `nativeRuntimeExecuteGml`, `nativeRuntimeConsumeSoundCommands`

## Build (on a machine with Android SDK/NDK)
```bash
./gradlew :app:assembleDebug
# APK: app/build/outputs/apk/debug/app-debug.apk
```

## Device status
**UNVERIFIED on device** in audit host environments without a phone/emulator run.
