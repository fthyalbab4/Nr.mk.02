# خطة ما يحتاج تدخلك (صريح)

آخر مزامنة كود على main: commit **auto-materialize** (`13b5bd4a`) — المصادر الحية فيها gap-fill.

## U1 — materialize على الشجرة — **تم ✓**
- Workflow `auto-materialize` نجح وكتب:
  - `gm82_actions.c` (DnD + UNMAPPED)
  - `gm82_runtime.c` (image_angle/alpha/blend في الرسم)
  - `gm82_gml_eval.c` (string_repeat/concat/modwrap/last_string)
- لا حاجة تعيد U1 إلا لو رجعت الشجرة لخلف.

## U2 — جهاز أندرويد + logcat — **مطلوب منك**
1. ثبّت APK debug
2. شغّل لعبة GMK/سحابة
3. انسخ logcat عند أي خطأ
4. ابحث عن: `UNMAPPED_ACTION` و `UNMAPPED_GML_FN`
5. أرسل القائمة → تُنفَّذ الرموز بالاسم على المستودع

## U3 — NDK / بناء `.so` + APK — **مطلوب منك أو CI فيه NDK**
```bash
cd app && ./gradlew assembleDebug
```
بدون native مُحدَّث، تعديلات C لا تصل لجهازك.

## U4 — DLL / GEX / REA — **مطلوب منك**
- باينري + تصريح تحليل، أو مخرجات REA/Ghidra بأسماء الدوال الناقصة.

## U5 — OpenSLES على جهاز — **مطلوب منك**
- تشغيل صوت داخل لعبة على جهاز حقيقي.

## ترتيب مقترح
1. **U3** بناء APK (إن قدرت)
2. **U2** لعب + logcat
3. **U4 / U5** حسب اللعبة
