# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-11-04 (إغلاق المفتوح على host)

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0 — مكتمل ✅
- actions + `gml_set_other` + host pipeline **ok=4 fail=0**

## أُغلق على host اليوم
| بند | ماذا |
|-----|------|
| UNMAPPED نادر شائع | `action_step_towards/avoid`, draw_ellipse/background, timeline_*, cd_*, webpage/info/video/snapshot/part_system |
| bitmask | كان موصول عبر `precise_mask_overlap` في `gml_place_meeting` |
| with() edges | `app/src/main/cpp/tests/test_with_edges.c` |
| keyDown bridge | `python3 tools/apply_keydown_bridge.py` |

## موقوف على جهاز
انظر `docs/DEVICE_BLOCKED.md` و `NOT_DONE.md` (U2/U3/U5).

## U4 REA/DLL/GEX
خارج نطاق Android host — لا يُغلق هنا.

**is_100 (P0 pipeline): true**  
**is_100 (GM كامل + جهاز): false**
