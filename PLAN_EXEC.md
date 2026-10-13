# PLAN_EXEC — الهدف: لعب GM82 كويندوز على Android

## تم (host + كود)
- [x] ترتيب أحداث GM8 + xprevious + AABB scaled
- [x] decode rooms/objects + goto_room → instances
- [x] step + soft draw ببكسلات مضيئة (PLAY_PATH_OK)
- [x] MainActivity: ImportGmkSnapshot + NorNative.tick
- [x] load_game في jni_java_bridge يفك rooms أيضًا

## التالي فورًا
1. **عندك:** `git pull` ثم `./gradlew assembleDebug` وتثبيت APK
2. logcat: `imported www/samples/...` و JSON فيه `rooms` > 0
3. إن الرسم فاضي على الجهاز: تأكد أن JS يستدعي `NorNative.tick` و/أو `renderBitmap`
4. إن احتجت ترتيب الأحداث داخل الـ SO: ASSEMBLE ثم NDK rebuild لـ libgm82_android.so

## تعريف النجاح القابل للقياس
عينة mario أو plataformas: تحميل، instances > 0، إطارات تتحرك، رسم غير أسود ثابت، بدون freeze 30 ثانية.
