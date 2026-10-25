package com.normaker.nativefull;

import android.app.Activity;
import android.content.ContentValues;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.provider.MediaStore;
import android.provider.OpenableColumns;
import android.util.Log;
import android.view.Gravity;
import android.view.KeyEvent;
import android.view.MotionEvent;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.webkit.JavascriptInterface;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebResourceRequest;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.Button;
import android.widget.FrameLayout;
import android.widget.ImageView;
import android.widget.Toast;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.charset.StandardCharsets;
import java.util.Locale;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

/**
 * Single NOR Maker Android entry point: the Studio runs in WebView and the
 * native GM82 player remains in this Activity, sharing the same JNI engine.
 */
public class MainActivity extends Activity {
    private static final String TAG = "NOR_NATIVE";
    private static final int ROOM_W = 640;
    private static final int ROOM_H = 480;
    private static final int FILE_CHOOSER_REQUEST = 4102;
    private static final int VK_LEFT = 37;
    private static final int VK_UP = 38;
    private static final int VK_RIGHT = 39;
    private static final int VK_DOWN = 40;
    private static final int VK_SPACE = 32;
    private static final int VK_ENTER = 13;
    private static final int MAX_GMK_BYTES = 128 * 1024 * 1024;
    private static final long TARGET_FPS = 30;
    private static final long FRAME_MS = 1000 / TARGET_FPS;

    private final Object nativeLock = new Object();
    private final ExecutorService importExecutor = Executors.newSingleThreadExecutor();
    private final android.os.Handler loopHandler = new android.os.Handler(android.os.Looper.getMainLooper());
    private WebView webView;
    private ImageView nativeGameView;
    private Button nativePlayButton;
    private Button returnToStudioButton;
    private Bitmap frameBitmap;
    private ValueCallback<Uri[]> pendingFileCallback;
    private volatile boolean nativeProjectLoaded = false;
    private volatile boolean nativePlayerVisible = false;
    private long lastFrameNanos;
    private boolean holdLeft, holdRight, holdUp, holdDown, holdSpace;

    public static native String nativeCoreIdentity();
    public static native String nativeImportGmkSnapshot(byte[] bytes, String outputDir);
    public static native boolean nativeRuntimeCreate(int width, int height);
    public static native void nativeRuntimeDestroy();
    public static native void nativeRuntimeKey(int keyCode, boolean down);
    public static native boolean nativeRuntimeRenderBitmap(Bitmap bitmap);
    public static native String nativeRuntimeSnapshotJson();
    public static native void nativeRuntimeStep(float deltaSeconds);
    public static native void nativeRuntimeSetRoom(int roomId, int width, int height, boolean clearInstances);
    public static native void nativeRuntimeClearEvents();
    public static native void nativeRuntimeClearInstances();
    public static native int nativeRuntimeAddInstance(int objectId, int spriteId, int spriteWidth,
            int spriteHeight, int spriteSubimages, float x, float y, float vx, float vy);
    public static native void nativeClearResourceRegistry();
    public static native int nativeRegisterResource(int kind, int id, String name,
            int width, int height, int frames);
    public static native boolean nativeExportNorJson(String json, String outputPath);

    static {
        try {
            System.loadLibrary("gm82_android");
        } catch (Throwable t) {
            Log.e(TAG, "Could not load gm82_android", t);
        }
    }

    private final Runnable nativeFrameLoop = new Runnable() {
        @Override public void run() {
            if (!nativePlayerVisible) return;
            long now = System.nanoTime();
            float dt = lastFrameNanos == 0 ? 1.0f / TARGET_FPS : (now - lastFrameNanos) / 1_000_000_000.0f;
            if (dt <= 0.0001f || dt > 0.1f) dt = 1.0f / TARGET_FPS;
            lastFrameNanos = now;
            try {
                synchronized (nativeLock) {
                    nativeRuntimeStep(dt);
                    if (frameBitmap != null) nativeRuntimeRenderBitmap(frameBitmap);
                }
                if (nativeGameView != null && frameBitmap != null) nativeGameView.setImageBitmap(frameBitmap);
            } catch (Throwable t) {
                Log.w(TAG, "native frame failed", t);
            }
            loopHandler.postDelayed(this, FRAME_MS);
        }
    };

