# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-31 (P0 events gml_set_other landed in local + host test PASS)

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` → `parse_gmk8` | **على main** (app + BLACKSCREEN_FIX) |
| `gm82_actions_fire_*` تنفيذ جدول | **على main** (app + BLACKSCREEN_FIX) |
| `gml_set_other` في collision events | **الكود جاهز + مختبر** — الملف الكامل (33426 بايت، 4x gml_set_other) موجود محليا في `tools/restore_events_full.py`. على remote: app/ version مقطوعة (فقط collision) — شغّل `python3 tools/restore_events_full.py` بعد pull لإصلاح كلا المسارين |

### Host tests (after P0 events patch)
```
Date: 2026-10-31
Command: make test in NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX
Result: PASS (exit 0)
  - Nr.mk.01 compatibility APIs PASS
  - paths/mp_grid PASS
  - PHASE 1 ALL PASSED
  - arena/sprites/lifecycle PASS
  - runtime_guard ALL PASS
```

### تطبيق الإصلاح الكامل على remote
```bash
git pull
python3 tools/restore_events_full.py
# يجب أن يطبع: restored ... 33426 4
git add app/src/main/cpp/src/gm82_events.c NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c
git commit -m "P0: full gm82_events.c with gml_set_other x4"
git push
```

## P1
- HTML/Windows/Android sample testing (mario/zelda runners)
- Re-run make test after full remote restore

**is_100: false**
