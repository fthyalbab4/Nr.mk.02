# STATUS — صادق (2026-10-13)

## مسار اللعب على Android (main)
```
loadLibrary(gm82_android)
nativeRuntimeCreate(640,480)
nativeImportGmkSnapshot(sample.gmk)   // rooms + instances داخل الـ SO
Handler ~30fps:
  nativeRuntimeStep
  nativeRuntimeRenderBitmap → ImageView
```
لا يعتمد على index.html (الـ maker) ولا على rAF في JS.

## على المستودع
- `gm82_runtime.c` — ترتيب أحداث + xprevious + AABB (مدموج)
- `gm82_events.c` / jni bridge / MainActivity أعلاه
- `ASSEMBLE.sh` لـ gml xprevious

## host مثبت
ROOM_PIPELINE_OK + PLAY_PATH_OK (lit pixels)

## عندك الآن
```bash
git pull
bash tools/gap_fill_20261013/ASSEMBLE.sh
./gradlew assembleDebug
# logcat: imported www/samples/...  و frame=1,90,180...
```

**لا نسبة مئوية.**
