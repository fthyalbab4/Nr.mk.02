# STEP LOG — تنفيذ تلقائي على المستودع

## Step 1 — Host pipeline build + test (2026-10-06)

**الهدف:** إثبات load → materialize → guard → goto_room → step×N → draw بدون Android.

**النتيجة:**
| عينة | load | complete | goto_room | steps+draw |
|------|------|----------|-----------|------------|
| mario_bros.gmk | OK | true | 181 inst | **PIPELINE_OK** (90 frames) |
| plataformas.gmk | OK | true | 60 inst | **PIPELINE_OK** |
| shooter.gmk | OK | true | 308 inst | **PIPELINE_OK** |
| zelda.gmk | OK | true | **FAIL** room decode=0 | — |

**ملاحظة zelda:** IR يعطي placeholder؛ `gm82_decode_rooms_from_gmk` رجّع 0.

**ملفات:** `tools/host_pipeline_test.c`, `tools/run_host_pipeline.sh`, `assets/www/*`

## Step 2 — دمج assets/www في APK (على الجهاز)
1. نسخ `assets/www/*.js` إلى APK
2. script tags قبل `</body>`
3. إعادة بناء SO

## Step 3 — إصلاح zelda rooms

## نسبة صادقة
~45–55% لمسار host على 3/4 عينات.
