# STATUS — صادق (2026-10-08)

## ماذا يعمل فعلاً (مُقاس على host)

| اختبار | نتيجة |
|--------|--------|
| Host pipeline load→materialize→goto_room→step→soft-draw | **4/4** (mario, zelda, shooter, plataformas) |
| Host shared lib `gm82_native_*` smoke | **OK** mario + zelda (running=1, frame buffer غير فارغ) |
| Room names `room*` و `r001`/`r_menu*` | **OK** بعد إصلاح الفلتر |

## ماذا جاهز في الكود ولم يُثبت على جهاز

| بند | حالة |
|-----|------|
| CMakeLists + مصادر runtime كاملة تقريباً | جاهز للـ NDK |
| `NorNativeWebBridge.java` + `assets/www` bridge | جاهز للدمج |
| بناء `arm64-v8a/libgm82_android.so` داخل APK | **لم يُنفَّذ هنا** (محتاج NDK) |
| لعب mario كامل مثل ويندوز على الهاتف | **غير مُثبت** |

## نسبة صادقة

| المقياس | النسبة |
|---------|--------|
| Host path (decode + step + soft draw) | **~55–65%** |
| Android playable parity مع ويندوز | **أقل بكثير — غير مُقاس بعد** |
| GML / DnD كامل | **جزئي scaffolding فقط** |

**ليس 100%. ليس 81%. ليس «Phases 1–4 fully verified».**

التفاصيل: `GAPS_HONEST.md` · السجل: `STEP_LOG.md` · القواعد: `REPORTING_RULES.md`
