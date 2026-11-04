# MASTER_AGENT_PLAN

**آخر تحديث:** 2026-11-04

## P0 + host gaps — مكتمل على main

## إصلاح نواة حرج (try_stub)
Bug: `gm82_gm82core_try_stub` كان يُستدعى **قبل** handlers حقيقية مثل `move_towards_gravity` فيرجع 0.

```bash
# أو Actions → apply-core-try-stub-fix
python3 tools/apply_core_try_stub_fix.py
git add -A && git commit -m "core try_stub fix" && git push
```

يضيف أيضاً: `move_and_collide`, `string_wrap`, `distance_to_path`

## جهاز فقط
`docs/DEVICE_BLOCKED.md`

**is_100 (host pipeline): true**
