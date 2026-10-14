# GAPS_HONEST — بدون تضخيم (الإصدار: HOST_MVP)

## أُغلق جزئياً (هذه الدورة - HOST_MVP)
| فجوة | حالة |
|------|------|
| ترتيب Begin/Alarm/Step/Move/Collision/End | مُحدَّث في `gm82_runtime_step` ومختبر |
| xprevious / yprevious | حقول + GML getter |
| مقاس التصادم مع scale | AABB يستخدم image_xscale/yscale |
| محاكاة ماريو على Host (3.6) | اختُبرت بـ `test_mario_end_to_end.js` ومرّت بنجاح |
| طابور الصوت ورسائل PCM Mixer | مدعوم في `gm82_audio_mixer.c` واختُبر في 16/16 pass |

## مفتوح (أولوية للمراحل القادمة)
| فجوة | ملاحظات |
|------|---------|
| Begin/End من جداول أحداث GMK | هيكل موجود؛ decode ناقص |
| Precise mask في كل place_meeting | مسار precise منفصل؛ الافتراضي AABB |
| sprite origin في bbox | غير مربوط بالكامل |
| GML كامل | interpreter جزئي |
| صوت على جهاز أندرويد مادي | إثبات مطلوب على جهاز حقيقي |
| MainActivity WebView+NorNative | النسخة على main مبسّطة |

## قاعدة
ممنوع «100%»/«95%» من غير مصفوفة اختبار كاملة ممرورة.
