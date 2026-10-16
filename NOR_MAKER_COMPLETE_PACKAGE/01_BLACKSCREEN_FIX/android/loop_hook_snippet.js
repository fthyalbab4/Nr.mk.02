// Insert at the START of function loop(timestamp) { ... }
// Does not replace the JS engine unless native bridge is present and running.
(function norNativeLoopHook(timestamp) {
  if (typeof window.NorNativeLoop === 'undefined') return false;
  if (!window.NorNativeLoop.hasNative || !window.NorNativeLoop.hasNative()) return false;
  if (window.NorNativeLoop.onFrame(timestamp)) {
    return true;
  }
  return false;
});
// Example inside loop:
//   if (norNativeLoopHook(timestamp)) {
//     if (!manualTick) gameLoopId = requestAnimationFrame(loop);
//     return;
//   }
