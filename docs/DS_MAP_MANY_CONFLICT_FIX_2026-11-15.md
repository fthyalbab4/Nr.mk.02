# حل تعارض ds_map_set_many — 2026-11-15

أثناء تطبيق سكربت استخراج `ds_map_set_many` ظهر تعارض ربط حقيقي: كان `gm82_batch4_extras.c` يعرّف stub باسم `gml_ds_map_set_many(void)`، بينما أضاف الاستخراج جسماً حقيقياً في `gm82_gml_builtins.c`. إبقاء التعريفين كان يؤدي إلى `multiple definition` أثناء الربط.

الحل المحافظ هو الاحتفاظ بالتنفيذ الحقيقي في `gm82_gml_builtins.c`، وإزالة stub وتعريف التسجيل المقابل من `gm82_batch4_extras.c` في المرايا الثلاث. لم يتم استخدام `ours/theirs` على النواة ولم يتم حذف أي implementation حقيقي.

أضيف regression ينشئ خريطة، يكتب أزواجاً متعددة، يقرأها، ثم يستدعي `ds_map_set_many` عبر evaluator نفسه للتحقق من dispatch، وبعدها يحرر الخريطة.

نتائج التحقق:

- `python3 tools/verify_core_mirrors.py`: **PASS**.
- `python3 tools/run_engine_suite.py`: **ENGINE_TESTS_PASS=54/54**.
- Host pipeline: **SUMMARY expected=4 ok=4 fail=0**.
- `make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX gates`: **HOST GATES OK**.

هذا الإصلاح يثبت أن استخراج الوظيفة يمكن دمجه دون إعادة PR #405 بالكامل أو استعادة stubs قديمة.
