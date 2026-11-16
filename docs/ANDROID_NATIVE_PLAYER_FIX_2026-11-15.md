# إصلاح Native player وواجهة Android — 2026-11-15

## المشكلة التي ظهرت في APK

كان التطبيق يحتوي مسارين مختلفين: واجهة Studio/المحاكي الجديد داخل `assets/www/index.html`، ومسار Native player مستقل داخل `MainActivity`. زر `تشغيل GMK الأصلي` كان يفتح المسار الثاني بتخطيط Android قديم، لذلك لا تظهر له واجهة Landscape الموجودة في WebView.

كما كان JNI يطلب أن تكون حالة runtime مساوية لـ`running` قبل استدعاء الرسم. عند انتقال اللعبة أو توقفها مؤقتاً كان يترك Bitmap دون تحديث، وهو ما يظهر كشاشة سوداء.

## الإصلاح المنفذ

تم تعديل Native player ليبدأ في Landscape فعلياً عند فتحه، ويزيل هامش شريط Portrait القديم، ويضيف مفاتيح واضحة لـLandscape وFullscreen مع العودة إلى Studio. كما تمت مزامنة `gm82_jni.c` مع `cpp_backup` و`BLACKSCREEN_FIX`.

تم تعديل الرسم ليستمر في عرض الغرفة الحالية حتى عندما تكون `running` متوقفة مؤقتاً، مع تسجيل تشخيص JNI عند فشل الرسم بدلاً من إخفاء السبب.

## التحقق

- `verify_core_mirrors.py`: **PASS**.
- `run_engine_suite.py`: **ENGINE_TESTS_PASS=54/54**.
- Host pipeline: **SUMMARY expected=4 ok=4 fail=0**.
- `assembleDebug`: **BUILD SUCCESSFUL** لكل ABI الموجودة في المشروع.

## حدود هذه الخطوة

هذا الإصلاح يعالج مسار Native player الذي كان يظهر كمحاكي قديم، لكنه لا يعني أن كل وظائف Studio/WebView أصبحت متاحة داخل Native player. ما زال يلزم توحيد تجربة التشغيل بين المسارين واختبار APK على جهاز Android فعلي قبل إعلان اكتمال واجهة Landscape أو إزالة أي مسار قديم.
