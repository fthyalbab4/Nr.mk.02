# PLAN_EXEC — صادق — الهدف: لعب GM82/GMK كويندوز على Android

## ما تم (مثبت)
- Host unit test: ترتيب الأحداث + xprevious + AABB scaled → ALL PASS
- باتشات جاهزة على المستودع تحت `tools/gap_fill_20261013/`
- Headers على main: xprevious/yprevious + begin/end step API
- `bash tools/gap_fill_20261013/ASSEMBLE.sh` يطبّق الباتشات على مصادر C

## الخطوة التالية فوراً (A — دمج المصادر)
1. من جذر المستودع: `bash tools/gap_fill_20261013/ASSEMBLE.sh`
2. أو ادفع الملفات المصحّحة يدوياً من clone بعد patch
3. Commit: runtime.c + events.c + gml_eval (سطرين)

## B — native loop على الجهاز (بدون NDK جديد)
- الاعتماد على `libgm82_android.so` الموجود في APK
- التأكد أن Java `NorNativeWebBridge` / `Gm82Native` تستدعي:
  - nativeRuntimeStep
  - nativeRuntimeRenderBitmap
- JS: `preferNative=true` + requestAnimationFrame → bridge.onFrame
- معيار النجاح: إطارات تتحرك بدون شاشة سوداء ثابتة على عينة واحدة

## C — عينات ألعاب
- اختر 1–3 ملفات GMK/.gm82 صغيرة
- pipeline: load → materialize → goto_room → N steps → draw
- سجّل ما ينكسر (GML / DnD / collision) فقط من الدليل

## D — سد GML/DnD حسب العينات (ليس كل GML دفعة واحدة)
- أصلح ما تفشل فيه العينات أولاً
- أعد اختبار host بعد كل إصلاح

## ممنوع
- نسب مئوية
- ادعاء "جاهز 100%"
- استبدال نواة سليمة بكود تالف

## تعريف "الهدف المنشود" القابل للقياس
لعبة عيّنة محددة تُحمَّل كاملة، تدور الحلقة native، رسم يظهر، إدخال يستجيب، بدون freeze — مقارنة سلوكية مع نفس اللعبة على ويندوز لنفس المشهد.
