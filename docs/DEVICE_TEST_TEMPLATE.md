# Device Test Checklist Template

## 1. Test Environment Details
- **Device Model**:
- **Android Version**:
- **APK SHA**: `2d5145f894a76f4359db2f7aa9af5eb6b6735ea8`
- **Build Link / Artifact Path**: `app/build/outputs/apk/debug/app-debug.apk`
- **Tester / Date**:

---

## 2. Sample Game Test Matrix

| Sample Game | Black Screen (Y/N) | Movement Working (Y/N) | Crash (Y/N) | Notes / Behavior Observed |
| :--- | :---: | :---: | :---: | :--- |
| **mario_bros** | | | | |
| **plataformas** | | | | |
| **shooter** | | | | |
| **zelda** | | | | |

*Note: Results should be filled during real hardware/emulator testing. Do not pre-fill test results.*

---

## 3. Recommended Logcat Filter Command

To monitor logs during sample execution on device:
```bash
adb logcat -v time | grep -E "Nor|gm82|AndroidRuntime"
```
Or in Android Studio logcat filter query:
`tag:Nor | tag:gm82 | tag:AndroidRuntime`
