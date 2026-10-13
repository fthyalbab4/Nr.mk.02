# Play path host results (2026-10-13)

After event-order patches + room decode:

```
plataformas.gmk  inst=60  frame=60 draw=1 lit_pixels=776   PLAY_PATH_OK
mario_bros.gmk   inst=181 frame=60 draw=1 lit_pixels=14225 PLAY_PATH_OK
```

`lit_pixels` = count of pixels not equal to clear color (20,20,40) after `gm82_runtime_draw`.

Proves: goto_room populates instances, step runs, soft draw writes sprite/bg data.
Does not prove Windows parity or device APK.
