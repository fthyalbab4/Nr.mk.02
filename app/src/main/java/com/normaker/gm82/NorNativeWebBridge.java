package com.normaker.gm82;

import android.webkit.JavascriptInterface;

/**
 * Exposes native step/draw to WebView as window.NorNative.
 * Register: webView.addJavascriptInterface(new NorNativeWebBridge(), "NorNative");
 *
 * Maps to actual Gm82Native JNI names (nativeStep, nativeDraw, ...).
 * Completion of wiring only — does not replace the SO or C core.
 */
public class NorNativeWebBridge {

    @JavascriptInterface
    public void tick() {
        Gm82Native.nativeStep();
    }

    @JavascriptInterface
    public void step() {
        Gm82Native.nativeStep();
    }

    @JavascriptInterface
    public void draw() {
        Gm82Native.nativeDraw();
    }

    @JavascriptInterface
    public boolean isRunning() {
        return Gm82Native.nativeIsRunning();
    }

    @JavascriptInterface
    public int roomWidth() {
        return Gm82Native.nativeRoomWidth();
    }

    @JavascriptInterface
    public int roomHeight() {
        return Gm82Native.nativeRoomHeight();
    }

    @JavascriptInterface
    public boolean loadGame(String path) {
        return Gm82Native.nativeLoadGame(path);
    }

    @JavascriptInterface
    public boolean init(int w, int h) {
        return Gm82Native.nativeInit(w, h);
    }

    @JavascriptInterface
    public void keyDown(int vk) {
        Gm82Native.nativeKeyDown(vk);
    }

    @JavascriptInterface
    public void keyUp(int vk) {
        Gm82Native.nativeKeyUp(vk);
    }
}
