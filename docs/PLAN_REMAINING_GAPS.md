# خطة سد الفجوات المتبقية — Nr.mk.02

**قاعدة:** لا نسب مئوية مزيفة. الإغلاق = PASS صريح أو FAIL log يختفي.
**المستودع:** https://github.com/fthyalbab4/Nr.mk.02  · فرع `main`

---

## 0) ما اتقفل بالفعل (لا تعيد شغله من الصفر)

| بند | دليل على main |
|-----|----------------|
| DnD `args[8]` + `str_args` + execute_ref/named | `app/src/main/cpp/src/gm82_actions.c` |
| String VM symbols + API | `gm82_gml_string_vm.c` + `gm82_gml_eval.h` |
| حقن keyboard_string (سكربت) | `tools/gap_fill_20261013/APPLY_STRING_VM_CALLS.py` |
| Decode payload + Actions | `DECODE_EVAL.py` + `.github/workflows/materialize-eval.yml` |
| حلقة أحداث / depth / ROOM_BOUNDS (جزئي) | `gm82_events.c` / `gm82_runtime.c` |

---

## 1) المرحلة أ — تثبيت المسار الحي (يوم 0–1)

**الهدف:** كل الرموز اللي اتقفلت تبقى متجمّعة وقابلة للاختبار بدون تضارب.

| # | مهمة | ملفات | معيار النجاح |
|---|------|--------|---------------|
| A1 | تشغيل materialize-eval (Actions) أو `DECODE_EVAL.py` | `gml_eval_full.zlib.b64.*` | `gm82_gml_eval.c` فيه `set_last_string` إن وُجد payload |
| A2 | `python3 tools/gap_fill_20261013/APPLY_STRING_VM_CALLS.py` | eval | `keyboard_string` ينادي `gm82_gml_set_last_string` |
| A3 | `bash tools/gap_fill_20261013/ASSEMBLE.sh` | patches | يطبع `ASSEMBLE_OK` بدون كسر الملفات |
| A4 | بناء APK debug من `main` | Android app | APK يثبت ويفتح بدون crash فوري |
| A5 | تشغيل host pipeline إن وُجد | `tools/run_host_pipeline.sh` | تسجيل ok/fail حقيقي في `docs/` |

**مخرجات:** `docs/BUILD_<date>.md` + APK + لوج تجميع.

---

## 2) المرحلة ب — مسار تحميل اللعبة (GMK / GM82 / سحابة) (يوم 1–3)

**الهدف:** اللعبة تدخل الغرفة الأولى وتعيش أول N فريمات بدون توقف صامت.

| # | مهمة | ملفات محتملة | معيار النجاح |
|---|------|----------------|---------------|
| B1 | جرد صيغ الاستيراد (`.gmk` / `.gm81` / `.gm82` / zip سحابة) | `gm82_gmk_*`, Java Import | كل صيغة لها مسار decode أو رسالة خطأ واضحة |
| B2 | فك objects/rooms/sprites/sounds/scripts | `gm82_object_room_decode.c` | عدّ instances > 0 بعد load في لوج |
| B3 | ربط scripts المستخرجة بالـ VM | `gm82_jni.c`, `gml_eval` | script call ما يرجعش «missing» صامت |
| B4 | DnD fire من جدول الإجراء عند Create/Step | `gm82_actions.c` + events | action معروف ينفّذ side-effect مرصود |
| B5 | حفظ/تحميل مسار السحابة (مسارات ملفات) | bridge + builtins `game_load/save` | ملف save يتكتب ويتقرأ على جهاز |

**مخرجات:** `docs/LOAD_PATH_<date>.md` + لوج «room loaded, N instances».

---

## 3) المرحلة ج — حلقة التنفيذ والحركة (يوم 2–4)

**الهدف:** سلوك frame يطابق ترتيب GM8.2.

| # | مهمة | معيار النجاح |
|---|------|---------------|
| C1 | ترتيب صارم: Begin Step → Step → End Step → Pre-Draw → Draw → Post-Draw | اختبار وحدة `test_event_order` يمر |
| C2 | إنشاء/حذف instance أثناء Step بدون فساد iterator | لا crash عند `instance_destroy` وسط الحلقة |
| C3 | depth sort قبل Draw | ترتيب رسم ثابت لعينات depth |
| C4 | alarms / timelines | alarm يعدّ وينفّذ event |
| C5 | collision basics المستخدمة في ألعاب السحابة | collision مع object معروف يفعّل event |

**ملفات:** `gm82_runtime.c`, `gm82_events.c`, `gm82_instance*`.

---

## 4) المرحلة د — GML / builtins الناقصة (يوم 3–7، FAIL-driven)

**قاعدة:** لا تضيف builtin إلا بعد ظهور اسمه في FAIL log من لعبة حقيقية.

