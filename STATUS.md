# STATUS — Studio Android unified; host tests tracked

## التطبيق الموحد

نقطة تشغيل واحدة (`com.normaker.nativefull.MainActivity`) تعرض Studio WebView من assets، وتحتوي مشغل JNI الأصلي مع تبديل داخلي. استيراد GMK من المنتقي يمر إلى Studio، والصيغ التي يقبلها native importer تُحمّل أيضًا للمشغل الأصلي. تصدير NOR JSON يحفظ نسخة في Downloads. Gradle مرتبط بمصدر CMake؛ ترجمة Java API 34 نجحت، لكن `assembleDebug` لم ينتج APK لأن CMake/AAPT2 من SDK x86_64 لا يعملان على sandbox aarch64. لا يوجد اختبار جهاز.

## نتائج الاختبار المعروفة

أعيد تشغيل الاختبارات قبل التسليم؛ النتائج في `docs/IMPLEMENTATION_STATUS_AR.md`. اختبارات المضيف على عينات GMK الأربع وC native suite منفصلة عن تحقق Android. لا تستخدم عبارة "100% مطابقة".

## حالة العمل

| المجال | الحالة |
|---|---|
| Host runtime / عينات GMK | اختبارات مضيف موجودة؛ تُعاد قبل التسليم |
| typed GML statements | دعم جزئي مع fixtures؛ ما تزال فجوات grammar/scopes/events |
| Studio داخل Activity Android | مصدر الواجهة أصبح نقطة التشغيل؛ يلزم APK/device validation |
| native GMK player | يبقى داخل النشاط؛ الاستيراد يعتمد على حدود C parser |
| GMK/GMX/GMZ round-trip | غير مكتمل |
| parity مقابل Windows | غير مثبتة |

راجع `GAPS_HONEST.md` و`REPORTING_RULES.md` و`docs/IMPLEMENTATION_STATUS_AR.md` للتفاصيل.
