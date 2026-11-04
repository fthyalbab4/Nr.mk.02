# MASTER_AGENT_PLAN

**آخر تحديث:** 2026-11-04

## P0 + host gaps — مكتمل على main

## إصلاح نواة حرج (try_stub)
Bug: `gm82_gm82core_try_stub` كان يُستدعى **قبل** handlers حقيقية مثل `move_towards_gravity` فيرجع 0.
**آخر تحديث:** 2026-11-04 (batch4 host P0 CLOSED)

## P0 + host gaps — مكتمل على main

## batch4 final (2026-11-04) — HOST CLOSED
- `gm82_batch4_extras.c`: real host impls (ds_bag_*, bigchoose_*, event_*, date, dss_*, registry/mouse no-ops)
- linker `--wrap=gm82_gm82core_try_stub` intercepts handled names
- eval dispatch path for multi-arg host functions
- GM82CORE_STUBS residual **10** only:
  - draw_background_tiled_extra, draw_sprite_part_extra, draw_sprite_tiled_extra, draw_sprite_part_centered, draw_spotlight, draw_setb, draw_setf (need GL)
  - ds_list_filter, ds_list_foreach, ds_list_map (need GML callback support)

```bash
# أو Actions → apply-core-try-stub-fix
python3 tools/apply_core_try_stub_fix.py
git add -A && git commit -m "core try_stub fix" && git push
```

يضيف أيضاً: `move_and_collide`, `string_wrap`, `distance_to_path`

## جهاز فقط
`docs/DEVICE_BLOCKED.md`

**is_100 (host pipeline): true**
## P1 — مكتمل ✅

| بند | الحالة |
|-----|--------|
| NES runner UI + bridge | **على main** |
| NES يستدعي `NorNative.keyDown/keyUp` | **على main** |
| `StudioNativeBridge.keyDown/keyUp` | **تم التطبيق والتحقق بنجاح** |
| patch يدوي | `tools/patch_keydown_bridge.diff` |

## التالي
1. تجربة الأزرار على الجهاز مع WebView.
2. توسيع التوافق مع DnD Actions و GML الإضافية عبر logcat الفعلي.

**is_100 (P0 pipeline): true**
**host_p0: true**
**remaining host stubs: 10 (rare / non-blocking for MVP)**
**is_100: false** (device items open)
