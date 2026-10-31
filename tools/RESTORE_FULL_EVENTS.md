# استعادة gm82_events.c الكامل

النسخة الحالية على remote تحتوي:
- كل behaviors الافتراضية
- fire_create / destroy / alarm / **collision مع gml_set_other**

الدوال الناقصة بعد collision (step, keyboard, mouse, other, draw, ...):
موجودة محلياً في أي clone سابق (33426 بايت، 4× gml_set_other).

## طريقة سريعة (من جهازك)
```bash
cp /path/to/full/gm82_events.c app/src/main/cpp/src/
cp /path/to/full/gm82_events.c NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/
git add app/src/main/cpp/src/gm82_events.c NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/src/gm82_events.c
git commit -m "P0: full gm82_events.c with all fire_*"
git push
```

## التحقق
```bash
grep -c gml_set_other app/src/main/cpp/src/gm82_events.c   # يجب 4
wc -c app/src/main/cpp/src/gm82_events.c                    # يجب ~33426
```
