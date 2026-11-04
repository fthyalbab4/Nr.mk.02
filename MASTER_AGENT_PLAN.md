# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-11-04

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## P0 — مكتمل ✅
- actions + `gml_set_other` + host pipeline **ok=4 fail=0**

## فجوات host — مُغلقة على main ✅
| بند | إثبات |
|-----|--------|
| 17 DnD نادر | `action_step_towards` في `gm82_actions_extra.c` (app + BSF + backup) |
| `NorNative.keyDown/keyUp` | في `MainActivity.java` → `nativeRuntimeKey` |
| bitmask | `precise_mask_overlap` داخل `gml_place_meeting` |
| with() edges | `tests/test_with_edges.c` |
| workflow | `apply-host-gaps` success (commit `8ccfae87`) |

## موقوف على جهاز فقط
`docs/DEVICE_BLOCKED.md` — U2 playtest/logcat، U3 NDK جهاز، U5 OpenSLES

## خارج النطاق
U4 REA/DLL/GEX (Windows)

**is_100 (P0 + host gaps): true**  
**is_100 (جهاز): false حتى playtest**
