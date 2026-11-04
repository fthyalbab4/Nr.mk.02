# مراجعة upstream واستكمال التكامل — 2 نوفمبر 2026

## أساس المراجعة

- المستودع: [fthyalbab4/Nr.mk.02](https://github.com/fthyalbab4/Nr.mk.02)
- أساس الفرع: `origin/main` عند commit `64733049aa8685d3083cc082914b317c88f581bf`.
- فرع التكامل الحالي: `integrate/latest-main-20261102`. حُفظت الحالة السابقة في Git stash احتياطي ولم تُحذف.

## نتائج المراجعة والإصلاحات

- كشف اختبار `tests/reference/test_security_contract.py` في أحدث `main` أن iframe اللعبة يستخدم `allow-scripts allow-same-origin` مع `srcDoc`. أُزيل `allow-same-origin` مع الإبقاء على تشغيل السكربتات والـmodals وpointer lock؛ بذلك يبقى محتوى اللعبة على origin معتم ولا يشارك تخزين Studio أو جسر Android. أُعيد تشغيل اختبارات Python بعد التصحيح.
- حُصرت أسرار توقيع APK في خطوات التوقيع التي تحتاجها فقط. صار إصدار Android مشروطًا بـtag `v*` محمي، وGitHub Environment باسم `production`. يلزم إعداد موافقات الحماية والأسرار في إعدادات GitHub قبل استخدام الإصدار؛ تعديل workflow وحده لا يهيئ إعدادات المستودع.
- عولجت تحويلات double إلى int وحدود القص في `gml_draw_background_part` لمنع قيم NaN وخروج التحويل عن مجال int وoverflow في الإحداثيات.
- عولج serializer للـAST كي يحافظ على كلمات `not` و`and` و`or` بصياغة قابلة للتحليل، ويُسلسل `for (;;)` بأجزاء اختيارية صحيحة، ويقبل `%` ضمن العمليات multiplicative. أضيفت اختبارات regression لهذه الحالات.
- عولجت دلالة `break` في `do-until` وأصبح خطأ تقييم شرط `while` يُبلّغ بدل تحويله بصمت إلى انتهاء ناجح.
- أزيل التكرار بين حدث keyboard المستمر وkeypress/keyrelease في مرايا dispatcher؛ ووُحّد dispatcher واختبار DnD في حزمة C بعد مقارنة الفروق للتأكد من أنها إصلاحات إضافية مفقودة لا اختلافات خاصة بالحزمة.
- اكتمل bytecode control-flow لـ`break/continue` نحو أقرب حلقة في `while`, `for`, `repeat`, و`do-until`، بما في ذلك continue إلى for-step/do condition وتنظيف repeat counter على break؛ رُفضت أوامر loop-control خارج الحلقة.
- أُضيف اختبار active-core لرسم RGBA/الشفافية وترتيب Pre-Draw ونطاق `event_user` وفحص pixel-mask collision، وجُعل runner يبني من ملفات مؤقتة نظيفة ويفشل إذا غاب اختبار مطلوب.
- وُسّع Android CI لتشغيل اختبارات Python/security، واختبارات C النشطة، وحزمة C، وبناء Debug APK.

## التحقق

- baseline نظيف من `origin/main` اجتاز 34 اختبار محرك و4 عينات ألعاب قبل الإصلاحات المحلية؛ فشل اختبار Python واحد في عقد عزل WebView. سُجلت النتائج في `/tmp/nor-origin-latest-*.log`.
- بعد إصلاح عزل WebView: 12 اختبار Python/security انتهت برمز خروج `0`.
- بعد إصلاحات المحرك: `tools/run_engine_suite.py` انتهى برمز خروج `0` و`ENGINE_TESTS_PASS=34/34`، بما يشمل اختبار renderer/collision وGML parser المعدل وخط host ذي معايير فشل صريحة.
- `tools/verify_core_mirrors.py`: تطابق بايت-لبايت لـ53 ملف `.c` في `src` و49 header في `include` بين النواة النشطة وكل مرآة؛ `git diff --check` وYAML workflows وbash syntax ناجحة.
- اجتازت حزمة C بعد مزامنة parser/bytecode وإضافات loop-control: `make -B test`، عدد 26 executable، exit code `0`.
- نجح `./gradlew --no-daemon assembleDebug` بعد التغييرات النهائية؛ APK يضم `arm64-v8a`, `armeabi-v7a`, `x86`, `x86_64`، والأرشيف سليم. SHA-256: `45e3f8f1031fa17afba33ad59a39e96ced2ce037446ad57851ddb9ec69a88dd2`.
- لم يتوفر جهاز Android فعلي متصل؛ لذلك لا ندّعي اختبار دورة import → edit → run → export على الجهاز.

## حدود لم تُغلق بعد

- لا توجد أدلة تكفي لادعاء تكافؤ 100% مع نسخة Windows المحمولة؛ الاختبارات الحالية اختبارات host وfixtures وليست مقارنة شاملة لكل دوال GML/واجهة Windows.
- parser/AST/bytecode ما يزال جزئيًا: loop-control الأساسي مغطى بالاختبارات، لكن `with` يبقى compatibility fallback، وبعض الدوال/المؤشرات/التعبيرات المتقدمة ودلالات/النطاقات تحتاج اختبارات إضافية؛ هذا ليس برهانًا على اكتمال GML.
- يلزم إكمال round-trip دلالي لملفات GMK/GMX/GMZ (موارد غير معروفة، attributes، وإعادة التصدير دون فقد)، واختبارات أمن وأحجام/CRC إضافية للأرشيفات.
- مزامنة الموارد بين Studio والـrenderer الأصلي (sprites، frames، audio) تحتاج اختبار Android end-to-end؛ نجاح عرض عينات host لا يغني عن ذلك.
- ميزات platform-specific مثل فتح الروابط، التركيز/تبديل النوافذ، lifecycle، والأذونات لم تُختبر على جهاز فعلي.
- يجب إعداد GitHub Environment `production` بموافقات الحماية والأسرار، وتدوير أي مفاتيح توقيع سبق نشرها/كشفها وفق سجل الأمن قبل إصدار Release.
