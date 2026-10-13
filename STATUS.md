# STATUS — صادق (2026-10-13)

## مثبت host
- event order + xprevious + AABB → ALL PASS
- **ROOM_PIPELINE_OK** على 4 GMK (mario 181 instances, plataformas 60, shooter 308, zelda 39)
- `gm82_jni.c` nativeImportGmkSnapshot: decode sprites/bgs/objects/rooms + goto_room(0)

## مثبت في Java (main)
- MainActivity يطابق SO (`nativeRuntime*`)
- بعد `nativeRuntimeCreate` يستدعي **`nativeImportGmkSnapshot`** على عينة من assets
- NorNative: tick/step + importAsset + snapshot + importStatus

## مسار التشغيل المقصود على الجهاز
1. loadLibrary(gm82_android)
2. nativeRuntimeCreate(640,480)
3. nativeImportGmkSnapshot(bytes) → rooms+instances داخل الـ SO
4. حلقة: NorNative.tick → nativeRuntimeStep
5. nativeRuntimeRenderBitmap عند الحاجة

## غير مثبت هنا
بناء APK جديد + تشغيل على جهاز من هذا الـ commit.

**لا نسبة مئوية.**
