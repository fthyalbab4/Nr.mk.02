# EVENT_SYSTEM_PLAN.md

خطة نظام الأحداث لـ Nor Maker بهدف الوصول إلى محاكاة أقرب ما يمكن لـ Game Maker 8.x / GM82.

> وثيقة عمل صادقة — لا تدّعي اكتمالًا. الهدف: ترتيب واضح + فجوات موثقة + خطوات تنفيذ.

---

## 1. ترتيب الأحداث المطلوب (مرجع GM 8.x)

الترتيب الكلاسيكي لـ Game Maker 8.x في كل frame (مبسط ومرتب حسب الأهمية العملية):

### عند دخول الغرفة / إنشاء Instance
1. **Create** (لكل instance جديد)
2. **Instance Creation Code** (إن وُجد في الـ Room)
3. **Room Start** / **Game Start** (حسب السياق)

### كل Frame (ترتيب التنفيذ)
1. **Begin Step** (`ev_step` + `ev_step_begin`)
2. **Alarm** (0 → 11) — يُنفَّذ عندما يصل العداد إلى 0
3. **Keyboard / Key Press / Key Release**
4. **Mouse** events
5. **Step** العادي (`ev_step_normal`)
6. **Collision** (مع كل الـ instances الأخرى ذات الصلة)
7. **End Step** (`ev_step_end`)
8. **Draw** (بما في ذلك Pre-Draw و Post-Draw إن وُجدت)
9. **Other** events (Outside Room, Boundary, User events, Animation End...)

### عند التدمير
- **Destroy** event
- ثم إزالة الـ instance من القائمة

---

## 2. الوضع الحالي في Nor Maker (من الكود)

### الملفات الأساسية
- `app/src/main/cpp/include/gm82_events.h`
- `app/src/main/cpp/include/gm82_runtime.h`
- `app/src/main/cpp/src/gm82_events.c` (مفترض)
- `app/src/main/cpp/src/gm82_runtime.c`

### الـ Enums الموجودة حاليًا

**من `gm82_events.h`:**
```c
GM82_EV_CREATE = 0
GM82_EV_DESTROY = 1
GM82_EV_ALARM = 2
GM82_EV_STEP = 3
GM82_EV_COLLISION = 4
GM82_EV_KEYBOARD = 5
GM82_EV_MOUSE = 6
GM82_EV_OTHER = 7
GM82_EV_DRAW = 8
GM82_EV_KEYPRESS = 9
GM82_EV_KEYRELEASE = 10
```

**Step subtypes:**
```c
GM82_STEP_NORMAL = 0
GM82_STEP_BEGIN = 1
GM82_STEP_END = 2
```

**Frame phases في `gm82_runtime.h`:**
```c
GM82_PHASE_IDLE
GM82_PHASE_BEGIN_STEP
GM82_PHASE_ALARM
GM82_PHASE_INPUT
GM82_PHASE_STEP
GM82_PHASE_MOTION_COLLISION
GM82_PHASE_END_STEP
GM82_PHASE_PRE_DRAW
GM82_PHASE_DRAW
GM82_PHASE_POST_DRAW
```

### الدوال الموجودة
- `gm82_events_fire_create_single` / `_all`
- `gm82_events_fire_destroy`
- `gm82_events_fire_alarm`
- `gm82_events_fire_begin_step_all`
- `gm82_events_fire_step_all`
- `gm82_events_fire_end_step_all`
- `gm82_events_fire_keyboard_all` / `_mouse_all`
- `gm82_events_fire_collision`
- `gm82_events_fire_pre_draw_all` / `_draw_all` / `_post_draw_all`
- `gm82_events_fire_other`
- دعم ربط GML بسيط: `gm82_events_bind_gml_step` / `_create`

### نقاط القوة الحالية
- الهيكل الأساسي للأحداث موجود.
- Phases واضحة في الـ runtime.
- Create / Step / Draw / Collision لها نقاط دخول.
- Alarms موجودة على مستوى الـ instance (`alarms[12]`).

---

## 3. الفجوات الرئيسية (مرتبة بالأولوية)

### P0 — حرجة لـ "يشغل كل حاجة"

