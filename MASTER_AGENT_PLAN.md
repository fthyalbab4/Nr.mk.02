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
| host pipeline 4 ألعاب | **ok=4 fail=0** → `docs/HOST_VERIFY_2026-11-02.md` |

## P1 — مكتمل ✅

| بند | الحالة |
|-----|--------|
| NES runner UI + bridge | **على main** |
| NES يستدعي `NorNative.keyDown/keyUp` | **على main** |
| `StudioNativeBridge.keyDown/keyUp` | **تم التطبيق والتحقق بنجاح** |
| patch يدوي | `tools/patch_keydown_bridge.diff` |

## التالي
1. تجربة الأزرار على الجهاز مع WebView.
2. توسيع التوافق مع DnD Actions و GML الإضافية عبر logcat الفعلي.

**is_100 (P0 pipeline): true**
