# اختبار Android Emulator الآلي

السكريبت `tools/run_android_emulator_smoke.sh` يبني نسخة Debug، يختار جهازًا متصلًا أو يشغل AVD، يثبت APK، يبدأ `MainActivity` بوضع probe اختباري، ويرسل مؤثرات Android حقيقية عبر `adb input` تشمل أزرار لوحة المفاتيح واللمس والسحب. يتم حفظ `logcat` و`dumpsys activity` وواجهة UI في تقرير مستقل.

يحتوي Debug APK على probe deterministic لا يعمل إلا عند تمرير `nor_emulator_smoke=true`. الـprobe يجهز objects/events من نفس JNI APIs، ثم يختبر Collision وAlarm وKeyboard وMouse ويطبع:

```text
NOR_SMOKE_RESULT={"collision":true,"alarm":true,"keyboard":true,"mouse":true}
```

## التشغيل

من جذر المشروع:

```bash
./tools/run_android_emulator_smoke.sh --avd Pixel_2_API_34
```

مع emulator متصل مسبقًا:

```bash
ANDROID_SERIAL=emulator-5554 ./tools/run_android_emulator_smoke.sh
```

لإعادة استخدام APK موجود:

```bash
./tools/run_android_emulator_smoke.sh --no-build --serial emulator-5554
```

لإبقاء emulator يعمل بعد الاختبار:

```bash
./tools/run_android_emulator_smoke.sh --avd Pixel_2_API_34 --keep-emulator
```

توجد النتائج تحت `build/emulator-smoke-<timestamp>/`، وأهم الملفات `summary.txt` و`logcat.txt` و`gradle.log` و`ui.xml`.

## متطلبات التشغيل

- Android SDK مع `adb` و`emulator`.
- AVD يعمل على ABI متوافق مع APK.
- Android SDK Platform 34 وBuild Tools/NDK/CMake التي يطلبها Gradle.

إذا لم تتوفر أدوات Android أو AVD، يتوقف السكريبت برسالة واضحة ولا يدعي نجاح الاختبار. اختبارات `adb input` تتحقق من تسليم إدخال Android، بينما الـprobe يتحقق من semantics الأصلية لمسارات الأحداث الأربعة.
