package com.normaker.gm82;

/**
 * JNI façade for the native GM82 loop.
 * WebView injects a JS object (NorNative) that calls these methods.
 *
 * Loop contract:
 *   1) loadGame(path) once after init
 *   2) each animation frame: tick() OR step()+draw()
 *   3) optional: copy getFrameRgba() into Canvas ImageData
 */
public final class Gm82Native {
    static {
        try {
            System.loadLibrary("gm82_android");
        } catch (UnsatisfiedLinkError e) {
            // Soft-fail in pure Web builds
        }
    }

    private Gm82Native() {}

    public static native boolean init(int width, int height);
    public static native void shutdown();
    public static native boolean loadGame(String absolutePath);
    public static native void resize(int width, int height);

    public static native void step();
    public static native void draw();
    public static native void tick();

    /** RGBA bytes, length = roomW * roomH * 4, or null if not ready */
    public static native byte[] getFrameRgba();
    public static native boolean isFrameReady();
    public static native boolean isRunning();
    public static native int roomWidth();
    public static native int roomHeight();

    public static native void keyDown(int vk);
    public static native void keyUp(int vk);
    public static native void touch(int x, int y, int action);
}
