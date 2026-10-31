# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-31

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- معايير الحالة: PASS / FAIL فقط.
- مصدر العمل الوحيد: هذا الملف.

## P0

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` → `parse_gmk8` | **PASS** (app + BLACKSCREEN_FIX + cpp_backup) |
| `gm82_actions_fire_*` تنفيذ جدول | **PASS** (app + BLACKSCREEN_FIX + cpp_backup) |
| `gml_set_other` في collision events | **PASS** (gm82_events.c عبر المرايا الثلاث) |
| `tools/run_host_pipeline.sh` (4/4 games) | **PASS** (mario, plataformas, shooter, zelda) |
| دعم `action_sprite_set` و `action_effect` | **PASS** (gm82_actions.c) |
| فك وتوجيه السكربتات المخصصة ديناميكياً | **PASS** (gm82_script.c + gm82_gml_eval.c) |
| Tri-Mirror synchronization | **PASS** (100% متطابق عبر المجلدات الثلاثة) |

### Host tests
```
Date: 2026-10-31
Command: make test in NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX
Result: PASS (exit 0)

Command: bash tools/run_host_pipeline.sh
Result: PASS (ok=4, fail=0)

Command: python3 run_full_verification.py
Result: PASS (Total Tests: 17, Passed: 17, Failed: 0)

Command: python3 tools/run_engine_suite.py
Result: PASS (RESULT OK)
```

## P1
المضي قدماً في توسيع محاكاة باقي سلوكيات الدوال ومراقبة توافق الألعاب.

**is_100: false**
