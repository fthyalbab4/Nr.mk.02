# تقرير دمج طلبات السحب — 27 أكتوبر 2026

المستودع المستهدف: [fthyalbab4/Nr.mk.02](https://github.com/fthyalbab4/Nr.mk.02). جرى إعداد فرع تكامل محلي مبني على `origin/main`، وضمّ رؤوس PRs الأربعة المفتوحة وقت الفحص. رؤوس PRs أصبحت ضمن تاريخ الفرع، مع حل التعارضات يدويًا عبر Git CLI بدل اختيار نسخة كاملة آليًا.

## طلبات السحب التي عولجت

| PR | قرار الدمج |
|---|---|
| #232 | دمج إضافات GM82 math/instance، مع إصلاح توصيل عدد من builtins إلى evaluator النشط، والحفاظ على صيغتي `modwrap(value, max)` و`modwrap(value, min, max)`. |
| #234 | دمج الاختبارات وأدوات التحقق القابلة للاستخدام. نُقلت إلى evaluator النشط واجهات resource lookup وstring و`instance_create_depth` و`move_wrap` و`ds_map_set` و`file_text_writelf`، مع رفض استدعاء إنشاء instance إذا كانت وسائطه أقل من المطلوب. |
| #235 | الاحتفاظ بتأكيدات الاختبارات الصارمة وrunner الموجود؛ لم تُقبل تغييرات تضعف assertions أو تحذف runner، ولم تُعتمد تقارير نجاح غير منفذة محليًا. |
| #237 | نقل فحص حدود لوحة المفاتيح الذي يرفض NaN وInfinity والقيم خارج المجال قبل تحويلها إلى عدد صحيح. استُبعد ملف Gradle lock، وتعريفات runtime المكررة، وسلوك `action_if_sound` الذي قد يعطي نتيجة خاطئة عند غياب الوسيط. |

## حسم التعارضات والمتابعة

أُبقيت تعريفات runtime الأصلية عند وجود نسخ مكررة من الدوال؛ أُزيلت فقط الحراسة المكررة في نسخة الحزمة. أُوحّدت الملفات المتأثرة في المرايا الثلاث: `app/src/main/cpp` و`app/src/main/cpp_backup` و`NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`، بما فيها evaluator وbuiltins وinput وactions وevents وJNI bridge واختبار `test_full_suite.c`.

أُضيفت اختبارات regression لصيغتي `modwrap`، ولـ`string_starts_with` و`string_ends_with` عبر evaluator. كما حُميت التحويلات العددية في `direction_to_object` و`instance_create_depth` وبعض دوال السلاسل من القيم غير المنتهية أو خارج النطاق. لا تُعلن واجهتا التركيز وفتح URL نجاحًا وهميًا؛ فتح URL والتركيز الفعلي ما زالا يحتاجان adapter خاصًا بالمنصة.

## نتائج التحقق

- `python3 tools/run_engine_suite.py`: نجحت الاختبارات الـ18، وانتهى host pipeline بنتيجة `ok=4 fail=0` للعينات الأربع.
- `make test` داخل `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`: انتهى بنجاح صريح `PACKAGE_MAKE_TEST_PASS`.
- `git diff --check`: ناجح.
- تطابقت بصمات الملفات المتأثرة بين المرايا الثلاث بعد المزامنة.

## ما لم يثبت بعد

لم يُبنَ APK ولم يُختبر التطبيق على جهاز Android في هذه الجولة. كما أن نجاح اختبارات المضيف لا يثبت تكافؤًا كاملًا بنسبة 100% مع نسخة Windows Portable؛ هذا يحتاج مجموعة اختبارات مرجعية أوسع ومقارنة سلوكية على Windows. وتظل الوظائف التي تعتمد على خصائص المنصة، ومنها فتح الروابط والتركيز، غير مكتملة حتى توفير adapter واختبارها على الجهاز.
