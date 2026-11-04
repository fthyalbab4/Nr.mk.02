# تدقيق نسخ NOR Maker من Google Drive — 2026-11-02

## النطاق

تم تنزيل وفحص مجلد Google Drive التالي:

`https://drive.google.com/drive/folders/1VC9ajt4ALu-MZaFQWl6kI9bMGjnDd9cM`

الأرشيفات التي تم تنزيلها:

| الملف | الحجم التقريبي | SHA-256 |
|---|---:|---|
| `NM.Maker.0.1.0.zip` | 166 MB | `3ffe95fc693a784af8c5d37194f6006660cf132b3fc4f07f5fbcb4b4066f44ff` |
| `Nor-maker-8.2.zip` | 58 MB | `8dce20c0f06bd9166b6c0bbdf8c5da4d5bb12bbab31059c0007edb6cf64e4ca1` |
| `Nor-maker-7.zip` | 12 MB | `19d285228d34530e64e9f06d32f94e95e2ed04557b007dc7819af985a5c26d90` |

## النتيجة الفنية

لم يتم نسخ أي ملف عشوائيًا إلى المستودع الحالي، لأن الأرشيفات الثلاثة ليست طبقات متوافقة يمكن دمجها فوق بعضها:

1. `Nor-maker-7.zip` نسخة React/Vite أقدم ومبسطة. استبدال `App.tsx` أو `components/` منها سيؤدي إلى فقدان تعديلات NOR الحالية.
2. `NM.Maker.0.1.0.zip` تحتوي مصدرًا native monolithic أقدم داخل `NorMaker-0_extracted/android_project_base`. النواة الحالية في `app/src/main/cpp` modular وأكبر، وتضم ملفات actions/events/runtime/audio/paths/timelines واختبارات إضافية. استبدالها بالنسخة القديمة سيكون Regression وليس ترقية.
3. `Nor-maker-8.2.zip` تحتوي مصدر Android وAPKات وتقارير. مقارنة `MainActivity.java` و`CMakeLists.txt` أثبتت أن المستودع الحالي أحدث: `MainActivity.java` الحالي 897 سطرًا مقابل 574 في النسخة السحابية، وCMake الحالي يربط النواة modular متعددة الملفات بينما النسخة السحابية تستخدم قائمة مصادر أبسط.

## ميزات تم التحقق من وجودها بالفعل في النسخة الحالية

تم البحث في `app/src/main/assets/www/index.html` عن الميزات التي تبدو مضافة في نسخ Drive، ووجدت بالفعل في bundle الحالي:

- تصدير J2ME/JAR.
- تصدير ESP32 RGB565.
- تجميع Game Boy/GBC.
- استيراد NES ROM.
- استيراد مجلد HTML.
- تحليل وإصلاح المشروع.
- منطق Animation State/Notifies المضمن في محرر الويب.
- سحابة ألعاب GMK.
- دعم gamepad وعمليات collision و`with()` في مسار المحرك الحالي.

بالتالي لا توجد ميزة مفقودة مؤكدة يمكن نسخها من هذه الأرشيفات دون إعادة بناء مصدر React الأصلي وإعادة توليد bundle كامل.

## التحقق بعد التدقيق

تم تشغيل `python3 tools/run_engine_suite.py` على المستودع الحالي بعد المقارنة:

- عينات الألعاب: `ok=4 fail=0`.
- الاختبارات native: جميع الاختبارات الظاهرة في suite نجحت، بما فيها Mario replay وGML VM وcollision وnative frame API وfriend reference tests.
- `run_host_pipeline.sh`: PASS.
- النتيجة المطبوعة: `RESULT OK`.

## قرار الدمج

**لم يتم عمل merge أو push لملفات Drive**؛ لأن الدمج الحرفي سيستبدل أجزاء أحدث بأجزاء أقدم، وهذا يخالف شرط عدم كسر النسخة الحالية. تم الاحتفاظ بالأرشيفات خارج المستودع في `/home/ubuntu/drive_nor_sources/` للتحليل أو لاختيار ميزة محددة لاحقًا.

الخطوة الصحيحة التالية ليست نسخ الأرشيف كاملًا، بل اختيار ميزة محددة من نسخة Drive، ثم نقلها source-to-source مع اختبار regression وبناء Android قبل رفعها. أمثلة قابلة للتقييم منفردة: محرر Animation State Machine، حزمة gameplay demo، أو أي exporter محدد.
