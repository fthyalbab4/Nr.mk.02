# GAPS_HONEST — بدون تضخيم

## أُغلق جزئياً (هذه الدورة)
| فجوة | حالة |
|------|------|
| ترتيب Begin/Alarm/Step/Move/Collision/End | مُحدَّث في `gm82_runtime_step` |
| xprevious / yprevious | حقول + GML getter |
| مقاس التصادم مع scale | AABB يستخدم image_xscale/yscale |

## مفتوح (أولوية)
| فجوة | ملاحظات |
|------|---------|
| Begin/End من جداول أحداث GMK | هيكل موجود؛ decode ناقص |
| Precise mask في كل place_meeting | مسار precise منفصل؛ الافتراضي AABB |
| sprite origin في bbox | غير مربوط بالكامل |
| GML كامل | interpreter جزئي |
| صوت على جهاز | إثبات مطلوب |
| MainActivity WebView+NorNative | النسخة على main مبسّطة |

## قاعدة
ممنوع «100%»/«95%» من غير مصفوفة اختبار.
