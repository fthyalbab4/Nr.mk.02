package com.normaker.nativefull;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.Window;
import android.view.WindowManager;
import android.widget.FrameLayout;
import android.widget.ImageView;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;

/**
 * Play path matching shipped SO:
 * loadLibrary → nativeRuntimeCreate → nativeImportGmkSnapshot
 * → Handler 30fps: step + RenderBitmap → ImageView.
 *
 * Touch: left third = vk_left(37), right third = vk_right(39),
 * upper half = vk_space(32). Hardware D-pad / WASD also mapped.
 */
public class MainActivity extends Activity {
    private static final String TAG = "NOR_NATIVE";
    private static final int ROOM_W = 640;
    private static final int ROOM_H = 480;
    private static final long TARGET_FPS = 90;
    private static final long FRAME_MS = 1000 / TARGET_FPS;
    private long lastFrameTimeNanos = 0;

    // GM vk_* codes (must match gm82_input.h)
    private static final int VK_LEFT = 37;
    private static final int VK_UP = 38;
    private static final int VK_RIGHT = 39;
    private static final int VK_DOWN = 40;
    private static final int VK_SPACE = 32;
    private static final int VK_ENTER = 13;

    private ImageView gameView;
    private Bitmap frameBitmap;
    private final Handler loopHandler = new Handler(Looper.getMainLooper());
    private boolean loopRunning = false;
    private String lastImportJson = "";
    private int frameCount = 0;
    private boolean holdLeft, holdRight, holdUp, holdSpace;

    public static native String nativeCoreIdentity();
    public static native String nativeImportGmkSnapshot(byte[] bArr, String str);
    public static native boolean nativeRuntimeCreate(int i, int i2);
    public static native void nativeRuntimeDestroy();
    public static native void nativeRuntimeKey(int i, boolean z);
    public static native boolean nativeRuntimeRenderBitmap(Bitmap bitmap);
    public static native String nativeRuntimeSnapshotJson();
    public static native void nativeRuntimeStep(float f);

    static {
        try {
            System.loadLibrary("gm82_android");
        } catch (Throwable t) {
            Log.e(TAG, "Could not load gm82_android", t);
        }
    }

    private final Runnable frameLoop = new Runnable() {
        @Override
        public void run() {
            if (!loopRunning) return;
            long nowNanos = System.nanoTime();
            float dt = (lastFrameTimeNanos > 0) ? (nowNanos - lastFrameTimeNanos) / 1000000000.0f : (1.0f / TARGET_FPS);
            if (dt <= 0.0001f || dt > 0.1f) dt = 1.0f / TARGET_FPS;
            lastFrameTimeNanos = nowNanos;

            try {
                nativeRuntimeStep(dt);
                if (frameBitmap != null) {
                    nativeRuntimeRenderBitmap(frameBitmap);
                    gameView.setImageBitmap(frameBitmap);
                }
                frameCount++;
                if (frameCount == 1 || frameCount % 180 == 0) {
                    Log.i(TAG, "frame=" + frameCount + " dt=" + dt + " import=" + lastImportJson);
                }
            } catch (Throwable t) {
                Log.w(TAG, "frame error", t);
            }
            loopHandler.postDelayed(this, FRAME_MS);
        }
    };

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(
            WindowManager.LayoutParams.FLAG_FULLSCREEN,
            WindowManager.LayoutParams.FLAG_FULLSCREEN
        );

        try {
            nativeRuntimeCreate(ROOM_W, ROOM_H);
        } catch (Throwable t) {
            Log.e(TAG, "nativeRuntimeCreate failed", t);
        }

        lastImportJson = tryImportSampleGmk();
        Log.i(TAG, "import: " + lastImportJson);

        frameBitmap = Bitmap.createBitmap(ROOM_W, ROOM_H, Bitmap.Config.ARGB_8888);
        gameView = new ImageView(this);
        gameView.setScaleType(ImageView.ScaleType.FIT_CENTER);
        gameView.setBackgroundColor(Color.rgb(20, 20, 40));
        gameView.setFocusable(true);
        gameView.setFocusableInTouchMode(true);
        gameView.setOnTouchListener((v, event) -> handleTouch(event));

        FrameLayout root = new FrameLayout(this);
        root.addView(gameView, new FrameLayout.LayoutParams(
            FrameLayout.LayoutParams.MATCH_PARENT,
            FrameLayout.LayoutParams.MATCH_PARENT));
        setContentView(root);
        gameView.requestFocus();

