# Drive frontend source — additive integration

هذا المجلد يضم شجرة React/TypeScript الكاملة المستخرجة من `NM.Maker.0.1.0.zip` كطبقة مصدر إضافية.

## قاعدة الدمج

- لم يتم استبدال `app/src/main/assets/www/index.html`.
- لم يتم استبدال النواة الموجودة في `app/src/main/cpp`.
- لم يتم استبدال `MainActivity.java` أو إعدادات CMake الحالية.
- تم استبعاد APKات وملفات ZIP والفيديوهات والصور المولدة من نسخة Drive.
- عدد الملفات المضافة: 134 ملفًا، بحجم تقريبي 3.4 MB.
- هذا المصدر ليس Android release pipeline؛ لا يُستخدم لبناء إصدار إنتاجي موقّع.

## سبب وضعها في مسار مستقل

المستودع الحالي يحفظ نسخة الويب الجاهزة داخل Android كـ bundle، ولا يحتوي شجرة React الأصلية. لذلك فإن نسخ `App.tsx` إلى `app/src/main/assets/www` لن يجعلها تعمل، بل سيضيف ملفًا غير مستخدم. وضع المصدر في هذا المسار يحافظ على الأكواد والسكريبتات كاملة، ويجعلها قابلة للبناء والتعديل دون المساس بالنسخة العاملة.

## ما تم ربطه بالنسخة الحالية

تمت مطابقة المكونات والـ utilities مع bundle الحالي. الميزات التي ظهرت في المصدر السحابي موجودة بالفعل في bundle الحالي، ومنها:

- `utils/j2mePackager.ts`
- `utils/esp32Exporter.ts`
- `utils/gbcCompiler.ts` و`utils/gbcRuntime.ts`
- `utils/nesImporter.ts` و`utils/nesCompiler.ts`
- `utils/htmlToNorConverter.ts`
- `utils/projectAnalyzer.ts` و`utils/projectRepair.ts`
- `components/AnimStateMachineEditor.tsx`
- `components/ProjectAnalyzerPanel.tsx`

لذلك لا يوجد استبدال مطلوب لهذه الأجزاء؛ المصدر الكامل أصبح محفوظًا ويمكن استخدامه لإعادة بناء bundle لاحقًا.

## قيد أمني مهم

كانت نسخة Drive تحتوي مفتاح RSA خاصًا مضمّنًا في `utils/apkSigner.ts`. أُزيل المفتاح من شجرة العمل، وأصبح signer يرفض العمل ما لم يتلقَّ مفتاحًا وشهادة من خارج المصدر. وبما أن المفتاح ظهر في تاريخ Git البعيد، يجب اعتباره مكشوفًا وتدويره/إبطاله، ولا يجوز إعادة استخدامه أو استخدام signer هذا بدل مسار JKS وGitHub Secrets الموجود في `.github/workflows/release.yml`.

كما أن بعض أجزاء المعاينة تستخدم `eval`/`new Function` لتشغيل GML داخل sandbox. لذلك تبقى هذه الشجرة مصدرًا مرجعيًا منفصلًا، ولا تُربط بـ WebView الإنتاجي قبل تصميم sandbox آمن واختبارات مراجعة مستقلة.

## التحقق

بعد الإضافة تم تشغيل suite المحرك الحالية، ونجحت عينات الألعاب الأربعة، واختبارات Mario replay وGML وcollision وnative frame وhost pipeline. أي فشل في بناء TypeScript المستقل يجب التعامل معه على مستوى هذا المصدر فقط، وليس بإبدال bundle Android العامل.
