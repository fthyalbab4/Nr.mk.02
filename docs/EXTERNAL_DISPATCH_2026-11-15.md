# External dispatch — 2026-11-15

تم استخراج الجزء الآمن من PR #378 على مرحلتين. كان `gm82_external.c/.h` واختباره موجوداً على `main` كواجهة C معزولة، لكن أسماء `external_define` و`external_call` و`external_free` لم تكن مربوطة بمسار GML evaluator.

أضيف dispatch لهذه الأسماء في `gm82_gml_eval.c` على المرايا الثلاث، مع regression يستخدم نقطة الدخول `gm82_gml_eval_expr()` ويتحقق من تعريف slot، استدعاء غير صالح، ثم تحرير المكتبة. كما أضيف `gm82_external.c` إلى `tools/run_host_pipeline.sh` بعد أن كشف الاختبار الأول أن Host pipeline كان يربط evaluator بدون ملف bridge.

التحقق النهائي:

- `python3 tools/verify_core_mirrors.py`: **PASS**.
- `test_gml_native_builtin_calls`: **PASS**.
- `python3 tools/run_engine_suite.py`: **ENGINE_TESTS_PASS=54/54**.
- Host samples: **SUMMARY expected=4 ok=4 fail=0**.
- `make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX gates`: **HOST GATES OK**.

لم يتم تفعيل تحميل DLL عشوائي أو نسخ أي binary؛ الجسر يبقى محدوداً بواجهة C الموجودة واختبار فشل آمن لمكتبة غير موجودة.
