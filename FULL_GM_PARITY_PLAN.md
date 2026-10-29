# FULL_GM_PARITY_PLAN.md

**الهدف النهائي:**  
جعل **Nor Maker** قادرًا على تشغيل ومحاكاة كل شيء متعلق بـ Game Maker 8.x / GM82 (قدر الإمكان عمليًا).

هذا الملف هو **الخطة الشاملة** الموجهة لأي وكيل (Grok / Manus / غيره) يكمل العمل.  
اقرأ هذا الملف أولًا قبل أي تعديل كبير.

---

## 0. قواعد صارمة لكل الوكلاء

- **لا تدّعِ 100%** أبدًا بدون دليل اختبار.
- التزم بـ `REPORTING_RULES.md` و `HONEST_ENGINEERING_METHODOLOGY.md` و `GAPS_HONEST.md`.
- أي تغيير في الأحداث أو GML يجب أن يمر على:
  - `python3 run_full_verification.py`
  - `python3 tools/run_engine_suite.py` (إن وُجد)
  - `bash tools/run_host_pipeline.sh` (إن وُجد)
- العمل بأسلوب **ADD_AND_COMPLETE_NOT_REPLACE**.
- عند الانتهاء من مهمة: حدّث `STATUS.md` و `TODO.md` و هذا الملف إن لزم.

---

## 1. الوضع الحالي (ملخص صادق)

| الجانب | تقدير | ملاحظات |
|--------|--------|--------|
| Host pipeline (عينات GMK) | 92–96% | قوي |
| GM82 Core extensions | 85–90% | جزء كبير منفذ |
| Android device playable | 60–65% | بناء ينجح، اختبار جهاز ناقص |
| GML + Event System | متوسط | أكبر فجوة أمام "يشغل كل حاجة" |
| Collision دقيق | جزئي | AABB أساسي |
| Audio على جهاز | ناقص | Host محاكاة موجودة |

المرجع التفصيلي: `STATUS.md` + `GAPS_HONEST.md` + `AGENT_STATE.md`.

---

## 2. المسارات الثلاثة المتوازية (المطلوبة من المستخدم)

المستخدم طلب تنفيذ **1 + 3 + 4** معًا:

1. **GML + Event System** (الأولوية القصوى)
3. **نقل خواص من نتائج Reverse Engineering** لـ `GameMaker.exe` وغيره
4. **قائمة فجوات مرتبة + خطة تنفيذ واضحة**

---

## 3. وثائق الخطة الموجودة

| الملف | الغرض |
|-------|------|
| `EVENT_SYSTEM_PLAN.md` | ترتيب الأحداث المطلوب + الفجوات + مراحل التنفيذ |
| `FULL_GM_PARITY_PLAN.md` (هذا الملف) | الخطة الشاملة لأي وكيل |
| `TODO.md` | قائمة مهام قصيرة قابلة للتنفيذ |
| `STATUS.md` | الحالة المقاسة |
| `GAPS_HONEST.md` | الفجوات بصراحة |
| `AGENT_STATE.md` | تقييم طبقات المحرك |
| `PLAN_EXEC.md` | تركيز Android playable |
| `MASTER_PLAN_BEYOND_60.md` | أهداف ما بعد الـ host |

---

## 4. ترتيب الأحداث المطلوب (مرجع GM 8.x)

### عند الإنشاء / دخول الغرفة
1. Create event
2. Instance Creation Code (من الـ Room إن وُجد)
3. Room Start / Game Start حسب السياق

### كل Frame
1. Begin Step
2. Alarm 0 → 11 (عند الوصول لصفر)
3. Keyboard / Key Press / Key Release
4. Mouse events
5. Step (Normal)
6. Collision
7. End Step
8. Draw (Pre-Draw → Draw → Post-Draw)
9. Other (Outside, Boundary, Animation End, User events...)

### عند التدمير
- Destroy event ثم الإزالة من القائمة

التفاصيل الكاملة والفجوات: **`EVENT_SYSTEM_PLAN.md`**

---

## 5. الفجوات ذات الأولوية (P0 → P2)

