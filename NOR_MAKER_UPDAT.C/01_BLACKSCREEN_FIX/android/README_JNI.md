# Android JNI scaffold — صادق

## موجود في الكود
- `gm82_jni.c` / bridge / CMakeLists
- رموز: init / load / step / draw / tick / frame_rgba (مُثبتة على **host SO**)

## قيود
- GLES draw على الجهاز: **غير مُثبت** هنا
- دمج APK + WebView `NorNative`: جاهز كملفات، يحتاج NDK عندك

## ليس جاهزاً كادعاء «يشتغل على الهاتف» من غير بناء NDK + تجربة جهاز
