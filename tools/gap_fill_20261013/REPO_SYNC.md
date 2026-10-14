# REPO_SYNC — ما هو على main (2026-10-13)

## مدموج مباشرة في الملفات
- `app/src/main/cpp/src/gm82_runtime.c` — ترتيب أحداث + xprevious + AABB scaled
- `app/src/main/cpp/src/gm82_events.c` — begin/end step
- `app/src/main/cpp/src/gm82_jni_java_bridge.c` — rooms/objects + goto_room
- `app/src/main/java/.../MainActivity.java` — ImportGmkSnapshot + NorNative

## عبر APPLY
- `gm82_gml_eval.c` xprevious: `bash tools/gap_fill_20261013/APPLY_GML.sh` أو `ASSEMBLE.sh`
  (أو `gml_xprevious.proper.patch`)

## تحقق سريع بعد clone
```bash
grep -c fire_begin_step_all app/src/main/cpp/src/gm82_runtime.c   # يجب ≥1
grep -c xprevious app/src/main/cpp/include/gm82_runtime.h          # يجب ≥1
bash tools/gap_fill_20261013/ASSEMBLE.sh                           # اختبار + gml
```
