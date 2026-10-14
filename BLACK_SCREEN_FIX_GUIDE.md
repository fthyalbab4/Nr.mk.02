# Black screen — دليل صادق

الشاشة السوداء غالباً من:
1. `complete=false` (materialize ناقص) → Guard يمنع التشغيل الوهمي
2. JS runner يعرض من غير تحميل كامل
3. native draw STUB / SO غير مدمج في APK

## ما يثبت أنه مش وهم
- Host pipeline: load→materialize→step→soft-draw على عينات GMK
- Host SO smoke يعطي frame buffer بأبعاد الغرفة

## ما لم يُثبت بعد
- نفس المسار داخل APK على هاتف بعد NDK build

راجع: `STATUS.md` · `assets/www/LOOP_PATCH.md` · `REPORTING_RULES.md`
