# PLAN_EXEC — الهدف: لعب GM82/GMK كويندوز على Android

## تم
- [x] إثبات host: ترتيب الأحداث + xprevious + scaled AABB
- [x] باتشات C + ASSEMBLE.sh
- [x] كشف عدم تطابق Gm82Native مع SO
- [x] MainActivity يطابق رموز SO + NorNative.tick → nativeRuntimeStep

## التالي (متتابع)
### 1) بناء وتشغيل APK
- Assemble من المستودع الحالي
- تثبيت على جهاز/محاكي
- logcat: NOR_NATIVE بدون UnsatisfiedLinkError

### 2) عينة واحدة قابلة للقياس
- mario_bros.gmk أو plataformas.gmk
- نجاح = تحميل + إطارات step + عدم freeze 30 ثانية

### 3) مصدر C vs SO
- إما: الإبقاء على SO الحالي والتركيز على مسار JS→nativeRuntime* الموجود في SO
- أو: عند توفر NDK، rebuild SO بعد ASSEMBLE لدمج ترتيب الأحداث في الثنائي

### 4) GML/DnD حسب أعطال العينة فقط
- لا توسعة عشوائية لكل GML

## ممنوع
نسب مئوية، ادعاء تكافؤ ويندوز بدون اختبار عينة، استبدال نواة سليمة.
