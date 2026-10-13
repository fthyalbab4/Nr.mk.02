# STATUS — صادق (2026-10-13)

## كل الشغل على المستودع (main)

### مصادر C مدموجة
| ملف | حالة |
|-----|------|
| `gm82_runtime.c` | **مدموج على main** — ترتيب أحداث + xprevious + AABB scale |
| `gm82_events.c` | begin/end step على main |
| `gm82_jni_java_bridge.c` | decode rooms/objects + goto_room |
| `gm82_gml_eval.c` | xprevious عبر `tools/gap_fill_20261013/gml_xprevious.proper.patch` + ASSEMBLE |

### Android
| ملف | حالة |
|-----|------|
| MainActivity | nativeRuntime* + ImportGmkSnapshot + NorNative |

### إثبات host
- event order ALL PASS
- ROOM_PIPELINE_OK (4 GMK)
- PLAY_PATH_OK (lit pixels)

### قبل rebuild SO
```bash
bash tools/gap_fill_20261013/ASSEMBLE.sh   # gml xprevious إن لزم
bash tools/ensure_core_patches.sh
```

### غير مثبت
APK على جهاز من هذا الـ commit.

**لا نسبة مئوية.**
