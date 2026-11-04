# تقرير دمج PRs وتحديث main — 3 نوفمبر 2026

المستودع المستهدف: [fthyalbab4/Nr.mk.02](https://github.com/fthyalbab4/Nr.mk.02). تم التعامل سابقًا مع PRs #232 و#234 و#235 و#237 وحُفظت نسخ العمل السابقة في Git stash. أساس هذه الجولة هو `origin/main` عند `64733049aa8685d3083cc082914b317c88f581bf`؛ الفرع المحلي `integrate/latest-main-20261102` يطبق الإصلاحات انتقائيًا بعد مراجعتها، دون force-push أو الكتابة مباشرة على `main`.

## طلبات السحب التي عولجت

| PR | قرار الدمج |
|---|---|
| #232 | دمج إضافات GM82 math/instance، مع إصلاح توصيل عدد من builtins إلى evaluator النشط، والحفاظ على صيغتي `modwrap(value, max)` و`modwrap(value, min, max)`. |
| #234 | دمج الاختبارات وأدوات التحقق القابلة للاستخدام. نُقلت إلى evaluator النشط واجهات resource lookup وstring و`instance_create_depth` و`move_wrap` و`ds_map_set` و`file_text_writelf`، مع رفض استدعاء إنشاء instance إذا كانت وسائطه أقل من المطلوب. |
| #235 | الاحتفاظ بتأكيدات الاختبارات الصارمة وrunner الموجود؛ لم تُقبل تغييرات تضعف assertions أو تحذف runner، ولم تُعتمد تقارير نجاح غير منفذة محليًا. |
| #237 | نقل فحص حدود لوحة المفاتيح الذي يرفض NaN وInfinity والقيم خارج المجال قبل تحويلها إلى عدد صحيح. استُبعد ملف Gradle lock، وتعريفات runtime المكررة، وسلوك `action_if_sound` الذي قد يعطي نتيجة خاطئة عند غياب الوسيط. |

## حسم التعارضات في آخر تحديث

- حُفظت dispatchers Create/Alarm/Collision من main، وأُعيدت handlers الأحداث المفقودة فقط إلى `gm82_events.c` بدل استبدال الملف بنسخة قديمة كاملة.
- أُخرج `gm82_events_stubs.c` من Android CMake target ومن Makefile الحزمة، مع إبقاء الملف مصدرًا اختياريًا فقط، حتى لا تطغى stubs على dispatcher الحقيقي.
- وُحّد عقد tri-state لأكشنات DnD؛ false الشرط لا يُسجل كـ`UNMAPPED_ACTION` ولا ينفذ الإجراءات التابعة. أُضيف alias `action_sprite_set` إلى dispatcher.
- أُعيدت إصلاحات renderer/runtime إلى main الأحدث: RGBA compositing وalpha، Pre-Draw بعد clear/background، حواجز overflow، وفضّ solid collision متناظر. لم تُمسح تغييرات main الخاصة بالكاميرا أو depth أو إنشاء الأحداث.
- تزامنت ملفات `.c/.h` كاملة من النواة النشطة إلى `cpp_backup` وحزمة C؛ `tools/verify_core_mirrors.py` يثبت تطابق 53 ملفًا في `src` و49 header في `include` لكل نسخة، ويستثني ملفات `.o` المولدة.
- يشغل `.github/workflows/android-build.yml` اختبارات Python/security، وفحص المرايا، وsuite النواة وحزمة C، ثم بناء Debug APK على runner متوافق.

## نتائج التحقق المحلية

- `python3 tools/run_engine_suite.py`: `ENGINE_TESTS_PASS=34/34`؛ host pipeline **4/4** عينات `ok=4 fail=0`، مع اختبار loop-control bytecode.
- `bash tools/run_host_pipeline.sh`: لكل عينة decode ناجح، `DRAW ok=1`، `SAVE_LOAD_TEST ok`؛ المجموع `ok=4 fail=0`.
- `python3 -m unittest discover -s tests/reference -p 'test_*.py' -v`: **12/12**، exit code 0؛ `python3 tools/verify_core_mirrors.py`: نجاح `src` و`include` في كلتا المرآتين.
- `make -B -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX test`: **26 executables**، exit code 0 بعد مزامنة parser/bytecode.
- `./gradlew --no-daemon assembleDebug`: **BUILD SUCCESSFUL** بعد تحديث loop-control؛ APK يضم ABIs الأربعة والأرشيف اجتاز `unzip -t`. SHA-256: `45e3f8f1031fa17afba33ad59a39e96ced2ce037446ad57851ddb9ec69a88dd2`.
- YAML workflows و`git diff --check` و`bash -n`: ناجحة.

APK الناتج Debug قابل للتثبيت للاختبار، وليس Release production. لا يتوفر جهاز Android فعلي لهذه الجولة، لذلك لم يُختبر import → edit → run → export. تزامن ملفات المصدر في المرايا مثبت؛ لكن مزامنة موارد Studio الكاملة إلى renderer الأصلي وsemantic round-trip لـGMK/GMX/GMZ ما زالا غير مثبتين. لا توجد نسبة parity إجمالية أو ادعاء 100%.
