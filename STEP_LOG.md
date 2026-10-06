# STEP LOG — تنفيذ تلقائي على المستودع

## Step 1 — Host pipeline (2026-10-06)
load → materialize → guard → goto_room → step×N → draw

| عينة | نتيجة |
|------|--------|
| mario_bros | **PIPELINE_OK** (181 inst) |
| plataformas | **PIPELINE_OK** (60 inst) |
| shooter | **PIPELINE_OK** (308 inst) |
| zelda | فشل أولاً ثم أُصلح |

## Step 2 — assets/www scripts
- `assets/www/nor_native_loop_bridge.js`
- `assets/www/index_html_native_loop_patch.js`
- `tools/run_host_pipeline.sh`

## Step 3 — إصلاح rooms لـ zelda (r001/r_menu)
الأسماء `r001` ليست `room*` — تم توسيع الفلتر.

| عينة | بعد الإصلاح |
|------|-------------|
| zelda | **PIPELINE_OK** (3 rooms, 39 inst في r001) |
| mario / plataformas / shooter | ما زالت **PIPELINE_OK** |

**4/4 عينات host pipeline ناجحة.**

## Step 4 (التالي) — Android SO + APK
1. NDK build `libgm82_android.so` من CMakeLists
2. دمج JS في index.html
3. تجربة على جهاز

## نسبة صادقة
~50–60% مسار host (decode+step+draw). gameplay/GML/Android لسه.