        startLoop();
    }

    private boolean handleTouch(MotionEvent event) {
        int w = gameView.getWidth();
        int h = gameView.getHeight();
        if (w <= 0 || h <= 0) return true;
        float x = event.getX();
        float y = event.getY();
        int action = event.getActionMasked();

        boolean left = x < w / 3.0f;
        boolean right = x > w * 2.0f / 3.0f;
        boolean up = y < h / 2.0f;

        if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_MOVE) {
            setKey(VK_LEFT, left);
            setKey(VK_RIGHT, right);
            setKey(VK_SPACE, up && !left && !right); // jump only in center-top
            if (up && (left || right)) setKey(VK_SPACE, true); // diagonal jump ok
            if (up) setKey(VK_UP, true);
            else setKey(VK_UP, false);
            return true;
        }
        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL) {
            setKey(VK_LEFT, false);
            setKey(VK_RIGHT, false);
            setKey(VK_UP, false);
            setKey(VK_SPACE, false);
            return true;
        }
        return false;
    }

    private void setKey(int vk, boolean down) {
        boolean was;
        if (vk == VK_LEFT) { was = holdLeft; holdLeft = down; }
        else if (vk == VK_RIGHT) { was = holdRight; holdRight = down; }
        else if (vk == VK_UP) { was = holdUp; holdUp = down; }
        else if (vk == VK_SPACE) { was = holdSpace; holdSpace = down; }
        else was = !down;
        if (was != down) {
            try { nativeRuntimeKey(vk, down); } catch (Throwable ignored) {}
        }
    }

    @Override
    public boolean onKeyDown(int keyCode, KeyEvent event) {
        int vk = androidToVk(keyCode);
        if (vk >= 0) {
            try { nativeRuntimeKey(vk, true); } catch (Throwable ignored) {}
            return true;
        }
        return super.onKeyDown(keyCode, event);
    }

    @Override
    public boolean onKeyUp(int keyCode, KeyEvent event) {
        int vk = androidToVk(keyCode);
        if (vk >= 0) {
            try { nativeRuntimeKey(vk, false); } catch (Throwable ignored) {}
            return true;
        }
        return super.onKeyUp(keyCode, event);
    }

    private static int androidToVk(int keyCode) {
        switch (keyCode) {
            case KeyEvent.KEYCODE_DPAD_LEFT:
            case KeyEvent.KEYCODE_A: return VK_LEFT;
            case KeyEvent.KEYCODE_DPAD_RIGHT:
            case KeyEvent.KEYCODE_D: return VK_RIGHT;
            case KeyEvent.KEYCODE_DPAD_UP:
            case KeyEvent.KEYCODE_W: return VK_UP;
            case KeyEvent.KEYCODE_DPAD_DOWN:
            case KeyEvent.KEYCODE_S: return VK_DOWN;
            case KeyEvent.KEYCODE_SPACE:
            case KeyEvent.KEYCODE_BUTTON_A: return VK_SPACE;
            case KeyEvent.KEYCODE_ENTER:
            case KeyEvent.KEYCODE_BUTTON_START: return VK_ENTER;
            default: return -1;
        }
    }

    private void startLoop() {
        loopRunning = true;
        loopHandler.removeCallbacks(frameLoop);
        loopHandler.post(frameLoop);
    }

    private void stopLoop() {
        loopRunning = false;
        loopHandler.removeCallbacks(frameLoop);
    }

    private String tryImportSampleGmk() {
        String[] candidates = new String[] {
            "www/samples/mario_bros.gmk",
            "www/samples/plataformas.gmk",
            "www/samples/zelda.gmk",
            "www/samples/shooter.gmk"
        };
        for (String asset : candidates) {
            try {
                byte[] bytes = readAssetBytes(asset);
                if (bytes == null || bytes.length < 16) continue;
                String json = nativeImportGmkSnapshot(bytes, getFilesDir().getAbsolutePath());
                if (json != null && json.length() > 0) {
                    Log.i(TAG, "imported " + asset + " → " + json);
                    return json;
                }
            } catch (Throwable t) {
                Log.w(TAG, "import failed " + asset, t);
            }
        }
        return "{\"ok\":false,\"error\":\"no sample\"}";
    }

    private byte[] readAssetBytes(String assetName) {
        try {
            InputStream is = getAssets().open(assetName);
            ByteArrayOutputStream bos = new ByteArrayOutputStream();
            byte[] buf = new byte[8192];
            int n;
            while ((n = is.read(buf)) > 0) bos.write(buf, 0, n);
            is.close();
            return bos.toByteArray();
        } catch (Exception e) {
            return null;
        }
    }

    @Override
    protected void onPause() {
        super.onPause();
        stopLoop();
    }

    @Override
    protected void onResume() {
        super.onResume();
        startLoop();
    }

    @Override
    protected void onDestroy() {
        stopLoop();
        try { nativeRuntimeDestroy(); } catch (Throwable ignored) {}
        if (frameBitmap != null && !frameBitmap.isRecycled()) {
            frameBitmap.recycle();
            frameBitmap = null;
        }
        super.onDestroy();
    }
}
