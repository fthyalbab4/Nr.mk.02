# NOR Maker — Android GM82/GMK runtime (عمل قيد التطوير)

محرك/نواة لإعادة تشغيل مشاريع **Game Maker 8.2 / GMK** على Android.

> **تحذير صادق:** هذا **ليس** IDE كامل ولا «محاكاة 100% مثل ويندوز» بعد.  
> ما هو مُثبت اليوم: مسار **host** (load → decode → step → soft draw) على عينات GMK، وتجهيز JNI/WebView.

## الحالة المختصرة

انظر **`STATUS.md`** و **`GAPS_HONEST.md`** و **`REPORTING_RULES.md`**.

| | |
|--|--|
| Host pipeline 4 عينات | OK |
| Host native SO smoke | OK |
| APK + NDK على جهاز | غير مُثبت في بيئة التوثيق هذه |
| نسبة host تقديرية | ~55–65% |

## هيكل مهم

- `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/` — نواة C + android JNI
- `assets/www/` — جسر JS للحلقة الأصلية
- `tools/` — اختبارات host pipeline / SO smoke
- `STEP_LOG.md` — سجل خطوات فعلية

## بناء host (بدون NDK)

```bash
# مثال — راجع tools/run_host_pipeline.sh إن وُجد
gcc -O2 -Iinclude -o pipeline_test tools/host_pipeline_test.c src/*.c ... -lz -lm
./pipeline_test samples/mario_bros.gmk 30
```

## بناء Android

يحتاج **Android NDK**. انسخ `android/CMakeLists.txt` إلى `app/src/main/cpp/` وطبق `gradle_native_snippet.gradle`، ثم:

```bash
./gradlew assembleDebug
```

ثم احقن `NorNative` في WebView (`NorNativeWebBridge`).

## قواعد للوكلاء

أي تقرير جديد **يجب** أن يلتزم بـ `REPORTING_RULES.md`.  
ممنوع تضخيم النسب أو إعلان اكتمال phases من غير دليل.
