# STATUS — مستمر

## مدمج في ملفات main
- `gm82_events.c`: سلوك لاعب (سرعات فقط) + skip death + أسماء GMK
- `gm82_runtime.c`: حركة + solid AABB + solid names
- `gm82_object_room_decode.c`: فلتر objects
- `MainActivity.java`: ImportGmk + 30fps ImageView

## host مثبت
| اختبار | نتيجة |
|--------|--------|
| حركة يمين | MOVED delta=90 |
| هبوط | LANDED vspeed=0 |
| قفز | jumped=1 |

## ASSEMBLE (xprevious)
```bash
git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
```

التالي: SO rebuild · جهاز · GML أوسع
