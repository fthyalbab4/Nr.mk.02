# الخطة الاستراتيجية للوصول إلى تشغيل ألعاب GameMaker كاملة

**المشروع:** Nr.mk.02
**الهدف:** استيراد وتشغيل ألعاب GMK/GM82 على Android بسلوك قابل للقياس، وليس ادعاء توافق عام غير مثبت.

## قاعدة التنفيذ

لا نغلق فجوة بسبب وجود اسم دالة أو نجاح ترجمة فقط. إغلاق أي بند يحتاج:

1. اختبار سلوكي قابل للتكرار.
2. تشغيل عينة لعبة حقيقية أو fixture يمثل السلوك.
3. عدم وجود regression في suite الحالية.
4. توثيق واضح لما تم إثباته وما لم يُثبت.

## المرحلة 0 — بوابة الجودة الحالية

**الحالة:** تُنفّذ الآن على Host.

- تشغيل `tools/run_host_pipeline.sh`.
- تشغيل suite الاختبارات الأصلية عبر `tools/run_engine_suite.py`.
- تسجيل النتيجة في `docs/ACCEPTANCE_GATE_*.md`.
- منع أي claim بأن المشروع يدعم كل GMK.

**معيار الخروج:** لا يوجد فشل في الاختبارات الأساسية، أو تكون كل حالات الفشل موثقة ومصنفة.

## المرحلة 1 — importer/materialize كامل

**الأولوية القصوى.**

- تحديد صيغ الإدخال المدعومة فعليًا: GMK/GM81/GM6 وGM82 النصي.
- استبدال أي placeholder أو resource count اصطناعي بقراءة فعلية.
- فك sprites بكل frames/origins/masks.
- فك backgrounds/fonts/sounds/scripts.
- فك rooms بكل views/background layers/tiles/instances/creation code.
- ربط objects بالـparents والأحداث والـcreation code.
- جعل `complete=true` لا يحدث إلا بعد تحقق كل الموارد المطلوبة.
- إضافة corpus حقيقي مع counters وfailure reasons.

**معيار الخروج:** كل لعبة في corpus تنتج IR كاملًا، وعدد الموارد في اللوج يطابق المصدر، ولا توجد موارد `PARTIAL` مطلوبة للتشغيل.

## المرحلة 2 — ربط التشغيل الفعلي

- ربط scripts المستخرجة بالـGML VM.
- تشغيل creation code وroom creation code.
- تشغيل DnD actions من الجداول الفعلية.
- تثبيت ترتيب الأحداث: Create → Begin Step → Alarm/Keyboard/Mouse → Step → End Step → Collision → Pre-Draw → Draw → Post-Draw → Destroy.
- حماية إنشاء/تدمير instances أثناء iteration.
- استكمال room transitions وpersistent instances.
- تنفيذ `with()` بالـscope الصحيح.

**معيار الخروج:** لعبة اختبار تنتقل بين غرفتين، تنشئ/تحذف instances، وتنفذ scripts/events مع log يثبت الترتيب والآثار الجانبية.

## المرحلة 3 — runtime parity

- collision masks وprecise collision عند الحاجة.
- alarms/timelines/paths.
- views/cameras/depth/room speed.
- variables والـinstance fields والـdynamic access.
- surfaces: create/set target/reset/free/copy.
- drawing المتقدم: sprite parts/tiling/blend/alpha/fonts/text.
- DS structures وbuffers والملفات بناءً على failures حقيقية.

**معيار الخروج:** كل وظيفة مغلقة لها test، وليس مجرد declaration أو alias.

## المرحلة 4 — Android device path

- بناء APK على بيئة SDK/NDK متوافقة.
- اختبار file picker وURI permissions وMediaStore.
- اختبار JNI lifecycle وGL surface وhardware FBO.
- اختبار input touch/keyboard.
- اختبار PCM/OpenSL أو AAudio للصوت الحقيقي.
- اختبار save/load ومسارات Android scoped storage.

**معيار الخروج:** APK يثبت ويفتح ويستورد corpus ويشغل أول room ويغير room ويرسم ويستجيب للإدخال والصوت بدون crash.

## المرحلة 5 — corpus قبول واقعي

إنشاء قائمة ثابتة من 3–10 ألعاب حقيقية، ولكل لعبة checklist:

- import
- أول room
- non-black render
- input/movement
- collision
- room change
- sound
- save/load
- no missing builtin critical

**معيار الخروج:** تقرير مستقل لكل لعبة بحالة PASS/FAIL، مع عدم تعميم النتائج خارج corpus.

## ترتيب التنفيذ الحالي

```text
بوابة الجودة
  ↓
Importer/materialize
  ↓
Scripts + actions + event order + with
  ↓
Runtime parity: collision/timelines/surfaces/draw/audio
  ↓
APK/device validation
  ↓
Corpus acceptance + regression
```

## ما لا يمكن إثباته من Sandbox وحده

- نجاح APK على هاتف Android حقيقي.
- hardware GLES/FBO.
- PCM/OpenSL/AAudio الفعلي.
- file picker وMediaStore عبر إصدارات Android.
- توافق 100% مع كل مشاريع GameMaker.

هذه البنود تحتاج جهاز Android وبيئة SDK/NDK متوافقة، وستظل مفتوحة حتى يظهر log حقيقي من الجهاز.

## تعريف الانتهاء

يُعتبر الهدف محققًا فقط عندما تمر قائمة ألعاب محددة end-to-end على جهاز Android، مع تقارير PASS قابلة لإعادة التشغيل، وليس عند اكتمال قائمة أسماء builtins.
