# تقرير تحليل GameMaker 8.2 Portable بواسطة Craft Anything

**التاريخ:** 2026-11-04  
**الهدف:** تحليل ثابت لنسخة GameMaker 8.2 Portable التي وفرها المستخدم، واستخدام النتائج كمرجع توافق لنواة NOR Maker، دون تشغيل الملفات التنفيذية أو نسخ كود مفكك إلى المستودع.

## نطاق العمل والسلامة

تم تحليل الأرشيف المستخرج من:

`/home/ubuntu/reference-gm82-mediafire-20261104/extracted/`

تم تشغيل Craft Anything CLI في وضع **Deep** على الملفات الأصلية فقط. لم يتم تشغيل `GameMaker.exe` أو أي ملف Windows آخر، ولم يتم استخدام Wine أو تحميل DLL داخل العملية. لم تُنقل تعليمات assembly أو pseudo-C من الملف الثنائي إلى NOR Maker؛ المنقول إلى هذا التقرير هو ملاحظات توافق مستندة إلى strings وPE resources وmetadata.

ملف الهدف الرئيسي:

- `GameMaker.exe`
- SHA-256: `43f9390b18002a64cc59c6a4bd8988961c8f4d5e213f3027f0b5f48bc362c79f`
- PE Windows x86 / 32-bit، entry point `0x7722d8`
- 14,403 دالة مكتشفة، 33,762 string، 682 import من 25 مكتبة
- لا توجد symbols محلية؛ معظم الأسماء مولدة مثل `sub_...`
- Craft Anything رجّح Delphi أو C++Builder بسبب قسم `.itext`

## النتائج الرئيسية من GameMaker.exe

### دورة الأحداث

موارد الواجهة تحتوي بوضوح على:

- `Begin Step`
- `Step`
- `End Step`
- إعداد `The number of steps per second`
- إعدادًا لتوقيت فحص trigger قبل Begin Step وStep وEnd Step

**حالة NOR Maker:** مدعومة ومختبرة في `gm82_runtime.h` و`gm82_events.c` عبر المراحل `GM82_PHASE_BEGIN_STEP` و`GM82_PHASE_STEP` و`GM82_PHASE_END_STEP`. يوجد اختبار regression في `app/src/main/cpp/tests/test_event_order.c`.

### Alarms

الـresources تحتوي على `Alarm 0` حتى `Alarm 11`، أي 12 خانة Alarm.

**حالة NOR Maker:** مدعومة في `gm82_instance.alarms[12]`، مع `gm82_events_fire_alarm()` والتحقق من المجال `0..11` واختبارات GML للقراءة والكتابة.

### الغرف وinstances

الأدلة تضمنت:

- `Create a room`
- `Room start` و`Room end`
- `Whether the object is persistent between rooms`
- `Whether the instances will be persistent when returning to the room`
- `Run instance Creation Code after Create events`
- `Clear all instances from the room`

**حالة NOR Maker:**

- persistent instance موجود في `gm82_instance.persistent`، ويُحافظ عليه أثناء `gm82_runtime_goto_room()`.
- object persistent يُقرأ من GMK إلى `gm82_decoded_object.persistent`.
- creation code للـroom instance يُحفظ في `gm82_decoded_instance.creation_code`.
- Create events وroom instance code موجودان ضمن مسار إنشاء instances.
- `room_persistent` في GML ما زال يرجع `0` ثابتًا في `gm82_gml_eval.c`. هذه فجوة حقيقية وليست مناسبة لتخمين layout ثنائي؛ تحتاج أولًا إلى تثبيت موضع الحقل في parser الخاص بصيغة GMK ثم حفظ حالة الغرفة عند العودة إليها.

### Collision masks

وجدت الموارد خيارات صريحة:

- rectangle collision mask
- disk collision mask
- diamond collision mask
- pixel precise collision checking
- separate collision masks for subimages
- عرض collision mask داخل محرر sprite

**حالة NOR Maker:**

