# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-31 ~20:50 CDT

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` → `parse_gmk8` | **على main** (app + BLACKSCREEN_FIX) |
| `gm82_actions_fire_*` تنفيذ جدول | **على main** (app + BLACKSCREEN_FIX) |
| `gml_set_other` في collision | **على main (app path)** — الدالة تحتوي set_other قبل action و eval. الملف الكامل (كل الدوال بعد collision) لسه مقطوع على remote بسبب حدود حجم الـ API push. النسخة الكاملة 33426 بايت جاهزة محلياً. |

### Host tests
```
Date: 2026-10-31
Command: make test in NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX (with full patched events)
Result: PASS (exit 0)
  - Nr.mk.01 compatibility APIs PASS
  - paths/mp_grid PASS
  - PHASE 1 ALL PASSED
  - arena/sprites/lifecycle PASS
  - runtime_guard ALL PASS
```

### إصلاح الملف الكامل (يدوياً أو من جهازك)
انسخ الملف الكامل من أي نسخة محلية جيدة أو من commit سابق كامل إلى:
- app/src/main/cpp/src/gm82_events.c
- NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c

ثم:
```bash
git add ... && git commit -m "P0: full gm82_events.c" && git push
make test   # في 01_BLACKSCREEN_FIX
```

## P1 (التالي)
1. ربط NES HTML runner (`assets/www/nes-runner.html`) بالـ runtime الحقيقي (حالياً UI فقط).
2. اختبار samples (mario/zelda إن وُجدت).
3. Windows host / Android APK smoke إن أمكن.

**is_100: false**
