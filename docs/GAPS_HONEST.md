# GAPS_HONEST — Nr.mk.02 (تحديث 3 نوفمبر 2026)

هذا الملف يفرق بين نجاح اختبارات المضيف وبناء APK وبين اكتمال المنتج على Android. لا توجد نسبة إجمالية لتكافؤ Windows؛ الادعاء بـ100% غير مثبت.

## تحسن مثبت

| المجال | الدليل |
|---|---|
| اختبارات المحرك | `python3 tools/run_engine_suite.py` — `ENGINE_TESTS_PASS=34/34`، و`SUMMARY ok=4 fail=0` للألعاب الأربع، بعد إضافة regression لـbreak/continue وdo-until. |
| حزمة C | `make -B -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX test` — 26 test executables، exit code 0 بعد مزامنة وحدات parser/bytecode. |
| Python/security contracts | `python3 -m unittest discover -s tests/reference -p 'test_*.py' -v` — 12/12، exit code 0 بعد تشديد iframe sandbox. |
| تحميل/رسم/حفظ عينات GMK | `bash tools/run_host_pipeline.sh` — لكل عينة `DRAW ok=1` و`SAVE_LOAD_TEST ok`، والمجموع `ok=4 fail=0`. |
| Android APK | `assembleDebug` نجح بعد تعديلات loop-control، الأرشيف سليم ويضم ABIs الأربعة؛ SHA-256: `45e3f8f1031fa17afba33ad59a39e96ced2ce037446ad57851ddb9ec69a88dd2`. |
| dispatcher الأحداث | أُعيدت handlers الأحداث المفقودة مع الحفاظ على تنفيذ main الأحدث، واستُبعد `gm82_events_stubs.c` من Android CMake ومن Makefile الحزمة حتى لا تحجب التنفيذ الحقيقي. |
| تطابق المرايا | `python3 tools/verify_core_mirrors.py` ينجح؛ ملفات `.c/.h` الـ53 في src والـ49 في include مطابقة بايت-لبايت في النسختين. ملفات object المولدة مستثناة. |
| DnD actions | نتيجة tri-state تميز false الشرط عن الأكشن غير المعروف؛ اختبار `test_dnd_action_conditionals` ناجح ضمن phase 5. |
| رسم الموارد | توصيل RGBA compositing للـsprites والخلفيات والبلاطات، احترام `image_alpha`، الحفاظ على depth/camera، وترتيب Pre-Draw بعد المسح والخلفية. اختبارات العينات تثبت وجود frame مرسوم، لا تطابقًا بصريًا كاملًا. |
| حدود Android/CI | حُميت حسابات framebuffer، وأضيفت workflow لبناء APK واختبارات المضيف على runner متوافق معماريًا. |

## جزئي أو غير مثبت

| المجال | الفجوة المتبقية |
|---|---|
| Android device E2E | APK مبني، لكن لا يوجد اختبار موثق على جهاز حقيقي لتدفق import → edit → run → export، ولا تحقق من اختيار الملفات/MediaStore عبر إصدارات Android. |
| موارد Studio إلى native | WebView ومعاينة JavaScript والمشغّل الأصلي موصولون داخل تطبيق واحد، لكن التزامن الحي الكامل لموارد sprites/audio وتعديلات المحرر إلى renderer الأصلي غير مكتمل. |
| GMK/GMX/GMZ/GM82 | مسارات الاستيراد موجودة بدرجات متفاوتة؛ round-trip دلالي كامل بملفات حقيقية وفتحها مجددًا في GameMaker غير مثبت. |
| GML وactions/events | parser/AST/bytecode يدعم الآن break/continue لأقرب حلقة وwhile/do-until/repeat/for مع اختبارات تشغيل؛ `with` ما زال compatibility fallback وبعض GML/built-ins/actions/events تحتاج fixtures ومقارنة شاملة. |
| solid collision | التصادمات والتحريك الحالية لا تثبت تطابقًا شاملًا مع GameMaker؛ حل solid في خطوة runtime يعتمد حدودًا/أبعادًا، ولا توجد مجموعة parity بكسلية على corpus Windows. |
| منصة Android | فتح URL والتركيز/إدارة النوافذ وغير ذلك من وظائف المنصة تحتاج adapters واختبارًا فعليًا. |
| التكافؤ والترخيص | لا توجد مقارنة كاملة على Windows Portable أو نسبة عامة قابلة لإعادة الإنتاج؛ مراجعة تراخيص المكونات الخارجية لازمة قبل توزيع تجاري. |

## بوابة القبول التالية

1. تثبيت APK على جهاز Android فعلي وتنفيذ وتوثيق import → edit → run → export.
2. توسيع الاختبارات إلى ملفات GMK/GMX حقيقية وsemantic round-trip قابل لإعادة الفتح في GameMaker.
3. توسيع اختبارات GML/actions/collision ومقارنة سلوكية مباشرة مع Windows Portable.
4. تحديث هذا الجدول بالدليل القابل لإعادة التشغيل؛ لا ترفع ادعاء التكافؤ بناءً على وجود ملفات أو نجاح compile فقط.
