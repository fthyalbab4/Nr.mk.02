# تحديث تنفيذ NOR Maker — 6 نوفمبر 2026

## خلاصة التنفيذ

أُنجزت دفعة متابعة على الفرع المحلي `fix/bytecode-with-mirror-regressions` انطلاقًا من commit `3760a105ac244d1ea1682df8681c99532fdefb80`. ظل `main` على الـSHA نفسه طوال العمل. لم يُنشأ commit أو PR ولم يُرفع شيء إلى GitHub.

هذه الدفعة لا تثبت «تطابقًا» أو «شبه تطابق» كاملًا مع Game Maker 8.2. إنها تعالج عيوبًا محددة، وتضيف اختبارات قابلة لإعادة التشغيل، وتوضح حدود ما تم التحقق منه.

## التغييرات المنفذة

1. **حصر مسارات مشروع GM82 النصي داخل جذر المشروع.** أضيف `gm82_text_path.h` للتحقق من المسار النسبي، رفض مكونات `.` و`..` والمسارات ذات الفواصل العكسية، وحلّ المسار عبر `realpath` قبل فتحه. استُخدم التحقق في قارئ المشروع ومهيئ sprites/backgrounds، بما يشمل ملفات الغرف وinstances وcreation code وlayers وdatafiles وtriggers وscripts وملفات الصور الوصفية، كما يرفض الروابط الرمزية التي ينتهي حلها خارج جذر المشروع.
2. **إثبات أمني قبل/بعد:** اختبار `test_gm82_text_reader_security` فشل قبل الإصلاح لأن `room.txt` خارج المشروع غيّر عرض الغرفة إلى `123` بدل القيمة الافتراضية `640`. بعد الإصلاح يثبت أن بيانات الغرفة الخارجية، وcreation code، وملف الطبقة، وبيانات trigger/datafile، ودليل sprite المرتبط برابط رمزي لا تُقرأ من خارج الجذر.
3. **إصلاح الكتابة إلى المصفوفات المتداخلة في typed VM.** أضيف حلّ recursive لوجهة الإسناد `a[i][j]`؛ ويثبت الاختبار أن `a[i][1] += 5` يعدّل المصفوفة الأصلية ثم يعطي القراءة `8`، بدل أن يحدّث نسخة مؤقتة أو يترك القيمة `3`.
4. **تقوية اختبار دورة الحدث.** أضيف trace يثبت في التنفيذ الحالي ترتيب Begin Step → Alarm 0 → Alarm 11 → Step → End Step، وأن الإنذارين يصبحان غير نشطين بعد الإطلاق ولا يعيدان الإطلاق في الإطار التالي. الـtrace الرقمي الناتج هو `12345` بعد الإطار الأول و`12345145` بعد الثاني. هذا اختبار لسلوك NOR الحالي، وليس مقارنة مرجعية مع Game Maker Portable.
5. **تحديث بوابات المرايا والاختبارات.** أُدرج اختبار أمان قارئ النص في قائمة engine suite؛ وتعمل ملفات المصدر والاختبارات على الأشجار الثلاثة المتفق عليها، بما فيها الملف الجديد `gm82_text_path.h`.

## نتائج التحقق

| الفحص | النتيجة المرصودة |
|---|---|
| اختبارات regression الحمراء قبل الإصلاح | اختبار traversal واختبار nested-array write فشلا كما هو متوقع، وكشفا الخللين المحددين. |
| `python3 tools/run_engine_suite.py` | **نجح:** `ENGINE_TESTS_PASS=39/39`. |
| Host pipeline | **نجح:** `SUMMARY expected=4 ok=4 fail=0` و`RESULT OK` لعينات Mario وPlataformas وShooter وZelda. |
| GM82 text-project/runtime ضمن engine suite | **نجح:** اختبارات `anvil` و`gm82path` وtext runtime؛ سجل الـruntime غرفة `room0` بقياس `320x80` و60 خطوة. |
| `make clean && make test` في Full Core | **نجح برمز خروج 0:** 33 هدف اختبار. الاختباران اللذان يتطلبان عينات text-project محلية طبعا `SKIP gm82 text samples not present` في سياق Full Core، لذلك لا أحتسبهما نجاحًا ضمن تلك البوابة. |
| الاختبارات الجديدة/الموسعة | أمان النص، nested/dynamic array write، وAlarm order/one-shot اجتازت في التشغيل العادي. |
| AddressSanitizer | اختبار أمان النص واختبار event-order/Alarm اجتازا بـASan مع `detect_leaks=0`؛ لم يكن هذا فحصًا لتسرب الذاكرة. |
| `verify_core_mirrors.py` | **نجح:** 55 ملف source و49 header و37 test و4 ملفات جذرية متطابقة في كل مرآة؛ CMake وMakefile اجتازا الفحص. |
| الاختبار السلبي لمدقق المرايا | **نجح:** التغيير أو الملف المفقود في mirror يفشل المقارنة. |
| `git diff --check` | **نجح:** لا أخطاء whitespace. |

