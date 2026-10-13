# STATUS

## host 4/4 PASS
حركة + رسم + scripts + GML AI + collision collectibles

```bash
git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
```

## SO في jniLibs قديم
الرموز موجودة لكن بدون spawn/scripts/stepish.
**لازم** `./gradlew assembleDebug` عندك (NDK) عشان يبني SO جديد من المصدر بعد ASSEMBLE.

بدون نسب وهمية — الهدف على الجهاز = SO محدّث + APK.
