# ما المدمج فعليًا في ملفات main (بعد commit الأخير)

تحقق من الـ raw على GitHub:

```bash
# سلوك اللاعب
curl -sL https://raw.githubusercontent.com/fthyalbab4/Nr.mk.02/main/app/src/main/cpp/src/gm82_events.c | grep -c mini_mario
# يجب ≥1

# ترتيب الأحداث في runtime
curl -sL https://raw.githubusercontent.com/fthyalbab4/Nr.mk.02/main/app/src/main/cpp/src/gm82_runtime.c | grep -c fire_begin_step_all
# يجب ≥1

# MainActivity مسار اللعب
curl -sL https://raw.githubusercontent.com/fthyalbab4/Nr.mk.02/main/app/src/main/java/com/normaker/nativefull/MainActivity.java | grep -c nativeImportGmkSnapshot
# يجب ≥1
```

## مدمج في الملف على main
- `gm82_events.c` — أسماء mini_mario / objPlayer / bloque + longest-match
- `gm82_runtime.c` — event order + xprevious + AABB
- `MainActivity.java` — ImportGmk + 30fps ImageView
- `gm82_jni_java_bridge.c` — rooms + goto_room

## لسه عبر ASSEMBLE إن ما اترفعش كاملًا
- `gm82_object_room_decode.c` فلتر false-positives → `gm82_object_filter.patch`
- `gm82_gml_eval.c` xprevious → `gml_xprevious.proper.patch`

```bash
bash tools/gap_fill_20261013/ASSEMBLE.sh
```