### P0 — حرجة
- [ ] توحيد ترتيب التنفيذ داخل `gm82_runtime_step` / `gm82_runtime_step_dt` ليطابق الجدول أعلاه
- [ ] Alarms كأحداث حقيقية مرتبطة بـ `GM82_EV_ALARM`
- [ ] إكمال دعم `with` و `other` في الـ GML evaluator + Collision
- [ ] Instance Creation Code من الـ Room
- [ ] توقيت Destroy queue مقابل Destroy event

### P1 — مهمة
- [ ] User Events (`event_user`)
- [ ] Outside Room / Boundary / Animation End
- [ ] Key Press / Key Release منفصلة
- [ ] Pre-Draw / Post-Draw تُستدعى فعليًا
- [ ] توسيع Action Lists (DnD) من الـ subset الحالي

### P2 — لاحقًا
- [ ] Precise collision (mask)
- [ ] Particle / Timeline / Path events أدق
- [ ] Audio حقيقي على الجهاز (OpenSL ES)
- [ ] مقارنة سلوك مع النسخة Portable

---

## 6. مسار Reverse Engineering (المسار 3)

الموقع:
```
source/reverse-engineering/
├── static/          # SHA256 + manifests
├── maps/            # classified maps (GameMaker-classified.json ...)
├── decompiles/      # pseudocode من Ghidra
└── full-index/
```

**قواعد:**
- التحليل **static فقط** — لا تشغيل binaries ويندوز.
- أي نقل يجب أن يكون **clean-room** (فهم السلوك → إعادة تنفيذ)، وليس نسخ كود.
- ركّز على:
  - instance create/destroy
  - event dispatch order
  - سلوك `with`
  - collision resolution
  - alarm handling

الملفات المفيدة للبدء:
- `source/reverse-engineering/README.md`
- `source/reverse-engineering/maps/classification-method.json`
- `source/reverse-engineering/maps/GameMaker-classified.json`

---

## 7. مصادر GM82 المفتوحة (جاهزة للاستخدام)

كلها موجودة في:
```
source/unpacked/
```
وأرشيفاتها في `source/*.zip`.

أهمها لنور ميكر:
- `gm82core`
- `gm82save`
- `gm82room`
- `gm82audio` / `gm82snd`
- `gm82buf`
- `gm82joy`
- `gm82dx9` (مرجع سلوك رسومي)

---

## 8. خطة التنفيذ المرحلية (لأي وكيل)

### المرحلة الحالية (الآن)
1. قراءة `gm82_runtime_step` و `gm82_runtime_step_dt` وتوثيق الترتيب الفعلي مقابل الجدول في `EVENT_SYSTEM_PLAN.md`.
2. توحيد مسار Alarm.
3. إكمال `with` / `other`.
4. تحديث الاختبارات.

### بعد ذلك
5. User events + Outside/Boundary.
6. توسيع Action Lists.
7. Precise collision.
8. Android device verification (عند توفر جهاز).
9. مقارنة عينات مع Portable باستخدام نتائج RE.

---

## 9. تعريف النجاح القابل للقياس

- عينات `mario_bros` / `plataformas` / `shooter` / `zelda`:
  - تحميل ناجح
  - instances > 0
  - حركة وإطارات
  - رسم غير أسود ثابت
  - لا freeze لـ 30 ثانية
- `run_full_verification.py` → PASS
- لا ادعاءات 100% بدون دليل

---

## 10. تعليمات للوكيل التالي (Manus أو غيره)

إذا وصلت هنا:

1. اقرأ بالترتيب:
   - `FULL_GM_PARITY_PLAN.md` (هذا الملف)
   - `EVENT_SYSTEM_PLAN.md`
   - `STATUS.md`
   - `TODO.md`
   - `GAPS_HONEST.md`
2. لا تبدأ بتغييرات كبيرة قبل فهم `gm82_runtime_step` الحالي.
3. أي مهمة تنتهي منها: حدّث الملفات المذكورة أعلاه.
4. ركّز على P0 أولًا.
5. استخدم نتائج `source/reverse-engineering/` كمرجع سلوكي فقط.

---

## 11. سجل التحديثات

- 2026-10-30: إنشاء الملف كخطة شاملة قابلة للتسليم بين الوكلاء.
- مرتبط بطلب المستخدم: تنفيذ 1 + 3 + 4 بالتوازي + وضع الخطة كاملة على المستودع.

---

**آخر تحديث:** 2026-10-30  
**الحالة:** خطة نشطة — جاهزة للتنفيذ من أي وكيل.
