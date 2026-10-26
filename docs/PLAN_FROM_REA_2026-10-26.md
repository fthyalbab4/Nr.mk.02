# خطة سد الفجوات من نتائج REA — Nr.mk.02

**أساس الأدلة:** `source/reverse-engineering` @ `110c60cf` + حالة النواة على main  
**قاعدة:** لا ندّعي وجود سورس Delphi أصلي؁ لا 100% ألعاب؛ التصنيف المعجمي مرشّح فقط.

---

## 1) ماذا يوجد فعليًا (وماذا لا)

### موجود
| الأصل | الواقع |
|------|--------|
| ~60k ملف pseudocode + full-index + maps | نعم — تغطية Ghidra/عينة مكتملة للدوال المحللة |
| تصنيف معجمي (keywords) | نعم — أغلبية `unknown` |
anvil `room_instance_suspect` | **12** عنوان فقط |
anvil `gml_runtime` | **10** |
anvil `audio` | ~13 (معظمها stubs `winmm`) |
anvil `graphics` | **2** (ليست خريطة D3D كاملة) |
| جدول تسجيل builtins `0x63a5a8` | مدموج — place_*/move_*/mp_grid_* أسماء صريحة |
| Host pipeline | 4/4 samples ok |

### غير موجود (لا تخترع)
- سورس GameMaker الأصلي
- خريطة event loop مسمّاة من التفكيك
- خوارزميات collision mask / surface FBO / PCM decode مثبتة من REA
- إثبات تشغيل على جهاز (APK logcat)

---

## 2) تعريف «اكتمل» (ثابت — بدون نسب وهمية)

المشروع مكتمل **لقائمة ألعاب مستهدفة** عندما:

1. `docs/CLOUD_GAME_LIST.md` ≥ 3 ألعاب بأسماء حقيقية
2. لكل لعبة `CLOUD_RUN_*` بـ:
   - فتح بدون crash
   - غرفة أولى ليست سوداء صامتة (أو UI خطأ واضح)
   - إدخال/حركة أساسية
   - انتقال غرفة أو restart
   - `sound_play` لا يعمل crash (الصمت مقبول)
3. كل فشل جديد → `FAIL_BUILTINS_*` ثم إصلاح موجّه

**خارج التعريف:** كل GMK في العالم؁ مطابقة ويندوز بكسل؛ «اكتمال REA = اكتمال المحرك».

---

## 3) طبقات العمل (ترتيب اعتماد)

```
T0  بناء APK + logcat
T1  تحميل GMK → materialize → room/instances
T2  حلقة أحداث + حركة + collision المستخدم
T3  رسم ظاهر
T4  builtins/DnD من FAIL فقط (+ جداول REA 0x63a5a8 كمرجع أسماء)
T5  صوت جهاز (اختياري لـ PASS الأساسي)
T6  قبول قائمة الألعاب
```

REA يدخل في **T4** (أسماء/مرشحين) و**ملاحظات معمارية** فقط — لا يستبدل T0–T3.

---

## 4) خطة مراحل تفصيلية

### المرحلة A — إثبات جهاز (O1) — حاجز للتقدم
**المدخل:** APK من main أو بناء محلي  
**العمل:**
1. تثبيت + فتح العينات الأربع في assets
2. `logcat` كامل لكل لعبة → `docs/CLOUD_RUN_<name>_<date>.md`
**Done:** 4 ملفات run بحالات PASS/FAIL حقيقية  
**بدون هذا:** أي «سد فجوة» إضافي في C يبقى تخمينًا نسبيًا.

### المرحلة B — مسار التحميل (O2)
**عند فشل تحميل/شاشة سوداء:**
1. لوج: sprite/room/object/instance counts بعد materialize
2. إصلاح decode/materialize فقط لما يكسره اللوج
3. REA: مرجع `room_instance_suspect` على anvil **كفرضيات** بعد قراءة يدوية للـ 12 عنوان — لا نسخ `FUN_*`
**Done:** نفس اللعبة تصل `goto_room` مع instances>0 إن وجدت في المشروع

