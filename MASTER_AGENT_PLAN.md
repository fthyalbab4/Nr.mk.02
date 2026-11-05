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

## P1

| بند | الحالة |
|-----|--------|
| NES runner UI + bridge | **على main** |
| NES يستدعي `NorNative.keyDown/keyUp` | **على main** |
| `StudioNativeBridge.keyDown/keyUp` | **سكربت جاهز** — `python3 tools/apply_keydown_bridge.py` ثم commit |
| patch يدوي | `tools/patch_keydown_bridge.diff` |

```bash
python3 tools/apply_keydown_bridge.py
git add app/src/main/java/com/normaker/nativefull/MainActivity.java
git commit -m "P1: NorNative.keyDown/keyUp → nativeRuntimeKey"
git push
```

## التالي
1. تطبيق الـ patch على MainActivity (الأمر أعلاه).
2. تجربة الأزرار على الجهاز مع WebView.

**is_100 (P0 pipeline): true**
