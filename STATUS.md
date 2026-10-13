# STATUS — صادق (2026-10-13)

## مثبت host (بأرقام)
| اختبار | نتيجة |
|--------|--------|
| event order + xprevious + AABB scale | ALL PASS |
| load+step+draw (4 GMK) | PIPELINE_OK |
| **decode rooms+objects + goto_room + instances** | **ROOM_PIPELINE_OK على 4 عينات** |

أمثلة instances بعد goto_room(0):
- mario_bros: 181
- plataformas: 60
- shooter: 308
- zelda: 39

## إصلاح جوهري
`gm82_native_load_game` كان بينسى objects/rooms → الغرفة فاضية.
اتصلح في `gm82_jni_java_bridge.c` على main.

## MainActivity
يطابق رموز SO (`nativeRuntime*`) + NorNative.

## حدود
- تغييرات C في `load_game` / ترتيب الأحداث تحتاج **rebuild SO** عشان تظهر على الجهاز من jniLibs الحالي.
- بدون rebuild: الجهاز يفضل على سلوك الـ SO القديم.

**لا نسبة مئوية.** الهدف التالي: بناء APK بعد دمج المصدر أو اختبار host أعمق (GML behaviors على mario).
