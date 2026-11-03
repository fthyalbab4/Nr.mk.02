# MASTER_AGENT_PLAN — الخطة الوحيدة المعتمدة

**آخر تحديث:** 2026-11-04

## قواعد
- لا نسبة بدون اختبار مسجّل هنا.
- مصدر العمل الوحيد: هذا الملف.

## فحص المستودع 2026-11-04

### جديد على main (منذ آخر جلسة)
- GM82 math/geometry: `unlerp`, `lines_intersect`, `point_direction_pitch`, `approach_angle_biased`, …
- Runtime lifecycle guard + study workflow (`tools/run_craft_gm82_study.sh`)
- Workflows: materialize / string-math / release
- STATUS: engine suite + host pipeline + APK build موثّقة كـ PASS

### P0 — مكتمل ✅
| بند | الحالة |
|-----|--------|
| actions scan/fire | main |
| `gml_set_other` collision | main (app+BSF، 4×، ~33KB) |
| host pipeline 4 ألعاب | **ok=4 fail=0** (أُعيد 2026-11-04) |

### P1
| بند | الحالة |
|-----|--------|
| NES runner + key inject من HTML | **على main** |
| `StudioNativeBridge.keyDown/keyUp` | **جاهز محلياً / سكربت** — `python3 tools/apply_keydown_bridge.py` ثم commit |

```bash
python3 tools/apply_keydown_bridge.py
git add app/src/main/java/com/normaker/nativefull/MainActivity.java
git commit -m "P1: NorNative.keyDown/keyUp → nativeRuntimeKey"
git push
```

### مفتوح (مش P0) — من TODO / NOT_DONE / GAPS
- اختبار جهاز + logcat (U2/U3)
- تقليل UNMAPPED_ACTION النادر
- with() edge tests
- OpenSLES على جهاز (U5)
- REA/DLL/GEX (U4)

**is_100 (P0 pipeline): true**  
**is_100 (محرك كامل GM8): false**
