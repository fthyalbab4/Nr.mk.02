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
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;

/**
 * MainActivity aligned with shipped libgm82_android.so.
 * Evidence: SO exports Java_com_normaker_nativefull_MainActivity_* only
 * (no Gm82Native_* symbols in current jniLibs).
 *
 * Path: loadLibrary → nativeRuntimeCreate → WebView + NativeBridge as "NorNative"
 * → nativeRuntimeStep / nativeRuntimeRenderBitmap.
 */
public class MainActivity extends Activity {
    private static final String TAG = "NOR_NATIVE";
    private WebView webView;

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

        File gameFile = extractAssetGameFile("mario_bros.gmk");
        if (gameFile == null) {
            gameFile = extractAssetGameFile("www/samples/mario_bros.gmk");
        }

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

    private File extractAssetGameFile(String assetName) {
        try {
            String name = assetName.contains("/") ? assetName.substring(assetName.lastIndexOf('/') + 1) : assetName;
            File outFile = new File(getFilesDir(), name);
            if (outFile.exists() && outFile.length() > 0) return outFile;
            InputStream is = getAssets().open(assetName);
            FileOutputStream fos = new FileOutputStream(outFile);
            byte[] buf = new byte[8192];
            int len;
            while ((len = is.read(buf)) > 0) fos.write(buf, 0, len);
            fos.close();
            is.close();
            return outFile;
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
