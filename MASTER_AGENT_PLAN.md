# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-10-31 ~20:55 CDT

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0

| بند | الحالة |
|-----|--------|
| `gm82_actions_scan_gmk` → `parse_gmk8` | **على main** |
| `gm82_actions_fire_*` | **على main** |
| `gml_set_other` في collision | **على main (app)** — الدالة تحتوي set_other. الملف الكامل (كل الدوال) قد يحتاج استعادة يدوية إن كان مقطوعاً |

### Host tests
```
Date: 2026-10-31
make test in 01_BLACKSCREEN_FIX with full patched events → PASS (exit 0)
gm82_events.c compiles clean with gml_set_other x4
```

## P1

| بند | الحالة |
|-----|--------|
| NES runner ↔ native bridge | **تم** — `assets/www/nes-runner.html` يستدعي `NorNativeLoop.attach` + rAF loop + يحوّل D-Pad/A/B/SELECT/START إلى key events (37-40, 88, 90, 13, 17) |
| تحميل GMK samples من HTML | **لم يبدأ** — يحتاج WebView/native أو WASM host |
| اختبار mario/zelda على host | samples موجودة في `02_SAMPLES/` و `app/.../samples/` |

### تشغيل NES UI
افتح `assets/www/nes-runner.html` في متصفح أو WebView. بدون `NorNative`/`Gm82Native` يظهر: `UI shell only`. مع الـ native bridge يظهر frames + active.

## P2
- استعادة الملف الكامل لـ gm82_events.c على المسارين إن لزم
- ربط input من الـ canvas إلى gm82_input
- تجربة mario_bros.gmk على host runner

**is_100: false**
