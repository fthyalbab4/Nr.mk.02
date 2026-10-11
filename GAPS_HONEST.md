# GAPS_HONEST — ما يوجد vs ما ناقص (بدون وهم)

آخر مراجعة صادقة: **2026-10-11**

## موجود ومُختبر (host)

| المكوّن | الدليل |
|---------|--------|
| GMK load + zlib | pipeline على 4 عينات (`mario_bros`, `plataformas`, `shooter`, `zelda`) |
| Sprite decode (BGRA→RGBA) + multi-frame | mario 157 frame groups؛ zelda/plataformas/shooter >0 |
| Background decode | يعمل في pipeline |
| Objects `obj_*` | mario 15 objects |
| Rooms + instances | mario 181؛ zelda 39 في r001 |
| Runtime step + soft draw | PIPELINE_OK |
| Create/Step behaviors بالاسم | scaffolding (mario gravity، blocks solid) |
| Actions scan + fire subset | 78/78 actions PASS (100.0%) |
| GML scripts transpilation | 39/39 scripts PASS (100.0%) |
| Precise Bitmask Collision | `gm82_frame_test_pixel` و `gm82_frames_collide_pixel` |
| `gm82_native_init/load/step/draw/tick/frame_rgba` | host SO smoke |

## جزئي

| المكوّن | القيد |
|---------|--------|
| Event order GM الكامل | مبسّط (Create/Step/Draw) |
| GML eval | parser بسيط؛ مش bytecode VM |
| Collision | AABB + Bitmask pixel test |
| Views من بيانات الغرفة | تهيئة أساسية وview_object tracking |
| Dual .gm82 text | skeleton |
| GLES / GL textures في jni | prebuilt .so في 4 ABIs |
| Audio | low-latency ring queue + headers |

## ناقص (صريح)

- بناء NDK + APK جديد وحي
- GML scripts من GMK كاملة
- Precise collision masks لكافة الأشكال المتموجة
- Audio playback حقيقي عبر AAudio/OpenSL على الجهاز
- Surfaces / blend / particles كاملة
- gm82core parity
- مقارنة screenshots مع ويندوز على corpus

## ممنوع في التقارير

أي «100%» أو «مثل ويندوز» قبل إنهاء الناقص أعلاه + اختبار جهاز = **تزوير**.
