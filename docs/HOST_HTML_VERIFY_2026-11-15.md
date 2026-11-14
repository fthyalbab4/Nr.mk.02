# Host / HTML verification 2026-11-15

## Host
```
bash tools/run_host_pipeline.sh
SUMMARY expected=4 ok=4 fail=0
```
Samples: mario_bros, plataformas, shooter, zelda — all PIPELINE_OK (moved=1, draw lit>0).

```
python3 tools/run_engine_suite.py
ENGINE_TESTS_PASS=54/54
```

Frame dump:
```
DUMP_PPM=/tmp/mario.ppm ./build_host/pipeline_min app/src/main/assets/www/samples/mario_bros.gmk 45
```

## HTML
`nor-player.html` / studio WebView path still depends on native/WASM bridge.
In this environment WebGL/WASM full play was not executed.
Host soft-render is the verified path for parity work without Android.

## No Android in this batch (per request).
