# STATUS — NOR Maker / Nr.mk.02

## host مثبت (بدون هلوسة)

| عيّنة | لاعب | حركة يمين | soft draw |
|--------|------|-----------|----------|
| mario_bros | obj_minimario | **MOVED** delta=90 | lit≈74k OK |
| plataformas | objPlayer2 | **MOVED** | lit≈75k OK |
| shooter | fantasma | **MOVED** | lit≈66k OK |
| zelda | obj_link | **MOVED** | lit≈74k OK |

هبوط بدون قفز: LANDED · قفز: jumped=1

## مدمج على main
- behaviors: mario/player/fantasma/link + skip death
- solid names + object filter
- MainActivity ImportGmk + 30fps ImageView
- spawn player إذا الغرفة بدون لاعب (zelda)

## ASSEMBLE
```bash
git pull
bash tools/gap_fill_20261013/ASSEMBLE.sh
./gradlew assembleDebug
```

## المتبقي للهدف (تكافؤ ويندوز)
1. rebuild `libgm82_android.so` من المصدر (CMake/NDK عندك)
2. تجربة APK على جهاز — حركة + رسم حقيقي
3. GML/DnD من جداول الأحداث كاملة
4. صوت views أدق

**لا نسب مئوية وهمية.**
