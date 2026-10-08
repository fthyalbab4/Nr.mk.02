# CRITICAL: MainActivity was briefly corrupted to PLACEHOLDER

Recovered content is in `tools/ma_chunks/`.

```bash
cat tools/ma_chunks/chunk{0,1,2,3,4}.txt > app/src/main/java/com/normaker/nativefull/MainActivity.java
```

Or pull the commit that restores the full file if present.

The file must start with `package com.normaker.nativefull;` and contain `tick()` and `onPageFinished`.
