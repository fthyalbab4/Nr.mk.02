# تنفيذ `with` المتداخل — 2026-11-10

## ما تم تنفيذه

- أضيف تنفيذ مباشر لعقدة `GM82_AST_WITH` في مسار AST بدل تحويلها إلى نص غير كافٍ.
- أصبح مسار bytecode يحافظ على snapshot من instance IDs، ويتجاوز instances التي دُمّرت أثناء التنفيذ بأمان.
- دُعم الاستهداف الرمزي المتوافق مع GM8.2: `self` و`other` و`all` و`noone`، مع الإبقاء على selectors الرقمية القديمة مثل `-3`.
- استُعيد `self` و`other` بعد كل `with`، بما في ذلك nested scopes.
- عولج تقسيم blocks المتداخلة في evaluator النصي حتى لا تُفقد بقية العبارات بعد أول `}`.
- نُسخت ملفات النواة المعدلة إلى مرآة `app/src/main/cpp_backup` وحزمة `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`.

## الاختبار

أضيف fixture جديد: `app/src/main/cpp/tests/test_gml_with_nested.c`، ويغطي ثلاثة مسارات:

1. AST executor.
2. Bytecode compiler/executor.
3. evaluator النصي المباشر.

ويتحقق من nested `with(self)` و`with(other)`، وتطبيق `with(all)`، وعدم تنفيذ `with(noone)`، واستعادة السياق.

النتيجة المقاسة:

- `ENGINE_TESTS_PASS=40/40`
- `PIPELINE_OK`
- `SUMMARY expected=4 ok=4 fail=0`
- `RESULT OK`
- `CORE_MIRRORS_PASS`

## الحدود المتبقية

هذا يغلق فجوة تنفيذ `with` داخل النواة والـevaluator، لكنه لا يعني تكافؤًا كاملًا مع GameMaker Portable. ما زالت المقارنة السلوكية على جهاز Android، User Events، Outside/Boundary/Animation End، وبعض ميزات collision وDnD بنودًا مفتوحة في الخطط.
