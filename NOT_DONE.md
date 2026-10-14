# ما لم يُنفَّذ (صريح — بدون نسب وهمية)

## تخطّي هنا (محتاج جهازك / NDK)
1. **rebuild `libgm82_android.so`** — مفيش Android NDK في بيئة الوكيل.
2. **APK على جهاز/محاكي** واختبار اللمس الحقيقي.
3. **صوت OpenSLES** على جهاز.

## فجوات نواة معروفة (جزئي على host)
4. **فك كل instances الغرفة** — mario room0 فيه ~181 instance؛ بعض الأنواع (مثل obj_moneda) مش ظاهرة في الغرفة الأولى (قد تكون في غرف أخرى أو الـ decode ناقص).
5. **GML/DnD 100%** — interpreter جزئي (if/with/motion/place_free/scripts…) مش كل GM8 API.
6. **REA/Ghidra full reverse** لكل ثنائيات GM82 — لم يُنفَّذ كمسار آلي كامل.

## ما تم إثباته على host
```
4/4 samples MOVED + DRAW_OK
scripts decode (mario 8, plataformas 14, zelda 16)
GML step (oso AI moves)
3000-step STABLE
ASSEMBLE: spawn + harvest + step GML + JNI scripts + collision collectibles
```

## عندك للهدف على الجهاز
```bash
git pull
bash tools/gap_fill_20261013/ASSEMBLE.sh
./gradlew assembleDebug
# install APK and test touch
```
