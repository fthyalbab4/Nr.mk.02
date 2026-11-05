# AGENT_STATE

```
host_p0: true
ast_break_continue: fixed
residual_host_stubs: 10 (draw extras + list callbacks — intentional no-ops)
device_items: BLOCKED (U2/U3/U5)
is_100: false
claim_100_percent_allowed: false
anti_hallucination_rule: ENFORCED
```

## Done this session
- Restored AST `loop_depth` for break/continue (PR #322 regression)
- Tri-mirror sync for `gm82_gml_ast_exec.c`
- Honest docs: host closed, device-only remaining

## Not claimed
- No on-device playtest
- No 100% parity
- Residual GL/callback stubs not implemented as real features

`work_strategy: ADD_AND_COMPLETE_NOT_REPLACE`
