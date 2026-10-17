# Physics host results

## Land (no jump, 120 steps)
```
plataformas  y 304→320  vspeed=0  LANDED
mario_bros   y 112→170  vspeed=0  LANDED
```

## Jump (settle → space → fall)
```
plataformas  ground=320 peak=285 land=192 jumped=1
  (landed on mid platform at y≈192, floor at 352)
mario_bros   ground=170 peak=135 jumped=1
```

Player sets hspeed/vspeed; runtime does x+=speed and solid AABB.
