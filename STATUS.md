# STATUS — صادق (2026-10-13)

## مسار اللعب (على main)
1. loadLibrary → nativeRuntimeCreate
2. nativeImportGmkSnapshot(www/samples/*.gmk)
3. 30fps: step + RenderBitmap → ImageView
4. لمس: يسار/يمين + قفز؛ أزرار أجهزة/WASD

## host 4/4 OK
mario 181 · plataformas 60 · shooter 308 · zelda 39 instances + lit pixels

## عندك
```bash
git pull && ./gradlew assembleDebug
# logcat: imported … rooms>0  و frame=1,90,…
```

**لا نسبة مئوية. APK على الجهاز غير مثبت من هنا.**
