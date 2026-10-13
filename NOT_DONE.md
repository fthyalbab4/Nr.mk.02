# ما لم يُنفَّذ هنا (صريح)

1. **rebuild `libgm82_android.so`** — مفيش Android NDK في بيئة التشغيل. لازم عندك:
   ```bash
   git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
   ```
2. **تثبيت APK على جهاز حقيقي / محاكي** واختبار اللمس.
3. **GML كامل 1:1 مع GM8** (كل scripts/with/arrays/ds_*) — موجود جزئي؛ مش كل الـ API.
4. **صوت OpenSLES كامل** على جهاز.
5. **هندسة عكسية كاملة عبر REA/Ghidra** لكل ثنائيات GM82.

## ما تم على host (مثبت باختبار)
- 4/4 عيّنات: حركة + رسم + scripts decode + GML step + collision collectibles + 3000-step stable
