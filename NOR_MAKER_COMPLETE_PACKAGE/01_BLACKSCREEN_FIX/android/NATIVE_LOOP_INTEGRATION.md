# ربط الـ Native Loop (صادق)

## الهدف
جعل `gm82_native_step` + `gm82_native_draw` (أو `tick`) هما مسار المحاكاة عند توفر الـ bridge، مع عرض RGBA على Canvas. بدون GLES كامل بعد.

## ما تم تنفيذه في الكود

### C (`gm82_jni.c` / `gm82_jni.h`)
- `gm82_native_draw` لم يعد STUB فارغ: يرسم عبر `gm82_runtime_draw` إلى buffer داخلي.
- `gm82_native_frame_rgba` / `gm82_native_frame_ready` لقراءة الإطار.
- `gm82_native_tick` = step + draw.

### Java (`Gm82Native.java`)
- واجهة: `init`, `loadGame`, `step`, `draw`, `tick`, `getFrameRgba`, `isRunning`, input.

### JS (`nor_native_loop_bridge.js`)
- `NorNativeLoop.attach({ canvas })`
- داخل `requestAnimationFrame`: `if (NorNativeLoop.onFrame(ts)) { /* native handled */ }`
- إن لم يوجد bridge → لا يغيّر سلوك حلقة JS الحالية.

## خطوات الدمج في APK / WebView

1. بناء `libgm82_android.so` مع `gm82_jni.c` + runtime + decode.
2. في MainActivity / WebView: `addJavascriptInterface` يعرّض `NorNative.tick`, `getFrameRgba`, …
3. تضمين `nor_native_loop_bridge.js` في assets.
4. في بداية `function loop(timestamp)`:
```js
if (window.NorNativeLoop && NorNativeLoop.onFrame(timestamp)) {
  if (!manualTick) gameLoopId = requestAnimationFrame(loop);
  return;
}
```

## ما لم يكتمل بعد
- NDK build للـ SO الجديد
- GLES حقيقي
- Events/GML داخل runtime_step ما زالت محدودة