ظهر تحذير ترجمة واحد في Full Core عند `src/gm82_actions.c:96` عن اقتطاع محتمل لـ`strncpy`. هذا الملف لم يتغير في هذه الدفعة، لكن التحذير لم يُصلح ويظل بحاجة إلى معالجة منفصلة.

## ما لا تزال الأدلة لا تثبته

- لم تُقارن آثار Alarm أو دورة الأحداث بمخرجات Game Maker 8.2 Portable. الاختبار الجديد يثبت ترتيب NOR الحالي فقط.
- لم تُغَطَّ بعد كل صيغ حدود المصفوفات، أو string indexing، أو المصفوفات داخل `with` وbytecode؛ إصلاح nested writes يخص typed VM الذي اختُبر، ولا يعمم الادعاء على كل محركات التنفيذ.
- لا تزال دورة الأحداث الكاملة بحاجة إلى trace مرجعي يشمل Room Start/End وCreate وCollision وDraw وDraw GUI وDestroy، وحالات انتقال الغرفة أثناء Alarm والتدمير أثناء `with`.
- لا تثبت هذه الدفعة أمان استيراد ZIP/GMK أو جميع مسارات الاستيراد، ولا تكافؤ GMX/GMZ end-to-end.
- لا يوجد هنا بناء Android/NDK أو تحقق لمسار WebView → Java → JNI، ولا مقارنة صور golden أو إدخال تفاعلي عبر Android.
- API ومرجعية `gml_match_*`، ومجموعة fixtures المرجعية من GM82 Portable، ما زالتا غير محسومتين.

## الحالة النهائية

الفرع الحالي محلي وغير ملتزم (uncommitted)، و`main` لم يتغير. لم يُنشأ commit أو PR ولم يُجرَ نشر. التوصية التالية هي حفظ trace/fixtures من GM82 Portable قبل توسيع نسب التوافق، ثم اختيار فجوة واحدة في كل مرة وإضافة regression أحمر قبل أي تعديل جديد.


## متابعة 6 نوفمبر — ترتيب Timeline (21:46 +02:00)

### التغيير

استندت المتابعة إلى المرجع الموجود داخل المستودع: `source/unpacked/gm82help-main/gm82help-main/docs/Game Maker 8.2 Event Order.txt`، الإصدار 5 المؤرخ 29 نوفمبر 2024. ينص قسم Frame Event Order على أن لحظات Timeline تُحدّث وتُنفّذ بعد Begin Step وقبل Alarms.

كان `gm82_runtime_step` يستدعي `gm82_timeline_step_instance` داخل مرحلة الحركة، أي بعد Alarm وStep. أضفت اختبارًا حتميًا في `test_event_order.c` يضع علامات تسلسلية في Begin Step وTimeline moment وAlarm 0 وStep وEnd Step. فشل الاختبار قبل التعديل كما ينبغي، ثم نقلت تحديث Timeline إلى ما بعد Begin Step وقبل Alarm، وأزلت الاستدعاء المتأخر من مرحلة الحركة. النتيجة المتوقعة والمرصودة هي `12345`، مع وصول `timeline_position` إلى 1.0.

### المزامنة والتحقق

