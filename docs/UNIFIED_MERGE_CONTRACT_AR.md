# عقد الدمج الموحد — NOR Maker / Nr.mk.02

**الحالة:** عقد مرحلي مبني على المصدر الحالي، وليس ضمان توافق مع GameMaker for Windows.
**المصدر الأساسي:** `Nr.mk.02`؛ تبقى النواة C modular هي مصدر الحقيقة. لا تُنسخ نواة monolithic أو ملفات APK/EXE/DLL إلى runtime.

## 1. حدود العقد الحالية

### GMK وProject IR

- فحص الترويسة يتم عبر `gm82_gmk_probe(data, size)` في `app/src/main/cpp/include/gm82_gmk_format.h`، والنتيجة تصف نوع الصيغة/الإصدار وحالة probe؛ نجاح probe لا يعني فك المشروع كاملًا.
- `gm82_project_ir` في `include/gm82_project_ir.h` يحمل `GM82_IR_VERSION == 5` ومعلومات الترويسة ومؤشرات المصدر الاختيارية وموارد sprites/backgrounds/rooms وبعض العدادات. لا يحتوي IR الحالي على تمثيل كامل لكل object/event/action/script/sound ولا writer كامل.
- فك objects/rooms وscan للأفعال يتم عبر واجهات منفصلة (`gm82_decode_objects_from_gmk` و`gm82_actions_scan_gmk`). وصف action scanner في header هو best-effort؛ لذلك لا يجوز اعتبار كل bytes أو arguments محفوظة دلاليًا.
- لا توجد في العقد الحالية نتيجة import موحدة من نوع `{ok,status,warnings,errors,partial}`. اعتماد هذا الشكل مطلوب قبل إعلان نجاح استيراد عام.

### Runtime والموارد

- `gm82_runtime` في `include/gm82_runtime.h` يملك حالة التشغيل/instances والوقت/الغرفة، لكنه يحتفظ بمؤشرات `const` إلى قوائم objects/sprites/backgrounds/rooms/actions/scripts.
- **قاعدة الملكية:** قوائم الموارد التي تُمرر إلى `gm82_runtime_bind_assets`, `gm82_runtime_bind_sprite_groups`, و`gm82_runtime_bind_scripts` يجب أن تبقى صالحة طوال استخدام runtime؛ الربط لا يعني نقل ملكيتها.
- ترتيب التنفيذ العام هو تحميل/فك الموارد، ربط القوائم، إعداد الغرفة، ثم `gm82_runtime_step` و`gm82_runtime_draw`. يجب أن تثبت اختبارات regression هذا التسلسل لكل تغيير في loader/runtime.

### Actions وEvents

- `gm82_action_ref` يحدد مساحة `args[8]` كحد أقصى و`argc`، مع `str_args[4][64]`. هذه سعة تمثيل محلية وليست إثباتًا أن كل توقيعات GameMaker 8.2 جرى فكها.
- `gm82_action_execute_ref` و`gm82_action_execute_named` يدعمان subset. أي action غير معروف يجب أن يبقى موثقًا كـunmapped/unsupported، لا أن يُعامل كنجاح صامت.

### GML

- `gml_vm` (`include/gml_vm.h`) هو مسار AST ذي قيم typed: undefined/real/string/array/bool، مع callbacks مستقلة للـnative calls وحل الأسماء والـmembers والـwith/scripts.
- `gm82_native_call(userdata,name,args,count,out)` هو dispatcher للـbuilt-ins التي يربطها المصدر الحالي. القيمة المرجعة من callback تحدد فقط هل تم التعامل مع الاسم؛ لا تثبت تطابق الدالة مع Windows.
- يوجد أيضًا evaluator أقدم (`gm82_gml_eval_*` في `include/gm82_gml_eval.h`) يعيد `double` ويستخدم buffer مشتركًا لآخر string. لا تخلط نتائجه مع typed `gml_value` ولا تعتبره بديلًا عن كل دلالات GML.
- fixtures في `tests/reference/` تُنفذ على typed VM وتنتج snapshots محدودة قابلة للمراجعة. لا تغطي هذه snapshots كامل اللغة أو كل built-ins/scopes/events.

### WebView/Android Bridge

