# نقل من MahmoudMMorsy/NM.Maker.0..1.0 → Nr.mk.02

## ما قُرئ فعليًا
- `gm82_android_core.c` (~7062 سطر): GML VM + DS + actions + JNI
- `gml_vm.c` / `gml_frontend.c` / `test_full_suite.c`
- `source/*.zip` (GM82Project)
- STATUS هناك يدّعي تغطية عالية — **لا ننسخ النسب**

## ما نُقل (إكمال)
1. DnD `action_*`: move_to, move_start, set_hspeed/vspeed/gravity/friction/motion, kill_object, create_object, sprite_set, sound, rooms, bounce, move_point
2. `xstart`/`ystart` على instance

## ما لم يُنسخ كاملًا
- monolith android_core بدل نواة 02
- ادعاءات 100%/1080 fnames
- d3d/external كتنفيذ كامل

## host
4/4 MOVED+DRAW_OK