| الفجوة | الوصف | التأثير |
|--------|------|--------|
| ترتيب التنفيذ داخل `gm82_runtime_step` | هل الـ phases تُستدعى بالترتيب الصحيح دائمًا؟ | عالي |
| Alarms كأحداث حقيقية | حاليًا يوجد `gml_alarm_set` و `gm82_alarm_fire_scripts`، لكن الربط الكامل مع `GM82_EV_ALARM` ونظام الأحداث يحتاج تأكيد وتوحيد | عالي |
| دعم `with` و `other` | `gm82_gml_set_other` موجود، لكن استخدامه داخل الـ evaluator وفي سياق Collision و `with` statements غير مكتمل | عالي جدًا |
| Instance Creation Code من الـ Room | غير واضح إن كان يُنفَّذ بعد Create مباشرة | عالي |
| Destroy queue timing | متى يُفرَّغ `destroy_queue` بالنسبة لـ Destroy event؟ | متوسط-عالي |

### P1 — مهمة

| الفجوة | الوصف |
|--------|------|
| User Events (`event_user`) | الدالة موجودة في runtime، تحتاج ربط كامل |
| Outside Room / Boundary / Animation End | ضمن `GM82_EV_OTHER` — تغطية ناقصة |
| Key Press / Key Release منفصلة عن Keyboard | الـ enum موجود، التنفيذ يحتاج مراجعة |
| Pre-Draw / Post-Draw | الدوال موجودة، هل تُستدعى فعليًا في الـ frame loop؟ |
| Action Lists من GMK | الـ subset الحالي أضيق من كل الـ DnD actions |

### P2 — تحسينات لاحقة

- Particle events
- Timeline moments كأحداث
- Path end actions
- أدق collision (mask/precise) قبل استدعاء Collision event

---

## 4. الربط مع نتائج الـ Reverse Engineering

من `source/reverse-engineering/`:

- الكلمات المفتاحية ذات الصلة: `room_instance_suspect`, `gml_runtime`, `instance_create`, `with`, `collision`.
- الـ classified maps لـ `GameMaker.exe` تحتوي إشارات إلى منطق الـ instance و event dispatch (حتى لو كانت lexical).
- الهدف من المسار 3: استخراج أنماط ترتيب التنفيذ وسلوك `with` / collision من الـ pseudocode والـ maps، ثم مقارنتها مع الترتيب أعلاه.

**ملاحظة مهمة:**  
الـ pseudocode من Ghidra ليس سورس أصلي. أي نقل يجب أن يكون **clean-room** (فهم السلوك ثم إعادة التنفيذ)، وليس نسخ كود.

---

## 5. خطة التنفيذ المقترحة (مراحل)

### المرحلة 1 — توثيق وتثبيت الترتيب الحالي
- [ ] قراءة `gm82_runtime_step` و `gm82_runtime_step_dt` بالكامل وتوثيق ترتيب استدعاء الـ phases الفعلي.
- [ ] توثيق متى يُستدعى Create ومتى يُفرَّغ Destroy queue.
- [ ] كتابة اختبارات وحدة بسيطة تتحقق من ترتيب الأحداث على instances تجريبية.

### المرحلة 2 — إكمال Alarms + `with`/`other`
- [ ] توحيد مسار Alarm: countdown → fire `GM82_EV_ALARM` → تنفيذ الكود المرتبط.
- [ ] إكمال دعم `with` داخل الـ GML evaluator.
- [ ] ضمان أن `other` يُعيَّن بشكل صحيح أثناء Collision events.

### المرحلة 3 — توسيع التغطية
- [ ] User events
- [ ] Outside/Boundary/Animation End
- [ ] التأكد من Pre/Post Draw
- [ ] توسيع Action Lists تدريجيًا

### المرحلة 4 — مقارنة مع RE + عينات حقيقية
- [ ] مقارنة سلوك عينات (Mario / Zelda / shooter) مع النسخة الـ Portable قدر الإمكان.
- [ ] تحديث `GAPS_HONEST.md` و `STATUS.md` بعد كل تقدم مقاس.

---

## 6. قواعد العمل

- لا يُعلَن عن اكتمال أي مرحلة بدون اختبار أو لوج واضح.
- أي تغيير في ترتيب الأحداث يجب أن يمر على `run_full_verification.py` و suite الـ host.
- الالتزام بـ `REPORTING_RULES.md` و `HONEST_ENGINEERING_METHODOLOGY.md`.

---

## 7. الخطوة التالية المباشرة

1. قراءة تنفيذ `gm82_runtime_step` الحالي وتوثيق الترتيب الفعلي مقابل الجدول في القسم 1.
2. تحديد أين يُعالَج الـ Alarm countdown وأين يُستدعى `gm82_events_fire_alarm`.
3. البدء في توحيد مسار Alarm + `with`/`other`.

---

*آخر تحديث: 2026-10-30*
