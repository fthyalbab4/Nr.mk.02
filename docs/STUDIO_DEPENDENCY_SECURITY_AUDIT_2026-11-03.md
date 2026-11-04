# تدقيق اعتماديات Studio — 2026-11-03

## النتيجة

تم فحص `source/frontend_drive_2026-11-02` باستخدام `npm audit` وتحديث شجرة الاعتماديات. العدد انخفض من:

```text
قبل التحديث: 47 ثغرة
  17 moderate, 27 high, 3 critical
بعد التحديث: 0 ثغرات
```

تم التحقق من النتيجة من تثبيت نظيف عبر `npm ci --ignore-scripts`، وليس من مجلد `node_modules` قديم فقط.

## التحديثات الرئيسية

- `electron`: إلى `^45.2.1`
- `electron-builder`: إلى `^26.18.0`
- `vite`: إلى `^8.3.5`
- `@vitejs/plugin-react`: إلى `^6.2.1`
- `node-forge`: إلى `^1.4.2`
- `jszip`: إلى `^3.10.2`
- `concurrently`: إلى `^9.2.5`
- `@tailwindcss/vite` و`tailwindcss`: إلى `^4.3.4`
- `vite-plugin-singlefile`: إلى `^2.3.4`
- `wait-on`: إلى `^8.0.5`

كما أضيف override صريح:

```json
"overrides": {
  "minimatch": "^11.0.4"
}
```

وذلك لمعالجة سلسلة `minimatch/glob` المتداخلة داخل Electron Builder دون الرجوع إلى إصدار أقدم من أداة البناء.

## التحقق

الأوامر التالية نجحت:

```bash
rm -rf node_modules
npm ci --ignore-scripts
npm audit --audit-level=moderate
npm run typecheck
npm run build
```

النتائج:

```text
found 0 vulnerabilities
tsc: success
vite build: success
```

## ملاحظات

ظهرت تحذيرات `deprecated` لبعض الحزم غير المباشرة القديمة مثل `inflight` و`rimraf@2` و`glob@7.2.3`، لكنها لا تظهر في `npm audit` كثغرات قابلة للإبلاغ حاليًا. تبقى هذه عناصر دين تقني في سلسلة Electron Builder، ولا ينبغي تحديثها يدويًا إلى major جديد إذا أدى ذلك إلى كسر أداة التغليف دون اختبار مستقل.

ظهر أيضًا تحذير Vite عن استخدام `__dirname` في `vite.config.ts`، وتحذير أن `inlineDynamicImports` يتم تجاهله مع إعداد single-file الحالي. هذه تحذيرات توافق/تهيئة وليست ثغرات أمنية، ويمكن معالجتها في جولة منفصلة.

يظل مصدر Studio معزولًا عن Android production bundle. كما أن signer لا يحتوي مفتاحًا خاصًا، ويشترط مفاتيح خارجية من بيئة النشر.
