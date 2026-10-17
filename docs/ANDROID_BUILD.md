# Android Build Guide for NOR Maker 8.2

This document provides exact instructions to assemble, compile, and build the NOR Maker Android application package (APK) using the actual Gradle build configuration in this repository.

---

## 1. Prerequisites

- **Java Development Kit (JDK)**: JDK 17 or JDK 11
- **Android SDK**: Android API Level 34 (Android 14) with Build Tools installed.
- **Android NDK**: Required for native C engine compilation (`app/src/main/cpp/`).
- **Gradle**: Pre-configured Gradle Wrapper (`./gradlew`) or installed system Gradle.

---

## 2. Project & Native C Architecture

The Android application is structured as follows:
- **Java Activity**: `app/src/main/java/com/normaker/nativefull/MainActivity.java`
- **Native JNI Glue**: `app/src/main/cpp/gm82_jni.c`
- **Native C Engine Runtime**: `app/src/main/cpp/src/` & `app/src/main/cpp/include/`
- **Native CMake File**: `app/src/main/cpp/CMakeLists.txt`
- **Native Input API**: `app/src/main/cpp/src/gm82_input.c`

---

## 3. End-to-End JNI Execution Flow

The JNI execution path operates as follows:
1. `nativeRuntimeCreate(width, height)`: Initializes global runtime state (`g_engine_rt`) and input state (`g_engine_input`).
2. `nativeImportGmkSnapshot(bytes, outputDir)`: Decodes GMK asset chunks (sprites, backgrounds, objects, rooms, scripts), builds sprite groups, binds assets, initializes the input system (`gm82_input_bind_global`), and navigates to the start room (`gm82_runtime_goto_room`).
3. `nativeRuntimeKey(keyCode, down)` / Touch Listener: Updates key state in `g_engine_input` for movement controls (`VK_LEFT`, `VK_RIGHT`, `VK_UP`, `VK_DOWN`, `VK_SPACE`).
4. `nativeRuntimeStep(delta)`: Binds global input state, resets frame transient input states (`gm82_input_begin_frame`), and executes the native engine step cycle (`gm82_runtime_step`).
5. `nativeRuntimeRenderBitmap(bitmap)`: Validates active room state, locks ARGB_8888 bitmap buffer, executes native rendering (`gm82_runtime_draw`), and unlocks pixels safely. Safely clears background on unloaded room or render error.

---

## 4. Build Commands

### Assemble Debug APK
To compile native C source files and assemble the debug APK, execute:

```bash
gradle assembleDebug
```

Alternatively, using the Gradle wrapper:

```bash
./gradlew assembleDebug
```

### Output Artifact Location

The built APK will be located at:
```
app/build/outputs/apk/debug/app-debug.apk
```

---

## 5. Verification Status

- **Host & JNI Code Verification**: PASS (Verified via host test suite `python3 run_full_verification.py` and C unit verification).
- **Physical Android Device Verification**: **UNVERIFIED on device** (No physical Android hardware connected in automated CI sandbox environment).
