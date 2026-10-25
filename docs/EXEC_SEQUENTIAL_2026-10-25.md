# Sequential execution — continued

## Done this round
1. APPLY string/math on local tree (set_last×11, string_repeat, modwrap…)
2. APPLY DnD extras
3. Instance fields: image_angle, image_alpha, image_blend + runtime init
4. action_sprite_transform uses angle; action_sprite_color uses blend/alpha
5. UNMAPPED_ACTION / UNMAPPED_GML_FN logs
6. Host pipeline **ok=4 fail=0** after changes

## Scripts on main
- APPLY_STRING_AND_MATH.py
- APPLY_DND_EXTRAS.py
- APPLY_INSTANCE_IMAGE_FIELDS.py
- APPLY_ACTION_IMAGE_AND_LOG.py
- Workflow `apply-string-math` runs all four

## Next (need device or game FAIL)
- Implement symbols printed as UNMAPPED_*
- soft_render alpha/angle
- APK on hardware
