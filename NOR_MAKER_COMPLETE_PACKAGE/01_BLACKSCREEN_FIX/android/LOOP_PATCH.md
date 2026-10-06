# باتش حلقة index.html (Native Loop)

## ملفات تُضاف إلى `assets/www/`

1. `nor_native_loop_bridge.js`
2. `index_html_native_loop_patch.js`

## في `index.html` قبل `</body>`

```html
<script src="nor_native_loop_bridge.js"></script>
<script src="index_html_native_loop_patch.js"></script>
```

## تعديل داخل `function loop(timestamp)` (بداية الدالة)

```js
// بعد try {
if (window.NorNativeLoop && typeof window.NorNativeLoop.hasNative === "function" && window.NorNativeLoop.hasNative()) {
  if (window.NorNativeLoop.onFrame(timestamp)) {
    if (window.NorNativeLoop.shouldSkipJsSimulation && window.NorNativeLoop.shouldSkipJsSimulation()) {
      return;
    }
  }
}
```

`index_html_native_loop_patch.js` يعمل بدون تعديل الـ bundle (يلفّ rAF).

## Events / Create (C)

- `instance_create` → `gm82_events_fire_create_one` (behavior + actions)
- `goto_room` لا يضاعف Create
- behaviors: mario/link/player + blocks + enemies
- `fire_draw_all` من `gm82_runtime_draw`
