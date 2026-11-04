# MASTER_AGENT_PLAN

**آخر تحديث:** 2026-11-04 (batch4 stub close)

## P0 + host gaps — مكتمل على main

## batch4 (2026-11-04)
- أُغلقت القائمة الطويلة من GM82CORE_STUBS.
- من ~80 stub → **10 فقط** (draw_*_extra نادرة + ds_list_filter/foreach/map).
- أُضيفت تطبيقات host-safe حقيقية لـ:
  - ds_bag_* كامل (create/destroy/clear/size/empty/add/remove/grab/quick)
  - bigchoose / bigchoose_weighted / get
  - event_alarm / beginstep / step / endstep / draw / trigger
  - mouse_back/forward/check_direct
  - registry_* (no-op آمن)
  - execute_program_* / file dialogs / font_add_* (return safe empty/-1)
  - date_get_moon_phase / date_is_easter / datetime_current_filename
  - dss_* aliases + ds_list_str/union/equal/contains_ext
- dispatch في gm82_gml_eval.c محدّث قبل try_stub.
- try_stub يبقى في النهاية (لا shadowing).

## جهاز فقط
`docs/DEVICE_BLOCKED.md`

**is_100 (host pipeline): true**
**remaining host stubs: 10 (rare draw + functional list ops)**
