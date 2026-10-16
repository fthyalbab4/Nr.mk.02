(function () {
  'use strict';
  function tryAttach() {
    if (!window.NorNativeLoop) return false;
    var canvas = document.getElementById('gameCanvas');
    window.NorNativeLoop.attach({ canvas: canvas, preferNative: true });
    return true;
  }
  function wrapRAF() {
    if (window.__norNativeLoopWrapped) return;
    window.__norNativeLoopWrapped = true;
    var orig = window.requestAnimationFrame.bind(window);
    window.requestAnimationFrame = function (cb) {
      if (typeof cb !== 'function') return orig(cb);
      return orig(function (ts) {
        try {
          if (window.NorNativeLoop && window.NorNativeLoop.hasNative && window.NorNativeLoop.hasNative()) {
            window.NorNativeLoop.onFrame(ts);
          }
        } catch (e) {}
        return cb(ts);
      });
    };
  }
  function boot() { tryAttach(); wrapRAF(); }
  if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', boot);
  else boot();
  var n = 0, iv = setInterval(function () { if (tryAttach() || ++n > 40) clearInterval(iv); }, 250);
})();
