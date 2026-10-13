# STATUS — صادق (2026-10-13)

## مثبت host
| اختبار | نتيجة |
|--------|--------|
| PLAY_PATH 4/4 GMK | OK |
| **mario_bros + مفتاح يمين 30 إطار** | **MOVED delta=90** |
| plataformas room object_index | decode مشوه (معظم instances → index 1) — فجوة معروفة |

## سلوك اللاعب
أسماء GMK الحقيقية (`mini_mario`, `mario`, …) كانت لا تطابق `obj_minimario`.
باتش: `gm82_events.behavior_names.patch` عبر ASSEMBLE.

## Android
MainActivity: ImportGmk + 30fps ImageView + D-pad لمس.

## عندك
```bash
git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
```

**لا نسبة مئوية.**
