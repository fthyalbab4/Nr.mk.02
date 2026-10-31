# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-31 ~21:00 CDT

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0 — مكتمل للمسار الحرج

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` → `parse_gmk8` | **على main** |
| `gm82_actions_fire_*` | **على main** |
| `gml_set_other` في collision | **على main** (app + BSF) |

### ملفات events
| مسار | الحجم | gml_set_other |
|------|-------|---------------|
| app/.../gm82_events.c | ~12434 | 4 |
| BSF/.../gm82_events.c | ~12540 | 4+ |

الدوال بعد collision (step/keyboard/mouse/other/draw) ناقصة على remote (~33KB كامل). انظر `tools/RESTORE_FULL_EVENTS.md`.

### Host tests
```
Date: 2026-10-31
make test with full local events → PASS
compile of current remote events → OK
```

## P1

| بند | الحالة |
|-----|--------|
| NES runner ↔ bridge | **تم** — data-key + NorNativeLoop + status bar |
| تحميل GMK من HTML | لم يبدأ |
| اختبار mario/zelda host | samples موجودة |

## التالي
1. إضافة stubs للدوال الناقصة (step/draw/...) حتى لا يفشل الربط
2. تجربة تحميل mario_bros.gmk على host
3. ربط input من canvas إلى gm82_input

**is_100: false**
