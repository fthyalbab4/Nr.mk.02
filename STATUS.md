# STATUS

## host 4/4 PASS
| sample | scripts | move | draw |
|--------|---------|------|------|
| mario_bros | 8 | MOVED | OK |
| plataformas | 14 | MOVED | OK |
| shooter | 0 | MOVED | OK |
| zelda | 16 | MOVED | OK |

ASSEMBLE: spawn + GML harvest + step GML + JNI scripts + xprevious + potential_step
+ spawn_fallback.py if patch fails

```bash
git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
```

## متبقي للجهاز
rebuild libgm82_android.so (NDK) ثم APK
