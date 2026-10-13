# STATUS — صادق (2026-10-13)

## ما يُقاس فعلياً
- **Host pipeline** (load GMK → materialize → room → step → soft_draw): نجح سابقاً على عينات محدودة على Linux host.
- **جهاز Android حقيقي:** غير مُقاس في هذه الجلسة.

## ما تم في هذه الدورة (سد فجوات)
1. ترتيب أحداث أقرب لـ GM8: Begin Step → Alarm → Step → حركة → Collision → End Step.
2. `xprevious` / `yprevious` على الـ instance + قراءة من GML eval.
3. AABB في التصادم يحسب `image_xscale` / `image_yscale`.
4. hooks لـ begin/end step (جداول أحداث GMK الفرعية لسه ناقصة).

## ما لم يُثبت
- لعب كامل زي ويندوز على الهاتف.
- GML/DnD كامل، precise mask في كل المسارات، صوت على الجهاز.

## نسب
**لا نسبة مئوية مزيفة.** التقدم = فجوات مغلقة باختبار.
