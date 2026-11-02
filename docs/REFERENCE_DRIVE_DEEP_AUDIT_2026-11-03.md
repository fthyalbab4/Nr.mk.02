# التدقيق العميق لنسخ Google Drive — 2026-11-03

## النطاق

تمت مراجعة النسخة المتداخلة داخل `NM.Maker.0.1.0`، وبالأخص:

- `NorMaker-0_extracted/android_project_base`
- `Nor-maker-7-main`
- `fixed_android_apk_2026-09-05`
- ملفات التحقق والـ manifests والأصول المشتركة.

المصدر الخام محفوظ خارج المستودع في `/home/ubuntu/reference-drive-20261102/`.

## نتيجة مقارنة النواة native

الملف المرجعي الأكبر `gm82_android_core.c` هو نواة monolithic أقدم. يحتوي على وظائف مثل `gm82_eval_expression` و`gm82_spawn_instance` و`gm82_instance_overlaps_*` و`gm82_script_call`، لكن هذه الوظائف ليست مفقودة فعليًا من `Nr.mk.02`؛ فقد أعيد تنظيمها إلى وحدات أحدث تشمل:

- `gm82_project_ir.c` و`gm82_loader.c`
- `gm82_gmk_reader.c` و`gm82_actions_gmk8.c`
- `gm82_gml_eval.c` و`gm82_gml_builtins.c`
- `gm82_runtime.c` ووحدات الأحداث والتصادم والموارد
- `gm82_text_reader.c` و`gm82_text_materialize.c`

نسخ الدوال القديمة حرفيًا كانت ستعيد مسارات تنفيذ متوازية وتخاطر بإلغاء حمايات الحدود وخلط الـ ABI. لذلك لم يتم نقل `gm82_android_core.c` أو أي ملف native monolithic فوق البنية الحالية.

## نتيجة مقارنة CMake وAndroid

ملف CMake المرجعي يبني قائمة صغيرة من الملفات القديمة فقط. أما CMake الحالي فيستخدم `GLOB` مضبوطًا ويضم وحدات `src/*.c`، مع ربط JNI وzlib وOpenGL ES وEGL وOpenSL ES. لم يتم استبدال إعداد البناء الحالي لأن المرجع لا يضيف ABI أو حماية أو ميزة قابلة للتحقق.

## اختبارات وملفات التحقق

تم التأكد من أن ملفات التحقق المفيدة الموجودة في النسخة القديمة موجودة بالفعل في المشروع الحالي، بما في ذلك:

- `gml_do_until_test.c`
- `gml_invoke_test.c`
- `gm82_corpus_manifest.json`
- `gmk_phase12_manifest.json`
- `GMK_ROOM_ANDROID_RESTORE_REPORT.md`
- إشعارات OpenGMK ومعلومات الترخيص
- خط Press Start 2P

وقد أضيف اختبارا GML المرجعيان إلى `tools/run_engine_suite.py` في الجولة السابقة، ونجحا ضمن بوابة الاختبارات.

## فحص Studio/WebView

مشروع `Nor-maker-7-main` هو Studio/Electron/TypeScript مستقل، وليس drop-in source لنواة Android. يحتوي على أدوات مفيدة نظريًا مثل parser/converter وواجهات التحرير، لكنها مرتبطة ببيئة Electron وReact وملفات تشغيل خاصة بالمشروع، وليست scripts مستقلة قابلة للنقل دون تصميم تكامل منفصل.

الأخطر أن النسخة المجمعة داخل `NorMaker-0_extracted/android_project_base/app/src/main/assets/index.html` تحتوي على كتلة `PRIVATE_KEY_PEM` بمفتاح RSA خاص مضمّن. كما تحتوي مسارات WebView على `eval` لتنفيذ إجراءات GML/الواجهة. لذلك تم استبعاد ما يلي بالكامل:

- `utils/apkSigner.ts`
- `index.html` المجمّع
- `temp_engine.js`
- حزم signer وAPK القديمة
- أي ملفات قد تنقل المفتاح أو مسار `eval` إلى التطبيق الحالي

## قرار النقل

لم يتم نقل كود native قديم أو Studio bundle أو signer. ما تم اعتباره مفيدًا ومُنقلًا فعليًا هو:

1. اختبارات regression المرجعية `do-until` و`invoke/scope`.
2. إصلاح دعم معاملات الإسناد المركبة في GML، بعد أن كشفها اختبار `do-until`.
3. توثيق نتائج المقارنة وسبب رفض النسخ الأقدم.

هذا القرار يحافظ على البنية الحالية وحمايات runtime وpipeline التوقيع الجديد، ويمنع تكرار الوظائف أو إعادة إدخال أسرار.

## التحقق الحالي

آخر تشغيل كامل لبوابة الاختبارات أعطى:

```text
RESULT OK
SUMMARY ok=4 fail=0
```

ولا يثبت ذلك بناء APK داخل البيئة الحالية؛ Android SDK/NDK غير متاحين هنا، وحالة البناء الفعلية موثقة في `GAPS_HONEST.md`.

## الخطوة التالية الآمنة

إذا كان المطلوب دمج Studio فعلًا، فيجب أن يكون مشروعًا منفصلًا ومقصودًا: استخراج parser/converter آمن إلى package مستقل، إزالة `eval`، تدوير أي مفاتيح ظهرت في النسخ القديمة، ثم إضافة اختبارات schema وround-trip قبل ربطه بتطبيق Android. لا يصح نسخ مجلد Studio كامل إلى `Nr.mk.02` باعتباره تكاملًا للمحرك.