نُسخت التغييرات إلى النسختين المرآتيتين `app/src/main/cpp_backup` و`NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`، مع بقاء المصدر المرجعي في `app/src/main/cpp`. اجتاز مدقق المرايا تطابق 55 ملف source و49 header و37 test و4 ملفات C/H جذرية لكل مرآة، إضافة إلى فحوص CMake وMakefile والاختبار السلبي للمدقق.

- `python3 tools/run_engine_suite.py`: **39/39**، وHost pipeline **4/4** مع `RESULT OK`.
- `make clean && make test` في Full Core: **33 هدفًا، exit 0**.
- اختبار ترتيب الأحداث الموسع تحت AddressSanitizer: **PASS** (`detect_leaks=0`).
- `git diff --check`: **PASS**.
- بقي تحذير `strncpy` غير الحاجب في `src/gm82_actions.c:96`، وظهر `SKIP` لاختباري Full Core اللذين يتطلبان عينات GM82 النصية المحلية غير المتوفرة.

هذا يطابق ترتيب Timeline المذكور في ملف مرجعي للمشروع، لكنه لا يعوض مقارنة runtime فعلية مع GM82 Portable. التغيير موجود محليًا على الفرع `fix/bytecode-with-mirror-regressions`؛ `main` و`origin/main` ما زالا عند `3760a105ac244d1ea1682df8681c99532fdefb80`. لم يُنشأ commit أو PR ولم يُدفع التغيير إلى GitHub.


## متابعة دمج main وحل تعارض PR #393 (22:11 +02:00)

بعد فتح PR، تقدّم `main` من `3760a105` إلى `8d42248f` وأضاف دعم `switch` في compiler/interpreter وAST، وتحسينات parser وDS callbacks. لم أستبدل هذه التغييرات بنسخة الفرع الأقدم: أُدمجت نسخة main الأحدث في فرع PR، وحُفظ دعم switch وديناميكية loop-fixups، ثم أُعيد تطبيق استعادة `self/other` على جميع مخارج bytecode، إصلاح continuation في AST لـ`do-until`، واختبارات `with` وTimeline/Alarm.

حُفظت أيضًا اختبارات main الخاصة بـswitch وcontinue، وأُضيف اختبار لحالة `continue` التي تنهي do-until. أُبقي fixture `with_edges` على مصفوفة main stack-backed مع تنظيف runtime، وأُدخلت مصادر/اختبار DS callback الجديد من main في النسختين المرآتيتين حتى تطابق المصدر الأساسي.

### تحقق النسخة المدموجة محليًا

- `python3 tools/run_engine_suite.py`: **40/40**، وHost pipeline **4/4** (`RESULT OK`).
- `make test` في Full Core بعد البناء النظيف: **34 هدفًا، 0 أخطاء، exit 0**. شمل ذلك `test_gml_parser` و`test_event_order` و`test_gm82_text_reader_security` و`test_gml_ds_callbacks` و`test_with_edges`؛ trace Timeline/Alarm/Step هو `12345`.
- `verify_core_mirrors.py`: **PASS**، تطابق 55 ملف source و49 header و38 test و4 ملفات جذرية لكل مرآة؛ CMake/Makefile متطابقان بنيويًا.
- `test_core_mirror_verifier.py`: **PASS**.

هذه النتائج تخص الفرع المحلي بعد دمج `origin/main` عند `8d42248f` وحل التعارضات. لم يُدفع تحديث الفرع بعد في هذا السجل؛ يجب انتظار فحوص GitHub الجديدة على رأس PR قبل إتمام دمجه في `main`.


## تشخيص فشل CI وتصحيح عزل iframe (7 نوفمبر 2026، 00:09 +02:00)

فشل تشغيلَا GitHub Actions على PR head `a87d7eb7` عند الاختبار القائم `test_webview_and_network_are_restricted`: commit main `14240252` أضاف `allow-same-origin` إلى iframe الذي يشغّل محتوى `srcDoc` مع `allow-scripts`، مخالفًا عقد الأمان الموجود. لم أرخِ الاختبار ولم أدمج مع الفشل.

