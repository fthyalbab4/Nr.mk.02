# NOR Maker — Android GM82/GMK runtime (عمل قيد التطوير)

محرك/نواة لإعادة تشغيل مشاريع **Game Maker 8.2 / GMK** على Android.

> **تحذير صادق:** هذا **ليس** IDE كامل ولا «محاكاة 100% مثل ويندوز» بعد.  
> ما هو مُثبت اليوم: اختبارات host للمحرك ومسار تشغيل Android الموحد الذي يستضيف Studio في WebView ومشغل GM82 الأصلي عبر JNI. يلزم بناء APK واختباره على جهاز/محاكي Android للتحقق من التكامل الكامل.

## الحالة المختصرة

انظر **`STATUS.md`** و **`GAPS_HONEST.md`** و **`REPORTING_RULES.md`**.

| | |
|--|--|
| Host pipeline 4 عينات | OK |
| Host native SO smoke | OK |
| APK + NDK على جهاز | غير مُثبت في بيئة التوثيق هذه |
| نسبة host تقديرية | ~55–65% |

## هيكل مهم

- `app/src/main/` — تطبيق Android الموحد وواجهة Studio ومشغل JNI
- `app/src/main/assets/www/vendor/` — تبعيات الواجهة المحلية
- `tests/reference/` و `app/src/main/cpp/tests/` — اختبارات مرجعية واختبارات host
- `tools/` — فحوص المحرك، فهرسة موارد GMK، واختبارات الاستيراد
- `STEP_LOG.md` — سجل خطوات فعلية

## بناء host (بدون NDK)

```bash
# مثال — راجع tools/run_host_pipeline.sh إن وُجد
gcc -O2 -Iinclude -o pipeline_test tools/host_pipeline_test.c src/*.c ... -lz -lm
./pipeline_test samples/mario_bros.gmk 30
```

## بناء Android

يتطلب **Android SDK وNDK**. إعداد CMake وNDK مضاف إلى المشروع؛ بعد تثبيت المتطلبات:

```bash
./gradlew assembleDebug
```

يسجل `MainActivity` جسر `NorNative` في WebView ويضم مشغل GM82 الأصلي في النشاط نفسه.

## قواعد للوكلاء

أي تقرير جديد **يجب** أن يلتزم بـ `REPORTING_RULES.md`.  
ممنوع تضخيم النسب أو إعلان اكتمال phases من غير دليل.
