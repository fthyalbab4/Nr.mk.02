# TODO — خطة عمل صادقة

## تم (مُقاس)

- [x] Sprite decoder + multi-frame storage
- [x] Room/object decode + أسماء `r001`
- [x] Host pipeline 4/4
- [x] Host SO symbols + smoke mario/zelda
- [x] Behaviors Create/Step scaffolding + fire_create_one
- [x] إزالة ادعاءات 100% من التقارير الأساسية

## التالي (مرتّب بالأولوية)

### Android حقيقي
- [ ] NDK build `libgm82_android.so` (arm64)
- [ ] دمج SO في APK + `addJavascriptInterface(..., "NorNative")`
- [ ] حقن `assets/www` scripts في `index.html`
- [ ] تشغيل mario على جهاز وتسجيل لوج/فيديو

### Runtime
- [ ] ترتيب events أقرب لـ GM
- [ ] Action lists من GMK أوسع من الـ subset الحالي
- [ ] Alarms → event حقيقي

### GML
- [ ] توسيع eval + builtins الناقصة
- [ ] `with` / `other` / scopes

### جودة
- [ ] Precise collision
- [ ] Audio playback
- [ ] Corpus مقارنة مع ويندوز

لا تُعلَّم أي خانة [x] من غير أمر اختبار أو لوج جهاز.
