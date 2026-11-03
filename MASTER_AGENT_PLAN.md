# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-11-04

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0 — مكتمل ✅
- actions + `gml_set_other` + host pipeline **ok=4 fail=0**

## أُغلق على host (تطبيق من جهازك إن لزم)
```bash
python3 tools/apply_actions_gapfill.py   # 17 DnD نادر
python3 tools/apply_keydown_bridge.py    # NorNative.keyDown/keyUp
git add -A && git commit -m "apply host gapfill + keyDown" && git push
```

| بند | ملف |
|-----|-----|
| UNMAPPED نادر | `tools/apply_actions_gapfill.py` |
| bitmask | موصول في `gml_place_meeting` |
| with() edges | `app/src/main/cpp/tests/test_with_edges.c` |
| keyDown | `tools/apply_keydown_bridge.py` |

## موقوف على جهاز
`docs/DEVICE_BLOCKED.md` — U2/U3/U5

## U4 REA/DLL/GEX
خارج نطاق Android host.

**is_100 (P0 pipeline): true**  
**is_100 (GM + جهاز): false**
