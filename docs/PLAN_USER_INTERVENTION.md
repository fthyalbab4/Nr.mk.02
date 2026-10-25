# خطة ما يحتاج تدخلك (صريح)

هذه البنود **لا تُغلق بالكود وحده**. باقي الفجوات القابلة للسد بالكود تُعالَج عبر materialize على المستودع.

## U1 — تشغيل materialize على GitHub (مرة واحدة)
1. افتح: https://github.com/fthyalbab4/Nr.mk.02/actions
2. اختر workflow **apply-string-math**
3. **Run workflow** على `main`
4. انتظر الـ commit: `chore: materialize gap-fill sources`
5. تحقق: الملفات تحت `app/src/main/cpp/src/` صارت فيها `action_message` و `string_repeat` و `inst->image_angle` في الرسم

بدون هذه الخطوة تبقى الـ blobs/scripts جاهزة لكن الشجرة الحية قديمة.

## U2 — جهاز أندرويد
1. ثبّت APK debug بعد `gradle assembleDebug` (أو من Actions إن وُجد)
2. شغّل لعبة GMK/سحابة
3. انسخ **logcat** كامل عند أي توقف/خطأ
4. ابحث عن أسطر: `UNMAPPED_ACTION` و `UNMAPPED_GML_FN`
5. أرسل القائمة هنا → تُنفَّذ الرموز بالاسم

## U3 — NDK / `.so` جديد
على جهاز فيه Android NDK:
```bash
cd app && ./gradlew assembleDebug
```
ارفع الـ APK أو تأكد أن الـ CI يبني بـ NDK. بدون ذلك تعديلات C لا تصل للعب على الموبايل.

## U4 — ألعاب تعتمد DLL/GEX
إن لعبة تحتاج `GM82Core` extension / external DLL:
- وفر الباينري + تصريح تحليل، أو
- شغّل REA/Ghidra محليًا (`morluto/rea`) وانشر نتائج الدوال الناقصة كقائمة أسماء

## U5 — اختبار صوت OpenSLES
على جهاز حقيقي: تشغيل صوت داخل لعبة + تأكيد لا كراش. host queue وحده لا يكفي.

## ترتيب مقترح لك
1. U1 (دقيقة واحدة على GitHub)
2. U3 إن أمكن (بناء APK)
3. U2 (logcat)
4. U4/U5 حسب الحاجة