| # | مهمة | معيار النجاح |
|---|------|---------------|
| D1 | تجميع قائمة `missing_builtin` / `unimplemented` من الجهاز | ملف `docs/FAIL_BUILTINS_<date>.md` |
| D2 | تنفيذ الدفعة الأعلى تكرارًا (غالبًا: surfaces, draw_*, string_*, ds_*, file_*, instance_*, room_*) | كل بند في الدفعة يختفي من اللوج |
| D3 | `with()` scope صحيح | اختبار: `with(obj) { x+=1 }` يلمس كل instances |
| D4 | surfaces: create/free/set_target/reset/copy | رسم على surface يظهر في draw |
| D5 | string producers في eval تربط `set_last_string` | `keyboard_string` و`string(...)` يملأوا last_string |

**ملفات:** `gm82_gml_builtins.c`, `gm82_gml_eval.c`, bridge.

---

## 5) المرحلة هـ — ألعاب السحابة كمعيار قبول (يوم 5–10+)

**الهدف:** قائمة ألعاب محددة تشتغل — مش «كل GMK في العالم».

| # | مهمة | معيار النجاح |
|---|------|---------------|
| E1 | تثبيت قائمة 3–10 ألعاب سحابة مستهدفة (أسماء + مصادر) | `docs/CLOUD_GAME_LIST.md` |
| E2 | لكل لعبة: سيناريو قبول (يفتح / يتحرك / صوت / غرفة تانية) | checklist |
| E3 | تشغيل + حفظ log كامل | `docs/CLOUD_RUN_<game>_<date>.md` |
| E4 | سد FAIL الخاص باللعبة فقط | اللعبة تعدّي checklist |
| E5 | إعادة تشغيل كل القائمة بعد كل دفعة إصلاحات | لا regression |

**إغلاق صادق:** «N/N من قائمة السحابة المستهدفة تعدّي checklist» — وليس 100% لكل الألعاب.

---

## 6) المرحلة و — REA / GM82Core (اختياري، مش شرط يومي)

| # | مهمة | شرط |
|---|------|------|
| F1 | توفير `GM82Core.dll` / `GM82Dx9.dll` + تصريح تحليل | من المستخدم |
| F2 | تشغيل REA/Ghidra محليًا (أو MCP إن اتوفر) | بيئة فيها Ghidra |
| F3 | استخراج سلوك (instance pool، event order، surfaces) كخوارزميات clean-room | ملاحظات في `docs/REA_NOTES.md` |
| F4 | نقل السلوك لناقص في runtime فقط | PR موضوعي بدون نسخ باينري |

بدون DLL: **تخطَّ و** واشتغل FAIL-driven من ألعاب حقيقية.

---

## 7) مرحلة ز — جودة وانحدار

| # | مهمة | معيار |
|---|------|--------|
| G1 | تثبيت host suite + تسجيل النتائج | `docs/FINAL_SUITE_<date>.md` |
| G2 | منع رجوع PLACEHOLDER في actions/eval | grep في CI |
| G3 | تحديث `GAPS_HONEST.md` بعد كل مرحلة | بنود مغلقة فقط إن مرّت معاييرها |
| G4 | عدم دمج تقارير نسب وهمية | مراجعة PR |

---

## 8) ترتيب التنفيذ المقترح (متتابع)

```
A1→A2→A3→A4
    ↓
B1→B2→B3→B4→B5
    ↓
C1→C2→C3→C4→C5
    ↓
E1 (قائمة ألعاب) → E3 (أول log)
    ↓
D1→D2… (حسب FAIL)
    ↓
E4→E5 تكرار
    ↓
F* إن توفرت DLLs
    ↓
G*
```

**بالتوازي الآمن:** D مع E بعد أول log؛ G1 مع كل مرحلة؛ F معزول.

---

## 9) اعتماد على المستخدم (لا يمكن تخطيه)

1. بناء/تثبيت APK على جهاز Android حقيقي.  
2. قائمة ألعاب السحابة المستهدفة.  
3. لوجات FAIL بعد التشغيل.  
4. (اختياري) DLLs لتحليل REA.

بدون 1–3: لا يمكن إعلان توافق سحابة صادق.

---

## 10) تعريف «انتهى»

المشروع يُعتبر مكتمل **بالنسبة لهدف السحابة** عندما:

1. `GAPS_HONEST.md` لا يحتوي إلا بنود تحتاج جهاز/عتاد خارج الجلسة، و  
2. كل لعبة في `CLOUD_GAME_LIST.md` لها `CLOUD_RUN_*` بحالة **PASS** على checklist، و  
3. لا يوجد ادّعاء «100% كل GMK» في المستودع.

---

## 11) ممنوع

- نسب إنجاز عامة بدون FAIL/PASS.  
- استبدال نواة كاملة بدل إكمال.  
- إغلاق surface/with/REA من غير اختبار.  
- تقارير مبالغ فيها من وكلاء آخرين بدون مطابقة الكود.
