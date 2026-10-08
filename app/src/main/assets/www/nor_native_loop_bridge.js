(function (global) {
  'use strict';
  function getBridge() { return global.NorNative || null; }
  function hasNativeLoop(b) {
    if (!b) return false;
    return typeof b.tick === 'function' || typeof b.step === 'function';
  }
  var state = { attached: false, preferNative: true, canvas: null, frames: 0, nativeActive: false, lastError: null };
  function doTick(b) {
    try {
      if (typeof b.tick === 'function') b.tick();
      else if (typeof b.step === 'function') b.step(1 / 30);
      state.frames++;
      state.nativeActive = true;
      state.lastError = null;
      return true;
    } catch (e) {
      state.lastError = String(e && e.message ? e.message : e);
      state.nativeActive = false;
      return false;
    }
  }
  global.NorNativeLoop = {
    attach: function (opts) {
      opts = opts || {};
      state.preferNative = opts.preferNative !== false;
      state.canvas = opts.canvas || document.getElementById(opts.canvasId || 'gameCanvas');
      state.attached = true;
      return hasNativeLoop(getBridge());
    },
    hasNative: function () { return hasNativeLoop(getBridge()); },
    onFrame: function () {
      if (!state.attached || !state.preferNative) return false;
      var b = getBridge();
      if (!hasNativeLoop(b)) return false;
      if (typeof b.isRunning === 'function' && !b.isRunning()) return false;
      return doTick(b);
    },
    shouldSkipJsSimulation: function () { return false; },
    getStats: function () {
      return { frames: state.frames, nativeActive: state.nativeActive, lastError: state.lastError, hasBridge: !!getBridge() };
    }
  };
})(typeof window !== 'undefined' ? window : globalThis);