- `MainActivity` هو الـLAUNCHER الوحيد؛ يحمّل Studio من `assets/www/index.html` ويضيف `StudioNativeBridge` باسم `window.NorNative`.
- الجسر يعرض فقط العمليات الموصولة إلى JNI: room/resources/instances المتاحة وتصدير NOR JSON. اختيار GMK يرسل الملف إلى محرر Studio، ويحاول تحميل النسخة الثنائية نفسها في native runtime؛ مشغل JNI داخل Activity متاح فقط عند `complete:true`.
- معاينة اللعبة التي يبنيها Studio تعمل بمحرك JavaScript. زر GMK الأصلي يعرض المحرك C على لقطة الاستيراد الأصلية؛ لا يوجد ادعاء بأن تعديلات IDE تُحوّل كاملة إلى C أو أن المحركين متزامنان دلاليًا.
- Gradle يستدعي CMake من `app/src/main/cpp/CMakeLists.txt` بدل الاعتماد على `.so` الموجودة في `jniLibs`. ترجمة Java مقابل API 34 نجحت، لكن `assembleDebug` لم ينتج APK: CMake/AAPT2 المرفقان مع SDK x86_64 ولا يعملان على sandbox aarch64. الاختبار الفعلي على جهاز Android ما زال مطلوبًا.

## 2. قواعد الدمج

1. الحفاظ على runtime modular في `Nr.mk.02` وعدم استبداله بمصدر `gm82_android_core.c` المسطح.
2. إبقاء Studio وfixtures وcatalog في طبقات/أدوات مستقلة عن runtime، وبعد مراجعة الترخيص والـpackage scripts فقط.
3. لكل نقل سلوكي: fixture صغيرة، expected snapshot موثق، اختبار regression، وتحديد الفجوة عند اختلاف النتيجة. لا يُقبل fallback آمن بوصفه parity.
4. لا تُحذف بيانات GMK غير المعروفة؛ يجب إما حفظها raw مع الإشارة إلى `partial`، أو رفض العملية برسالة واضحة.
5. لا يُعلن نجاح semantic round-trip إلا بعد مقارنة import → export → re-import على corpus حقيقي وإثبات semantic diff صفر للموارد المدعومة، مع قائمة صريحة لما لا يدعمه.

## 3. تعريف إثبات «100% مطابقة»

لا يكفي نجاح test suite داخل مشروع واحد ولا مقارنة أسماء دوال. يلزم على الأقل: (أ) corpus معروف المصدر من مشاريع GMK حقيقية، (ب) تشغيل كل مشروع على النسخة المحمولة الأصلية من GameMaker وعلى build Android من runtime نفسه، (ج) مقارنة موارد project/event/action ونتائج خطوات/لقطات/آثار قابلة للتكرار، (د) لا فروق غير مفسرة في كل نطاق معلن، (هـ) APK فعلي على الأجهزة/ABI المدعومة مع logs ونتائج import→edit→run→export، و(و) معالجة التراخيص وسلامة توزيع الملفات التنفيذية. أي نطاق لم يُختبر يُذكر كفجوة، لا كنسبة نجاح.

## 4. الحالة المرحلية

- **Host regression:** يوجد runner محدود في `tools/run_reference_fixtures.py` وثماني fixtures snapshots؛ اجتيازها يعني فقط نجاح هذه الحالات.
- **Catalog:** يوجد محول metadata لا يضمّن بيانات `fnames` الخارجية في المستودع تلقائيًا. مصدر NM الذي فُحص لا يحتوي ملف ترخيص واضحًا في موضعه؛ لا يتم نقل Studio أو dataset حتى حسم حق الاستخدام.
- **Round-trip كامل:** غير مثبت بهذا التغيير.
- **Android/device:** جرت محاولة `assembleDebug` لكنها توقفت على أدوات host x86_64 في sandbox aarch64؛ لا يوجد APK أو اختبار على جهاز Android فعلي.

## 5. أوامر التحقق

```bash
python3 tools/run_reference_fixtures.py
python3 tools/run_engine_suite.py
bash tools/run_host_pipeline.sh
```

يجب حفظ مخرجات الأوامر وتحديث حالة التنفيذ فقط بنتائجها الفعلية.
