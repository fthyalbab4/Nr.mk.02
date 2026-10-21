# GM82 Android Full Core Sync — 2026-10-21

## قرار الدمج

تمت مراجعة `/home/ubuntu/nm_repo/NorMaker-0_extracted/android_project_base` مقابل هذا المستودع قبل النقل. المستودع الحالي `Nr.mk.02` يحتوي بنية Full Core أحدث وأكثر اتساعًا من نسخة `gm82_android_core.c` القديمة: فهو يستخدم `src/gm82_gml_builtins.c`, `src/gm82_runtime.c`, `src/gm82_gml_eval.c`, materialization للغرف والكائنات، decoding للأصول، input، particles، paths، sound runtime، وsoft renderer.

لذلك لم يتم استبدال ملفات النواة الحالية بملفات أقدم أو نسخ مبسطة. التغييرات المصدرية السابقة الخاصة بـRunner وNative loop والـmath built-ins موجودة أو ممثلة بالفعل في المسار الأحدث، وتم إثبات ذلك بالمقارنة النصية والاختبارات المحلية.

## الأدلة التي تم فحصها

- `app/src/main/assets/www/index.html` يحتوي ربط `nativeRuntime.step` و`nativeRuntime.snapshot`.
- `app/src/main/cpp/src/gm82_native_bridge.c` يحتوي ربط `angle_difference` ومسار الجسر native.
- `app/src/main/cpp/src/gm82_gml_eval.c` يحتوي `delta_time` و`approach_angle` ضمن مسار التقييم.
- `app/src/main/cpp/src/gm82_gml_builtins.c` يحتوي تطبيقات `gml_delta_time`, `gml_angle_difference`, و`gml_approach_angle`.
- `app/src/main/cpp/test_full_suite.c` واختبارات `app/src/main/cpp/tests/` تغطي parser/VM/runtime/DS/collision/paths/particles/MP grid.

## الاختبارات التي نجحت

تم تشغيل `python3 tools/run_engine_suite.py` من جذر المستودع:

- samples: `mario_bros.gmk`, `plataformas.gmk`, `shooter.gmk`, `zelda.gmk`: **4/4 pipeline OK**.
- `test_full_suite.c`: **PASS**.
- `test_runtime_guard.c`: **PASS**.
- `test_dual_load.c`: **PASS**.
- `test_4_game_smoke.c`: **PASS**.
- `test_gml_comprehensive.c`: **PASS**.
- `test_gml_vm_execution.c`: **PASS**.
- `test_gml_vm_expanded.c`: **PASS**.
- `test_gml_ds_collisions.c`: **PASS**.
- `test_paths_particles_mpgrid.c`: **PASS**.
- `tools/run_host_pipeline.sh`: **PASS**.

`test_mario_physics_parity.c` غير موجود، ولذلك ظهر **SKIP** ولم يُحسب كنجاح.

## ما لم يُثبت

لم توجد ملفات `treasure.gmk`, `treasure.gm81`, أو `treasure.gm82` في بيئة التدقيق الحالية؛ لذلك لا يوجد ادعاء بأن Treasure اختُبرت في هذه الجولة. كذلك لم يُنفذ Android APK build أو device test من هذه البيئة بسبب غياب `gradlew` وAndroid SDK/NDK القابلين للاستخدام.

REA نجح في التحليل الثابت لمستودعات NOR مع Ghidra مفعّل. JADX وHopper وIDA ليست متاحة في هذه البيئة، ولم يُدّع تحليل APK/DEX بها.

## فجوات المتابعة

لا تزال الحاجة قائمة إلى fixture Treasure، اختبار جهاز Android، والتحقق الدلالي من ترتيب الأحداث، precise masks، room persistence، audio backend، ومتغيرات VM العالمية. نجاح host pipeline لا يساوي توافق GM82 بنسبة 100%.

## نتيجة النشر

هذا التقرير جزء من commit المزامنة في المستودع الحالي. لم تُحذف أي ميزة من النواة الموجودة، ولم تُرفع APK غير مبنية أو نتيجة تشغيل غير مثبتة.
