# قياس أداء runtime — baseline 2026-11-13

أضيفت واجهة قياس اختيارية إلى `gm82_runtime` عبر `gm82_runtime_perf_enable` و`gm82_runtime_perf_reset` و`gm82_runtime_perf_snapshot`. عند تعطيلها لا تُستدعى ساعة النظام داخل مراحل الإطار.

يقيس runtime عدد الإطارات، وعدد إطارات الرسم، وزمن كل مرحلة، وعدد مرشحي التصادم، وعدد تداخلات AABB. أضيف benchmark ثابت يشغّل 60 إطارًا عند 100 و500 و1000 instance ويطبع نتائج قابلة للمقارنة.

النتيجة الأولية في بيئة Host:

```text
PERF_CASE instances=100  elapsed_ms=1.048  motion_collision_ms=0.533  draw_ms=0.016  candidates=21906    overlaps=0
PERF_CASE instances=500  elapsed_ms=11.144 motion_collision_ms=9.615  draw_ms=0.047  candidates=344807   overlaps=0
PERF_CASE instances=1000 elapsed_ms=30.863 motion_collision_ms=27.820 draw_ms=0.088  candidates=1336129  overlaps=0
RUNTIME_PERF_BENCHMARK_PASS
```

هذه أرقام Host وليست وعدًا بمعدل FPS على Android. وهي تشير إلى أن مرحلة الحركة/التصادم هي الأولوية التالية، بينما الرسم ليس عنق الزجاجة في هذا السيناريو.
