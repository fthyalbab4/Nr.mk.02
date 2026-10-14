/**
 * NOR Maker – Native loop bridge (honest, non-hallucinated)
 *
 * When window.NorNative exposes step/tick/getFrameRgba (Android WebView),
 * this module drives the native runtime and blits RGBA to a canvas.
 * When native is missing, it no-ops so the existing JS loop keeps working.
 *
 * Usage (after canvas exists):
 *   NorNativeLoop.attach({ canvas, preferNative: true });
 *   // inside requestAnimationFrame:
 *   NorNativeLoop.onFrame(timestamp);
 */
(function (global) {
  'use strict';

  function getBridge() {
    return global.NorNative || global.Gm82Native || null;
  }

  function hasNativeLoop(b) {
    if (!b) return false;
    return typeof b.tick === 'function' ||
      (typeof b.step === 'function' && typeof b.draw === 'function') ||
      typeof b.nativeRuntimeStep === 'function';
  }

  var state = {
    attached: false,
    preferNative: true,
    canvas: null,
    ctx: null,
    imageData: null,
    lastW: 0,
    lastH: 0,
    frames: 0,
    nativeActive: false,
    lastError: null
  };

  function ensureImageData(w, h) {
    if (!state.ctx) return null;
    if (!state.imageData || state.lastW !== w || state.lastH !== h) {
      state.imageData = state.ctx.createImageData(w, h);
      state.lastW = w;
      state.lastH = h;
    }
    return state.imageData;
  }

  function blitRgba(rgba, w, h) {
    var canvas = state.canvas;
    if (!canvas || !rgba || w < 1 || h < 1) return false;
    if (canvas.width !== w) canvas.width = w;
    if (canvas.height !== h) canvas.height = h;
    var ctx = state.ctx || canvas.getContext('2d');
    state.ctx = ctx;
    var img = ensureImageData(w, h);
    if (!img) return false;
    if (rgba.length < w * h * 4) return false;
    img.data.set(rgba.subarray ? rgba.subarray(0, w * h * 4) : rgba);
    ctx.putImageData(img, 0, 0);
    return true;
  }

  function doNativeTick(b) {
    try {
      if (typeof b.tick === 'function') {
        b.tick();
      } else if (typeof b.nativeRuntimeStep === 'function') {
        b.nativeRuntimeStep();
        if (typeof b.nativeRuntimeRenderBitmap === 'function')
          b.nativeRuntimeRenderBitmap();
      } else {
        if (typeof b.step === 'function') b.step();
        if (typeof b.draw === 'function') b.draw();
      }

      var w = 0, h = 0, rgba = null;
      if (typeof b.getFrameRgba === 'function') {
        rgba = b.getFrameRgba();
        w = typeof b.roomWidth === 'function' ? b.roomWidth() : 0;
        h = typeof b.roomHeight === 'function' ? b.roomHeight() : 0;
      } else if (typeof b.nativeRuntimeRenderBitmap === 'function') {
        var frame = b.nativeRuntimeRenderBitmap();
        if (frame && frame.data && frame.width) {
          rgba = frame.data; w = frame.width; h = frame.height;
        }
      }
      if (rgba && w > 0 && h > 0) blitRgba(rgba, w, h);
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

  var api = {
    attach: function (opts) {
      opts = opts || {};
      state.preferNative = opts.preferNative !== false;
      state.canvas = opts.canvas || document.getElementById(opts.canvasId || 'gameCanvas');
      if (state.canvas) state.ctx = state.canvas.getContext('2d');
      state.attached = true;
      return hasNativeLoop(getBridge());
    },

    hasNative: function () {
      return hasNativeLoop(getBridge());
    },

    onFrame: function (/* timestamp */) {
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
      return {
        frames: state.frames,
        nativeActive: state.nativeActive,
        lastError: state.lastError,
        hasBridge: !!getBridge()
      };
    }
  };

  global.NorNativeLoop = api;
})(typeof window !== 'undefined' ? window : globalThis);
