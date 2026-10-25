# NOR Maker — تطبيق Android موحّد للاستوديو ومحرك GMK

هذا المستودع هو مشروع التطبيق الأساسي. نقطة تشغيل Android واحدة تفتح واجهة Studio المضمّنة في `app/src/main/assets/www/index.html` داخل WebView، وتستخدم جسرًا إلى محرك C/ JNI في النشاط نفسه. لا توجد نسخ كاملة من المستودعين المرجعيين داخل شجرة التسليم.

## ما يعمل في المسار الموحّد

- محرر Studio وJavaScript runner يعملان داخل تطبيق Android نفسه.
- اختيار ملف GMK من واجهة Studio يمرر الملف إلى محرر الويب؛ والصيغ الثنائية التي يقبلها native importer تُحمّل أيضًا إلى محرك C.
- زر **تشغيل GMK الأصلي** يعرض محرك JNI المحمّل، مع إدخال لوحة المفاتيح واللمس؛ والعودة تعيد المستخدم إلى Studio.
- تسجيل بيانات الغرفة والموارد/instances المتاحة عبر الجسر، وحفظ تصدير NOR JSON في مجلد Downloads على Android الحديث.
- Three.js r128 مضمّن محليًا مع ملف الترخيص، ولا يعتمد مشغّل اللعبة على تحميل سكربت CDN.
- typed GML parser لديه fixtures مضبوطة لاختبارات الجمل المنقولة (مثل `if/else`, `while`, `for`, `break/continue`).

## حدود معلنة

وجود واجهة واحدة لا يثبت تطابقًا سلوكيًا 100% مع Windows GameMaker 8.2. معاينة Studio المبنية على JavaScript والمحرك native مساران مختلفان؛ مشغل JNI الحالي لا ينفذ كل مخططات Studio ومواردها. استيراد مجلدات GM82 النصية وround-trip كامل لـGMK/GMX/GMZ، والاختبار على جهاز Android، ما زالت بحاجة إلى إكمال. ثُبّت SDK 34 وNDK 25.2 وحاولنا `assembleDebug`، لكن حزمة Android التي نزلها SDK تستخدم CMake/AAPT2 لـx86_64 بينما بيئة البناء arm64؛ لذلك لم يُنتج APK. ترجمة Java منفصلة باستخدام `android.jar` API 34 نجحت، ولا يوجد جهاز Android للاختبار.

التقرير التفصيلي والاختبارات والفجوات في [`docs/IMPLEMENTATION_STATUS_AR.md`](docs/IMPLEMENTATION_STATUS_AR.md) و[`STATUS.md`](STATUS.md) و[`GAPS_HONEST.md`](GAPS_HONEST.md). راجع [`REPORTING_RULES.md`](REPORTING_RULES.md) قبل نشر أرقام parity.

## اختبارات المضيف

```bash
python3 tools/run_reference_fixtures.py
python3 -m unittest discover -s tests/reference -p 'test_*.py' -v
python3 tools/run_engine_suite.py
```

## بناء Android

يتطلب Android SDK platform 34 وbuild-tools 34.0.0 وNDK `25.2.9519653` وCMake `3.22.1`؛ Gradle Wrapper يثبت Gradle `8.2.1` تلقائيًا:

```bash
./gradlew :app:assembleDebug
```

لم يُرفع أي تغيير إلى GitHub.
