/** NOR Maker native loop bridge – see NOR package android/ for full version */
(function (global) {
  'use strict';
  function getBridge() { return global.NorNative || global.Gm82Native || null; }
  function hasNativeLoop(b) {
    if (!b) return false;
    return typeof b.tick === 'function' ||
      (typeof b.step === 'function' && typeof b.draw === 'function') ||
      typeof b.nativeRuntimeStep === 'function';
  }
  var state = { attached: false, preferNative: true, canvas: null, ctx: null,
    frames: 0, nativeActive: false, lastError: null };
  function blitRgba(rgba, w, h) {
    if (!state.canvas || !rgba || w < 1 || h < 1) return false;
    if (state.canvas.width !== w) state.canvas.width = w;
    if (state.canvas.height !== h) state.canvas.height = h;
    var ctx = state.ctx || state.canvas.getContext('2d');
    state.ctx = ctx;
    var img = ctx.createImageData(w, h);
    if (rgba.length < w * h * 4) return false;
    img.data.set(rgba.subarray ? rgba.subarray(0, w * h * 4) : rgba);
    ctx.putImageData(img, 0, 0);
    return true;
  }
  function doNativeTick(b) {
    try {
      if (typeof b.tick === 'function') b.tick();
      else if (typeof b.nativeRuntimeStep === 'function') {
        b.nativeRuntimeStep();
        if (typeof b.nativeRuntimeRenderBitmap === 'function') b.nativeRuntimeRenderBitmap();
      } else {
        if (typeof b.step === 'function') b.step();
        if (typeof b.draw === 'function') b.draw();
      }
      var w = 0, h = 0, rgba = null;
      if (typeof b.getFrameRgba === 'function') {
        rgba = b.getFrameRgba();
        w = typeof b.roomWidth === 'function' ? b.roomWidth() : 0;
        h = typeof b.roomHeight === 'function' ? b.roomHeight() : 0;
      }
      if (rgba && w > 0 && h > 0) blitRgba(rgba, w, h);
      state.frames++; state.nativeActive = true; state.lastError = null;
      return true;
    } catch (e) {
      state.lastError = String(e && e.message ? e.message : e);
      state.nativeActive = false; return false;
    }
  }
  global.NorNativeLoop = {
    attach: function (opts) {
      opts = opts || {};
      state.preferNative = opts.preferNative !== false;
      state.canvas = opts.canvas || document.getElementById(opts.canvasId || 'gameCanvas');
      if (state.canvas) state.ctx = state.canvas.getContext('2d');
      state.attached = true;
      return hasNativeLoop(getBridge());
    },
    hasNative: function () { return hasNativeLoop(getBridge()); },
    onFrame: function () {
      if (!state.attached || !state.preferNative) return false;
      var b = getBridge();
      if (!hasNativeLoop(b)) return false;
      if (typeof b.isRunning === 'function' && !b.isRunning()) return false;
      return doNativeTick(b);
    },
    shouldSkipJsSimulation: function () {
      return state.preferNative && state.nativeActive && hasNativeLoop(getBridge());
    },
    getStats: function () {
      return { frames: state.frames, nativeActive: state.nativeActive,
        lastError: state.lastError, hasBridge: !!getBridge() };
    }
  };
})(typeof window !== 'undefined' ? window : globalThis);
