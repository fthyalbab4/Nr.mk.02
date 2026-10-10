# GAPS_HONEST — ما يوجد vs ما ناقص (بدون وهم)

آخر مراجعة صادقة: **2026-10-08**

## موجود ومُختبر (host)

| المكوّن | الدليل |
|---------|--------|
| GMK load + zlib | pipeline على 4 عينات |
| Sprite decode (BGRA→RGBA) + multi-frame | mario 157 frame groups؛ zelda/plataformas/shooter >0 |
| Background decode | يعمل في pipeline |
| Objects `obj_*` | mario 15 objects |
| Rooms + instances | mario 181؛ zelda 39 في r001 |
| Runtime step + soft draw | PIPELINE_OK |
| Create/Step behaviors بالاسم | scaffolding (mario gravity، blocks solid) |
| Actions scan + fire subset | موجود؛ ليس كل DnD |
| `gm82_native_init/load/step/draw/tick/frame_rgba` | host SO smoke |

## جزئي

| المكوّن | القيد |
|---------|--------|
| Event order GM الكامل | مبسّط (Create/Step/Draw) |
| GML eval | parser بسيط؛ مش bytecode VM |
| Collision | AABB؛ مش precise mask |
| Views من بيانات الغرفة | تهيئة أساسية |
| Dual .gm82 text | skeleton |
| GLES / GL textures في jni | STUB أو غير مُثبت على جهاز |
| Audio | headers / partial؛ playback غير مُثبت |

## ناقص (صريح)

- بناء NDK + APK + اختبار على هاتف
- GML scripts من GMK كاملة
- Action lists كاملة + `with`/`other`
- Precise collision masks
- Audio playback حقيقي
- Surfaces / blend / particles كاملة
- gm82core parity
- مقارنة screenshots مع ويندوز على corpus

## ممنوع في التقارير

أي «100%» أو «مثل ويندوز» قبل إنهاء الناقص أعلاه + اختبار جهاز = **تزوير**.