أُزيل `allow-same-origin` من ملفي HTML النشطين. للحفاظ على إدخال لوحة المفاتيح وقراءة بيانات controls دون صلاحية same-origin، نُقل التواصل إلى رسائل `postMessage` محصورة: الطفل يقبل الرسائل من `window.parent` فقط، والوالد يقبل بيانات controls من `contentWindow` الخاص بالإطار الحالي فقط، مع تحديد أنواع payload والتحقق من قيم المفاتيح. اختبار الأمان تحقّق من النسختين ومن غياب الاستدعاءات المباشرة العابرة للـorigin.

التحقق المحلي قبل إعادة الدفع: `python3 -m unittest discover -s tests/reference -p 'test_*.py' -v` — **14/14**؛ فاحص JavaScript (`node --check`) للـbundles النشطة نجح؛ اختبار Node للجسر المحقون نجح في التحقق من controls، ورفض مصدر غير موثوق، وإيصال key event. لم يُدفع هذا التصحيح بعد عند إعداد هذا السجل؛ يجب انتظار فحوص GitHub على الرأس الجديد قبل الدمج.


## متابعة 7 نوفمبر — مصالحة تحديثات main بعد فشل CI

تقدّم `main` مجددًا من `8d42248f` إلى `28e0acc8df5f6e169e30c8968aaedd4b922d884a`. أُدمج هذا الرأس محليًا في فرع PR #393 دون استبدال تغييرات main. حُلّ تعارض bytecode باستخدام النسخة canonical المدموجة التي تحتفظ بإضافات main وإصلاح استعادة سياق `with`، ثم نُسخت النتيجة إلى النسختين المرآتيتين. وحُفظت في اختبار الأمان قيود main (فحص كل صفحات HTML والتحقق من حد بيانات GMK)، إلى جانب اختبارات الجسر.

كشفت المراجعة أيضًا أن مصدر React `ConsoleViewer.tsx` ما زال يحاول قراءة/إرسال أحداث مباشرة عبر `contentWindow` رغم إزالة `allow-same-origin`. عُدّل المصدر ليحقن جسرًا محدودًا ويمرر المفاتيح وطلب حالة اللعب وأصواتًا من قائمة ثابتة عبر `postMessage`؛ الوالد يقبل الحالة فقط من إطار اللعبة الحالي، والطفل يقبل الطلبات فقط من `window.parent`. لم يُضَف مسار تنفيذ شيفرة عامة إلى الجسر. أُضيف إلى عقد الأمان فحص صياغة وسلوك يرفض المرسل غير الموثوق، يثبت وصول إدخال موثوق، ويتحقق من حصر الصوت وتجاهل نوع الرسالة العام.

### نتائج التحقق المحلي بعد المصالحة

- `python3 tools/run_engine_suite.py`: **40/40**؛ Host pipeline **4/4** مع `RESULT OK`.
- `make clean && make test` في Full Core: **34 هدفًا، exit 0**. الاختباران المعتمدان على عينات GM82 نصية محلية غير موجودة سجلا `SKIP`؛ وظهر تحذير بناء واحد سابق غير حاجب عند `src/gm82_actions.c:96` عن اقتطاع محتمل لـ`strncpy`، وهو خارج نطاق هذا التغيير. إعادة `make test` بعد البناء النظيف أعادت **34 هدفًا وexit 0**.
- `python3 -m unittest discover -s tests/reference -p 'test_*.py' -v`: **14/14**.
- TypeScript: `node_modules/.bin/tsc -p tsconfig.json --noEmit`: **exit 0**. واجهة `pnpm typecheck` نفسها توقفت قبل تشغيل compiler بسبب سياسة `ERR_PNPM_IGNORED_BUILDS`؛ لذلك استُخدم compiler المحلي مباشرة، ولم تُفعّل build scripts.
- `verify_core_mirrors.py`: **PASS**؛ لكل مرآة 55 ملف source و49 header و38 test و4 ملفات C/H جذرية، مع تطابق CMake وقواعد Makefile. الاختبار السلبي لمدقق المرايا و`git diff --check` اجتازا.

