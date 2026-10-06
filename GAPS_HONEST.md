# GAPS_HONEST.md — تقرير صادق عن حالة محاكاة GM82 / GMK

**تاريخ التحديث:** 2026-10-06 (مساءً)  
**المصدر:** فحص APK + كود Nr.mk.02 + اختبارات pipeline على mario/zelda/shooter/plataformas

---

## نتائج الاختبار الفعلية (2026-10-06)

| العينة | sprites | rooms | objects | materialize | complete | guard |
|--------|---------|-------|---------|-------------|----------|-------|
| mario_bros.gmk | 24 (multi-frame OK) | 2 (181+120 inst) | 15 | OK | **true** | **playable** |
| zelda.gmk | 13 | 1 | 7 | OK | **true** | **playable** |
| shooter.gmk | 12 | 2 | 0* | OK | **true** | **playable** |
| plataformas.gmk | 6 (sprBala 36 frames) | 4 | 0* | OK | **true** | **playable** |

\* object decoder يعتمد على بادئة `obj_` — بعض المشاريع بأسماء مختلفة لا تُلتقط بعد.

**هذا لا يعني تشغيل gameplay كامل** — يعني فقط: load + materialize + guard يفتحان. ما زال ينقص Events/GML كامل/native loop/audio.

---

## الحالة حسب المكوّن

| المكوّن | الحالة |
|--------|--------|
| GMK probe | يعمل |
| Sprite decode + multi-frame rgba | يعمل على العينات الأربع |
| Background decode | يعمل جزئياً |
| Room instances/tiles | يعمل على mario/shooter/plataformas |
| Objects (obj_* names) | يعمل على mario/zelda |
| Runtime Guard | يعمل |
| ir->complete بعد materialize | **true** على العينات الأربع |
| nativeRuntimeStep في الحلقة | غير مربوط |
| GML / Events / Actions كامل | ناقص |
| Audio / precise masks | ناقص |

**النسبة التقديرية: ~40–50%** (ارتفعت بعد materialize+rooms؛ ما زالت بعيدة عن parity كامل).

---

## قواعد ضد الهلوسة

- complete=true على عينات ≠ لعبة قابلة للعب من البداية للنهاية.
- لا يُعلن 100% إلا بعد corpus حقيقي + مقارنة مع Windows GM82.
