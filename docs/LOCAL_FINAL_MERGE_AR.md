

## Mouse وAlarm للـmanual objects

تم توصيل mouse input من touch path الحالي إلى `gm82_input` عبر `nativeRuntimeMouse`، مع الحفاظ على تحويل اللمس إلى virtual keys. وتم توصيل أحداث mouse held/pressed/released الموجودة في Studio. كما أضيفت `alarms[12]` للـmanual instance بنفس نموذج runtime الأصلي، ودعم `alarm[n] = value` في executor الحالي، مع decrement وتنفيذ event type 2 عند الوصول للصفر.

التحقق: Python `8/8`، C/reference `13/13`، host pipeline `4/4`، likely stubs `0`.
