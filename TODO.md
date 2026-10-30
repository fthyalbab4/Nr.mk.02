# TODO — خطة عمل صادقة

> **اقرأ أولًا:** `FULL_GM_PARITY_PLAN.md` ثم `EVENT_SYSTEM_PLAN.md`

## تم (مُقاس بالكود)

- [x] Sprite decoder + multi-frame storage
- [x] Room/object decode + أسماء `r001`
- [x] Host pipeline 4/4
- [x] Behaviors Create/Step scaffolding + fire_create_one
- [x] إزالة ادعاءات 100% من التقارير الأساسية
- [x] إنشاء `EVENT_SYSTEM_PLAN.md` + `FULL_GM_PARITY_PLAN.md`
- [x] استعادة `gm82_events.c` + collision `other`
- [x] توحيد Alarm path
- [x] Key Press / Key Release events
- [x] Outside / Boundary / Animation End (Other)
- [x] User event helper
- [x] تحديث ترتيب runtime_step ليقارب GM 8.x
- [x] إصلاح أخطاء التجميع والنوع في gm82_events.c و gm82_runtime.c
- [x] اجتياز جميع اختبارات run_full_verification.py و run_engine_suite.py بنسبة نجاح كاملة

## التالي (مرتّب بالأولوية)

### P0 المتبقي
- [ ] Instance Creation Code من الـ Room (تنفيذ + اختبار)
- [ ] تأكيد توقيت Destroy queue مقابل Destroy event باختبارات
- [ ] توسيع تغطية `with` في evaluator للحالات الحدية

### P1
- [ ] Pre-Draw / Post-Draw تُستدعى من مسار الرسم فعليًا
- [ ] Action lists من GMK أوسع
- [ ] Precise collision mask path مفعّل دائمًا عند توفر mask

### Android حقيقي
- [ ] NDK build + APK + اختبار جهاز (mario) + لوج

### جودة
- [ ] Audio playback على الجهاز
- [ ] Corpus مقارنة مع Portable باستخدام RE maps

---

لا تُعلَّم أي خانة [x] من غير أمر اختبار أو لوج جهاز.
