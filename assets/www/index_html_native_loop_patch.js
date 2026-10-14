(function () {
  'use strict';
  function tryAttach() {
    var canvas = document.getElementById('gameCanvas');
    if (!canvas || !window.NorNativeLoop) return false;
    window.NorNativeLoop.attach({ canvas: canvas, preferNative: true });
    return true;
  }
  function wrapRAF() {
    if (window.__norNativeLoopWrapped) return;
    window.__norNativeLoopWrapped = true;
    var origRAF = window.requestAnimationFrame.bind(window);
    window.requestAnimationFrame = function (cb) {
      if (typeof cb !== 'function') return origRAF(cb);
      return origRAF(function (ts) {
        try {
          if (window.NorNativeLoop && window.NorNativeLoop.hasNative && window.NorNativeLoop.hasNative()) {
            if (window.NorNativeLoop.onFrame(ts)) {
              if (window.NorNativeLoop.shouldSkipJsSimulation && window.NorNativeLoop.shouldSkipJsSimulation()) {
                return;
              }
            }
          }
        } catch (e) {}
        return cb(ts);
      });
    };
  }
  function boot() { tryAttach(); wrapRAF(); }
  if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', boot);
  else boot();
  var tries = 0;
  var iv = setInterval(function () {
    if (tryAttach() || ++tries > 40) clearInterval(iv);
  }, 250);
})();
