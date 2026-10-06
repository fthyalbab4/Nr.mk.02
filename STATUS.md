# STATUS.md — حالة المشروع (صادقة)

**آخر تحديث:** 2026-10-06

## الملخص التنفيذي

النواة تحتوي على:
- Dual loader skeleton (GMK + .gm82)
- Runtime Guard يعمل
- Sprite/Background pixel decoder (zlib + BGRA→RGBA) — يعمل جزئياً
- Materialize path موجود
- بعض GML eval وbuiltins

ليست جاهزة للاستخدام الكامل.
complete=false هو السلوك الصحيح حالياً حتى تكتمل walkers وmulti-frame وObjects/Events.

## النسبة الحالية

~30–40% من parity كامل مع Windows GM8.2.

## ما ينجح

- Probe GMK 800 على mario_bros / zelda / shooter / plataformas
- فك بعض إطارات السبرايت من mario_bros
- Guard يمنع التشغيل عند incomplete
- Multi-frame storage في materialize (أُصلح)

## ما لا ينجح / ناقص

- Objects + Events + full Actions
- Room instances/tiles الحقيقية
- ربط native step/render في الحلقة
- Audio playback
- Precise masks
- GML full + DnD كامل

انظر GAPS_HONEST.md للتفاصيل.
