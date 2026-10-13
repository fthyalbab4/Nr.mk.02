package com.normaker.nativefull;

import android.app.Activity;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.os.Bundle;
import android.util.Log;
import android.view.Window;
import android.view.WindowManager;
import android.webkit.JavascriptInterface;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import java.io.ByteArrayOutputStream;
import java.io.InputStream;

/**
 * MainActivity aligned with shipped libgm82_android.so.
 * Path: loadLibrary → nativeRuntimeCreate → nativeImportGmkSnapshot(sample)
 *       → WebView NorNative.tick → nativeRuntimeStep.
 */
public class MainActivity extends Activity {
    private static final String TAG = "NOR_NATIVE";
    private WebView webView;
    private String lastImportJson = "";

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

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(
            WindowManager.LayoutParams.FLAG_FULLSCREEN,
            WindowManager.LayoutParams.FLAG_FULLSCREEN
        );

        try {
            nativeRuntimeCreate(640, 480);
        } catch (Throwable t) {
            Log.e(TAG, "nativeRuntimeCreate failed safely", t);
        }

        /* Critical: import a GMK so rooms/objects/instances exist (SO path) */
        lastImportJson = tryImportSampleGmk();
        Log.i(TAG, "import result: " + lastImportJson);

        FrameLayout container = new FrameLayout(this);
        webView = new WebView(this);
        webView.setBackgroundColor(Color.rgb(24, 35, 48));
        WebSettings settings = webView.getSettings();
        settings.setJavaScriptEnabled(true);
        settings.setDomStorageEnabled(true);
        settings.setAllowFileAccess(true);
        settings.setAllowContentAccess(true);
        try {
            settings.setAllowFileAccessFromFileURLs(true);
            settings.setAllowUniversalAccessFromFileURLs(true);
        } catch (Throwable ignored) {}

        webView.addJavascriptInterface(new NativeBridge(), "NorNative");
        webView.setWebViewClient(new WebViewClient());
        webView.loadUrl("file:///android_asset/www/index.html");
        container.addView(webView);
        setContentView(container);
    }

    /** Load first available sample GMK bytes into nativeImportGmkSnapshot. */
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
                Log.w(TAG, "import failed for " + asset, t);
            }
        }
        return "{\"ok\":false,\"error\":\"no sample gmk imported\"}";
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

    public final class NativeBridge {
        @JavascriptInterface
        public void tick() {
            step(1.0f / 30.0f);
        }

        @JavascriptInterface
        public void step(float delta) {
            try {
                MainActivity.nativeRuntimeStep(delta);
            } catch (Throwable t) {
                Log.w(TAG, "step error", t);
            }
        }

        @JavascriptInterface
        public boolean isRunning() {
            return true;
        }

        @JavascriptInterface
        public String importStatus() {
            return lastImportJson != null ? lastImportJson : "";
        }

        /** Import GMK from asset path under assets/ (e.g. www/samples/mario_bros.gmk). */
        @JavascriptInterface
        public String importAsset(String assetPath) {
            try {
                byte[] bytes = readAssetBytes(assetPath);
                if (bytes == null) return "{\"ok\":false,\"error\":\"asset not found\"}";
                String json = MainActivity.nativeImportGmkSnapshot(bytes, getFilesDir().getAbsolutePath());
                lastImportJson = json != null ? json : "";
                return lastImportJson;
            } catch (Throwable t) {
                return "{\"ok\":false,\"error\":\"" + t.getMessage() + "\"}";
            }
        }

        @JavascriptInterface
        public boolean renderBitmap() {
            try {
                Bitmap bmp = Bitmap.createBitmap(640, 480, Bitmap.Config.ARGB_8888);
                return MainActivity.nativeRuntimeRenderBitmap(bmp);
            } catch (Throwable t) {
                Log.w(TAG, "renderBitmap error", t);
                return false;
            }
        }

        @JavascriptInterface
        public String coreIdentity() {
            try {
                return MainActivity.nativeCoreIdentity();
            } catch (Throwable t) {
                return "";
            }
        }

        @JavascriptInterface
        public String snapshot() {
            try {
                return MainActivity.nativeRuntimeSnapshotJson();
            } catch (Throwable t) {
                return "";
            }
        }

        @JavascriptInterface
        public String evaluateGml(String code) {
            try {
                return MainActivity.nativeEvaluateGml(code);
            } catch (Throwable t) {
                return "";
            }
        }

        @JavascriptInterface
        public void key(int vk, boolean down) {
            try {
                MainActivity.nativeRuntimeKey(vk, down);
            } catch (Throwable t) {
            }
        }

        @JavascriptInterface
        public void keyDown(int vk) { key(vk, true); }

        @JavascriptInterface
        public void keyUp(int vk) { key(vk, false); }
    }

    @Override
    protected void onDestroy() {
        try {
            nativeRuntimeDestroy();
        } catch (Throwable t) {
        }
        super.onDestroy();
    }

    @Override
    protected void onPause() {
        super.onPause();
        if (webView != null) webView.onPause();
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (webView != null) webView.onResume();
    }
}
