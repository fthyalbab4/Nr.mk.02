# ألعاب السحابة (Cloud GMK) — نطاق واقعي

## إيه هي؟

في واجهة NOR Maker (`index.html`):

```js
const GMK_CATALOG = [ /* ~146 لعبة */ ];
```

المصدر: **[floowsnaake/GMK8_Examples](https://github.com/floowsnaake/GMK8_Examples)**  
عبر: `cdn.jsdelivr.net` أو `raw.githubusercontent.com`.

الهدف الأدنى:
1. تحميل من السحابة / الأصول
2. فك GMK + `goto_room(0)` بدون انهيار
3. رسم أو instances على host
4. العينات المدمجة الأربع كمسار لعب أساسي

## العينات المدمجة

| ملف | مسار |
|-----|------|
| mario_bros.gmk | `app/src/main/assets/www/samples/` |
| plataformas.gmk | نفس |
| shooter.gmk | نفس |
| zelda.gmk | نفس |

## اختبار host (2026-10-14)

- سحابة صغيرة (Scripts, Timelines, …): تحميل OK؛ بعضها DRAW_OK وبعضها DRAW_WEAK
- المدمجة الأربع: load + draw؛ حركة حسب اللعبة/الإدخال

**146 عنوان في الكتالوج ≠ 146 قابلة للعب كامل.**

## أوامر

```bash
git pull
bash tools/gap_fill_20261013/ASSEMBLE.sh
bash tools/gap_fill_20261013/cloud_smoke.sh
./gradlew assembleDebug
```
