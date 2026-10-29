# TODO — خطة عمل صادقة

> **اقرأ أولًا:** `FULL_GM_PARITY_PLAN.md` ثم `EVENT_SYSTEM_PLAN.md`

## تم (مُقاس)

- [x] Sprite decoder + multi-frame storage
- [x] Room/object decode + أسماء `r001`
- [x] Host pipeline 4/4
- [x] Host SO symbols + smoke mario/zelda
- [x] Behaviors Create/Step scaffolding + fire_create_one
- [x] إزالة ادعاءات 100% من التقارير الأساسية
- [x] إنشاء `EVENT_SYSTEM_PLAN.md`
- [x] إنشاء `FULL_GM_PARITY_PLAN.md` (خطة تسليم بين الوكلاء)

## التالي (مرتّب بالأولوية)

### P0 — Event System + GML (من FULL_GM_PARITY_PLAN)
- [ ] قراءة وتوثيق الترتيب الفعلي داخل `gm82_runtime_step` / `gm82_runtime_step_dt`
- [ ] توحيد ترتيب الأحداث ليطابق جدول GM 8.x في `EVENT_SYSTEM_PLAN.md`
- [ ] Alarms → event حقيقي مرتبط بـ `GM82_EV_ALARM`
- [ ] إكمال `with` / `other` / scopes في الـ evaluator
- [ ] Instance Creation Code من الـ Room
- [ ] توقيت Destroy queue مقابل Destroy event

### P1 — توسيع
- [ ] User Events (`event_user`)
- [ ] Outside Room / Boundary / Animation End
- [ ] Action lists من GMK أوسع من الـ subset الحالي
- [ ] Pre-Draw / Post-Draw تُستدعى فعليًا

### Android حقيقي
- [ ] NDK build `libgm82_android.so` (arm64)
- [ ] دمج SO في APK + `addJavascriptInterface(..., "NorNative")`
- [ ] حقن `assets/www` scripts في `index.html`
- [ ] تشغيل mario على جهاز وتسجيل لوج/فيديو

### جودة
- [ ] Precise collision
- [ ] Audio playback على الجهاز
- [ ] Corpus مقارنة مع ويندوز / Portable (باستخدام `source/reverse-engineering/`)

---

لا تُعلَّم أي خانة [x] من غير أمر اختبار أو لوج جهاز.

أي وكيل يكمل العمل: حدّث هذا الملف + `STATUS.md` + `FULL_GM_PARITY_PLAN.md` بعد كل تقدم مقاس.
