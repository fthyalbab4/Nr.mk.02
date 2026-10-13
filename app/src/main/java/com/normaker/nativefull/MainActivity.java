package com.normaker.nativefull;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Bundle;
import android.os.Handler;
import android.os.Looper;
import android.util.Log;
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
 * → Handler 30fps: nativeRuntimeStep + nativeRuntimeRenderBitmap → ImageView.
 *
 * Does not depend on the maker index.html rAF (that bundle does not load the bridge).
 */
public class MainActivity extends Activity {
    private static final String TAG = "NOR_NATIVE";
    private static final int ROOM_W = 640;
    private static final int ROOM_H = 480;
    private static final long FRAME_MS = 33; // ~30 fps

    private ImageView gameView;
    private Bitmap frameBitmap;
    private final Handler loopHandler = new Handler(Looper.getMainLooper());
    private boolean loopRunning = false;
    private String lastImportJson = "";
    private int frameCount = 0;

    public static native void nativeClearResourceRegistry();
    public static native void nativeCodeDestroy(int i);
    public static native int nativeCodeExecute(int i, int i2);
    public static native boolean nativeCodeExists(int i);
    public static native int nativeCodeGetArgCount(int i);
    public static native int nativeCompileGml(String str);
    public static native String nativeCoreIdentity();
    public static native int nativeDetectRom(String str);
    public static native String nativeEvaluateGml(String str);
    public static native boolean nativeExportGmkRaw(String str, String str2);
    public static native int nativeExportGmxGmz(String str, String str2, String str3);
    public static native boolean nativeExportGmxSemantic(String str, String str2, String str3);
    public static native boolean nativeExportNorJson(String str, String str2);
    public static native boolean nativeExportRom(String str, String str2, int i);
    public static native double nativeGm82ColorInverse(double d);
    public static native double nativeGm82ColorReverse(double d);
    public static native double nativeGm82CompatCheck();
    public static native String nativeGm82TokenNext();
    public static native void nativeGm82TokenReset();
    public static native int nativeGm82TokenStart(String str, String str2);
    public static native String nativeGmkChunkInventory(byte[] bArr);
    public static native String nativeGmkHeaderJson(byte[] bArr);
    public static native String nativeGmkLayoutJson(byte[] bArr);
    public static native String nativeGmkResourceManifest(byte[] bArr);
    public static native String nativeImportGmkSnapshot(byte[] bArr, String str);
    public static native int nativeImportGmxGmz(String str, String str2);
    public static native int nativeObjectEventCount();
    public static native int nativeRegisterObjectEvent(int i, int i2, int i3, String str);
    public static native int nativeRegisterResource(int i, int i2, String str, int i3, int i4, int i5);
    public static native int nativeResourceCount();
    public static native int nativeRuntimeAddInstance(int i, int i2, int i3, int i4, int i5, float f, float f2, float f3, float f4);
    public static native void nativeRuntimeClearEvents();
    public static native void nativeRuntimeClearInstances();
    public static native void nativeRuntimeClearRoomTransient();
    public static native void nativeRuntimeClearScripts();
    public static native String nativeRuntimeConsumeSoundCommands();
    public static native boolean nativeRuntimeCreate(int i, int i2);
    public static native void nativeRuntimeDestroy();
    public static native boolean nativeRuntimeExecuteGml(int i, String str);
    public static native int nativeRuntimeGetRoom();
    public static native void nativeRuntimeKey(int i, boolean z);
    public static native boolean nativeRuntimeRegisterEvent(int i, int i2, int i3, String str);
    public static native boolean nativeRuntimeRegisterObject(int i, String str);
    public static native boolean nativeRuntimeRegisterScript(String str, String str2);
    public static native boolean nativeRuntimeRenderBitmap(Bitmap bitmap);
    public static native void nativeRuntimeSetRoom(int i, int i2, int i3, boolean z);
    public static native boolean nativeRuntimeSetSpriteBitmap(int i, int i2, int i3, int i4, byte[] bArr);
    public static native String nativeRuntimeSnapshotJson();
    public static native void nativeRuntimeStep(float f);
    public static native boolean nativeValidateGmk(byte[] bArr);
    public static native boolean nativeValidateRom(String str, int i);

    static {
        try {
            System.loadLibrary("gm82_android");
        } catch (Throwable t) {
            Log.e(TAG, "Could not load gm82_android native library", t);
        }
    }

    private final Runnable frameLoop = new Runnable() {
        @Override
        public void run() {
            if (!loopRunning) return;
            try {
                nativeRuntimeStep(1.0f / 30.0f);
                if (frameBitmap != null) {
                    nativeRuntimeRenderBitmap(frameBitmap);
                    gameView.setImageBitmap(frameBitmap);
                }
                frameCount++;
                if (frameCount == 1 || frameCount % 90 == 0) {
                    Log.i(TAG, "frame=" + frameCount + " import=" + lastImportJson);
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
        gameView.setOnTouchListener((v, event) -> {
            int action = event.getActionMasked();
            // Map touch to Space (32) for jump-style samples
            if (action == MotionEvent.ACTION_DOWN) {
                try { nativeRuntimeKey(32, true); } catch (Throwable ignored) {}
                return true;
            } else if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL) {
                try { nativeRuntimeKey(32, false); } catch (Throwable ignored) {}
                return true;
            }
            return false;
        });

        FrameLayout root = new FrameLayout(this);
        root.addView(gameView, new FrameLayout.LayoutParams(
            FrameLayout.LayoutParams.MATCH_PARENT,
            FrameLayout.LayoutParams.MATCH_PARENT));
        setContentView(root);

        startLoop();
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
            "www/samples/shooter.gmk",
            "mario_bros.gmk"
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
