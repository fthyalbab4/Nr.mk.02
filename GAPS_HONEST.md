# GAPS_HONEST.md — تقرير صادق عن حالة محاكاة GM82 / GMK

**تاريخ التحديث:** 2026-10-06  
**المصدر:** فحص مباشر لـ APK + كود Nr.mk.02 + libgm82_android.so + عينات mario/zelda/shooter/plataformas

---

## الحالة الحقيقية (بدون ادعاء 100%)

| المكوّن | الحالة الفعلية | ملاحظات من الكود |
|--------|----------------|------------------|
| GMK header probe | يعمل | magic=1234321, version=800 على العينات الأربع |
| zlib inflate + BGRA→RGBA | موجود | في gm82_sprite_decode.c — يعمل على mario_bros |
| Sprite materialize | محسّن | يفك إطارات + multi-frame يُخزَّن متتالي في rgba (أُصلح 2026-10-06) |
| Background materialize | جزئي | نفس المسار، يعتمد على decoder |
| Room decode | placeholder | reader ينشئ room0 بسيط، status=PARTIAL |
| Objects / Events / Actions | ناقص | لا يوجد walker كامل في الـ reader الحالي |
| ir->complete | false افتراضياً | gm82_gmk_reader.c يضع complete=false عمداً حتى تنتهي walkers |
| Runtime Guard | يعمل صح | يرفض التشغيل إذا complete=false أو sprites/backgrounds ناقصة |
| nativeRuntimeStep / Render | رموز موجودة في SO | لا يُستدعى بوضوح من حلقة JS الرئيسية |
| GML interpreter كامل | جزئي | gm82_gml_eval.c موجود لكن ليس full parity |
| Audio playback | غير مكتمل | headers فقط في بعض المسارات |
| precise masks | غير مكتمل | TODO في الخطة الأصلية |
| native_draw (GLES) | STUB | موثّق في API_SURFACE داخل APK |

**النسبة التقديرية الصادقة: ~30–40%** من محاكاة كاملة لألعاب GM8.2 حقيقية معقدة.

---

## ما تم إصلاحه سابقاً (حقيقي)

1. استخراج كود Action 603 من argsVal[0] بدل الحقل الفارغ.
2. تضمين transpiler GML أساسي داخل الرانر.
3. دعم جزئي لـ if بدون أقواس و = كـ ==.
4. إصلاح تمرير كائن في move_contact_solid.
5. Runtime Guard يمنع الشاشة السوداء عند incomplete.
6. Sprite decoder حقيقي (zlib + BGRA) نجح على mario_bros في اختبارات سابقة.
7. Multi-frame storage في materialize — كل الإطارات متتالية في rgba (2026-10-06).

---

## الفجوات المتبقية الحرجة (مرتبة بالأولوية)

1. ~~Multi-frame sprites~~ — أُصلح: كل الإطارات متتالية في rgba.
2. Chunk walkers الكاملة لـ Objects / Events / Sounds / Scripts داخل GMK 800.
3. Room instances + tiles + views الحقيقية بدل الـ placeholder.
4. ربط nativeRuntimeStep + RenderBitmap داخل الحلقة التشغيلية.
5. GML full semantics (with / other / scopes / return / builtins الناقصة).
6. Audio playback حقيقي + precise collision masks.
7. اختبارات end-to-end على mario / zelda / shooter تثبت complete=true ثم gameplay.

---

## قواعد ضد الهلوسة

- أي resource لم يُفك بالكامل → status = PARTIAL و complete = false.
- لا يُعلن 100% إلا بعد نجاح corpus حقيقي (20+ لعبة) مع مقارنة سلوك مع Windows GM82.
- هذا الملف هو المصدر الوحيد المعتمد للحالة؛ أي ادعاء مخالف يُعتبر خطأ.

---

## الخطوة التالية الجارية

- إزالة ادعاءات 100% من STATUS / TODO. ✓
- إصلاح تخزين multi-frame في gm82_materialize_sprites. ✓
- إكمال اختبار decoder على العينات الأربع.
