# STATUS — صادق

## على main كملفات مصدر
- gm82_events.c: سلوك لاعب بأسماء GMK الحقيقية (**مدموج**)
- gm82_runtime.c: ترتيب أحداث (**مدموج**)
- MainActivity: مسار لعب كامل (**مدموج**)

## عبر ASSEMBLE
- object filter + gml xprevious

## host
mario + plataformas: MOVED تحت إدخال

```bash
git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
```
