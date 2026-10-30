# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**تاريخ التدقيق بالكود:** 2026-10-30  
**قاعدة:** أي ملف خطة/نِسب آخر = أرشيف مرجعي فقط. اعمل من هذا الملف فقط.

---

## 0) قواعد ضد الهلوسة

1. لا تكتب نسبة مئوية إلا بعد تشغيل اختبار وتسجيل أمره ونتيجته في هذا الملف.
2. وجود دالة/تعليق/مستند ≠ تنفيذ حقيقي.
3. حدّث هذا الملف فقط كنِسب/تقدم.
4. مسارات الكود: `app/src/main/cpp/src/` و `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/`

---

## 1) ما تم التحقق منه من الكود

### 1.1 Actions — جزئي + فجوات حرجة

| عنصر | الواقع |
|------|--------|
| `execute_named_args` + extra | handlers جزئية |
| `gm82_actions_scan_gmk` | **stub** يرجع 0 |
| `gm82_actions_fire_*` | **stubs فارغة** |

### 1.2 Events

| عنصر | الواقع |
|------|--------|
| Create/Destroy/Alarm/Step/Keyboard | موجود |
| Collision dispatch | موجود |
| `gml_set_other` في collision | **غير مستخدم** (0 في الملف) |

### 1.3 تشغيل فعلي مسجّل

```
Date: 2026-10-30
Command: cd NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX && make test
Host: Linux x86_64 sandbox, public clone
Result: PASS (make exit 0)
Notes:
- gcc build OK; warnings only in gm82_actions.c
- Suites observed PASS: mario_physics, native_frame_api (mario bind),
  nr01_compat, paths/mp_grid, phase1, lifecycle, runtime_guard
- Does NOT prove collision other or non-stub action table fire
```

| هدف | الحالة |
|-----|--------|
| `make test` host | **PASS** |
| Windows `.exe` | لم يُشغَّل (لا Wine) |
| HTML لعب تفاعلي | لم يُنفَّذ |
| Android جهاز | غير متاح |

---

## 2) العمل المطلوب

### P0
1. `gml_set_other` في `gm82_events_fire_collision` (المساران)
2. تنفيذ حقيقي لـ `scan_gmk` + `fire_*` بدل stubs
3. مزامنة app و 01_BLACKSCREEN_FIX

### P1
أعد `make test` بعد P0؛ HTML/Windows/Android عند الإمكان.

### P2
bitmask، UNMAPPED_ACTION، creation code باختبار، ربط NES UI، لا ROM وهمي.

---

## 3) ملفات أخرى

`MASTER_AGENT_PLAN.md` = المصدر الوحيد. الباقي أرشيف/مؤشر.

**is_100: false**
