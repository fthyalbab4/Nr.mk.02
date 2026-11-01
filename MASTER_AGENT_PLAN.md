# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-11-02

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0 — مكتمل ✅

| بند | الحالة |
|-----|--------|
| actions scan/fire | **على main** |
| `gml_set_other` في collision | **على main** (app + BSF، 4×) |
| host pipeline 4 ألعاب | **ok=4 fail=0** (انظر `docs/HOST_VERIFY_2026-11-02.md`) |

## P1

| بند | الحالة |
|-----|--------|
| NES runner UI + bridge | **تم** (`assets/www/nes-runner.html`) |
| JS `keyDown`/`keyUp` على `NorNative` | **تم** — `MainActivity.StudioNativeBridge` → `nativeRuntimeKey` |
| تحميل GMK من WebView | موجود (`importGmkSnapshotBase64` وغيرها) |

## التالي
1. التأكد أن NES buttons تستدعي `NorNative.keyDown` داخل WebView على الجهاز.
2. أي فشل جديد من لعبة إضافية → املأ الـ action/GML الناقص فقط.

**is_100 (P0 pipeline): true**
