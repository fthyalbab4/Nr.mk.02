# STATUS — صادق (تحديث مستمر)

## مدمج في ملفات main
- `gm82_events.c` — سلوك mini_mario / objPlayer
- `gm82_runtime.c` — ترتيب أحداث
- `gm82_object_room_decode.c` — **فلتر false-positives**
- MainActivity — ImportGmk + 30fps ImageView

## عبر ASSEMBLE
- solid لأسماء bloque/castillo
- gml xprevious

## host
plataformas + mario: **MOVED** تحت إدخال يمين

```bash
git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
```
