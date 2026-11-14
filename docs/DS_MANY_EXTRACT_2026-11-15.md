# تنفيذ ds_*_many — 2026-11-15

## المصدر والقرار

تم أخذ الجزء المعزول القابل للتحقق من PR #405 بدلاً من دمج PR بالكامل. لم يتم لمس `gm82_gml_bytecode.c` أو منطق `with()` أو تغيير أنواع runtime الحساسة.

## التغييرات

تمت إضافة ومزامنة:

- `gml_ds_grid_set_many`
- `gml_ds_priority_add_many`
- dispatch للاسمين داخل `gm82_gml_eval.c`
- declarations في `gm82_gml_builtins.h` الموجودة مسبقاً
- regression في `test_gml_native_builtin_calls.c`

التغييرات مطبقة على المرايا الثلاث: canonical و`cpp_backup` و`BLACKSCREEN_FIX`.

## التحقق

- `python3 tools/verify_core_mirrors.py`: **PASS** — المرايا متطابقة.
- regression grid: يكتب ويقرأ ثلاث خلايا متعددة في استدعاء واحد.
- regression priority: يضيف ثلاث قيم ويعيد أعلى أولوية صحيحة.
- `python3 tools/run_engine_suite.py`: **ENGINE_TESTS_PASS=54/54**.
- Host pipeline: **SUMMARY expected=4 ok=4 fail=0**.
- النتيجة النهائية: **RESULT OK**.

لم يتم دمج PR #405 كاملاً، لأن بقية التغييرات تمس مسارات حساسة أو مختلطة وتحتاج اختبارات مستقلة.
