# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-31 (P0 collision other landed & host pipeline verified 100%)

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` → `parse_gmk8` | **مُطبّق على main** (app + BLACKSCREEN_FIX + cpp_backup) |
| `gm82_actions_fire_*` تنفيذ جدول | **مُطبّق على main** (app + BLACKSCREEN_FIX + cpp_backup) |
| `gml_set_other` في collision events | **مُطبّق ومُفعل** — تم تطبيقه في `gm82_events.c` ومزامنته عبر الأشجار الثلاث |
| `tools/run_host_pipeline.sh` ربط `gm82_actions_gmk8.c` | **مُطبّق ومُفعل** — اجتازت جميع الألعاب الـ 4 بنجاح |

### Host tests (بعد تطبيق P0 events ومسار pipeline)
```
Date: 2026-10-31
Command: make test in 01_BLACKSCREEN_FIX
Result: PASS (exit 0)

Command: bash tools/run_host_pipeline.sh
Result: SUMMARY ok=4 fail=0 (PASS mario_bros, plataformas, shooter, zelda)

Command: python3 tools/run_engine_suite.py
Result: 22/22 PASS (RESULT OK)

Command: python3 run_full_verification.py
Result: 17/17 PASS (100% SUCCESS)

Command: node test_all_games_inlined.js
Result: Scripts: 39/39 (100.0%), Actions: 78/78 (100.0%)
```

### حالة بناء Android
```
Command: ./gradlew assembleDebug
Result: BUILD SUCCESSFUL (app-debug.apk 18MB, 4 ABIs: arm64-v8a, armeabi-v7a, x86, x86_64)
```

## P1
- استكمال أي دوال أو أكشنز خاصة تظهر في عينات ألعاب إضافية بصورة تراكمية بدون استبدال الأكواد العاملة.

**is_100: true (بالنسبة لاختبارات P0 والـ pipeline الحالية)**
