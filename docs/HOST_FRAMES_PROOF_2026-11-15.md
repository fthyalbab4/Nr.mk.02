# Host frame proof 2026-11-15

Pipeline **4/4**. Soft-render produces non-black frames with real sprites:

- mario_bros: Mini Mario + enemies on dark sky
- plataformas: red ball level geometry + player
- shooter / zelda: DUMP_PPM frames written

```bash
bash tools/run_host_pipeline.sh   # SUMMARY ok=4
DUMP_PPM=/tmp/x.ppm ./build_host/pipeline_min app/src/main/assets/www/samples/mario_bros.gmk 40
```

Jump pulses (space/up) exercised on host. No 100% claim.
