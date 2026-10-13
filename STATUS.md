# STATUS — صادق (2026-10-13)

## مثبت host (أرقام)
| اختبار | نتيجة |
|--------|--------|
| event order + xprevious + AABB | ALL PASS |
| ROOM_PIPELINE (4 GMK) | OK — حتى 308 instance |
| **PLAY_PATH** plataformas | inst=60 frame=60 lit_pixels=776 |
| **PLAY_PATH** mario_bros | inst=181 frame=60 lit_pixels=14225 |

`lit_pixels` = بكسلات غير لون المسح بعد soft draw → فيه رسم فعلي مش شاشة فاضي.

## مسار Android (main)
1. `nativeRuntimeCreate`
2. `nativeImportGmkSnapshot(sample.gmk)` ← غرف + instances
3. `NorNative.tick` → `nativeRuntimeStep`
4. `nativeRuntimeRenderBitmap`

## مصدر C
- باتشات ترتيب الأحداث: `tools/gap_fill_20261013/*.patch`
- شغّل قبل أي rebuild SO: `bash tools/gap_fill_20261013/ASSEMBLE.sh`
- `gm82_events.c` begin/end على main
- `gm82_runtime.c` على main قد يحتاج ASSEMBLE إن لم يُدفع الملف كاملًا

## غير مثبت
APK من هذا الـ commit على جهاز حقيقي.

**لا نسبة مئوية.**
