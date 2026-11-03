# NOR Maker — تطبيق Android ومحرك GM82 الموحد

هذا المستودع هو مشروع التطبيق الموحد: Studio داخل WebView ومشغّل C/JNI ضمن نقطة دخول Android واحدة. يجري تطويره لدعم مشاريع GameMaker 8.2 المحمولة، مع الحفاظ على الإضافات الموجودة وترحيل الوظائف الناقصة بدل استبدال مشروع كامل بآخر.

> **حدود التكافؤ:** اجتياز اختبارات المضيف وبناء APK لا يثبتان تطابق كل واجهات أو دلالات Windows Portable. لا توجد نسبة تكافؤ عامة أو ادعاء 100% موثق.

## نتائج التحقق — 3 نوفمبر 2026

| المجال | النتيجة |
|---|---|
| اختبارات النواة النشطة | `ENGINE_TESTS_PASS=34/34`، وتشمل renderer/collision وGML parser والـbytecode وhost pipeline. |
| عينات الألعاب الأربع | `SUMMARY ok=4 fail=0`؛ اجتازت التحميل والرسم وsave/load ضمن fixtures المضيف. |
| Python/security contracts | 12 اختبارًا، exit code 0. |
| حزمة C المستقلة | 26 test executables، `make -B test` exit code 0 بعد مزامنة parser/bytecode والـloop-control. |
| تطابق ملفات core mirrors | نُسخت ملفات C/H من المصدر النشط؛ تحقق source/include لكل من `cpp_backup` والحزمة أظهر صفر ملفات مفقودة أو إضافية أو مختلفة. |
| Android Debug APK | `BUILD SUCCESSFUL`؛ أرشيف سليم ويضم ABIs الأربعة؛ SHA-256: `45e3f8f1031fa17afba33ad59a39e96ced2ce037446ad57851ddb9ec69a88dd2`. |
| اختبار جهاز Android فعلي | غير منفذ؛ يلزم اختبار import → edit → run → export. |
| تكافؤ Windows Portable | غير مثبت؛ لا تُستخدم نسبة إجمالية. |

## مكونات المشروع

- `app/src/main/` — تطبيق Android، Studio المضمّن، ومشغّل JNI.
- `app/src/main/cpp/src/` — المصدر النشط لنواة C/GML/renderer.
- `app/src/main/cpp_backup/` و`NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX/` — نسخ source/header مرايا؛ يحمي `tools/verify_core_mirrors.py` تطابق ملفات `.c` و`.h` مع المصدر النشط. ملفات `.o` المولدة مستثناة من المقارنة.
- `app/src/main/assets/www/samples/` — عينات host pipeline.
- `tools/` — مشغلات الاختبار والتحقق من المرايا.
- `.github/workflows/android-build.yml` — CI لاختبارات Python، وتطابق المرايا، ومحرك C، وحزمة C، وبناء APK.

## التشغيل والاختبار محليًا

```bash
python3 -m unittest discover -s tests/reference -p 'test_*.py' -v
python3 tools/verify_core_mirrors.py
python3 tools/run_engine_suite.py
make -B -C NOR_MAKER_COMPLETE_PACKAGE/01_BLACKSCREEN_FIX test
git diff --check
```

## بناء Android

يتطلب Android SDK 34 وNDK `25.2.9519653` وJava 17:

```bash
./gradlew --no-daemon assembleDebug
```

ينشئ البناء APK ضمن `app/build/outputs/apk/debug/app-debug.apk`. هذا Debug build للاختبار، وليس Release موقّعًا للنشر. راجع [`docs/GAPS_HONEST.md`](docs/GAPS_HONEST.md) و[`docs/IMPLEMENTATION_STATUS_AR.md`](docs/IMPLEMENTATION_STATUS_AR.md) و[`docs/UPSTREAM_REVIEW_2026-11-02_AR.md`](docs/UPSTREAM_REVIEW_2026-11-02_AR.md) للفجوات وسجل الأدلة.
