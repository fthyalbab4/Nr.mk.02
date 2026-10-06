package com.normaker.gm82;

import android.webkit.JavascriptInterface;

/**
 * Exposes native tick/step/frame to WebView as window.NorNative.
 * Register: webView.addJavascriptInterface(new NorNativeWebBridge(), "NorNative");
 */
public class NorNativeWebBridge {
    @JavascriptInterface
    public void tick() { Gm82Native.tick(); }

    @JavascriptInterface
    public void step() { Gm82Native.step(); }

    @JavascriptInterface
    public void draw() { Gm82Native.draw(); }

    @JavascriptInterface
    public boolean isRunning() { return Gm82Native.isRunning(); }

    @JavascriptInterface
    public boolean isFrameReady() { return Gm82Native.isFrameReady(); }

    @JavascriptInterface
    public int roomWidth() { return Gm82Native.roomWidth(); }

    @JavascriptInterface
    public int roomHeight() { return Gm82Native.roomHeight(); }

    @JavascriptInterface
    public String getFrameRgbaBase64() {
        byte[] rgba = Gm82Native.getFrameRgba();
        if (rgba == null) return "";
        return android.util.Base64.encodeToString(rgba, android.util.Base64.NO_WRAP);
    }

    @JavascriptInterface
    public boolean loadGame(String path) { return Gm82Native.loadGame(path); }

    @JavascriptInterface
    public boolean init(int w, int h) { return Gm82Native.init(w, h); }

    @JavascriptInterface
    public void keyDown(int vk) { Gm82Native.keyDown(vk); }

    @JavascriptInterface
    public void keyUp(int vk) { Gm82Native.keyUp(vk); }
}
