# خطة التطوير الموسعة للوصول إلى 80% في محرك NOR Maker (GM82 Android)

## الوضع الحالي
- نسبة الإنجاز التقريبية: 55-65% على مسار الـ host
- Native SO smoke OK على mario و zelda
- Pipeline host 4/4 OK

## الهدف
الوصول إلى 80% playable runtime مع:
1. nativeRuntimeStep + RenderBitmap مربوطين في الحلقة
2. Event order (Create/Step/Draw) من objects
3. Action 611 / 404 و with/other scopes
4. Playback صوت حقيقي + precise collision masks
5. mario بدون freeze في gameplay أساسي

## مراحل
### مرحلة A — Runtime loop
- ربط nativeRuntimeStep
- RenderBitmap في WebView bridge
- اختبار mario step-by-step

### مرحلة B — Events & Actions
- Create/Step/Draw ordering
- Action 611, 404
- with / other

### مرحلة C — Audio & Collision
- OpenSL ES playback
- Precise masks

### مرحلة D — Validation
- suite كاملة على 4 عينات GMK
- بدون freeze على mario
