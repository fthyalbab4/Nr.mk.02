# تحسين AABB في التصادم — 2026-11-13

كانت مرحلة التصادم تعيد حساب أبعاد sprite وorigin وAABB للطرف الثاني داخل كل مرشح تصادم. تم نقل الحساب إلى cache محلي يُبنى مرة واحدة لكل instance في الإطار، مع الحفاظ على نفس AABB وprecise-mask fallback وترتيب أحداث التصادم.

النتائج المقارنة على Host، benchmark من 60 إطارًا:

| instances | قبل: motion/collision | بعد: motion/collision | التحسن التقريبي |
|---:|---:|---:|---:|
| 100 | 0.632 ms | 0.663 ms | ضمن ضوضاء القياس |
| 500 | 10.157 ms | 8.753 ms | 13.8% |
| 1000 | 29.763 ms | 24.928 ms | 16.3% |

عدد مرشحي التصادم بقي ثابتًا (`1,336,129` عند 1000 instance)، كما بقيت نتائج الألعاب والاختبارات دون تغيير.

التحقق:

```text
RUNTIME_PERF_BENCHMARK_PASS
ENGINE_TESTS_PASS=54/54
SUMMARY expected=4 ok=4 fail=0
RESULT OK
verify_core_mirrors.py: PASS
```
