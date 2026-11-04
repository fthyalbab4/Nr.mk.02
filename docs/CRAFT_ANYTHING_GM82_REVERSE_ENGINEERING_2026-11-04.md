# خطة تحليل توافق GameMaker 8.02 باستخدام Craft Anything

## الحالة الحالية

تم فحص مستودع [Craft Anything](https://github.com/storytold/craft-anything/tree/main) ومصادره العامة. الأداة منصة Rust للتحليل وإعادة البناء، وليست محولًا جاهزًا من GameMaker إلى Android. README يذكر أنها في مرحلة early alpha، وأن Deep mode يتيح قراءة ملفات البرنامج وتحليل الملفات التنفيذية، بينما Clean room يعتمد على السلوك الظاهر فقط.

لا توجد في بيئة العمل الحالية نسخة `GameMaker.exe` أو `GameMaker 8.02 Portable`. الموجود هو أربع عينات `.gmk` داخل NOR Maker:

- `app/src/main/assets/www/samples/mario_bros.gmk`
- `app/src/main/assets/www/samples/plataformas.gmk`
- `app/src/main/assets/www/samples/shooter.gmk`
- `app/src/main/assets/www/samples/zelda.gmk`

لذلك لم يتم الادعاء بإتمام reverse engineering للمحرك نفسه. تحليل ملفات `.gmk` يختبر تنسيق المشاريع، لكنه لا يكشف تنفيذ runtime الخاص بـ GameMaker.

## ما يمكن للأداة فعله

الأدوات ذات الصلة الموجودة في Craft Anything تشمل:

- `core_target_triage` لجرد الهدف وتحديد نوع الملف.
- `native_sections_list` و`native_functions_list` و`native_strings_browse` لجرد برنامج native.
- `native_function_disassemble` و`native_function_pseudocode` لدراسة الدوال.
- `native_call_graph_show` و`native_function_callers_list` و`native_function_callees_list` لتتبع مسارات التشغيل.
- `native_source_folder_write` لكتابة pseudo-C، وليس source code أصليًا.
- `runtime_walkthrough_record` و`native_window_capture` لدراسة السلوك الخارجي عند وجود بيئة تشغيل مناسبة.
- `core_report_write` لحفظ الأدلة والنتائج.

هذه الأدوات مناسبة لاستخراج **مواصفات سلوكية واختبارات توافق** مثل ترتيب Create/Step/Draw، إدارة الغرف، التصادم، الرسم، الإدخال، alarms، وعمليات instance lifecycle. لكنها لا تضمن استعادة المصدر الأصلي ولا تعني أن الناتج سيكون نسخة مطابقة.

## حدود الاستخدام

سيتم استخدام Deep mode فقط على نسخة يملك المستخدم حق تحليلها. لن يتم نسخ كود مملوك أو إزالة حماية أو استخراج أسرار أو توزيع ملفات GameMaker. الناتج الذي يدخل NOR Maker سيكون مواصفات، جداول توافق، اختبارات regression، أو تنفيذًا مستقلًا في `app/src/main/cpp`.

## التشغيل بعد توفير الهدف

بعد تثبيت Rust وبناء CLI، وبعد وضع النسخة المرخّصة في مسار محلي، شغّل:

```bash
CRAFT_ANYTHING_CLI=/path/to/craft-anything-cli \
GM82_TARGET=/path/to/GameMaker.exe \
GM82_ANALYSIS_DIR=/home/ubuntu/Nr.mk.02/.analysis/gm82 \
bash tools/run_craft_gm82_study.sh
```

يفضل أيضًا تمرير عينات GMK في جولات منفصلة لدراسة تنسيق المشروع، دون اعتبارها بديلًا عن `GameMaker.exe`.

## مسار الدمج في NOR Maker

1. استخراج inventory للأقسام والدوال والنصوص ومسارات الاستدعاء.
2. تسجيل فرضيات منفصلة لكل سلوك مع دليل قابل لإعادة الفحص.
3. تحويل السلوك إلى fixtures صغيرة مستقلة، لا إلى نسخ pseudo-C مباشرة.
4. إضافة الاختبارات إلى `tools/run_engine_suite.py`.
5. تنفيذ التغييرات في `app/src/main/cpp` مع إبقاء المرايا الثلاث متزامنة.
6. تشغيل عينات GMK الحالية على host ثم Android عندما تتوفر بيئة SDK/NDK.
7. تحديث تقرير parity بحيث يظل منسوبًا إلى اختبارات منفذة، لا إلى ادعاء 100%.

## النتيجة المطلوبة من الجولة الأولى

الجولة الأولى يجب أن تنتج تقريرًا يجيب بأدلة عن:

- lifecycle وترتيب Create/Begin Step/Alarm/Step/Motion/Collision/End Step/Draw.
- room transition وpersistent instances.
- default draw مقابل custom Draw.
- deferred destruction وinstance creation أثناء الأحداث.
- حدود frame rate وroom speed.

لن تبدأ دراسة الملف التنفيذي فعليًا قبل توفير `GameMaker.exe` أو ملف runtime مرخّص قابل للقراءة. وجود `.gmk` وحده لا يكفي.

## المراجع

- [1] https://github.com/storytold/craft-anything/tree/main "Craft Anything repository"
- [2] https://raw.githubusercontent.com/storytold/craft-anything/main/README.md "Craft Anything README"
- [3] https://raw.githubusercontent.com/storytold/craft-anything/main/docs/tools.md "Craft Anything tool catalog"
- [4] https://raw.githubusercontent.com/storytold/craft-anything/main/docs/STATUS.md "Craft Anything status and known limits"
- [5] https://raw.githubusercontent.com/storytold/craft-anything/main/SECURITY.md "Craft Anything security policy"
