# تدقيق العمل المحلي قبل استكمال GM82 — 2026-11-07

## سبب إنشاء التقرير

كانت توجد نسخة محلية سابقة في `/home/ubuntu/gm82_reference_repos/Nr.mk.02` بلا metadata خاصة بـGit. قبل نقل أي تغيير منها، تمت مقارنتها مع `origin/main` الحالي على commit:

```text
c682f760e3716e2163e8327163efea8d1549e33b
```

لم يتم حذف النسخة المحلية أو استبدالها.

## نتيجة المقارنة

النسخة المحلية ليست clone كاملًا؛ تحتوي 28 ملفًا فقط مقارنةً بشجرة `main` الكاملة. الفروق الجوهرية ظهرت في:

- `gm82_events.c`
- `gm82_runtime.c`
- `gm82_gml_builtins.c`
- `gm82_gml_eval.c`
- `gm82_actions.c`
- `gm82_text_reader.c`
- `gm82_sound_runtime.c`
- `index.html`
- أدوات الاختبار والتقارير

المقارنة الرمزية أثبتت أن `main` الحالي يحتوي عددًا أكبر بكثير من الدوال الحديثة في النواة؛ لذلك لم يتم نسخ ملفات C المحلية كاملة فوق `main`.

## ما تم الاحتفاظ به أو التحقق منه

- تقارير `GM82_ANDROID_FULLCORE_SYNC_2026-10-21.md` و`GM82_FUNCTION_GAP_INVENTORY_2026-10-21.json` موجودة أصلًا في `main` وبنفس المحتوى.
- وظائف `instance_*` و`room_find` و`other` والصوت التي ظهرت كفروق محلية موجودة في `main` الحالي أو في ملفات أحدث، ولم تُعد من النسخة المحلية.
- مسار WebView المحلي أقدم من `main`؛ النسخة الحديثة تحتوي مسار مزامنة الغرفة الأصلي، لذلك لم يتم استبدال `index.html` المحلي بها.

## ما تم رفضه عمدًا

- ملفات محلية كاملة لأنها أقدم وتؤدي إلى حذف دوال موجودة في `main`.
- `gm82_sound_runtime.c` المحلي لأنه يحتوي علامات تعارض `<<<<<<<`, `=======`, `>>>>>>>` وتطبيقًا أقدم من الصوت الموجود في `main`.
- ملفات اختبارات محلية تحتوي علامات تعارض غير محلولة.
- أي ادعاء parity أو نجاح اختبار من تقرير قديم لم تتم إعادة تشغيله على `main` الحالي.

## أول إصلاح مثبت في هذا الفرع

تم إصلاح تحذيرين حقيقيين في البناء ومزامنتهما حرفيًا إلى المرآتين:

1. فحص طول مسار child قبل نسخه في `gm82_text_reader.c` بدل ترك `snprintf` قابلًا لتحذير truncation.
2. فحص نتيجة `system()` في `test_full_suite.c` بدل تجاهلها.

الملفات المتزامنة:

```text
app/src/main/cpp/src/gm82_text_reader.c
app/src/main/cpp_backup/src/gm82_text_reader.c
NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_text_reader.c
app/src/main/cpp/test_full_suite.c
app/src/main/cpp_backup/test_full_suite.c
NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/test_full_suite.c
```

## التحقق

على clone نظيف من `origin/main`، بعد الإصلاح:

```text
CORE_MIRRORS_PASS
ENGINE_TESTS_PASS=42/42
SUMMARY expected=4 ok=4 fail=0
RESULT OK
DIRECT_EXIT=0
```

هذه الخطوة لا تعني اكتمال GM82 أو تطابق Windows Portable؛ إنها فقط تثبيت baseline نظيف وإزالة تحذيرات البناء قبل الانتقال إلى فجوة وظيفية جديدة.
