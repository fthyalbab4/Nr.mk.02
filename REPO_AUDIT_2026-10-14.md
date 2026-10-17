# تدقيق المستودعات — 2026-10-14 (بدون نسب مزيفة)

## المستودعات المفحوصة

| المستودع | الدور | ملاحظة صادقة |
|----------|--------|---------------|
| **fthyalbab4/Nr.mk.02** | النسخة الحالية | أوسع gml_eval، gap_fill، host 4/4 |
| **fthyalbab4/Nr.mk.01** | سلف | autobind كامل — في 02 كان **stub** → استُعيد |
| **fthyalbab279-afk/NM.Maker.0..1.0.2** | فرع موازي | نفس العائلة؛ MainActivity أطول؛ تقارير قديمة بنسب |
| **MahmoudMMorsy/NM.Maker.0..1.0** | أرشيف + zips | GM82Project zips + APK؛ ليس أحدث من 02 |
| **GM82Project/** | إضافات ويندوز DLL/GEX | مرجع أسماء دوال — ليس محرك أندرويد |
| **morluto/rea** | أدوات RE للوكلاء | Ghidra/Hopper/MCP — أدلة وليس فك تلقائي كامل |

## ما أُضيف لـ Nr.mk.02
1. استعادة `gm82_events_autobind_gml_from_gmk` من Nr.mk.01
2. ربط الكود المُكتشف كـ **STEP** (keyboard)
3. JNI ImportGmk يستدعي autobind

## ما لم يُنقل
- نسب من تقارير قديمة
- DLLs ويندوز
- تشغيل REA/Ghidra هنا (يحتاج Ghidra + تصريح)

## host
4/4 MOVED+DRAW_OK بعد الدمج
