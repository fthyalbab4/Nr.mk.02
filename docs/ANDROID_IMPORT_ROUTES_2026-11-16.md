# Android Import Routes — 2026-11-16

أظهر تدقيق B1 أن واجهة WebView كانت تعلن قبول `.gmk` و`.gm82` و`.gm81` و`.gm7` و`.gm6`، بينما كان مسار Java الذي يختار أول ملف GMK يقبل كل هذه الصيغ ما عدا `.gm82`. هذا كان يمنع تشغيل GM82 عبر زر الاستيراد الأصلي رغم أن WebView وdecoder يدعمانه.

تمت إضافة `.gm82` إلى regex في `MainActivity.java`. بقي مسار GMZ/ZIP منفصلاً عبر `stageGmxGmzArchive`، وبقي مسار GMX folder عبر SAF، كما هو مقصود لأنهما ليسا ملفات GMK مفردة.

التحقق المطلوب لهذه الخطوة هو أن تكون الصيغ التالية ممثلة في المسارات الصحيحة:

| الصيغة | Java Native picker | WebView | مسار المعالجة |
|---|---:|---:|---|
| `.gmk` | نعم | نعم | GMK snapshot / Web import |
| `.gm82` | نعم بعد الإصلاح | نعم | GMK snapshot / Web import |
| `.gm81` | نعم | نعم | GMK snapshot / Web import |
| `.gm7` | نعم | نعم | GMK snapshot / Web import |
| `.gm6` | نعم | نعم | GMK snapshot / Web import |
| `.gmz` / `.zip` | عبر مسار الأرشيف | عبر GMX/GMZ import | staging ثم قراءة الملفات |
| GMX folder | عبر SAF folder picker | عبر directory import | نسخ آمن ثم parse |

لم يتم تغيير decoder أو استبدال أي مسار قائم؛ التغيير يزيل تعارضاً واحداً فقط بين واجهة WebView وJava.