هذه نتائج محلية فقط؛ لم يُجرَ بناء Android/NDK أو اختبار على جهاز/محاكي، ولم تُستقبل بعد نتيجة GitHub Actions على الرأس الجديد. يلزم رفع merge commit المحدّث إلى فرع PR، انتظار checks الجديدة، ثم الدمج إلى `main` إذا اجتازت شروط المستودع.


## متابعة 7 نوفمبر — دمج main 533e2203 وتوحيد إصلاحات `with`

تقدّم `main` مرة أخرى إلى `533e2203075f3400b11a12d3154ebd2528be49d4` أثناء المراجعة، لذلك جُلب هذا الرأس قبل دفع الفرع. احتوى commits متداخلة على bridge للـiframe، ومكدس سياق `self/other` لـ`with`، وتنظيف bytecode. حُلّ التداخل باعتماد تنفيذ main الأحدث الذي يستخدم `gm82_gml_context_push/pop` وتنظيف scope، واختبار `test_gml_with_scoping` ونسخة `test_with_edges` الأحدث؛ وحُفظت اختبارات الفرع الإضافية لـ`do-until/continue` و`with(noone)` وفشل bytecode، مع بقاء اختبار `switch`.

احتُفظ بجسر الفرع النشط الذي يرفض أي رسالة لا تأتي من `window.parent` ولا يتيح وصولًا مباشرًا إلى `contentWindow`; وتطابق صلاحيات iframe فيه وفي مصدر React سياسة main الأضيق: `allow-scripts allow-modals allow-pointer-lock` فقط. اختبارات الأمان تؤكد الآن غياب `allow-same-origin` في كل HTML الموزع، وتتحقق سلوكيًا من الجسر. أُدرج test `gml_with_scoping` في engine suite، ونُسخت ملفات C/H والاختبارات إلى المرآتين من canonical.

### التحقق المحلي على رأس main 533e2203

- `python3 tools/run_engine_suite.py`: **42/42**؛ Host pipeline: **4/4** (`RESULT OK`).
- `make clean && make test` في Full Core: **35 هدفًا**، بينها `test_gml_parser` و`test_gml_with_scoping` و`test_with_edges`؛ اكتمل التشغيل بنجاح. سجل اختبارين `SKIP gm82 text samples not present` لغياب عينات محلية، وظهر تحذير `strncpy` واحد عند `src/gm82_actions.c:96`، خارج نطاق التغييرات.
- Python reference/security: **14/14**. فحص `node_modules/.bin/tsc -p tsconfig.json --noEmit`: **exit 0**.
- مدقق المرايا: **PASS**؛ لكل مرآة 55 source و49 header و39 test و4 ملفات C/H جذرية. فحص CMake/Makefile والاختبار السلبي للمدقق و`git diff --check`: **PASS**.

لم يُجرَ Android/NDK build أو اختبار جهاز/محاكي. كما أن نتائج GitHub Actions تخص الرأس السابق؛ لم تُعَد بعد على رأس المصالحة هذا.


## متابعة 7 نوفمبر — حالات GMZ adversarial على main 75fd7c4e

أثناء تجهيز دفع PR، وصل إلى `main` دمج PR #397 عند `75fd7c4e5eff8dc26cf5b9c8559aa8e2d7a8cd2e` وأضاف حالات حدود أرشيف GMZ إلى `test_gmz_import_limits.c` في الأشجار الثلاثة. ضُمّ هذا التغيير محليًا دون تعارض؛ وتشغّل engine suite الاختبار، كما يلتقطه اكتشاف أهداف Full Core عبر wildcard.

التحقق بعد هذا التحديث: engine suite **42/42**، واختبار `GMZ_IMPORT_LIMITS_OK` ناجح، وHost pipeline **4/4** (`RESULT OK`). Full Core شغّل **35 هدفًا** بما فيها GMZ وwith-scoping؛ سجل تجاوزين فقط لغياب عينات GM82 النصية، والتحذير الوحيد هو تحذير `strncpy` السابق في `src/gm82_actions.c:96`. Python reference/security **14/14**، ومدقق المرايا **PASS** (55 source و49 header و39 test و4 ملفات جذرية لكل مرآة). لا يزال CI على رأس PR المحدث وبناء Android/NDK غير منفذين.
