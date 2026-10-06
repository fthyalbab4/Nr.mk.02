# TODO.md — خطة عمل صادقة

## تم

- [x] Sprite decoder + multi-frame storage
- [x] Room/object decode موصول في gmk_reader
- [x] Pipeline test: load → materialize → guard على 4 عينات
- [x] إزالة ادعاءات 100%

## التالي

### Runtime
- [ ] ربط nativeRuntimeStep + RenderBitmap في الحلقة
- [ ] Event order + Create/Step/Draw من objects

### GML / Actions
- [ ] Action 611 / 404
- [ ] with / other / scopes
- [ ] builtins الناقصة

### Decode
- [ ] Objects بدون بادئة obj_
- [ ] Rooms لـ zelda بشكل أفضل (instances)
- [ ] Events/Actions headers من GMK

### Audio / Collision
- [ ] Playback حقيقي
- [ ] Precise masks

### Validation
- [ ] gameplay أساسي على mario بدون freeze
