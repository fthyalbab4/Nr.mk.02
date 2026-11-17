# تقرير تنفيذ المشروع الموحد — 24 أكتوبر 2026

## القرار المعماري

`Nr.mk.02` هو جذر مشروع التطبيق والنواة. لم يعد الناتج النهائي يضم نسخًا كاملة من `Nor-maker-8.2` أو `NM.Maker.0..1.0` كمجلدات مستقلة. أُبقيت مستودعات المرجع خارج شجرة المشروع لاستخدامها في المقارنة، ونُقلت التغييرات المنتقاة فقط إلى المسارات الأصلية واختُبرت محليًا. النسخ التي جرت مراجعتها: `Nr.mk.02@2dc7a80`، `Nor-maker-8.2@4a4d4e1`، و`NM.Maker.0..1.0@5f12909`.

## دمج التطبيق الفعلي

- أصبح `app/src/main/java/com/normaker/nativefull/MainActivity.java` نقطة تشغيل واحدة: يحمّل Studio من `file:///android_asset/www/index.html` ويعرض مشغل JNI الأصلي داخل النشاط نفسه بدل بدء شاشة اللاعب المنفصلة تلقائيًا.
- يتيح WebView منتقي الملفات، ويرسل ملف GMK المحدد إلى محلل Studio. يمرر النشاط الملفات الثنائية المدعومة كذلك إلى `nativeImportGmkSnapshot`؛ لا يُعرض زر اللاعب الأصلي كجاهز إلا إذا أعاد المحرك نتيجة `complete:true`. يعود المستخدم من اللاعب إلى المحرر داخل النشاط نفسه.
- يسجل جسر `NorNative` عمليات الموارد والغرفة والـinstances المتاحة في JNI. عند تصدير NOR JSON، يكتب الملف إلى `Downloads/NOR Maker` على Android 10+، وإلى مجلد Downloads الخاص بالتطبيق على الإصدارات الأقدم.
- أُضيف إعداد Gradle `externalNativeBuild` ليستعمل `app/src/main/cpp/CMakeLists.txt` وNDK `25.2.9519653`، وتُستبعد `.so` القديمة من `jniLibs` حتى لا تحجب بناء المصدر. واستُبدل تحميل Three.js من CDN بملف r128 محلي مع نسخة ترخيصه.
- لا يحقن التطبيق native tick جانبيًا داخل iframe؛ معاينة Studio JavaScript واللاعب C الأصلي مساران مختلفان عمدًا حاليًا، وزر اللاعب يشغّل لقطة GMK الثنائية الأصلية لا كل تعديلات المحرر.
- أضيفت اختبارات C fixtures للـtyped frontend وتدقيق ثابت لعقد نقطة تشغيل Android/JNI.

## تغييرات parser والاختبارات

أُضيف دعم تزايدي للجمل والـblocks في `app/src/main/cpp/src/gml_frontend.c` دون استبدال parser أو VM الأساسيين: `if/else`, `while`, `do/until`, `for`, `repeat`, `break`, و`continue`. توجد ثماني fixtures snapshots للـtyped GML subset، واختبارات للمحول الذي يحول `fnames` إلى metadata افتراضيًا بحالة `unverified`.

## التحقق

الاختبارات التي يجب إعادة تشغيلها من جذر المشروع:

```bash
python3 tools/run_reference_fixtures.py
python3 -m unittest discover -s tests/reference -p 'test_*.py' -v
python3 tools/run_engine_suite.py
git diff --check
```

آخر نتيجة: fixtures `8/8`، اختبارات وحدات Python `6/6`، native executables `10/10`، host pipeline `4/4`، و`git diff --check` ناجح. ترجمة Java يدويًا مقابل `android.jar` API 34 نجحت. ثُبّت SDK 34/NDK 25.2 وحاولنا `assembleDebug`، لكن `cmake` و`aapt2` المضمّنين بالـSDK هما x86_64 ولا يعملان على sandbox aarch64؛ ففشل Gradle قبل إنشاء APK. لم يُختبر اختيار الملفات/MediaStore/المحرك على جهاز Android. لا تُعرض نتيجة javac كأنها بناء APK أو اختبار جهاز.

## ما بقي

1. بناء Debug/Release على host يدعم أدوات SDK/NDK، ثم اختبار import → edit → run → export على جهاز Android فعلي.
2. اختبار Android لمحدد الملفات وMediaStore، وتأكيد صلاحيات URI عبر إصدارات WebView مختلفة.
3. دعم استيراد مجلد GM82 النصي عبر Storage Access Framework، وربط موارد Studio الثنائية (صور/صوت) بالنواة بدل metadata فقط.
4. تنفيذ وتدقيق GMK/GMX/GMZ semantic round-trip، مع corpus حقيقي وwriter يقبله GameMaker.
5. سد فجوات GML/objects/events/actions والاختبارات السلوكية مقابل نسخة Windows.

واجهة موحدة تعني نقطة دخول ومشروع تطبيق واحد؛ لا تعني أن كل ميزات الاستوديو والمحرك native أصبحت متكافئة. نسبة **100%** أو parity كاملة غير مثبتة. ملفات Windows التنفيذية ليست مصدر تنفيذ Android، ويجب حل الملكية/الترخيص للمكونات الخارجية قبل النشر.
