# Android GMK Room Load Contract — 2026-11-16

أضيفت إلى نتيجة `nativeImportGmkSnapshot` مؤشرات صريحة للغرفة الأولى: العرض، الارتفاع، وعدد الـinstances. هذه المؤشرات تظهر في Logcat عبر السطر الموجود في `importNativeGmk`، لذلك أصبح بالإمكان التمييز بين نجاح قراءة رأس GMK وبين تحميل غرفة قابلة للتشغيل.

الحقول الجديدة هي `firstRoomWidth` و`firstRoomHeight` و`firstRoomInstances`. لا تغيّر هذه الخطوة منطق decoder أو runtime؛ هي عقد تشخيصي فقط، وتستخدم بيانات الغرفة التي تم فكها فعلياً قبل بدء runtime.

التحقق المحلي نجح: تطابق المرايا، `ENGINE_TESTS_PASS=54/54`، Host pipeline بأربع عينات `4/4`، وبناء APK لكل ABI بنجاح. قيمة `firstRoomInstances` النهائية لكل لعبة Android يجب تأكيدها على جهاز فعلي عبر Logcat، لأن بيئة البناء الحالية لا تحتوي جهاز Android متصلاً.
