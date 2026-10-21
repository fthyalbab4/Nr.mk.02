# PLAY_PATH host (2026-10-13)

After ASSEMBLE + decode rooms/objects + 90 steps + soft draw:

```
mario_bros.gmk   inst=181 frame=90 lit=14225 OK
plataformas.gmk  inst=60  frame=90 lit=776   OK
shooter.gmk      inst=308 frame=90 lit=62951 OK
zelda.gmk        inst=39  frame=90 lit=9232  OK
```

All 4/4 samples: instances > 0 and non-clear pixels after draw.

Android path: MainActivity ImportGmkSnapshot + 30fps step + RenderBitmap → ImageView
+ D-pad touch (left/right thirds, space on upper).
