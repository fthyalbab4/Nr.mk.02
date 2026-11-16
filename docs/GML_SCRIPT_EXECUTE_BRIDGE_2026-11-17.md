# GML Script Execute Bridge — 2026-11-17

## المشكلة

كان `script_execute(script_index, argument0, ...)` يمرر مصفوفة arguments كاملة إلى `gm82_gml_call_script`. لذلك كان رقم الـscript نفسه يصل إلى السكربت كـ`argument0`، وكانت الوسائط الحقيقية تنزاح موضعاً واحداً. مثال: `script_execute(0, 5)` كان يقيّم السكربت كما لو أن `argument0 == 0`، فيعيد نتيجة خاطئة.

## الإصلاح

أصبح evaluator يمرر `args + 1` وعدد الوسائط `nargs - 1` إلى callback، مع إبقاء رقم الـscript منفصلاً. تم الحفاظ على مسار الاستدعاء المباشر باسم script وعلى callbacks الخاصة بـ`ds_list` دون استبدالها.

## التحقق

تمت إضافة regression إلى `test_gml_ds_callbacks.c` يتحقق من `script_find` و`script_exists` ثم يشغّل `script_execute(0, 5)` ويتوقع نتيجة صحيحة. النتائج:

- `verify_core_mirrors.py`: PASS.
- `DS_LIST_CALLBACKS_TEST_PASS`.
- `ENGINE_TESTS_PASS=54/54`.
- Host gates: `HOST GATES OK`.
- Host pipeline: أربع عينات ناجحة `expected=4 ok=4 fail=0`.

لم يتم رفع التعديل قبل فشل المحاولة الأولى؛ تم الاحتفاظ بالإصلاح النهائي فقط بعد إعادة الاختبار الكامل بنجاح.
