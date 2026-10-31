# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-31 ~21:05 CDT

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0 — مكتمل للمسار الحرج ✅

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` / `fire_*` | **على main** |
| `gml_set_other` في collision | **على main** (app + BSF) |
| باقي `fire_*` (step/draw/...) | **stubs على main** — `gm82_events_stubs.c` (step_all يشغّل behaviors) |

### تحقق host
```
libgm82_host.so links:
  gm82_events_fire_collision
  gm82_events_fire_create_all
  gm82_events_fire_step_all
  gm82_events_fire_draw_all
```

## P1

| بند | الحالة |
|-----|--------|
| NES runner ↔ bridge | **تم** |
| events stubs | **تم** |
| تحميل GMK sample على host | التالي |

## التالي المقترح
1. تحميل `mario_bros.gmk` عبر `gm82_loader` على host وتسجيل أي أخطاء
2. استعادة الملف الكامل 33KB عند الحاجة (`tools/RESTORE_FULL_EVENTS.md`)
3. ربط input من NES UI إلى `gm82_input`

**is_100: false**
