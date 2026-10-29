# تدقيق leanrea لمحرك GameMaker Portable ونقل خصائص GM82

## النتيجة

تم استخدام مشروع [leanrea](https://github.com/aicodeking/leanrea) كمنهج تدقيق محلي سريع، وليس كمحرك بديل. المشروع عبارة عن ملف تعليمات MIT يوجّه استخدام `file` و`strings` و`objdump` و`nm` وقراءة الأدلة قبل الانتقال إلى التفكيك العميق. لذلك لم يتم نسخ كود غير موجود؛ تم تطبيق منهجه على نسخ GameMaker Portable الموجودة في بيئة العمل وعلى مصادر `gm82save` المفتوحة الموجودة في `source/unpacked`.

## الأدلة المرصودة

- `GameMaker.exe` هو PE32 x86 ويستورد `gm82save.dll`، وهذا يثبت أن حفظ/تحميل مشروع GM82 جزء مستقل عن واجهة IDE.
- `gm82save.dll` هو PE32 x86 مبني من Rust، وتظهر فيه سلاسل المصدر `src/load.rs` و`src/save.rs` وحقول صيغة GM82 مثل `action_id`, `collision_shape`, `swap_creation_events`, `roomspeed`, `roompersistent`, `view_*`, و`bg_*`.
- `gm82save.dll` يعلن أخطاء صيغة واضحة: `InvalidVersion`, `DuplicateAsset`, `DuplicateIncludedFile`, `DuplicateTrigger`, `BadAssetName`, `BadIncludedFileName`, `BadTriggerName`, و`OldGM82`.
- بنية المشروع النصي المرصودة من ملفات GM82 الرسمية هي: `settings/settings.txt`, `rooms/index.yyd`, `rooms/<name>/room.txt`, وملفات الموارد الأخرى ذات `index.yyd` و`tree.yyd`.
- `room.txt` يحفظ أبعاد الغرفة وسرعتها واستمراريتها وشبكة المحاذاة والـviews والخلفيات، وليس مجرد اسم غرفة.

## ما تم نقله إلى Nor Maker

تم تحديث `app/src/main/cpp/src/gm82_text_reader.c` ليستخدم سلوك GM82 النصي التالي:

1. قراءة ترتيب الغرف من `rooms/index.yyd` بدل افتراض `room0`, `room1`.
2. عدّ الموارد من `index.yyd` أو من مجلدات الموارد، مع تجاهل `index.yyd` و`tree.yyd` كأنهما موارد.
3. قراءة `rooms/<name>/room.txt` واستخراج `caption`, `width`, `height`, `roomspeed`, `roompersistent`, `snap_x`, `snap_y`, و`isometric`.
4. نقل إعدادات الخلفيات والـviews الثمانية إلى `gm82_res_room`، بما في ذلك الإظهار، الطبقة الأمامية، الإزاحة، أبعاد view/port، حدود التتبع، وسرعات التتبع.
5. الاحتفاظ بالمسار الثنائي `.gmk` منفصلًا دون تغيير، مع جعل loader النصي أكثر توافقًا مع مشاريع `.gm82` القابلة لإدارة الإصدارات.

## حدود النقل الحالية

ما زالت هناك فجوات مقصودة وليست مخفية: ربط أسماء الخلفيات والكائنات بمؤشرات runtime، تحميل `settings.txt` إلى حالة runtime عامة، قراءة `tree.yyd` إلى شجرة الموارد، وتحميل instances/tiles وملفات `includes` و`triggers` تحتاج مراحل منفصلة. وجود اسم أو سلسلة في binary لا يثبت سلوك التشغيل وحده؛ لذلك لم تُحوّل هذه النقاط إلى ادعاءات مكتملة قبل إضافة parser واختبار مستقل لها.

## إعادة التشغيل

لتكرار تدقيق PE على نسخة Portable:

```sh
tools/run_leanrea_gm82_audit.sh "/path/to/game maker/portable" > /tmp/gm82-leanrea-inventory.md
```

السكربت يعمل على نسخة الهدف ولا يعدّل الملفات الأصلية. أما دليل الصيغة المفتوح الذي تمت مقارنته فهو:

```text
source/unpacked/gm82save-main/gm82save-main/src/load.rs
source/unpacked/gm82save-main/gm82save-main/src/save.rs
```

## الاختبار

بعد النقل، نجحت `tools/run_strategy_gate.sh` بالكامل: مسار HOST_PIPELINE نجح للألعاب الأربع، وENGINE_SUITE وجميع اختبارات GML/runtime/frame API نجحت، وSTATIC_GUARDS نجحت.

## المصادر

- [1] [leanrea repository](https://github.com/aicodeking/leanrea)
- [2] [GM82 gm82save source mirror](https://github.com/GM82Project/gm82save)
