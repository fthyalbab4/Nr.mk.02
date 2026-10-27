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


    // Multi-touch virtual pad: left third = move, right third = jump/action
    private final android.util.SparseArray<Integer> pointerKeys = new android.util.SparseArray<>();

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        int action = event.getActionMasked();
        int index = event.getActionIndex();
        int sw = getWidth() > 0 ? getWidth() : 640;
        int sh = getHeight() > 0 ? getHeight() : 480;

        switch (action) {
            case MotionEvent.ACTION_DOWN:
            case MotionEvent.ACTION_POINTER_DOWN: {
                int id = event.getPointerId(index);
                float x = event.getX(index);
                float y = event.getY(index);
                int vk = zoneToVk(x, y, sw, sh);
                if (vk != 0) {
                    pointerKeys.put(id, vk);
                    fireKeyDown(vk);
                }
                // also pass raw for mouse.x/y if needed
                Gm82Native.nativeTouch((int)x, (int)y, 0);
                break;
            }
            case MotionEvent.ACTION_MOVE: {
                for (int i = 0; i < event.getPointerCount(); i++) {
                    int id = event.getPointerId(i);
                    float x = event.getX(i);
                    float y = event.getY(i);
                    int vkNew = zoneToVk(x, y, sw, sh);
                    Integer vkOld = pointerKeys.get(id);
                    if (vkOld != null && vkOld != 0 && vkOld != vkNew) {
                        fireKeyUp(vkOld);
                        pointerKeys.remove(id);
                    }
                    if (vkNew != 0 && (vkOld == null || vkOld != vkNew)) {
                        pointerKeys.put(id, vkNew);
                        fireKeyDown(vkNew);
                    }
                    Gm82Native.nativeTouch((int)x, (int)y, 2);
                }
                break;
            }
            case MotionEvent.ACTION_UP:
            case MotionEvent.ACTION_POINTER_UP:
            case MotionEvent.ACTION_CANCEL: {
                int id = event.getPointerId(index);
                Integer vk = pointerKeys.get(id);
                if (vk != null && vk != 0) fireKeyUp(vk);
                pointerKeys.remove(id);
                if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL) {
                    // release all
                    for (int i = 0; i < pointerKeys.size(); i++) {
                        Integer v = pointerKeys.valueAt(i);
                        if (v != null && v != 0) fireKeyUp(v);
                    }
                    pointerKeys.clear();
                }
                Gm82Native.nativeTouch((int)event.getX(index), (int)event.getY(index), 1);
                break;
            }
            default:
                break;
        }
        return true;
    }

    /** 1=left 2=right 3=jump */
    private int zoneToVk(float x, float y, int sw, int sh) {
        if (y < sh * 0.40f) return 0; // upper screen: no pad
        if (x < sw * 0.20f) return Gm82Native.VK_LEFT;
        if (x < sw * 0.40f) return Gm82Native.VK_RIGHT;
        if (x > sw * 0.60f) return 3; // jump marker
        return 0;
    }

    private void fireKeyDown(int code) {
        if (code == 3) {
            Gm82Native.nativeKeyDown(Gm82Native.VK_SPACE);
            Gm82Native.nativeKeyDown(Gm82Native.VK_UP);
        } else if (code > 0) {
            Gm82Native.nativeKeyDown(code);
        }
    }

    private void fireKeyUp(int code) {
        if (code == 3) {
            Gm82Native.nativeKeyUp(Gm82Native.VK_SPACE);
            Gm82Native.nativeKeyUp(Gm82Native.VK_UP);
        } else if (code > 0) {
            Gm82Native.nativeKeyUp(code);
        }
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
            case KeyEvent.KEYCODE_A: return Gm82Native.VK_SPACE;
            case KeyEvent.KEYCODE_Z: return Gm82Native.VK_SPACE;
            case KeyEvent.KEYCODE_W: return Gm82Native.VK_UP;
            case KeyEvent.KEYCODE_S: return Gm82Native.VK_DOWN;
            case KeyEvent.KEYCODE_D: return Gm82Native.VK_RIGHT;
            case KeyEvent.KEYCODE_BUTTON_A: return Gm82Native.VK_SPACE;
            case KeyEvent.KEYCODE_ENTER: return Gm82Native.VK_ENTER;
            default: return 0;
        }
    }
}
