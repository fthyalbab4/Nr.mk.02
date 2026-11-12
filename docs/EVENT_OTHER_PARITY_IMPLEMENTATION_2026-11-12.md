# أحداث Other وAnimation End — 2026-11-12

## التنفيذ

- إضافة regression مستقل: `app/src/main/cpp/tests/test_event_other_parity.c`.
- التحقق من `event_user(0)`، ورفض المؤشرات خارج المجال `0..15`.
- التحقق من dispatch لأحداث Outside وBoundary عند حدود الغرفة وخارجها.
- إصلاح `Animation End`: كان runtime يلف `image_index` أولًا ثم يحاول اكتشاف الالتفاف من القيمة الملفوفة، ولذلك كان يمكن فقدان الحدث. أصبح الكشف يتم لحظة مقارنة القيمة الخام بالقيمة الملفوفة، ثم يُرسل الحدث مرة واحدة لذلك الالتفاف.
- مزامنة التعديل والاختبار إلى المرآتين:
  - `app/src/main/cpp_backup`
  - `NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX`

## التحقق

- `EVENT_OTHER_PARITY_TEST_PASS`
- `ENGINE_TESTS_PASS=51/51`
- `PIPELINE_OK` للعينات الأربع: Mario وPlataformas وShooter وZelda.
- `SUMMARY expected=4 ok=4 fail=0`
- `RESULT OK`
- اختبار حزمة C (`make -B -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX test`) نجح.
- `verify_core_mirrors.py` أكد تطابق المرايا الثلاثة.

## ملاحظة Mario replay

الـsuite الحالي يمر بـ`test_mario_replay`، لكن commitًا وصل من `origin/main` قبل هذا التغيير عدّل الاختبار من 40 إطار حركة إلى إطار واحد قبل القفز. لذلك لا نعتبر هذا وحده إثباتًا لإكمال parity فيزياء القفز للسيناريو الطويل الأصلي؛ ما زالت إعادة سيناريو 160 إطارًا الكامل تحتاج معالجة منفصلة إذا كان معيار القبول هو الحركة المطولة.
