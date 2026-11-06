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
