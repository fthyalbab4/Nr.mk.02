# مراجعة Nr.mk.02 وخطة إصدار Android — 2026-10-27

## نطاق المراجعة

تمت مراجعة المستودع `fthyalbab4/Nr.mk.02` على فرع `main`، مع فحص مسار Android (`app/`)، النواة الأصلية (`app/src/main/cpp/`)، اختبارات Host، وملفات المصدر المرجعية المضغوطة في `source/`، وبالأخص `gm82core-main.zip`.

## الحالة المثبتة

- اختبارات النواة وHost: **PASS**.
- عينات GMK الأربع (`mario_bros`, `plataformas`, `shooter`, `zelda`): **4/4 PASS** في pipeline الموجود.
- فحص JNI الآلي: **PASS**، ولم يجد دوال JNI فارغة أو placeholder واضحة.
- بناء Gradle/Android: **لم يبدأ compilation** لأن بيئة التنفيذ لا تحتوي Android SDK؛ ظهر الخطأ `SDK location not found`. لذلك لا يصح إعلان أن APK مبني أو مجرّب على جهاز.
- اختبار جهاز Android حقيقي، GLES/FBO، الصوت PCM/OpenSL، مدير الملفات، وScoped Storage ما زالت تحتاج جهازًا أو Emulator مع SDK/NDK.

## الإصلاحات المنفذة

في `app/src/main/java/com/normaker/nativefull/MainActivity.java`:

1. إضافة تحرير مركزي لكل مفاتيح اللاعب عند فقدان التركيز، `onPause`، `onDestroy`، والعودة من اللاعب إلى الاستوديو. هذا يمنع بقاء الحركة أو القفز عالقًا بعد ضغط Home/Back أو تبديل النافذة.
2. تحصين تحرير الإدخال ضد فشل تحميل JNI حتى لا يتحول غياب المكتبة إلى crash إضافي.
3. إعادة تصميم خريطة اللمس: منطقة التحكم أصبحت شريطًا سفليًا؛ الربع الأيسر للحركة يسارًا، الربع التالي للحركة يمينًا، والجزء الأيمن للقفز. اللمس في مساحة اللعب لا يحقن `UP+SPACE` بالخطأ.

## المشكلات المتبقية ذات الأولوية

1. **بيئة البناء:** توفير Android SDK 34، NDK `25.2.9519653`، CMake `3.22.1`، ثم تشغيل `./gradlew :app:assembleDebug`.
2. **اختبار JNI الفعلي:** تثبيت APK على Emulator/API 34 وعلى هاتف واحد على الأقل، ثم اختبار فتح التطبيق، استيراد GMK، دخول الغرفة الأولى، الحركة، الرسم، تغيير الغرفة، الصوت، والحفظ/التحميل.
3. **المسار الرسومي:** اعتماد مسار رسم واحد للإصدار الإنتاجي؛ حاليًا توجد واجهة WebView ومشغل native bitmap، مع مكونات GLES منفصلة، ويجب قياس الأداء واختيار backend نهائي بدل إبقاء مسارين غير متكافئين.
4. **الاستيراد:** تحويل رسائل فشل decode/materialize إلى واجهة واضحة للمستخدم مع اسم المورد ورقم chunk، بدل أي فشل صامت أو شاشة سوداء.
5. **التوافق:** تثبيت corpus قبول من 3–10 ألعاب GMK حقيقية، وعدم تعميم النتائج على كل مشاريع GameMaker 8.2.
6. **الإصدار:** فصل debug عن release، إضافة توقيع release خارج المستودع، تفعيل R8 بعد التحقق، تقليل الأذونات، ووضع سياسة واضحة للملفات الخارجية وURI permissions.

## خطة إنتاج ملف Android احترافي

### المرحلة 1 — قابلية البناء والتكرار

- تثبيت نسخ SDK/NDK/CMake في CI وبيئة المطور.
- إضافة workflow يبني `assembleDebug` ويفحص وجود الـ APK ويفشل صراحة عند خطأ native.
- إخراج ABI مبدئي `arm64-v8a` و`armeabi-v7a` فقط، ثم إضافة x86/x86_64 عند الحاجة للمحاكيات.
- حفظ build metadata: commit، versionName، ABI، ووقت البناء.

### المرحلة 2 — Runtime وImporter

- توحيد lifecycle: create → load → step → render → input → destroy.
- إضافة diagnostics panel داخل التطبيق: آخر مرحلة، آخر خطأ، عدد الموارد، room الحالي، FPS، واسم الـ builtin الناقص.
- إكمال فك sprites/backgrounds/fonts/sounds/scripts/rooms مع counters وfailure reasons.
- منع إعلان `complete=true` إلا بعد التحقق من الموارد المطلوبة فعليًا.

### المرحلة 3 — واجهة Android أصلية

- إبقاء WebView للاستوديو فقط، ونقل المشغل إلى SurfaceView/GL أو backend bitmap محسّن بعد benchmark.
- إضافة أزرار لمس قابلة لتغيير الحجم والموضع، دعم gamepad، ودعم safe areas والاتجاه landscape.
- إدارة الصوت بطبقة واحدة مع cache وrelease مرتبطين بدورة النشاط.
- استخدام Storage Access Framework بدل الاعتماد على مسارات مباشرة أو أذونات تخزين قديمة.

### المرحلة 4 — الجودة والأمان

- اختبارات regression لكل إصلاح: event order، collision، instance lifecycle، GML VM، input، save/load.
- اختبارات Android instrumented وsmoke آلية على Emulator.
- فحص ASan/UBSan للنواة على Host، وفحص تسربات الذاكرة ودورة JNI.
- منع الأسرار وkeystore وملفات build الناتجة من Git؛ إنشاء release keystore خارج المستودع.

### المرحلة 5 — Release Candidate

- قبول corpus ثابت: import، non-black render، input، collision، room change، sound، save/load.
- قياس FPS واستهلاك الذاكرة ووقت الاستيراد على جهاز منخفض ومتوسط.
- إخراج APK/AAB release مع versioning وchangelog وSHA-256.
- تسليم تقرير PASS/FAIL مستقل لكل لعبة، مع قائمة معروفة بالفجوات بدل ادعاء توافق 100%.

## معيار الخروج المقترح

لا تعتبر نسخة Android احترافية جاهزة إلا إذا نجحت في: بناء نظيف من CI، تثبيت وتشغيل على Emulator وهاتف، استيراد corpus القبول، أول room بدون شاشة سوداء، إدخال لمس/لوحة، تغيير غرفة، صوت، حفظ/تحميل، وعدم وجود crash في دورة pause/resume/destroy.