    @Override protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);

        try {
            nativeRuntimeCreate(ROOM_W, ROOM_H);
        } catch (Throwable t) {
            Log.e(TAG, "nativeRuntimeCreate failed", t);
        }

        frameBitmap = Bitmap.createBitmap(ROOM_W, ROOM_H, Bitmap.Config.ARGB_8888);
        buildUnifiedStudioView();
    }

    private void buildUnifiedStudioView() {
        FrameLayout root = new FrameLayout(this);
        root.setBackgroundColor(Color.rgb(20, 20, 40));

        webView = new WebView(this);
        webView.setBackgroundColor(Color.TRANSPARENT);
        webView.setLayerType(View.LAYER_TYPE_HARDWARE, null);
        WebSettings settings = webView.getSettings();
        settings.setJavaScriptEnabled(true);
        settings.setDomStorageEnabled(true);
        settings.setDatabaseEnabled(true);
        settings.setAllowFileAccess(true);
        settings.setAllowContentAccess(true);
        settings.setAllowFileAccessFromFileURLs(false);
        settings.setAllowUniversalAccessFromFileURLs(false);
        settings.setMediaPlaybackRequiresUserGesture(false);
        settings.setSupportMultipleWindows(false);
        webView.addJavascriptInterface(new StudioNativeBridge(), "NorNative");
        webView.setWebViewClient(new WebViewClient() {
            @Override public boolean shouldOverrideUrlLoading(WebView view, WebResourceRequest request) {
                Uri uri = request.getUrl();
                String scheme = uri.getScheme() == null ? "" : uri.getScheme().toLowerCase(Locale.ROOT);
                if ("file".equals(scheme) || "about".equals(scheme) || "data".equals(scheme)
                        || "blob".equals(scheme) || "javascript".equals(scheme)) return false;
                if ("http".equals(scheme) || "https".equals(scheme)) {
                    try { startActivity(new Intent(Intent.ACTION_VIEW, uri)); }
                    catch (Exception e) { Log.w(TAG, "No browser for " + uri, e); }
                }
                return true;
            }
        });
        webView.setWebChromeClient(new WebChromeClient() {
            @Override public boolean onShowFileChooser(WebView view, ValueCallback<Uri[]> callback,
                    FileChooserParams params) {
                if (pendingFileCallback != null) pendingFileCallback.onReceiveValue(null);
                pendingFileCallback = callback;
                try {
                    Intent intent = params.createIntent();
                    intent.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION);
                    startActivityForResult(intent, FILE_CHOOSER_REQUEST);
                    return true;
                } catch (Exception e) {
                    pendingFileCallback = null;
                    callback.onReceiveValue(null);
                    Toast.makeText(MainActivity.this, "تعذر فتح مدير الملفات", Toast.LENGTH_LONG).show();
                    return false;
                }
            }
        });
        root.addView(webView, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));

        nativeGameView = new ImageView(this);
        nativeGameView.setScaleType(ImageView.ScaleType.FIT_CENTER);
        nativeGameView.setBackgroundColor(Color.rgb(20, 20, 40));
        nativeGameView.setFocusable(true);
        nativeGameView.setFocusableInTouchMode(true);
        nativeGameView.setOnTouchListener((v, event) -> handleNativeTouch(event));
        nativeGameView.setVisibility(View.GONE);
        root.addView(nativeGameView, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));

        nativePlayButton = new Button(this);
        nativePlayButton.setText("تشغيل GMK الأصلي");
        nativePlayButton.setOnClickListener(v -> showNativePlayer());
        FrameLayout.LayoutParams playParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.END);
        playParams.setMargins(0, 12, 12, 0);
        root.addView(nativePlayButton, playParams);

        returnToStudioButton = new Button(this);
        returnToStudioButton.setText("العودة للاستوديو");
        returnToStudioButton.setVisibility(View.GONE);
        returnToStudioButton.setOnClickListener(v -> showStudio());
        FrameLayout.LayoutParams backParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.START);
        backParams.setMargins(12, 12, 0, 0);
        root.addView(returnToStudioButton, backParams);

        setContentView(root);
        webView.loadUrl("file:///android_asset/www/index.html");
    }

    private void showNativePlayer() {
        if (!nativeProjectLoaded) {
            Toast.makeText(this, "استورد ملف GMK مدعومًا أولًا من قائمة فتح المشروع", Toast.LENGTH_LONG).show();
            return;
        }
        nativePlayerVisible = true;
        lastFrameNanos = 0;
        webView.setVisibility(View.GONE);
        nativeGameView.setVisibility(View.VISIBLE);
        nativePlayButton.setVisibility(View.GONE);
        returnToStudioButton.setVisibility(View.VISIBLE);
        nativeGameView.requestFocus();
        loopHandler.removeCallbacks(nativeFrameLoop);
        loopHandler.post(nativeFrameLoop);
    }

    private void showStudio() {
        nativePlayerVisible = false;
        loopHandler.removeCallbacks(nativeFrameLoop);
        nativeGameView.setVisibility(View.GONE);
        returnToStudioButton.setVisibility(View.GONE);
        nativePlayButton.setVisibility(View.VISIBLE);
        webView.setVisibility(View.VISIBLE);
        webView.requestFocus();
    }

    private boolean handleNativeTouch(MotionEvent event) {
        int w = nativeGameView.getWidth(), h = nativeGameView.getHeight();
        if (w <= 0 || h <= 0) return true;
        float x = event.getX(), y = event.getY();
        int action = event.getActionMasked();
        if (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_MOVE) {
            setNativeKey(VK_LEFT, x < w / 3.0f);
            setNativeKey(VK_RIGHT, x > w * 2.0f / 3.0f);
            setNativeKey(VK_UP, y < h / 2.0f);
            setNativeKey(VK_DOWN, y >= h / 2.0f && x >= w / 3.0f && x <= w * 2.0f / 3.0f);
            setNativeKey(VK_SPACE, y < h / 2.0f);
            return true;
        }
        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL) {
            setNativeKey(VK_LEFT, false); setNativeKey(VK_RIGHT, false);
            setNativeKey(VK_UP, false); setNativeKey(VK_DOWN, false); setNativeKey(VK_SPACE, false);
            return true;
        }
        return false;
    }

    private void setNativeKey(int vk, boolean down) {
        boolean was;
        if (vk == VK_LEFT) { was = holdLeft; holdLeft = down; }
        else if (vk == VK_RIGHT) { was = holdRight; holdRight = down; }
        else if (vk == VK_UP) { was = holdUp; holdUp = down; }
        else if (vk == VK_DOWN) { was = holdDown; holdDown = down; }
        else if (vk == VK_SPACE) { was = holdSpace; holdSpace = down; }
        else was = !down;
        if (was != down) synchronized (nativeLock) { nativeRuntimeKey(vk, down); }
    }

    private static int androidToVk(int keyCode) {
        switch (keyCode) {
            case KeyEvent.KEYCODE_DPAD_LEFT: case KeyEvent.KEYCODE_A: return VK_LEFT;
            case KeyEvent.KEYCODE_DPAD_RIGHT: case KeyEvent.KEYCODE_D: return VK_RIGHT;
            case KeyEvent.KEYCODE_DPAD_UP: case KeyEvent.KEYCODE_W: return VK_UP;
            case KeyEvent.KEYCODE_DPAD_DOWN: case KeyEvent.KEYCODE_S: return VK_DOWN;
            case KeyEvent.KEYCODE_SPACE: case KeyEvent.KEYCODE_BUTTON_A: return VK_SPACE;
            case KeyEvent.KEYCODE_ENTER: case KeyEvent.KEYCODE_BUTTON_START: return VK_ENTER;
            default: return -1;
        }
    }

    @Override public boolean onKeyDown(int keyCode, KeyEvent event) {
        if (nativePlayerVisible) {
            int vk = androidToVk(keyCode);
            if (vk >= 0) { synchronized (nativeLock) { nativeRuntimeKey(vk, true); } return true; }
        }
        return super.onKeyDown(keyCode, event);
    }

    @Override public boolean onKeyUp(int keyCode, KeyEvent event) {
        if (nativePlayerVisible) {
            int vk = androidToVk(keyCode);
            if (vk >= 0) { synchronized (nativeLock) { nativeRuntimeKey(vk, false); } return true; }
        }
        return super.onKeyUp(keyCode, event);
    }

    @Override protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode != FILE_CHOOSER_REQUEST) return;
        final ValueCallback<Uri[]> callback = pendingFileCallback;
        pendingFileCallback = null;
        Uri[] results = (resultCode == RESULT_OK && data != null)
                ? WebChromeClient.FileChooserParams.parseResult(resultCode, data) : null;
        if (callback == null) return;
        if (results == null || results.length == 0) { callback.onReceiveValue(null); return; }
        nativeProjectLoaded = false;

        Uri firstGmk = null;
        for (Uri uri : results) {
            String name = getDisplayName(uri);
            if (name != null && name.toLowerCase(Locale.ROOT).matches(".*\\.(gmk|gm81|gm7|gm6)$")) {
                firstGmk = uri;
                break;
            }
        }
        if (firstGmk == null) { callback.onReceiveValue(results); return; }

        final Uri selectedGmk = firstGmk;
        try {
            importExecutor.execute(() -> {
                importNativeGmk(selectedGmk);
                runOnUiThread(() -> {
                    if (!isFinishing()) callback.onReceiveValue(results);
                });
            });
        } catch (RuntimeException rejected) {
            Log.w(TAG, "GMK import worker is unavailable", rejected);
            callback.onReceiveValue(results);
        }
    }

    private String getDisplayName(Uri uri) {
        try (Cursor c = getContentResolver().query(uri, null, null, null, null)) {
            if (c != null && c.moveToFirst()) {
                int idx = c.getColumnIndex(OpenableColumns.DISPLAY_NAME);
                if (idx >= 0) return c.getString(idx);
            }
        } catch (Exception e) { Log.w(TAG, "Could not read display name", e); }
        return uri.getLastPathSegment();
    }

    private void importNativeGmk(Uri uri) {
        try {
            byte[] bytes;
            try (InputStream in = getContentResolver().openInputStream(uri);
                 ByteArrayOutputStream out = new ByteArrayOutputStream()) {
                if (in == null) throw new IllegalStateException("File stream unavailable");
                byte[] chunk = new byte[64 * 1024];
                int n, total = 0;
                while ((n = in.read(chunk)) != -1) {
                    if (n == 0) continue;
                    total += n;
                    if (total > MAX_GMK_BYTES) throw new IllegalArgumentException("GMK exceeds 128 MiB import limit");
                    out.write(chunk, 0, n);
                }
                bytes = out.toByteArray();
            }
            String result;
            synchronized (nativeLock) {
                result = nativeImportGmkSnapshot(bytes, getFilesDir().getAbsolutePath());
            }
            nativeProjectLoaded = result != null && result.contains("\"complete\":true");
            Log.i(TAG, "Studio GMK import to native runtime: " + result);
        } catch (Throwable t) {
            nativeProjectLoaded = false;
            Log.w(TAG, "Native GMK import failed; Web Studio may still parse the file", t);
            runOnUiThread(() -> Toast.makeText(this,
                    "تعذر تحميل هذه النسخة في المحرك الأصلي؛ سيحاول الاستوديو استيرادها", Toast.LENGTH_LONG).show());
        }
    }

    private String saveNorJson(String json, String requestedName) {
        if (json == null) return "";
        String name = requestedName == null ? "project.nor.json" : new File(requestedName).getName();
        name = name.replaceAll("[^A-Za-z0-9._-]", "_");
        if (!name.toLowerCase(Locale.ROOT).endsWith(".json")) name += ".json";
        byte[] data = json.getBytes(StandardCharsets.UTF_8);
        try {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
                ContentValues values = new ContentValues();
                values.put(MediaStore.MediaColumns.DISPLAY_NAME, name);
                values.put(MediaStore.MediaColumns.MIME_TYPE, "application/json");
                values.put(MediaStore.MediaColumns.RELATIVE_PATH,
                        Environment.DIRECTORY_DOWNLOADS + "/NOR Maker");
                values.put(MediaStore.MediaColumns.IS_PENDING, 1);
                Uri uri = getContentResolver().insert(MediaStore.Downloads.EXTERNAL_CONTENT_URI, values);
                if (uri == null) return "";
                try (OutputStream out = getContentResolver().openOutputStream(uri)) {
                    if (out == null) throw new IllegalStateException("Downloads stream unavailable");
                    out.write(data);
                }
                values.clear();
                values.put(MediaStore.MediaColumns.IS_PENDING, 0);
                getContentResolver().update(uri, values, null, null);
                return uri.toString();
            }
            File dir = getExternalFilesDir(Environment.DIRECTORY_DOWNLOADS);
            if (dir == null) dir = getFilesDir();
            if (!dir.exists() && !dir.mkdirs()) return "";
            File file = new File(dir, name);
            try (FileOutputStream out = new FileOutputStream(file)) { out.write(data); }
            return file.getAbsolutePath();
        } catch (Exception e) {
            Log.e(TAG, "NOR export failed", e);
            return "";
        }
    }

    public final class StudioNativeBridge {
        @JavascriptInterface public void clearEvents() {
            synchronized (nativeLock) { nativeRuntimeClearEvents(); }
        }
        @JavascriptInterface public void clearInstances() {
            synchronized (nativeLock) { nativeRuntimeClearInstances(); }
        }
        @JavascriptInterface public void clearResourceRegistry() {
            synchronized (nativeLock) { nativeClearResourceRegistry(); }
        }
        @JavascriptInterface public int registerResource(int kind, int id, String name,
                int width, int height, int frames) {
            synchronized (nativeLock) {
                return nativeRegisterResource(kind, id, name, width, height, frames);
            }
        }
        @JavascriptInterface public void setRoom(int roomId, int width, int height, boolean clearInstances) {
            synchronized (nativeLock) {
                nativeRuntimeSetRoom(roomId, width, height, clearInstances);
            }
        }
        @JavascriptInterface public int addInstance(int objectId, int spriteId, int spriteWidth,
                int spriteHeight, int frames, float x, float y, float vx, float vy) {
            synchronized (nativeLock) {
                return nativeRuntimeAddInstance(objectId, spriteId, spriteWidth, spriteHeight,
                        frames, x, y, vx, vy);
            }
        }
        @JavascriptInterface public String exportNorJsonToApp(String json, String filename) {
            return saveNorJson(json, filename);
        }
    }

    @Override public void onBackPressed() {
        if (nativePlayerVisible) { showStudio(); return; }
        if (webView != null && webView.canGoBack()) { webView.goBack(); return; }
        super.onBackPressed();
    }

    @Override protected void onPause() {
        loopHandler.removeCallbacks(nativeFrameLoop);
        if (webView != null) webView.onPause();
        super.onPause();
    }

    @Override protected void onResume() {
        super.onResume();
        if (webView != null) webView.onResume();
        if (nativePlayerVisible) loopHandler.post(nativeFrameLoop);
    }

    @Override protected void onDestroy() {
        loopHandler.removeCallbacks(nativeFrameLoop);
        if (pendingFileCallback != null) { pendingFileCallback.onReceiveValue(null); pendingFileCallback = null; }
        if (webView != null) {
            webView.removeJavascriptInterface("NorNative");
            webView.destroy();
            webView = null;
        }
        importExecutor.shutdownNow();
        try { nativeRuntimeDestroy(); } catch (Throwable ignored) {}
        if (frameBitmap != null && !frameBitmap.isRecycled()) { frameBitmap.recycle(); frameBitmap = null; }
        super.onDestroy();
    }
}
