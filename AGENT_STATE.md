# AGENT_STATE — تقييم مهندسي شامل وخطة التوافق المتقدمة

```
overall_calculated_parity_percent: ~35-45% (تقديري متحرك)
realistic_host_mvp_percent: ~40%
android_device_playable_percent: غير مُقاس (BLOCKED - لا يوجد هاتف مادي متصل دائمًا)
is_100: false
claim_100_percent_allowed: false
anti_hallucination_rule: ENFORCED
```

## اقرأ أولًا قبل أي عمل

1. **`FULL_GM_PARITY_PLAN.md`** ← الخطة الشاملة لأي وكيل
2. **`EVENT_SYSTEM_PLAN.md`** ← ترتيب الأحداث + الفجوات
3. `STATUS.md` + `TODO.md` + `GAPS_HONEST.md`

## تفصيل التوافق الموزون (تقريبي)

| الطبقة | الوزن | النسبة الحالية | ملاحظات |
|------|-------|----------------|--------|
| فك الموارد (Resource Decode) | 15% | ~45% | عينات أساسية |
| محرك GML والنطاقات | 30% | ~37% | `with`/`other` ناقص |
| حلقة الأحداث والفيزياء | 25% | ~45% | ترتيب الأحداث يحتاج توحيد |
| محرك الرسم | 15% | ~30% | |
| المحرك الصوتي | 5% | ~25% | |
| واجهات JNI وأندرويد | 10% | ~25% | |

**الإجمالي الموزون التقريبي: ~38%**

`work_strategy: ADD_AND_COMPLETE_NOT_REPLACE`  
`fail_closed_guard: ENFORCED`

---

أي وكيل يكمل: حدّث النسب فقط بعد اختبار مقاس، وحدّث `TODO.md` و `FULL_GM_PARITY_PLAN.md`.
