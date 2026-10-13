# STATUS — مستمر نحو الهدف

## مدمج في ملفات main (بدون باتش)
| ملف | محتوى |
|-----|--------|
| `gm82_events.c` | سلوك لاعب + skip pierdes/dead |
| `gm82_runtime.c` | ترتيب أحداث + solid لأسماء bloque |
| `gm82_object_room_decode.c` | فلتر false-positives |
| `MainActivity.java` | ImportGmk + 30fps ImageView |

## host مثبت الآن
```
mario_bros    player=obj_minimario  delta=90 MOVED  solid=154
plataformas   player=objPlayer2     delta=90 MOVED  solid=54
```

## عبر ASSEMBLE فقط
- gml xprevious

## عندك
```bash
git pull
bash tools/gap_fill_20261013/ASSEMBLE.sh   # xprevious
./gradlew assembleDebug
```

**الهدف التالي:** rebuild SO + جهاز؛ توسيع GML/actions.
