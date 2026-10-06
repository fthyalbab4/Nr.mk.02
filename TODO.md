# TODO.md — خطة عمل صادقة (بدون ادعاءات)

الهدف: محاكاة أقرب ما يمكن لـ Windows GM8.2 على Android، بخطوات قابلة للقياس.

## المرحلة الحالية (قيد التنفيذ)

### 1. إصلاح Materialize
- [x] Sprite decoder أساسي (zlib + BGRA)
- [x] تخزين كل إطارات الـ multi-frame في rgba (متتالية) بدل أول إطار فقط
- [ ] Background decoder مستقر على zelda / plataformas
- [ ] gm82_project_ir_recompute_complete يعكس الواقع بدقة

### 2. Chunk Walkers
- [ ] Objects + Events + Actions headers
- [ ] Sounds headers → ثم playback
- [ ] Scripts
- [ ] Room instances / tiles / views الحقيقية

### 3. Runtime Integration
- [ ] استدعاء nativeRuntimeStep + nativeRuntimeRenderBitmap من الحلقة
- [ ] Event order مطابق لـ gm82help
- [ ] other / with صحيح داخل triggerEvent

### 4. GML + Actions
- [ ] Action 611 (relative + target)
- [ ] Action 404 legacy
- [ ] builtins الناقصة + scopes

### 5. Audio + Collision
- [ ] Playback حقيقي
- [ ] Precise masks

### 6. Validation
- [ ] mario_bros / zelda / shooter تصل complete=true
- [ ] gameplay أساسي بدون freeze
- [ ] corpus أوسع لاحقاً

## قواعد
1. لا complete=true إلا بعد materialize ناجح فعلي.
2. كل مرحلة لها اختبار regression.
3. لا استبدال عشوائي لكود يعمل — إكمال فقط.