- توجد bitmask وpixel-precise helpers في `gm82_mask.c` و`gm82_sprite_decode.c`، كما توجد builtins مثل `place_meeting_precise()` و`collision_ellipse()`.
- لكن resolver الخاص بالحركة والتصادم الصلب في `gm82_runtime.c` يستخدم حاليًا صندوقًا ثابتًا بحجم `16x16` عبر `instance_collision_box()`. لذلك لا يصح إعلان parity كامل مع خيارات أقنعة GM8.2: precise collision متاح لبعض builtins، وليس بعدُ mask-aware في كل مسار الحركة الصلبة.
- هذه هي أولوية التنفيذ التالية: ربط resolver بقناع sprite/الإطار مع fallback آمن إلى AABB عندما لا تتوفر بيانات الصورة، ثم إضافة اختبارات rectangle/disk/diamond/pixel-mask.

### المكونات المساعدة

تم تحليل metadata ثابتة للمكونات التالية:

| الملف | النتيجة |
|---|---|
| `gm82save.dll` | DLL x86؛ imports Windows، وCraft Anything رجّح Rust/‏MSVC metadata. لم تُستخرج منه خوارزمية أو كود. |
| `gm82room.exe` | أداة Windows x86 مبنية بأسلوب Delphi/C++Builder؛ مرتبطة برسوميات DirectDraw/Direct3D. |
| `gm82mv.exe` | أداة Windows x86؛ نفس عائلة toolchain والاعتماديات القديمة. |
| `gm82vp.exe` | أداة Windows x86؛ لم تُشغّل. |
| `gm82venc.exe` | أداة Windows x86؛ لم تُشغّل. |
| `anvil.exe` | أداة Windows x86؛ تستورد DirectDraw/Direct3D وwinmm. |

وجود هذه الأدوات لا يثبت أنها runtime قابل لإعادة الاستخدام على Android. الأرشيف محل التحليل هو IDE/toolchain Portable، وليس لعبة GM8.2 مصدّرة تحتوي runner مع game data. لإثبات توافق تشغيل لعبة فعلية نحتاج ملف مشروع أو لعبة اختبار مرخصة ومخرجاتها، لا مجرد IDE.

## موارد مهمة رصدها التحليل

ملف `GameMaker.exe` يحتوي على 249 resource entry، منها:

- 57 `RT_RCDATA`، ومن أسمائها `TEVENTFORM` و`TROOMFORM` و`TOBJECTFORM` و`TSPRITEFORM` و`TSCRIPTFORM` و`TMAINFORM`.
- 54 `RT_STRING`.
- 49 `RT_BITMAP`.
- 2 `RT_VERSION` و1 `RT_MANIFEST`.

هذه الموارد مفيدة كدليل على واجهة المحرر وخياراته، لكنها ليست مصدرًا آمنًا لنقل منطق runtime إلى C Android.

## قرار الدمج

لم يتم نسخ ملفات تنفيذية أو DLL أو pseudo-C أو موارد Delphi إلى المستودع. تم اعتماد النتائج كاختبارات توافق وخطة تنفيذ:

1. تثبيت `room_persistent` في parser/runtime بعد تحديد layout GMK من fixtures موثقة.
2. استبدال fixed `16x16` solid collision resolver بمسار mask-aware مع fallback إلى AABB.
3. إضافة regression tests لترتيب Begin Step → Alarm → Input/Step → Motion/Collision → End Step → Draw.
4. إبقاء التحقق من APK Android منفصلًا؛ التحليل الحالي لا يثبت نجاح build Android ولا parity كامل مع GameMaker.

## مراجع الأدلة المحلية

نتائج Craft Anything الكاملة محفوظة خارج المستودع لتجنب إدخال بيانات تحليلية ضخمة:

- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/triage.json`
- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/core_overview_show.json`
- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/native_functions_list.json`
- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/native_pe_resources_list.json`
- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/strings_room.json`
- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/strings_collision.json`
- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/strings_instance.json`
- `/home/ubuntu/reference-gm82-mediafire-20261104/craft-analysis/strings_step.json`

**الخلاصة:** التحليل أثبت أن NOR Maker يغطي جزءًا كبيرًا من دورة GM8.2 الأساسية، لكنه لا يبرر ادعاء التطابق الكامل. الفجوات الأوضح القابلة للتنفيذ الآن هي room persistence وmask-aware solid movement collision؛ وسيتم تطويرهما من خلال fixtures واختبارات النواة، لا عبر نسخ كود ثنائي غير موثوق.
