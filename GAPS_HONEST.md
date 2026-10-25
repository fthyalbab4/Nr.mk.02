# GAPS_HONEST — الحالة بعد دمج نقطة تشغيل Android

## ما تحقق على المضيف

- مسار C المضيف واختبارات عينات GMK الأربع متوفران؛ يجب إعادة تشغيل `python3 tools/run_engine_suite.py` قبل التسليم.
- typed GML frontend أضيف إليه دعم تزايدي لـ`if/else`, `while`, `do/until`, `for`, `repeat`, `break`, و`continue` مع fixtures snapshots. هذا لا يغلق grammar أو semantics كاملة.
- اختبارات Android ثابتة تربط Activity بالـWebView/JNI؛ ليست بديلًا عن Gradle/NDK أو جهاز فعلي.

## دمج واجهة التطبيق

أصبح Studio المضمّن داخل assets هو واجهة Activity Android نفسها، ويوجد native player داخل النشاط مع file chooser وتصدير NOR JSON. هذا توحيد لنقطة الدخول وتدفق الملف، لا توحيد كامل لدلالات التشغيل: معاينة Studio JavaScript والمحرك الأصلي C ما زالا مسارين مختلفين. استيراد GM82 folder، ربط صور/صوت المشروع المُنشأ إلى renderer native، وتصدير GMK حقيقي ما زالت مفتوحة.

## Open gaps

1. إعادة `assembleDebug` على Linux x86_64 أو SDK بأدوات host arm64، ثم اختبار import → edit → run → export على جهاز حقيقي، بما في ذلك أذونات URI وMediaStore. المحاولة الحالية وصلت Gradle إلى CMake/AAPT2 لكنها توقفت لأن حزم Google المرفقة x86_64 على sandbox aarch64.
2. دعم مجلدات GM82 النصية عبر Storage Access Framework واختبارها مع موارد كبيرة.
3. استكمال GML expressions/scopes/events/actions ومقارنة نتائج حقيقية مع نسخة Windows.
4. إنشاء Project IR وGMK/GMX/GMZ semantic round-trip كاملين والتحقق من ملفات الناتج في GameMaker.
5. إكمال مزامنة موارد Studio الثنائية (sprite/audio/background/font) مع runtime native؛ الجسر الحالي لا يثبت ذلك.

لا توجد نسبة parity جديدة مثبتة. نجاح fixtures المحدودة أو وجود اسم API لا يعني implementation. راجع `REPORTING_RULES.md` قبل أي ادعاء بنسبة اكتمال.
