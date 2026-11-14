# تقرير فحص المستودع — 2026-11-15

## الخلاصة

تم فحص `main` والمستودع البعيد `fthyalbab4/Nr.mk.02` محليًا وباستخدام GitHub CLI. النتيجة ليست «صفر PRs وصفر ثغرات»؛ توجد طلبات سحب قديمة مفتوحة ومخاطر متابعة موثقة، بينما النواة الحالية نفسها تمر باختبارات المضيف والـpipeline.

## Pull Requests

يوجد **36 PR مفتوحة** على GitHub. فحص التعارضات المحلي الآمن صنّف **35 PR** كـ`CONFLICT_REQUIRES_REVIEW`، وPR #375 كـ`FETCH_FAILED`. أغلب التعارضات في `gm82_gml_bytecode.c` و`gm82_gml_eval.c` و`gm82_runtime.c` وملفات الاختبارات والمرايا الثلاث، ولذلك لا يمكن حلها آليًا باختيار `ours` أو `theirs`.

لم يتم دمج أي PR قديم عشوائيًا. التغييرات الفريدة الآمنة فقط تُستخرج يدويًا بعد اختبارها؛ وقد تم سابقًا استخراج اختبار `switch/default` من PR #411. التقرير الخام الكامل محفوظ في `integration_log/pr_conflict_audit_2026-11-15.tsv`.

## النواة والبناء

الحالة الحالية سليمة محليًا:

```text
verify_core_mirrors.py: PASS
ENGINE_TESTS_PASS=54/54
Host pipeline: 4/4
```

كما أن آخر تشغيلات Windows وAndroid الناجحة موجودة على GitHub. لا يثبت ذلك تشغيل Android على جهاز فعلي، ولا يثبت تطابقًا كاملًا مع GameMaker Portable.

## إصلاح أمني تم تنفيذه

كشف `npm audit --omit=dev` ثغرات متوسطة في `node-forge <=1.4.2`. تم تحديث الاعتماد إلى `^1.4.3` وتحديث `package-lock.json`. بعد ذلك:

```text
npm audit: found 0 vulnerabilities
Python security/reference contracts: 13/13 OK
```

## نقاط أمنية أو تشغيلية ما زالت مفتوحة

أولًا، Dependabot alerts غير مفعّلة للمستودع، وواجهة CodeQL alerts أعادت `Resource not accessible by integration`. لذلك لا يمكن إعلان أن GitHub Security يعطي تغطية كاملة؛ نتيجة npm المحلية هي الدليل المتاح حاليًا.

ثانيًا، عدة GitHub Actions تستخدم tags بدل SHA ثابت، مثل `actions/checkout@v4` و`actions/setup-java@v4` و`android-actions/setup-android@v3` و`actions/upload-artifact@v4` و`stefanzweifel/git-auto-commit-action@v5`. هذا خطر supply-chain منخفض إلى متوسط ويحتاج pinning مستقلًا.

ثالثًا، workflow `auto-materialize` يفشل عند محاولة الدفع المباشر إلى `main` المحمي لأن فحص `verify-and-build` مطلوب. هذا ليس فشلًا صامتًا في الاختبارات؛ سببه سياسة الفرع. يلزم تحويله إلى إنشاء PR تلقائي أو جعله workflow قراءة/تحقق فقط. لا ينبغي تعطيل حماية الفرع.

رابعًا، ملفات HTML تحتوي `eval` و`new Function` لأن Runner ينفذ GML/JavaScript المستورد. اختبارات العزل الحالية تمر وتمنع private signing key والجسور العامة، لكن تشغيل مشروع GMK غير موثوق يجب اعتباره سطحًا حساسًا، خصوصًا مع أي تغيير في sandbox أو iframe bridge.

## فجوات parity الصادقة

ما زال فحص Android على جهاز فعلي غير منفذ، وPortable corpus parity جزئي، وprecise pixel masks ليست كاملة، وبعض GML edge cases ما زالت مفتوحة. هذه ليست أخطاء تم إخفاؤها بواسطة نجاح host tests.

## القرار

المستودع ليس خاليًا من PRs المفتوحة أو المخاطر المتبقية. ما تم إغلاقه هو blocker الاعتماد `node-forge`، مع توثيق PR conflicts، وعدم تجاوز حماية `main`. الأولويات التالية هي: pinning لنسخ Actions، إصلاح `auto-materialize` ليعمل عبر PR بدل push مباشر، ثم إغلاق أو أرشفة PRs القديمة بعد مراجعة أصحابها، وإجراء اختبار Android فعلي.
