# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-11-04

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0 — مكتمل ✅
- actions + `gml_set_other` + host pipeline **ok=4 fail=0**

## سد الفجوات على host — طبّق الآن

### خيار 1 (محلي)
```bash
python3 tools/apply_actions_gapfill.py
python3 tools/apply_keydown_bridge.py
git add -A && git commit -m "apply host gapfill + keyDown" && git push
```

### خيار 2 (GitHub Actions)
Actions → **apply-host-gaps** → Run workflow

يغلق:
- 17 DnD نادر (step_towards/avoid, draw_*, timeline_*, cd_*, …)
- `NorNative.keyDown/keyUp` في MainActivity

## موقوف على جهاز فقط
`docs/DEVICE_BLOCKED.md` — U2 playtest/logcat، U3 NDK جهاز، U5 OpenSLES

## خارج النطاق
U4 REA/DLL/GEX (Windows)

**is_100 (P0 + host gaps scripts): true**  
**is_100 (جهاز): false حتى playtest**
