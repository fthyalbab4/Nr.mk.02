/* Nor Maker Studio PC bridge.
 *
 * Injected by the Windows shell into the bundled editor UI (index.html). It gives
 * the page the same `window.NorNative` object the Android build provides through
 * addJavascriptInterface, but every call is answered by the C engine over the
 * loopback RPC endpoint. It also adds an in-editor preview overlay so the native
 * GM82 engine frame is visible inside the editor instead of in a separate window.
 */
(function () {
  'use strict';
  if (window.NorNative && window.NorNative.__pcStudio) { return; }

  var RPC = '/rpc';
  var stats = { calls: 0, lastError: null, frames: 0, lastFrameAt: 0 };

  function xhr(body) {
    var x = new XMLHttpRequest();
    x.open('POST', RPC, false);
    x.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');
    x.send(body);
    if (x.status !== 200) { throw new Error('rpc http ' + x.status); }
    return JSON.parse(x.responseText);
  }

  function enc(v) { return encodeURIComponent(String(v)); }

  function rpc(method, args) {
    var body = 'method=' + enc(method);
    args = args || [];
    for (var i = 0; i < args.length; i++) { body += '&arg=' + enc(args[i]); }
    stats.calls++;
    var r = xhr(body);
    if (!r.ok) { stats.lastError = r.error; throw new Error(r.error || 'rpc failed'); }
    stats.lastError = null;
    return r.result;
  }

  /* ------------------------- native preview overlay ------------------------ */

  var preview = { el: null, canvas: null, img: null, meta: null, running: false, raf: 0,
    recorder: null, recordChunks: [], recordStream: null };

  function ensurePreview() {
    if (preview.el) { return preview; }
    var box = document.createElement('div');
    box.id = 'nor-pc-preview';
    box.dir = 'rtl';
    box.style.cssText = 'position:fixed;right:16px;bottom:16px;z-index:2147483000;background:#12122a;' +
      'border:1px solid #6c7cff;border-radius:10px;box-shadow:0 8px 28px rgba(0,0,0,.55);' +
      'padding:6px;font:12px system-ui,sans-serif;color:#e8ecff';
    var bar = document.createElement('div');
    bar.style.cssText = 'display:flex;align-items:center;gap:6px;margin-bottom:4px';
    var label = document.createElement('span');
    label.textContent = 'معاينة المحرك الأصلي (GM82 C)';
    label.style.cssText = 'flex:1;font-weight:600';
    var record = document.createElement('button');
    record.id = 'nor-pc-record';
    record.textContent = '● تسجيل';
    record.title = 'تسجيل شاشة اللعب فقط';
    record.style.cssText = 'cursor:pointer;background:#7f1d1d;color:#fff;border:1px solid #ef4444;' +
      'border-radius:6px;padding:2px 8px;white-space:nowrap';
    var toggle = document.createElement('button');
    toggle.id = 'nor-pc-toggle';
    toggle.textContent = 'إيقاف';
    toggle.style.cssText = 'cursor:pointer;background:#2a2a55;color:#e8ecff;border:1px solid #6c7cff;' +
      'border-radius:6px;padding:2px 8px';
    var close = document.createElement('button');
    close.textContent = '×';
    close.style.cssText = 'cursor:pointer;background:#55222a;color:#ffd9d9;border:1px solid #ff6c7c;' +
      'border-radius:6px;padding:2px 8px';
    var info = document.createElement('div');
    info.id = 'nor-pc-info';
    info.style.cssText = 'margin-top:4px;opacity:.75;font-size:11px';
    var cv = document.createElement('canvas');
    cv.id = 'nor-pc-canvas';
    cv.style.cssText = 'display:block;background:#000;image-rendering:pixelated;max-width:384px';
    bar.appendChild(label);
    bar.appendChild(record);
    bar.appendChild(toggle);
    bar.appendChild(close);
    box.appendChild(bar);
    box.appendChild(cv);
    box.appendChild(info);
    document.body.appendChild(box);
    preview.el = box;
    preview.canvas = cv;
    preview.img = new Image();
    toggle.onclick = function () {
      preview.running = !preview.running;
      toggle.textContent = preview.running ? 'إيقاف' : 'تشغيل';
      start();
    };
    record.onclick = function () { toggleEngineRecording(record); };
    close.onclick = function () { hidePreview(); };
    return preview;
  }

  function toggleEngineRecording(button) {
    if (preview.recorder && preview.recorder.state === 'recording') {
      preview.recorder.stop();
      button.textContent = '● تسجيل';
      button.style.background = '#7f1d1d';
      return;
    }
    if (!preview.canvas || !preview.canvas.captureStream || !window.MediaRecorder) {
      stats.lastError = 'تسجيل Canvas غير مدعوم في هذا المتصفح';
      return;
    }
    try {
      var mime = '';
      var choices = ['video/webm;codecs=vp9', 'video/webm;codecs=vp8', 'video/webm'];
      for (var i = 0; i < choices.length; i++) {
        if (MediaRecorder.isTypeSupported(choices[i])) { mime = choices[i]; break; }
      }
      if (!mime) throw new Error('لا يوجد ترميز فيديو WebM متاح');
      preview.recordChunks = [];
      preview.recordStream = preview.canvas.captureStream(30);
      preview.recorder = new MediaRecorder(preview.recordStream, { mimeType: mime });
      preview.recorder.ondataavailable = function (e) {
        if (e.data && e.data.size) preview.recordChunks.push(e.data);
      };
      preview.recorder.onstop = function () {
        var blob = new Blob(preview.recordChunks, { type: mime });
        preview.recordChunks = [];
        if (preview.recordStream) preview.recordStream.getTracks().forEach(function (t) { t.stop(); });
        preview.recordStream = null;
        var url = URL.createObjectURL(blob);
        var a = document.createElement('a');
        a.href = url;
        a.download = 'NorMaker_Engine_' + new Date().toISOString().replace(/[:.]/g, '-') + '.webm';
        document.body.appendChild(a);
        a.click();
        a.remove();
        setTimeout(function () { URL.revokeObjectURL(url); }, 30000);
      };
      preview.recorder.start(250);
      button.textContent = '■ إيقاف';
      button.style.background = '#991b1b';
    } catch (e) {
      stats.lastError = String(e && e.message ? e.message : e);
      if (preview.recordStream) preview.recordStream.getTracks().forEach(function (t) { t.stop(); });
      preview.recordStream = null;
    }
  }

  function fitPreview() {
    if (!preview.meta || !preview.canvas) { return; }
    var m = preview.meta;
    var maxW = 384;
    var scale = Math.min(1, maxW / m.width);
    preview.canvas.width = m.width;
    preview.canvas.height = m.height;
    preview.canvas.style.width = Math.round(m.width * scale) + 'px';
    preview.canvas.style.height = Math.round(m.height * scale) + 'px';
  }

  function paintFrame() {
    if (preview.busy) { return; }          /* never cancel an in-flight frame */
    preview.busy = true;
    preview.img.onload = function () {
      try {
        var ctx = preview.canvas.getContext('2d');
        ctx.imageSmoothingEnabled = false;
        ctx.drawImage(preview.img, 0, 0);
        stats.lastFrameAt = Date.now();
      } catch (e) { stats.lastError = String(e); }
      preview.busy = false;
    };
    preview.img.onerror = function () { preview.busy = false; };
    preview.img.src = '/engine/frame.bmp?maxw=' + (preview.meta ? preview.meta.width : 384) +
      '&t=' + Date.now();
  }

  function start() {
    if (preview.raf) { cancelAnimationFrame(preview.raf); preview.raf = 0; }
    if (!preview.running) { return; }
    var loop = function () {
      if (!preview.running) { return; }
      try {
        rpc('engine.step', [1]);
        stats.frames++;
        if (!preview.lastPaint || Date.now() - preview.lastPaint > 50) {
          preview.lastPaint = Date.now();
          paintFrame();
        }
      } catch (e) { stats.lastError = String(e); }
      var info = document.getElementById('nor-pc-info');
      if (info) {
        info.textContent = 'إطار: ' + stats.frames + ' · ' + (stats.lastError ? stats.lastError : 'يعمل');
      }
      preview.raf = requestAnimationFrame(loop);
    };
    preview.raf = requestAnimationFrame(loop);
  }

  function showPreview() {
    ensurePreview();
    preview.el.style.display = 'block';
    try {
      preview.meta = rpc('engine.frameMeta', []);
    } catch (e) {
      stats.lastError = String(e);
    }
    fitPreview();
    preview.running = true;
    var t = document.getElementById('nor-pc-toggle');
    if (t) { t.textContent = 'إيقاف'; }
    start();
    return !!preview.meta;
  }

  function hidePreview() {
    if (preview.el) { preview.el.style.display = 'none'; }
    preview.running = false;
    start();
  }

  /* --------------------------------- bridge -------------------------------- */

  var bridge = {
    __pcStudio: true,
    /* native loop contract used by nor_native_loop_bridge.js */
    tick: function () {
      rpc('engine.step', [1]);
      stats.frames++;
      if (preview.running) { paintFrame(); }
      return true;
    },
    step: function () { return bridge.tick(); },
    isRunning: function () {
      try { return !!rpc('engine.running', []); } catch (e) { return false; }
    },
    /* engine control */
    engineInit: function (w, h) { return rpc('engine.init', [w, h]); },
    loadGmk: function (path) { var r = rpc('engine.load', [path]); showPreview(); return r; },
    loadGmkBase64: function (b64) { var r = rpc('engine.loadBase64', [b64]); showPreview(); return r; },
    reload: function () { return rpc('engine.reload', []); },
    shutdown: function () { hidePreview(); return rpc('engine.shutdown', []); },
    roomInfo: function () { return rpc('engine.room', []); },
    keyDown: function (vk) { return rpc('engine.keyDown', [vk]); },
    keyUp: function (vk) { return rpc('engine.keyUp', [vk]); },
    touch: function (x, y, action) { return rpc('engine.touch', [x, y, action]); },
    frameMeta: function () { return rpc('engine.frameMeta', []); },
    engineInfo: function () { return rpc('engine.info', []); },
    instances: function () { return rpc('engine.instances', []); },
    showPreview: showPreview,
    hidePreview: hidePreview,
    /* project inspection */
    validateGmk: function (b64) { return rpc('gmk.probe', [b64]); },
    gmkHeaderJson: function (b64) { return JSON.stringify(rpc('gmk.probe', [b64])); },
    coreIdentity: function () { return rpc('coreIdentity', []); },
    version: function () { return rpc('version', []); },
    stats: function () { return JSON.parse(JSON.stringify(stats)); },
    /* cloud catalog downloads, mirroring the Android bridge name */
    downloadCloudGmkBase64: function (url) { return rpc('http.getBase64', [url]); },
    httpGetBase64: function (url) { return rpc('http.getBase64', [url]); }
  };

  window.NorNative = bridge;
  window.NorNativePC = bridge;
  window.__norStudioInfo = { shell: 'Nor Maker Studio (Windows PC)', rpc: RPC };

  /* forward editor keyboard to the native engine while the preview is running */
  window.addEventListener('keydown', function (ev) {
    if (!preview.running || ev.repeat) { return; }
    try { rpc('engine.keyDown', [ev.keyCode]); } catch (e) {}
  });
  window.addEventListener('keyup', function (ev) {
    if (!preview.running) { return; }
    try { rpc('engine.keyUp', [ev.keyCode]); } catch (e) {}
  });
})();
