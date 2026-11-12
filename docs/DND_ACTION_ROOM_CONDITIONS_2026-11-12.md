# دفعة DnD: شروط الغرف — 2026-11-12

تم تنفيذ أول دفعة محددة من بند **توسيع Action Lists** في خطة تكافؤ GameMaker. الإصلاح يربط الشرطين `action_if_next_room` و`action_if_previous_room` بحقل `gm82_runtime.current_room` بدل القيم الافتراضية أو الإرجاع الثابت لـ`false`.

الاختبار `test_gmk8_action_room_conditions.c` يغطي الغرفة الأولى والوسطى والأخيرة، وحالة الفهرس غير الصالح. تمت مزامنة مصدر `gm82_actions.c` والاختبار إلى المرايا الثلاثة.

نتائج التحقق:

```text
GMK8_ACTION_ROOM_CONDITIONS_PASS
ENGINE_TESTS_PASS=53/53
SUMMARY expected=4 ok=4 fail=0
RESULT OK
C core package make test: PASS
verify_core_mirrors.py: PASS
```

هذا يغلق دفعة شروط الغرف فقط، ولا يعني اكتمال كل إجراءات DnD. ما زالت إجراءات أخرى تحتاج إما contract tests أو بيانات FAIL من ألعاب فعلية قبل إغلاقها.
