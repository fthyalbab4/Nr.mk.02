# AGENT_STATE — مقاييس صادقة فقط

```
realistic_host_path_percent: 55-65
android_playable_percent: unmeasured (no device APK proof in this environment)
is_100: false
claim_100_percent_allowed: false
anti_hallucination_rule: ENFORCED
```

## ما يُسمح بادّعائه

- Host pipeline **4/4 PIPELINE_OK** (أوامر gcc + عينات GMK).
- Host SO smoke **OK** لـ mario و zelda.
- Room filter يدعم `r001`.

## ما لا يُسمح بادّعائه

- `fixture_test_status: PASS (16/16)` بدون ملفات اختبار ولوج في المستودع.
- `master_plan_4phases_status: PASS` — المراحل **غير** مكتملة على Android.
- `samples_script_pass_rate: 89/89` — غير مُثبت هنا.
- `android_build_status: PASS` — NDK build **لم يُشغَّل** في بيئة العمل الحالية.
- أي طبقة ≥70% من غير اختبار مرفق.

## تفصيل طبقي (تقديري صادق)

| طبقة | % تقديري | أساس التقدير |
|------|----------|--------------|
| Resource decode | 55–70 | 4 عينات host |
| Objects/rooms/instances | 50–65 | decode + spawn |
| Runtime loop/events | 40–55 | step/draw host؛ behaviors اسمية |
| GML | 15–30 | builtins + eval بسيط |
| Input/view | 35–50 | أساسي |
| Audio | 5–15 | شبه معدوم عملياً |
| GLES on device | 0–20 | غير مُثبت |
| Precise collision | 10–25 | AABB |
| gm82core | 5–15 | skeleton |

**weighted host-only: ~55–65**  
**weighted Windows-parity on Android: غير مُقاس — لا تكتب رقماً مزوّراً**

`work_strategy: ADD_AND_COMPLETE_NOT_REPLACE`  
`fail_closed_guard: ENFORCED`
