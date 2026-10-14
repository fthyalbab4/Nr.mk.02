# ما لم يُنفَّذ (صريح)

## تخطّي هنا
1. rebuild libgm82_android.so (مفيش NDK)
2. APK + لمس على جهاز
3. صوت OpenSLES على جهاز

## فجوات نواة جزئية
4. object_index في الغرف قد لا يطابق فهرس GM الأصلي بالكامل
5. بعض instances (مثل عملات mario) قد لا تُفَك من room0
6. GML/DnD ليس كامل GM8
7. REA/Ghidra reverse كامل

## host مثبت
4/4 MOVED+DRAW · spawn · GML step · scripts · collision · room widen · alarm events
