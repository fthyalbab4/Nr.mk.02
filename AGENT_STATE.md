# AGENT_STATE — مقاييس صادقة ودقيقة فقط

```
overall_windows_parity_percent: < 20% (نسبة التوافق الكلية الفعالية مع محرك ويندوز الأصلي أقل من 20%)
realistic_host_path_percent: ~20-30%
android_playable_percent: unmeasured / BLOCKED (لا يوجد هاتف متصل)
is_100: false
claim_100_percent_allowed: false
anti_hallucination_rule: ENFORCED
```

## تفصيل طبقي (تقدير صادق ودقيق)

| الطبقة | % التوافق الفعلي مع GM82 / Windows | أساس التقدير الواقعي |
|------|-----------------------------------|---------------------|
| Resource decode | 30–40% | دعم 4 عينات فقط، لا يشمل كل الصيغ والملحقات |
| Objects/rooms/instances | 25–35% | فك وإسكان أساسي، يفتقر لأحداث الجيم ميكر الكاملة |
| Runtime loop/events | 20–30% | دؤرة أحداث اسمية مبسّطة، ليست ترتيب أحداث GM82 الأصلي |
| GML / Scripts | < 15% | إيفال بسيط جداً ودوال معدودة، مش VM/Bytecode كامل |
| Audio | < 10% | طابور ذاكرة فقط بدون مشغّل جهاز حقيقي |
| Precise collision | < 15% | AABB وبلاط علوي بسيط، مش Pixel-precise masks |
| GLES on device | 0–10% | غير مثبت على جهاز مادي |
| gm82core / Extensions | < 10% | مكتبة اسمية هيكلية فقط |

**إجمالي التوافق الفعلي الشامل مع ويندوز / GM82: أقل من 20% (< 20%)**

`work_strategy: ADD_AND_COMPLETE_NOT_REPLACE`  
`fail_closed_guard: ENFORCED`
