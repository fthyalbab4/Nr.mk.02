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
6. قراءة `rooms/<name>/instances.txt` بصيغة GM82 الرسمية، وربط اسم الكائن بمؤشره، ثم حفظ الموضع والقفل والتحجيم والزاوية والـblend وcreation code.
7. قراءة `rooms/<name>/layers.txt` وملفات الطبقات التابعة له، ثم حفظ الخلفية والموضع ومصدر الصورة والحجم والعمق والقفل والتحجيم والـblend لكل tile.
8. قراءة `settings/settings.txt` إلى `gm82_project_settings` بكل مفاتيحها الرسمية الـ36، ومنها `swap_creation_events`, `esc_close_game`, `zero_uninitialized_vars`, `error_on_uninitialized_args`, `clear_color`, و`custom_bar`.
9. قراءة `settings/constants.txt` إلى قائمة ثوابت `name=value` مع الاحتفاظ بتعبيرات القيم كما هي دون تنفيذها.
10. قراءة `datafiles/index.yyd` وملفات `<name>.txt` الجانبية إلى `gm82_res_included_file` مع `store`, `free`, `overwrite`, `remove`, `export`, `export_folder`، وقياس الملف المضمّن في `datafiles/include/<name>`.
11. قراءة `triggers/index.yyd` وملفات `<name>.txt` و`<name>.gml` إلى `gm82_res_trigger` مع `constant` و`kind` وشرط الـtrigger.

## عيب حقيقي تم كشفه وإصلاحه

اختبار المشاريع الحقيقية كشف أن `gm82_project_ir_recompute_complete` و`gm82_project_ir_free` كانتا تفرضان تخصيص مصفوفات الموارد دائمًا. مشاريع `.gm82` النصية تعلن الأعداد دون تخصيص مصفوفات، لذلك كان الوصول إلى `ir->sprites[i]` يسبب انهيارًا على عنوان فارغ. تم تحصين كل الحلقات في `gm82_project_ir.c` بحيث تتحقق من المؤشر أولًا. هذا عيب كان كامنًا ولم يكن أي اختبار سابق قد وصله.

## اختبار على مشاريع GM82 حقيقية

أُضيف `app/src/main/cpp/tests/test_gm82_text_project.c` ويُشغَّل داخل `ENGINE_SUITE`، ويعمل على ثلاثة مشاريع رسمية موجودة في `source/unpacked`:

- `gm82angle-main/anvil`: يتحقق من أن اسم الغرفة يأتي من `rooms/index.yyd` (`rmMain` وليس `room0`)، ومن أن الأبعاد 696×656 والسرعة 60، ومن `views_enabled=0` التي تُبقي view واحدًا فعّالًا بأبعاد 1080×480، ومن قراءة صف `instances.txt` وربط `ctrl` بمؤشر كائن صالح، ومن تحميل 36 مفتاح إعدادات و12 ثابتًا.
- `gm82path.gm82`: يتحقق من صف `instances.txt` ذي التسعة حقول، أي أنه لا يُفسَّر خطأً كصف يحمل creation code.
- `gm82upx.gm82`: يتحقق من قراءة `datafiles/index.yyd` وملف `upx.exe` المضمّن.

## حدود النقل الحالية

ما زالت هناك فجوات مقصودة وليست مخفية:

1. قراءة `tree.yyd` إلى شجرة موارد فعلية لم تُنفَّذ بعد.
2. ربط `gm82_project_settings` بحالة runtime الفعلية (نافذة، vsync، مسار الأخطاء، دلالات `swap_creation_events` و`zero_uninitialized_vars`) لم يُنفَّذ بعد؛ الإعدادات تُقرأ وتُحفظ فقط.
3. ربط مؤشرات الخلفيات والكائنات بموارد runtime المادية (نسيج/سبرايت/كائن منفَّذ) لم يُنفَّذ بعد.
4. تعبيرات الثوابت في `constants.txt` تُحفظ كنصوص ولا تُقيَّم إلى قيم رقمية بعد.
5. لم يتم بعد تشغيل لعبة `.gm82` نصية كاملة داخل محرك Nor Maker على الجهاز؛ الاختبار الحالي يثبت صحة الـIR المستخرج لا صحة العرض.

وجود اسم أو سلسلة في binary لا يثبت سلوك التشغيل وحده؛ لذلك لم تُحوّل هذه النقاط إلى ادعاءات مكتملة قبل إضافة parser واختبار مستقل لها.

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

بعد كل مرحلة، نجحت `tools/run_strategy_gate.sh` بالكامل: مسار HOST_PIPELINE نجح للألعاب الأربع، وENGINE_SUITE وجميع اختبارات GML/runtime/frame API نجحت، و`test_gm82_text_project` نجح، وSTATIC_GUARDS نجحت.

## الخطوة التالية المقترحة

أقصر طريق متبقٍ للوصول إلى "لعبة `.gm82` تعمل فعليًا" هو: تحويل `gm82_project_ir` الناتج عن المسار النصي إلى نفس مسار materialize المستخدم مع `.gmk`، أي فك الـsprites/backgrounds من ملفات `sprites/<name>/*.png` و`backgrounds/<name>/*.png`، ثم ربط الغرف بالكائنات، ثم تشغيل الغرفة الأولى عبر runtime مع التحقق من حركة لاعب فعلية (`delta.x > 0`).

## المصادر

- [1] [leanrea repository](https://github.com/aicodeking/leanrea)
- [2] [GM82 gm82save source mirror](https://github.com/GM82Project/gm82save)