### المرحلة C — سلوك الإطار (T2/T3)
**موجود على main:** ترتيب أحداث؁ deferred destroy؁ with snapshot؁ place_*/motion؁ depth draw  
**العمل:** إصلاح فقط ما يفشل على الجهاز في checklist  
**REA:** `0x63a5a8` اتستخدم للأسماء؛ `0x5b8428` يوحي برسالة «instance → sprite غير موجود» — التحقق أن خطأ sprite غير صالح لا يعمل crash

### المرحلة D — Builtins من الأدلة (O5) — FAIL-driven
**قاعدة:** لا builtin جديد إلا بعد `اسم في FAIL` أو ظهوره في جدول `0x63a5a8` وناقص عندنا.

| مصدر | استخدام |
|------|---------|
| جدول 0x63a5a8 | أسماء place/move/mp_grid (جزء كبير اتقفل + aliases) |
| `gml_runtime` 10 عناوين | قراءة يدوية عند FAIL متعلق بـ variable/script/execute |
| `source/unpacked/gm82core` | مساعدات QoL بعد ظهور الاسم في FAIL |

**دفعات:** TOP 10 من لوج الجهاز فقط → تنفيذ → إعادة تشغيل نفس اللعبة.

### المرحلة E — صوت (O3)
**أدلة REA:** imports `winmm` + MCI — مسار إخراج صوت نظامي؁ ليس خوارزمية decode  
**موجود:** mixer + `nativePollAudioCommand`  
**العمل:** OpenSL/AAudio callback + PCM عند الحاجة؛ مرجع `gm82audio` المفتوح كتصميم  
**Done للـ checklist:** no-crash؛ **Done للسمع:** PCM حقيقي

### المرحلة F — Surfaces/GLES (O4)
**REA:** لا إثبات FBO من العينة  
**موجود:** soft surfaces + soft FBO  
**العمل:** GLES FBO **فقط** إذا FAIL لعبة يطلب surface target حقيقي

### المرحلة G — قراءة REA منظمة (O6) — بدون تضخيم النواة
**القائمة (انvil فقط):** 12 `room_instance_suspect` + 10 `gml_runtime`  
**لكل عنوان:**
1. قراءة 1–2 صفحات pseudocode
2. ملخص خوارزمية أو «RTL/غير مفيد» في `docs/REA_CANDIDATE_<addr>.md`
3. إن مفيد → تنفيذ clean-room + اختبار؛ إلا تجاهل
**ممنوع:** لصق `FUN_*` في `app/src/main/cpp`

### المرحلة H — قبول (T6)
حساب `ACCEPTANCE_SCORE` = PASS/TOTAL على خلايا checklist  
الهدف العملي: ≥ 0.95 على ≥3 ألعاب × 5 بنود — **بعد** لوجات الجهاز فقط.

---

## 5) جدول زمن تقريبي (بعد توفر APK+ألعاب)

| أسبوع | تركيز |
|------|--------|
| 1 | A جهاز + أول لعبة golden |
| 2 | B+C لنفس اللعبة + أول دفعة FAIL |
| 3 | لعبة 2–3 + دفعات FAIL مشتركة |
| 4 | E صوت إن لزم + G مرشحي REA عند الحاجة |

بدون جهاز: فقط G (توثيق مرشحين) + الحفاظ على host 4/4.

---

## 6) قواعد منع الهلوسة
1. لا نسبة إكمال من عدد ملفات decompile
2. لا نسخ `FUN_*` إلى `app/src/main/cpp`
3. لا phases جديدة بدون FAIL أو عنوان REA محدد
4. `unknown` (~8000) = ليس طابور عمل
5. GameMaker.exe = IDE؛ **anvil** = أولوية الـ runner

---

## 7) ملخص تنفيذي

| الأولوية | البند | مصدر الأدلة |
|----------|------|--------------|
| 1 | APK + logcat | جهاز |
| 2 | إصلاح تحميل حسب اللوج | GMK + materialize |
| 3 | TOP FAIL builtins | log + جدول 0x63a5a8 |
| 4 | مرشحو anvil 12+10 | REA maps |
| 5 | صوت/ـFBO | FAIL فقط |

**الوضع الحالي الصادق:** نواة + host 4/4 + جزء من جدول motion/mp_grid و5 من REA؛ **العنق = إثبات على الجهاز + FAIL حقيقي**؁ ليس نقص ملفات التفكيك.
