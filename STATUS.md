# STATUS — مستمر

## host مثبت
| اختبار | نتيجة |
|--------|--------|
| 4/4 حركة + رسم | OK |
| كل الغرف | OK |
| 3000 step stress | **STABLE** |
| spawn + camera | OK |

## على main
events (fantasma/link/…) · object filter · solid · MainActivity play path

## ASSEMBLE
```bash
git pull && bash tools/gap_fill_20261013/ASSEMBLE.sh && ./gradlew assembleDebug
```

## للهدف (جهاز = ويندوز)
1. **rebuild SO** بـ NDK من `app/src/main/cpp`
2. install APK واختبار لمس
3. ربط أحداث DnD/GML من الكائنات بالكامل

بدون نسب مئوية وهمية.
