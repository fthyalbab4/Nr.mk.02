# تقرير تنفيذ المشروع الموحد — 3 نوفمبر 2026

## قرار الدمج

`Nr.mk.02` هو جذر التطبيق والنواة النشطة. نقطة الأساس `origin/main` عند `64733049`; العمل المحلي على `integrate/latest-main-20261102` يحافظ على main ويضيف الإصلاحات والترحيلات دون دمج المستودعات الثلاثة كمشروعات متجاورة. لم يُستخدم force-push أو تُكتب تغييرات على `main`؛ سترفع النتيجة على فرع تكامل منفصل.

## ما أصبح موحدًا فعليًا

`MainActivity` نقطة تشغيل واحدة تستضيف Studio في WebView والمشغّل الأصلي عبر JNI. يوجد جسر لاستيراد الملفات/التصدير وتشغيل بيانات GMK المدعومة؛ معاينة Studio JavaScript وتعديلات المحرر ليست حتى الآن حالة runtime أصلية متزامنة بالكامل.

استُعيد dispatcher الأحداث مع الحفاظ على handlers الموجودة في main، واستُبعد `gm82_events_stubs.c` من قوائم البناء. نتيجة DnD تميز الشرط false عن الأكشن غير المعروف، مع تخطي الأوامر التابعة عند فشل الشرط. أُضيف alias `action_sprite_set`. يضمن `tools/verify_core_mirrors.py` تطابق ملفات `.c/.h` بين المصدر النشط و`cpp_backup` وحزمة C؛ ملفات object المولدة مستثناة.

حسّن renderer تركيب RGBA للـsprites والخلفيات والبلاطات، واحترام alpha/blend من instance، وترتيب depth/camera، وترتيب Pre-Draw بعد clear/background. أضيفت حواجز overflow لحجم framebuffer؛ كما أصبح حل التصادم solid متناظرًا عند تحريك instance غير solid. هذه الإصلاحات لا تثبت pixel-perfect parity، وتبقى solid collision العامة أوسع من الاختبارات الحالية.

يوفر GML parser/AST/bytecode الآن `break/continue` لأقرب حلقة في `while`, `do-until`, `repeat`, و`for`، بما في ذلك تنظيف عداد repeat واختبارات nested loops. تُرفض أوامر التحكم خارج الحلقة؛ `with` ما زال compatibility fallback والـgrammar ليست كاملة.

يشغل `.github/workflows/android-build.yml` اختبارات Python/security، وفحص المرايا، وsuite النواة وحزمة C، ثم يبني Debug APK على runner يدعم Android SDK/NDK.

## التحقق الذي أُعيد تشغيله

| الأمر | النتيجة |
|---|---|
| `python3 tools/run_engine_suite.py` | `ENGINE_TESTS_PASS=34/34`؛ host pipeline للألعاب الأربع `ok=4 fail=0`. |
| `bash tools/run_host_pipeline.sh` | 4/4؛ لكل عينة `DRAW ok=1` و`SAVE_LOAD_TEST ok`. |
| `make -B -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX test` | 26 test executables؛ exit code 0 بعد مزامنة parser/bytecode. |
| `./gradlew --no-daemon assembleDebug` | `BUILD SUCCESSFUL` بعد تغييرات loop-control؛ APK يضم `arm64-v8a`, `armeabi-v7a`, `x86`, `x86_64`. |
| `unzip -t app/build/outputs/apk/debug/app-debug.apk` | الأرشيف سليم؛ SHA-256: `45e3f8f1031fa17afba33ad59a39e96ced2ce037446ad57851ddb9ec69a88dd2`. |
| Python/security contracts | 12/12؛ exit code 0. |
| `python3 tools/verify_core_mirrors.py` | 53 ملف source و49 header متطابقة في كل مرآة؛ نجاح. |
| YAML workflow و`git diff --check` و`bash -n` | ناجحة. |

حجم APK الناتج نحو 16 MB؛ هذا **Debug** قابل للتثبيت للاختبار وليس Release موقّعًا للنشر التجاري. لم يُختبر على جهاز Android فعلي في هذه الجولة.

## فجوات باقية

- اختبار تثبيت وتشغيل على جهاز Android حقيقي: import → edit → run → export، مع اختبار SAF وMediaStore وملفات URI.
- توصيل مزامنة موارد Studio (خصوصًا الصور والصوت وتعديلات المستخدم) إلى C renderer/runtime.
- round-trip دلالي كامل لـGMK/GMX/GMZ/GM82 على corpus حقيقي وبمقارنة فتح الملفات في GameMaker.
- توسيع GML grammar وbuilt-ins/actions/events وcollision parity؛ اختبارات host الحالية لا تغطي كل سلوك Windows Portable.
- تنفيذ adapters لفتح الروابط والتركيز وإدارة النوافذ واختبارها على Android، ومراجعة تراخيص المكونات الخارجية قبل النشر.

لا يثبت نجاح 34 حالة محرك أو بناء APK تكافؤًا كاملًا. لا تُعلن نسبة إجمالية أو 100% حتى توجد مقارنة سلوكية قابلة لإعادة الإنتاج على corpus Windows واختبارات جهاز Android.
