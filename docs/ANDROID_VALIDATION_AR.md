# نتيجة التحقق الفعلي من Android

تم تجهيز Android SDK محليًا وتشغيل Gradle باستخدام:

- Platform Android 34
- Build Tools 34.0.0
- NDK 25.2.9519653
- CMake 3.22.1
- Emulator system image Google APIs x86_64
- AVD باسم `NOR_API34`

## النتيجة

نجح بناء APK Debug فعليًا بعد إصلاح الفجوات التالية:

1. تفعيل توليد `BuildConfig` للـdebug-only probe.
2. تصحيح include guard المتعارض في `GMK_FORMAT_CONTRACT.h`.
3. تقديم event registry قبل helpers التي تستخدمه.
4. توحيد `gm82_resource_status` في header الجذري الذي يسبق headers الأخرى في CMake.
5. إزالة duplicate symbols الخاصة بـGMK probe وsound queue من JNI واستخدام implementations الموجودة في `src`.
6. ربط `nativeRuntimeSetRoomSpeed` بالحقل `room_speed` الموجود فعليًا بدل API غير موجودة.

آخر APK ناجح:

```text
app/build/outputs/apk/debug/app-debug.apk
SHA-256: 5877c742729cb0d7f42217e64c98e24d9f9b474193631d706ecb601dc4f93717
```

## Emulator smoke

تم تشغيل QEMU/AVD في software mode لأن البيئة لا توفر `/dev/kvm`. وصل الـEmulator إلى مرحلة التهيئة، لكنه ظل ظاهرًا في `adb devices` بحالة `offline` حتى انتهاء المهلة؛ لذلك لم يتم تسجيل نتيجة `NOR_SMOKE_RESULT` ولم يُعلن نجاح اختبار الجهاز.

التحقق المتبقي الوحيد هو تشغيل نفس السكريبت على جهاز Android فعلي أو Cloud/CI runner يدعم KVM وADB مستقرًا:

```bash
./tools/run_android_emulator_smoke.sh --avd NOR_API34
```

لا توجد فجوة كود معروفة تمنع البناء حاليًا؛ القيد المتبقي بيئي في تشغيل ADB/Emulator داخل هذه الساندبوكس.
