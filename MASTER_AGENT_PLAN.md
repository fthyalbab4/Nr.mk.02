# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**تاريخ التدقيق بالكود:** 2026-10-30  
**قاعدة:** أي ملف خطة/نِسب آخر = أرشيف مرجعي فقط. اعمل من هذا الملف فقط.

---

## 0) قواعد ضد الهلوسة

1. لا تكتب نسبة مئوية إلا بعد تشغيل اختبار وتسجيل أمره ونتيجته في هذا الملف.
2. وجود دالة/تعليق/مستند ≠ تنفيذ حقيقي.
3. `STATUS.md` / `GAPS_HONEST.md` / `AGENT_STATE.md` / `EVENT_SYSTEM_PLAN.md` / `FULL_GM_PARITY_PLAN.md` وغيرها **لا تُحدَّث بنِسب جديدة**؛ حدّث هذا الملف فقط.
4. مسارات الكود الأساسية المتوازية:
   - `app/src/main/cpp/src/` (أندرويد NDK)
   - `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/` (host + نفس النواة تقريبًا)

---

## 1) ما تم التحقق منه من الكود (ليس من STATUS)

### 1.1 Actions — جزئي + فجوات حرجة

**ملفات:**  
`app/.../gm82_actions.c` و `01_BLACKSCREEN_FIX/src/gm82_actions.c` (نفس البنية)

| عنصر | الواقع في الكود |
|------|------------------|
| `execute_named_args` | handlers حقيقية لجزء من الأسماء + استدعاء `gm82_action_execute_extra` |
| `gm82_actions_extra.c` | handlers إضافية (if_key, path, timeline, create_object_motion, …) |
| `gm82_actions_scan_gmk` | **stub**: يرجع 0 دائمًا ولا يملأ الجدول |
| `gm82_actions_fire_create/step/collision/alarm/draw` | **stubs فارغة** (لا تنفّذ جدول الـ DnD من الـ GMK) |

**النتيجة:** مسار «نفّذ action بالاسم» يعمل جزئيًا. مسار «جدول الأحداث من GMK عبر action table» **غير موصول**.

### 1.2 Events — موجود لكن ناقص

**ملف:** `gm82_events.c` (~33KB) في المسارين

| عنصر | الواقع |
|------|--------|
| Create / Destroy / Alarm / Step phases / Keyboard / KeyPress / KeyRelease | منطق موجود يمشي على `decoded_event` + snippet/GML |
| Collision event dispatch | موجود |
| `gm82_gml_set_other` داخل collision | **غير مستخدم** (0 مرات في الملف) — رغم ذكره في `CRITICAL_PATCH_*.md` |
| Behaviors ثابتة (mario/player/enemy بالاسم) | موجودة كـ fallback |
| Outside / Boundary / AnimEnd كأسماء صريحة في الملف المفحوص | غير ظاهرة بنفس وضوح باقي الـ phases |

### 1.3 Runtime

`gm82_runtime.c` موجود؛ اختبارات host مكتوبة (مثل `test_event_order.c`) تتوقع `gm82_runtime_step` + `gm82_runtime_draw`.

### 1.4 واجهة NES

| مسار | ملاحظة |
|------|--------|
| `assets/www/nes-runner.html` + `runner-emu-ref.css` | تصميم APK منقول؛ **غير مربوط** بحلقة GMK native |
| `app/src/main/assets/www/index.html` (~6MB) | محرك HTML مدمج كبير |
| `app/src/main/assets/www/nor-maker-standalone.exe` (~9MB) | ثنائي ويندوز موجود في الريبو |
| `nor-player.html` | مشغّل `.nor` منفصل |

### 1.5 ما لم يُشغَّل في جلسة التدقيق هذه

| هدف | السبب |
|-----|--------|
| `make test` على host | الريبو خاص؛ لا clone جماعي لكل مصادر C في بيئة واحدة في هذه الجلسة |
| `nor-maker-standalone.exe` | لا يوجد Wine على الـ host |
| Android APK على جهاز | لا SDK/جهاز |
| لعب تفاعلي داخل `index.html` | يحتاج متصفح/WebView كامل؛ لم يُنفَّذ هنا |

أي ادعاء «18/18 tests pass» في `AGENT_STATE.md` **لم يُعاد تشغيله هنا** — اعتبره غير مؤكد حتى يُعاد `make test`.

---

## 2) العمل المطلوب (ترتيب أولوية)

### P0 — إصلاحات تُكسر التكافؤ يوميًا

1. **Collision `other`**  
   في `gm82_events_fire_collision`: قبل تقييم الكود:
   `gm82_gml_set_other(other);` وبعده `gm82_gml_set_other(NULL);`  
   طبّق في **المسارين** (`app/...` و `01_BLACKSCREEN_FIX/...`).

2. **إلغاء stubs الـ action table**  
   - إعادة تنفيذ حقيقي لـ `gm82_actions_scan_gmk` أو مسار بديل يملأ الجدول من الـ decoder.  
   - `gm82_actions_fire_*` يجب أن تمرّ على `items[]` وتنادي `gm82_action_execute_ref` / named.  
   بدون هذا، أحداث DnD من ملف GMK لا تشتغل من الجدول.

3. **توحيد المصدر**  
   أي باتش يُطبَّق على `app/src/main/cpp/src` **و** `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src` معًا (أو سكربت sync موثّق).

### P1 — تحقق بالتشغيل (بعد P0)

1. على Linux host:
   ```bash
   cd NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX
   make clean && make test
   ```
   سجّل النتيجة هنا (أمر + عدد ناجح/فاشل).

2. HTML: افتح `app/src/main/assets/www/index.html` أو عيّنة samples؛ سجّل أعطال اللعب (collision, room change, input).

3. Windows (إن توفر): شغّل `nor-maker-standalone.exe`؛ سجّل الفرق عن HTML.

4. Android: playtest يدوي + logcat عند توفر جهاز.

### P2 — اكتمال تدريجي

- Bitmask collision عند وجود mask حقيقية  
- توسيع handlers بدل `UNMAPPED_ACTION`  
- Creation code من room بعد Create (التحقق بالاختبار لا بالتعليق)  
- ربط `nes-runner.html` بمدخلات الـ runtime إن لزم كواجهة تشغيل  
- لا تصدير ROM حقيقي قبل assembler حقيقي (الرموز الحالية placeholders)

---

## 3) ملفات الخطة القديمة

| ملف | التعامل |
|-----|---------|
| هذا الملف `MASTER_AGENT_PLAN.md` | **المصدر الوحيد للعمل** |
| `STATUS.md` / `TODO.md` / `GAPS_HONEST.md` / `AGENT_STATE.md` | مؤشرات قصيرة → تشير لهذا الملف |
| `FULL_GM_PARITY_PLAN.md` / `EVENT_SYSTEM_PLAN.md` / `CRITICAL_PATCH_*` / docs/*PLAN* | أرشيف تقني؛ لا تُحدَّث كنِسب |

---

## 4) قالب تسجيل اختبار (انسخ عند التشغيل)

```
Date:
Command:
Host:
Result: PASS/FAIL
Notes:
```

---

## 5) تعريف «منتهي» لبند

بند = منتهٍ فقط إذا:
1) الكود في المسارين (أو مسار واحد مع إثبات عدم الحاجة للثاني)، و  
2) اختبار أو لوج تشغيل يثبت السلوك، و  
3) سطر في القسم 4 أعلاه.

**is_100: false** — لا تغيّر هذه القيمة قبل تحقق P0+P1 على عينات mario/zelda على الأقل.
