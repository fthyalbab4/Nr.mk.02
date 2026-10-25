

## Mouse وAlarm للـmanual objects

تم إغلاق فجوتي Mouse وAlarm دون اختراع semantics جديدة:

- Mouse يستخدم `gm82_input_set_mouse`, `gm82_input_mouse_down`, و`gm82_input_mouse_up` الموجودة أصلًا. تمت إضافة JNI bridge صغير، واستدعاؤه من touch path الحالي مع الحفاظ على virtual-key controls. أحداث `mouse_left/middle/right` وpressed/released وglobal held المسجلة من Studio تُنفذ عبر event registry الحالي.
- Alarm يستخدم مصفوفة `alarms[12]` المتوافقة مع `gm82_instance` الأصلي. تهيئة alarm تتم عند إنشاء manual instance، وكتابة `alarm[n] = value` تمر عبر executor الحالي، ثم العد والتنفيذ يستخدمان event type 2 الموجود.

التحقق: Python `8/8`، C/reference `13/13`، host pipeline `4/4`، likely stubs `0`.
