# GML Script Name Compatibility — 2026-11-17

تم تدقيق مسار البحث عن أسماء scripts المستوردة من GMK. التنفيذ كان يدعم بالفعل المطابقة غير الحساسة لحالة الأحرف والمطابقة بعد إزالة الشرطة السفلية، لكن ذلك لم يكن محمياً باختبار regression صريح.

أضيفت اختبارات تثبت أن `script_find("IS_LARGE")` و`script_find("is__large")` يعيدان نفس script، وأن الاستدعاء المباشر `IS_LARGE(5)` يعمل مع argument. هذا يحمي scripts القديمة التي تختلف أسماؤها في حالة الأحرف أو تحتوي على اختلافات بسيطة في underscore.

النتائج: `verify_core_mirrors.py` ناجح، `DS_LIST_CALLBACKS_TEST_PASS` ناجح، `ENGINE_TESTS_PASS=54/54`، وHost gates وHost pipeline ناجحة بأربع عينات.
