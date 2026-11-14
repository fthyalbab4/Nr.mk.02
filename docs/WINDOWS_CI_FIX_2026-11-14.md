# إصلاح Windows CI — 2026-11-14

## المشكلة

كان بناء Windows x64 في GitHub Actions يصل إلى مرحلة الربط ثم يفشل لأن MinGW استقبل استدعاءات `clock_gettime` من `gm82_runtime.c` وحوّلها إلى الرمز `clock_gettime64` غير المتوفر في بيئة الربط المستخدمة:

```text
undefined reference to `clock_gettime64'
```

## الإصلاح

أصبح `perf_now_ns()` يستخدم `QueryPerformanceCounter` و`QueryPerformanceFrequency` عند البناء مع `_WIN32`، مع إبقاء `clock_gettime(CLOCK_MONOTONIC, ...)` لمسارات Linux وAndroid. تمت مزامنة الملف نفسه إلى النسخ الثلاث للنواة:

- `app/src/main/cpp/src/gm82_runtime.c`
- `app/src/main/cpp_backup/src/gm82_runtime.c`
- `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_runtime.c`

## التحقق

- `python3 tools/verify_core_mirrors.py`: **PASS** — 108 ملفاً متطابقاً في كل مرآة.
- `python3 tools/run_engine_suite.py`: **PASS** — `ENGINE_TESTS_PASS=54/54` و`SUMMARY expected=4 ok=4 fail=0`.
- بوابات HOST السابقة على نفس baseline: **HOST GATES OK**.

سيتم اعتماد نجاح إصلاح Windows النهائي من تشغيل GitHub Actions الجديد بعد دفع هذا التغيير؛ لا يتم اعتبار Artifact Windows مؤكداً قبل ظهور تشغيل CI ناجح.
