# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-30 (P0 partial landed)

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` → `parse_gmk8` | **على main** (app + BLACKSCREEN_FIX) |
| `gm82_actions_fire_*` تنفيذ جدول | **على main** (app + BLACKSCREEN_FIX) |
| `gml_set_other` في collision events | **الكود جاهز** — شغّل `python3 tools/apply_p0_events.py` من جذر الريبو ثم commit، أو انسخ `gm82_events.c` من patch المحلي |

### تحقق actions على remote
```
curl -sL raw.../gm82_actions.c | grep parse_gmk8
# يجب أن يظهر return gm82_actions_parse_gmk8
```

### تطبيق events other
```bash
git clone https://github.com/fthyalbab4/Nr.mk.02.git && cd Nr.mk.02
python3 tools/apply_p0_events.py
git add app/src/main/cpp/src/gm82_events.c NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c
git commit -m "P0: gml_set_other in collision"
git push
```

### Host tests (قبل P0 events)
```
Date: 2026-10-30
Command: make test in 01_BLACKSCREEN_FIX
Result: PASS (exit 0)
```

## P1
أعد `make test` بعد تطبيق events other.

**is_100: false**
