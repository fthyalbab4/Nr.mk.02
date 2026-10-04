package com.normaker.gm82;

import android.content.Context;
import android.opengl.GLSurfaceView;
import android.util.AttributeSet;
import android.view.KeyEvent;
import android.view.MotionEvent;

import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

/**
 * Stage 4: GPU accelerated GLSurfaceView for NOR Maker / GM82 Android.
 * Renders via OpenGL ES 2.0 pipeline tied to libgm82_android.so.
 */
public class Gm82SurfaceView extends GLSurfaceView implements GLSurfaceView.Renderer {

    private boolean initialized = false;

    public Gm82SurfaceView(Context context) {
        super(context);
        init();
    }

    public Gm82SurfaceView(Context context, AttributeSet attrs) {
        super(context, attrs);
        init();
    }

    private void init() {
        setEGLContextClientVersion(2);
        setEGLConfigChooser(8, 8, 8, 8, 16, 0);
        setPreserveEGLContextOnPause(true);
        setRenderer(this);
        setRenderMode(GLSurfaceView.RENDERMODE_CONTINUOUSLY);
        setFocusable(true);
        setFocusableInTouchMode(true);
    }

    @Override
    public void onSurfaceCreated(GL10 gl, EGLConfig config) {
        int w = getWidth() > 0 ? getWidth() : 640;
        int h = getHeight() > 0 ? getHeight() : 480;
        Gm82Native.nativeInit(w, h);
        initialized = true;
    }

    @Override
    public void onSurfaceChanged(GL10 gl, int width, int height) {
        if (!initialized) {
            Gm82Native.nativeInit(width, height);
            initialized = true;
        }
        Gm82Native.nativeResize(width, height);
    }

    private final int[] mAudioParams = new int[4];
    private final float[] mAudioFloats = new float[1];

    @Override
    public void onDrawFrame(GL10 gl) {
        if (Gm82Native.nativeIsRunning()) {
            Gm82Native.nativeStep();
            Gm82Native.nativeDraw();
            pollAudioCommands();
        }
    }

    private void pollAudioCommands() {
        for (int i = 0; i < 16; i++) {
            int kind = Gm82Native.nativePollAudioCommand(mAudioParams, mAudioFloats);
            if (kind <= 0) break;
            int soundId = mAudioParams[1];
            boolean loop = mAudioParams[2] != 0;
            float val = mAudioFloats[0];
            if (kind == 1) {
                Gm82AudioEngine.getInstance().playSound(soundId, val > 0 ? val : 1.0f, 1.0f, loop);
            } else if (kind == 2) {
                Gm82AudioEngine.getInstance().stopSound(soundId);
            }
        }
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        int action = event.getActionMasked();
        int x = (int) event.getX();
        int y = (int) event.getY();
        Gm82Native.nativeTouch(x, y, action);
        return true;
    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        int vk = mapKeyToVk(keyCode);
        if (vk > 0) {
            Gm82Native.nativeKeyDown(vk);
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }

    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event) {
        int vk = mapKeyToVk(keyCode);
        if (vk > 0) {
            Gm82Native.nativeKeyUp(vk);
            return true;
        }
        return super.onKeyUp(keyCode, event);
    }

    private int mapKeyToVk(int keyCode) {
        switch (keyCode) {
            case KeyEvent.KEYCODE_DPAD_LEFT: return Gm82Native.VK_LEFT;
            case KeyEvent.KEYCODE_DPAD_UP: return Gm82Native.VK_UP;
            case KeyEvent.KEYCODE_DPAD_RIGHT: return Gm82Native.VK_RIGHT;
            case KeyEvent.KEYCODE_DPAD_DOWN: return Gm82Native.VK_DOWN;
            case KeyEvent.KEYCODE_SPACE: return Gm82Native.VK_SPACE;
            case KeyEvent.KEYCODE_ENTER: return Gm82Native.VK_ENTER;
            default: return 0;
        }
    }
}
