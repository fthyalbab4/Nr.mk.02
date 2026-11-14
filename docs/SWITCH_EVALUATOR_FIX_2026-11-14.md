# إصلاح دعم `switch` في GML evaluator — 2026-11-14

## سبب المشكلة

كان مسار `gm82_gml_eval_stmt()` القديم يقرأ كلمة `switch` كأنها اسم دالة، ولذلك ظهرت في عينة Zelda رسائل:

```text
UNMAPPED_GML_FN switch
```

كان مسار AST الحديث يدعم `switch` بالفعل، لكنه لم يكن مستخدماً من نقطة دخول evaluator القديمة التي تنفذ بعض سكربتات GMK.

## التعديل

أضيف فحص AST صغير داخل `gm82_gml_eval_stmt()`. إذا احتوت العبارة على عقدة `GM82_AST_SWITCH`، يتم تنفيذ البرنامج عبر `gm82_gml_execute_ast()`، بينما تبقى العبارات الأخرى على evaluator القديم لتجنب تغيير سلوك GML القديم غير المدعوم بالكامل.

تمت إضافة regression يغطي:

- `case` المطابق.
- `default` عند عدم وجود تطابق.
- `break`.
- fall-through من `case 2` إلى `case 3`.
- استعمال نقطة الدخول القديمة `gm82_gml_eval_stmt()` نفسها.

كما أضيفت ملفات parser وAST executor إلى رابط `tools/run_host_pipeline.sh`، لأن Host pipeline كان يبني subset لا يحتوي هذه الملفات.

## التحقق

- `python3 tools/run_engine_suite.py`: **PASS** — `ENGINE_TESTS_PASS=54/54`.
- Host pipeline: **PASS** — `SUMMARY expected=4 ok=4 fail=0`.
- عدد رسائل `UNMAPPED_GML_FN switch` في `build_host/pipeline_results.txt`: **0**.
- `python3 tools/verify_core_mirrors.py`: **PASS** — تطابق 108 ملفاً في المرايا الثلاث.
- `make -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX gates`: **PASS** — `HOST GATES OK`.

لم يتم اعتبار دعم كل صيغ GML مغلقاً؛ هذا الإصلاح محدد لمسار `switch` الذي ظهر في FAIL log الفعلي.
