package com.normaker.nativefull;

import android.app.Activity;
import android.content.ContentValues;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.media.AudioAttributes;
import android.media.SoundPool;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.os.Environment;
import android.provider.DocumentsContract;
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
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.HttpURLConnection;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.util.Locale;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import android.util.Base64;
import org.json.JSONArray;
import org.json.JSONObject;

/**
 * Single NOR Maker Android entry point: the Studio runs in WebView and the
 * native GM82 player remains in this Activity, sharing the same JNI engine.
 */
public class MainActivity extends Activity {
    private static final String TAG = "NOR_NATIVE";
    private static final int ROOM_W = 640;
    private static final int ROOM_H = 480;
    private static final int FILE_CHOOSER_REQUEST = 4102;
    private static final int GM82_FOLDER_REQUEST = 4103;
    private static final int GMX_FOLDER_REQUEST = 4104;
    private static final int VK_LEFT = 37;
    private static final int VK_UP = 38;
    private static final int VK_RIGHT = 39;
    private static final int VK_DOWN = 40;
    private static final int VK_SPACE = 32;
    private static final int VK_ENTER = 13;
    private static final int MAX_GMK_BYTES = 128 * 1024 * 1024;
    private static final int MAX_GMZ_BYTES = 64 * 1024 * 1024;
    private static final int MAX_GMZ_EXPOSED_BYTES = 96 * 1024 * 1024;
    private static final int MAX_GMZ_FILE_BYTES = 32 * 1024 * 1024;
    private static final int MAX_GMZ_FILE_COUNT = 2048;
    private static final String STUDIO_ASSET_PREFIX = "file:///android_asset/www/";
    private static final long TARGET_FPS = 90;
    private static final long FRAME_MS = 1000 / TARGET_FPS;

    private final Object nativeLock = new Object();
    private final ExecutorService importExecutor = Executors.newSingleThreadExecutor();
    private final android.os.Handler loopHandler = new android.os.Handler(android.os.Looper.getMainLooper());
    private WebView webView;
    private ImageView nativeGameView;
    private Button nativePlayButton;
    private Button returnToStudioButton;
    private Button engineRecordButton;
    private EngineVideoRecorder engineVideoRecorder;
    private Bitmap frameBitmap;
    private ValueCallback<Uri[]> pendingFileCallback;
    private volatile boolean nativeProjectLoaded = false;
    private volatile boolean nativePlayerVisible = false;
    private long lastFrameNanos;
    private boolean holdLeft, holdRight, holdUp, holdDown, holdSpace;
    private int activeTouchPointerId = MotionEvent.INVALID_POINTER_ID;
    private boolean nativeMouseDown = false;
    private int nativeMouseX = ROOM_W / 2;
    private int nativeMouseY = ROOM_H / 2;
    private volatile boolean awaitingGmxGmzPicker = false;
    private SoundPool soundPool;
    private final Map<Integer, Integer> soundResources = new HashMap<>();
    private final Map<Integer, Integer> soundStreams = new HashMap<>();

    public static native String nativeCoreIdentity();
    public static native String nativeImportGmkSnapshot(byte[] bytes, String outputDir);
    public static native boolean nativeRuntimeCreate(int width, int height);
    public static native void nativeRuntimeDestroy();
    public static native void nativeRuntimeKey(int keyCode, boolean down);
    public static native void nativeRuntimeMouse(int x, int y, int button, boolean down);
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
    public static native int nativeRuntimeGetRoom();
    public static native String nativeEvaluateGml(String source);
    public static native boolean nativeRuntimeRegisterEvent(int objectId, int mainType, int subType, String source);
    public static native boolean nativeRuntimeRegisterObject(int objectId, String name);
    public static native boolean nativeRuntimeRegisterScript(String name, String source);
    public static native void nativeRuntimeClearScripts();
    public static native boolean nativeRuntimeSetSpriteBitmap(int spriteId, int frame, int width, int height, byte[] rgba);
    public static native void nativeRuntimeClearRoomTransient();
    public static native boolean nativeRuntimeExecuteGml(int instanceId, String source);
    public static native String nativeRuntimeConsumeSoundCommands();
    public static native int nativeImportGmxGmz(String path, String outputDir);
    public static native int nativeExportGmxGmz(String sourceDir, String outputPath, String kind);
    public static native boolean nativeExportGmkRaw(String sourcePath, String outputPath);
    public static native boolean nativeExportGmxSemantic(String sourceDir, String outputDir, String projectName);
    public static native boolean nativeValidateGmk(byte[] bytes);
    public static native String nativeGmkHeaderJson(byte[] bytes);
    public static native String nativeGmkLayoutJson(byte[] bytes);
    public static native String nativeGmkChunkInventory(byte[] bytes);
    public static native String nativeGmkResourceManifest(byte[] bytes);
    public static native int nativeCompileGml(String source);
    public static native boolean nativeCodeExists(int codeId);
    public static native int nativeCodeGetArgCount(int codeId);
    public static native void nativeCodeDestroy(int codeId);
    public static native int nativeCodeExecute(int instanceId, int codeId);
    public static native boolean nativeExportRom(String title, String outputPath, int kind);
    public static native int nativeDetectRom(String path);
    public static native boolean nativeValidateRom(String path, int kind);
    public static native int nativeResourceCount();
    public static native int nativeRegisterObjectEvent(int objectId, int mainType, int subType, String source);
    public static native int nativeObjectEventCount();
    public static native double nativeGm82CompatCheck();
    public static native double nativeGm82ColorReverse(double color);
    public static native double nativeGm82ColorInverse(double color);
    public static native int nativeGm82TokenStart(String text, String separator);
    public static native String nativeGm82TokenNext();
    public static native void nativeGm82TokenReset();

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
                    drainNativeSoundCommands();
                    if (frameBitmap != null) nativeRuntimeRenderBitmap(frameBitmap);
                }
                // Encode only the engine framebuffer, not the Activity or toolbar.
                if (frameBitmap != null && engineVideoRecorder != null && engineVideoRecorder.isRecording())
                    engineVideoRecorder.writeFrame(frameBitmap);
                if (nativeGameView != null && frameBitmap != null) nativeGameView.setImageBitmap(frameBitmap);
            } catch (Throwable t) {
                Log.w(TAG, "native frame failed", t);
            }
            // Post with low frame latency (~11ms for 90 FPS target)
            long elapsedMs = (System.nanoTime() - now) / 1_000_000;
            long delay = Math.max(1, FRAME_MS - elapsedMs);
            loopHandler.postDelayed(this, delay);
        }
    };

    @Override protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(WindowManager.LayoutParams.FLAG_FULLSCREEN,
                WindowManager.LayoutParams.FLAG_FULLSCREEN);

        try {
            synchronized (nativeLock) { nativeRuntimeCreate(ROOM_W, ROOM_H); }
        } catch (Throwable t) {
            Log.e(TAG, "nativeRuntimeCreate failed", t);
        }

        frameBitmap = Bitmap.createBitmap(ROOM_W, ROOM_H, Bitmap.Config.ARGB_8888);
        AudioAttributes audioAttributes = new AudioAttributes.Builder()
                .setUsage(AudioAttributes.USAGE_GAME)
                .setContentType(AudioAttributes.CONTENT_TYPE_SONIFICATION)
                .build();
        soundPool = new SoundPool.Builder().setMaxStreams(32).setAudioAttributes(audioAttributes).build();
        buildUnifiedStudioView();
        if (BuildConfig.DEBUG && getIntent().getBooleanExtra("nor_emulator_smoke", false)) {
            new android.os.Handler(android.os.Looper.getMainLooper()).postDelayed(this::runEmulatorSmokeProbe, 500);
        }
    }

    /** Deterministic native event probe used only by the emulator smoke script. */
    private void runEmulatorSmokeProbe() {
        boolean collision=false, alarm=false, keyboard=false, mouse=false;
        try {
            synchronized (nativeLock) {
                nativeRuntimeClearEvents(); nativeRuntimeClearInstances();
                nativeRuntimeRegisterObject(1, "probe_player"); nativeRuntimeRegisterObject(2, "probe_wall");
                nativeRuntimeRegisterEvent(1, 0, -1, "alarm[0] = 1");
                nativeRuntimeRegisterEvent(1, 4, 2, "x = 42");
                nativeRuntimeRegisterEvent(1, 2, 0, "y = 77");
                nativeRuntimeRegisterEvent(1, 9, 37, "vx = 5");
                nativeRuntimeRegisterEvent(1, 6, 4, "depth = 9");
                nativeRuntimeAddInstance(1, -1, 16, 16, 1, 10f, 10f, 0f, 0f);
                nativeRuntimeAddInstance(2, -1, 16, 16, 1, 10f, 10f, 0f, 0f);
                nativeRuntimeKey(37, true); nativeRuntimeMouse(12, 12, 0, true);
                nativeRuntimeStep(0.016f);
                String s = nativeRuntimeSnapshotJson();
                collision = s != null && s.contains("\"x\":42");
                alarm = s != null && s.contains("\"y\":77");
                keyboard = s != null && s.contains("\"vx\":5");
                mouse = s != null && s.contains("\"depth\":9");
                nativeRuntimeKey(37, false); nativeRuntimeMouse(12, 12, 0, false);
                nativeRuntimeClearEvents(); nativeRuntimeClearInstances();
            }
        } catch (Throwable t) { Log.e(TAG, "NOR_SMOKE probe failed", t); }
        String result = "{\"collision\":" + collision + ",\"alarm\":" + alarm + ",\"keyboard\":" + keyboard + ",\"mouse\":" + mouse + "}";
        Log.i(TAG, "NOR_SMOKE_RESULT=" + result);
    }

    private static boolean isTrustedStudioUri(Uri uri) {
        if (uri == null || !"file".equalsIgnoreCase(uri.getScheme())) return false;
        return uri.toString().startsWith(STUDIO_ASSET_PREFIX);
    }

    /** Keep the privileged JS bridge on the bundled Studio page only. */
    private boolean handleStudioNavigation(Uri uri) {
        if (isTrustedStudioUri(uri)) return false;
        String scheme = uri == null || uri.getScheme() == null ? "" : uri.getScheme().toLowerCase(Locale.ROOT);
        if ("http".equals(scheme) || "https".equals(scheme)) {
            try { startActivity(new Intent(Intent.ACTION_VIEW, uri)); }
            catch (Exception e) { Log.w(TAG, "No browser for " + uri, e); }
        }
        // Do not render data:, blob:, javascript:, content:, or arbitrary file: URLs in
        // this WebView: addJavascriptInterface is process-privileged, not origin-scoped.
        return true;
    }

    private static boolean isAllowedCloudGmkUrl(URL url) {
        if (url == null || !"https".equalsIgnoreCase(url.getProtocol())) return false;
        String host = url.getHost() == null ? "" : url.getHost().toLowerCase(Locale.ROOT);
        return "cdn.jsdelivr.net".equals(host) || "raw.githubusercontent.com".equals(host);
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
        // Bundled assets remain available through file:///android_asset even when
        // generic filesystem access is disabled. This prevents project scripts
        // from treating the Studio origin as a local-filesystem origin.
        settings.setAllowFileAccess(false);
        settings.setAllowContentAccess(true);
        settings.setAllowFileAccessFromFileURLs(false);
        settings.setAllowUniversalAccessFromFileURLs(false);
        settings.setMediaPlaybackRequiresUserGesture(false);
        settings.setSupportMultipleWindows(false);
        webView.addJavascriptInterface(new StudioNativeBridge(), "NorNative");
        webView.setWebViewClient(new WebViewClient() {
            @Override public boolean shouldOverrideUrlLoading(WebView view, WebResourceRequest request) {
                return handleStudioNavigation(request.getUrl());
            }
            @Override public boolean shouldOverrideUrlLoading(WebView view, String url) {
                return handleStudioNavigation(Uri.parse(url));
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
        int controlsInset = (int) (56 * getResources().getDisplayMetrics().density);
        FrameLayout.LayoutParams webParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT);
        webParams.topMargin = controlsInset;
        root.addView(webView, webParams);

        nativeGameView = new ImageView(this);
        nativeGameView.setScaleType(ImageView.ScaleType.FIT_CENTER);
        nativeGameView.setBackgroundColor(Color.rgb(20, 20, 40));
        nativeGameView.setFocusable(true);
        nativeGameView.setFocusableInTouchMode(true);
        nativeGameView.setOnTouchListener((v, event) -> handleNativeTouch(event));
        nativeGameView.setVisibility(View.GONE);
        FrameLayout.LayoutParams gameParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT);
        gameParams.topMargin = controlsInset;
        root.addView(nativeGameView, gameParams);

        nativePlayButton = new Button(this);
        nativePlayButton.setText("تشغيل GMK الأصلي");
        nativePlayButton.setOnClickListener(v -> showNativePlayer());
        FrameLayout.LayoutParams playParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.END);
        playParams.setMargins(0, 8, 12, 0);
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

        engineRecordButton = new Button(this);
        engineRecordButton.setText("● تسجيل");
        engineRecordButton.setVisibility(View.GONE);
        engineRecordButton.setOnClickListener(v -> toggleEngineRecording());
        FrameLayout.LayoutParams recordParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.CENTER_HORIZONTAL);
        recordParams.setMargins(0, 4, 0, 0);
        root.addView(engineRecordButton, recordParams);

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
        engineRecordButton.setVisibility(View.VISIBLE);
        nativeGameView.requestFocus();
        loopHandler.removeCallbacks(nativeFrameLoop);
        loopHandler.post(nativeFrameLoop);
    }

    private void showStudio() {
        stopEngineRecording(true);
        nativePlayerVisible = false;
        loopHandler.removeCallbacks(nativeFrameLoop);
        releaseNativeKeys();
        nativeGameView.setVisibility(View.GONE);
        returnToStudioButton.setVisibility(View.GONE);
        engineRecordButton.setVisibility(View.GONE);
        nativePlayButton.setVisibility(View.VISIBLE);
        webView.setVisibility(View.VISIBLE);
        webView.requestFocus();
    }

    private void toggleEngineRecording() {
        if (engineVideoRecorder == null) engineVideoRecorder = new EngineVideoRecorder(this);
        if (engineVideoRecorder.isRecording()) {
            Uri saved = engineVideoRecorder.stop();
            engineRecordButton.setText("● تسجيل");
            Toast.makeText(this, saved == null ? "تم إيقاف التسجيل" : "تم حفظ الفيديو في Movies/NorMaker", Toast.LENGTH_LONG).show();
            return;
        }
        try {
            String name = engineVideoRecorder.start(frameBitmap);
            engineRecordButton.setText("■ إيقاف التسجيل");
            Toast.makeText(this, "بدأ تسجيل شاشة اللعب فقط: " + name, Toast.LENGTH_SHORT).show();
        } catch (Exception e) {
            Log.e(TAG, "Could not start engine video recording", e);
            Toast.makeText(this, "تعذر بدء التسجيل: " + e.getMessage(), Toast.LENGTH_LONG).show();
        }
    }

    private void stopEngineRecording(boolean notify) {
        if (engineVideoRecorder == null || !engineVideoRecorder.isRecording()) return;
        Uri saved = engineVideoRecorder.stop();
        if (engineRecordButton != null) engineRecordButton.setText("● تسجيل");
        if (notify) Toast.makeText(this, saved == null ? "تم إيقاف التسجيل" : "تم حفظ فيديو اللعب", Toast.LENGTH_SHORT).show();
    }

    private int[] mapTouchToRoom(float viewX, float viewY) {
        if (nativeGameView == null) return null;
        int viewW = nativeGameView.getWidth(), viewH = nativeGameView.getHeight();
        if (viewW <= 0 || viewH <= 0) return null;
        float scale = Math.min((float) viewW / ROOM_W, (float) viewH / ROOM_H);
        if (!(scale > 0f)) return null;
        float contentW = ROOM_W * scale, contentH = ROOM_H * scale;
        float offsetX = (viewW - contentW) / 2f, offsetY = (viewH - contentH) / 2f;
        int x = Math.max(0, Math.min(ROOM_W - 1, Math.round((viewX - offsetX) / scale)));
        int y = Math.max(0, Math.min(ROOM_H - 1, Math.round((viewY - offsetY) / scale)));
        return new int[]{x, y};
    }

    private void sendNativeMouse(MotionEvent event, int pointerIndex, boolean down) {
        if (pointerIndex < 0) return;
        int[] point = mapTouchToRoom(event.getX(pointerIndex), event.getY(pointerIndex));
        if (point == null) return;
        nativeMouseX = point[0];
        nativeMouseY = point[1];
        synchronized (nativeLock) { nativeRuntimeMouse(nativeMouseX, nativeMouseY, 0, down); }
        nativeMouseDown = down;
    }

    private void updateTouchPad(float x, float y, int w, int h) {
        // Controls are confined to the bottom strip so taps in the playfield remain mouse input.
        boolean inPad = y >= h * 0.58f;
        setNativeKey(VK_LEFT, inPad && x < w * 0.25f);
        setNativeKey(VK_RIGHT, inPad && x >= w * 0.25f && x < w * 0.50f);
        setNativeKey(VK_UP, false);
        setNativeKey(VK_DOWN, false);
        setNativeKey(VK_SPACE, inPad && x >= w * 0.70f);
    }

    private boolean handleNativeTouch(MotionEvent event) {
        int w = nativeGameView.getWidth(), h = nativeGameView.getHeight();
        if (w <= 0 || h <= 0) return true;
        int action = event.getActionMasked();
        int actionIndex = event.getActionIndex();
        if (action == MotionEvent.ACTION_DOWN) {
            activeTouchPointerId = event.getPointerId(actionIndex);
            sendNativeMouse(event, actionIndex, true);
            updateTouchPad(event.getX(actionIndex), event.getY(actionIndex), w, h);
            return true;
        }
        if (action == MotionEvent.ACTION_MOVE) {
            int pointerIndex = event.findPointerIndex(activeTouchPointerId);
            if (pointerIndex >= 0) {
                // Keep button 0 held throughout a drag; gm82_input_mouse_down is edge-safe.
                sendNativeMouse(event, pointerIndex, true);
                updateTouchPad(event.getX(pointerIndex), event.getY(pointerIndex), w, h);
            }
            return true;
        }
        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP) {
            if (event.getPointerId(actionIndex) == activeTouchPointerId) {
                sendNativeMouse(event, actionIndex, false);
                activeTouchPointerId = MotionEvent.INVALID_POINTER_ID;
                setNativeKey(VK_LEFT, false); setNativeKey(VK_RIGHT, false);
                setNativeKey(VK_UP, false); setNativeKey(VK_DOWN, false); setNativeKey(VK_SPACE, false);
            }
            return true;
        }
        if (action == MotionEvent.ACTION_CANCEL) {
            releaseNativeKeys();
            return true;
        }
        return true;
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
    /** Release every held key when focus or the activity changes state. */
    private void releaseNativeKeys() {
        holdLeft = holdRight = holdUp = holdDown = holdSpace = false;
        activeTouchPointerId = MotionEvent.INVALID_POINTER_ID;
        try {
            synchronized (nativeLock) {
                nativeRuntimeKey(VK_LEFT, false);
                nativeRuntimeKey(VK_RIGHT, false);
                nativeRuntimeKey(VK_UP, false);
                nativeRuntimeKey(VK_DOWN, false);
                nativeRuntimeKey(VK_SPACE, false);
                nativeRuntimeKey(VK_ENTER, false);
                if (nativeMouseDown) nativeRuntimeMouse(nativeMouseX, nativeMouseY, 0, false);
                nativeMouseDown = false;
            }
        } catch (Throwable t) {
            Log.w(TAG, "Unable to release native input", t);
        }
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
    @Override public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (!hasFocus && nativePlayerVisible) {
            releaseNativeKeys();
        }
    }

    @Override protected void onActivityResult(int requestCode, int resultCode, Intent data) {
        super.onActivityResult(requestCode, resultCode, data);
        if (requestCode == GM82_FOLDER_REQUEST || requestCode == GMX_FOLDER_REQUEST) {
            if (resultCode != RESULT_OK || data == null || data.getData() == null) return;
            final boolean gm82Folder = requestCode == GM82_FOLDER_REQUEST;
            final Uri treeUri = data.getData();
            final int takeFlags = Intent.FLAG_GRANT_READ_URI_PERMISSION;
            try { getContentResolver().takePersistableUriPermission(treeUri, takeFlags); }
            catch (Exception ignored) { /* transient access is still sufficient for this copy */ }
            try {
                importExecutor.execute(() -> {
                    TreeImportResult copied = copyDocumentTreeToImports(treeUri, gm82Folder ? "gm82_import" : "gmx_import");
                    runOnUiThread(() -> {
                        if (isFinishing()) return;
                        if (copied.path.isEmpty()) {
                            Toast.makeText(this, "تعذر نسخ مجلد المشروع المحدد", Toast.LENGTH_LONG).show();
                        } else if (gm82Folder) {
                            dispatchGm82FolderPicked(copied);
                        } else {
                            dispatchGmxFolderPicked(copied.path);
                        }
                    });
                });
            } catch (RuntimeException rejected) {
                Log.w(TAG, "Folder import worker is unavailable", rejected);
                Toast.makeText(this, "تعذر فتح مجلد المشروع", Toast.LENGTH_LONG).show();
            }
            return;
        }
        if (requestCode != FILE_CHOOSER_REQUEST) return;
        final ValueCallback<Uri[]> callback = pendingFileCallback;
        pendingFileCallback = null;
        Uri[] results = (resultCode == RESULT_OK && data != null)
                ? WebChromeClient.FileChooserParams.parseResult(resultCode, data) : null;

        if (awaitingGmxGmzPicker) {
            awaitingGmxGmzPicker = false;
            if (results == null || results.length == 0) return;
            final Uri selectedArchive = results[0];
            try {
                importExecutor.execute(() -> {
                    final String stagedPath = stageGmxGmzArchive(selectedArchive);
                    runOnUiThread(() -> {
                        if (isFinishing()) return;
                        if (stagedPath.isEmpty()) {
                            Toast.makeText(this, "تعذر استيراد الأرشيف: استخدم ملف GMZ/ZIP صالحاً حتى 64 MiB", Toast.LENGTH_LONG).show();
                        } else {
                            dispatchGmxGmzPicked(stagedPath);
                        }
                    });
                });
            } catch (RuntimeException rejected) {
                Log.w(TAG, "GMZ import worker is unavailable", rejected);
                Toast.makeText(this, "تعذر فتح الأرشيف", Toast.LENGTH_LONG).show();
            }
            return;
        }

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

    private File getGmxImportsRoot() { return new File(getFilesDir(), "imports"); }
    private File getGmxStagingRoot() { return new File(getCacheDir(), "gmx-staging"); }

    private static boolean isWithinDirectory(File candidate, File root) throws IOException {
        String rootPath = root.getCanonicalPath();
        String candidatePath = candidate.getCanonicalPath();
        return candidatePath.equals(rootPath) || candidatePath.startsWith(rootPath + File.separator);
    }

    private String stageGmxGmzArchive(Uri uri) {
        String displayName = getDisplayName(uri);
        if (displayName == null || !displayName.toLowerCase(Locale.ROOT).matches(".*\\.(gmz|zip)$")) return "";
        File root = getGmxStagingRoot();
        if (!root.exists() && !root.mkdirs()) return "";
        String safeName = displayName.replaceAll("[^A-Za-z0-9._-]", "_");
        File staged = new File(root, System.currentTimeMillis() + "_" + safeName);
        try (InputStream in = getContentResolver().openInputStream(uri);
             OutputStream out = new FileOutputStream(staged)) {
            if (in == null) throw new IOException("Archive stream unavailable");
            byte[] buffer = new byte[64 * 1024];
            int total = 0, read;
            while ((read = in.read(buffer)) != -1) {
                total += read;
                if (total > MAX_GMZ_BYTES) throw new IOException("Archive exceeds limit");
                out.write(buffer, 0, read);
            }
            return staged.getCanonicalPath();
        } catch (Exception error) {
            Log.w(TAG, "Unable to stage GMZ archive", error);
            if (staged.exists()) staged.delete();
            return "";
        }
    }

    private void dispatchGmxGmzPicked(String archivePath) {
        if (webView == null || archivePath == null || archivePath.isEmpty()) return;
        String quoted = JSONObject.quote(archivePath);
        webView.evaluateJavascript("if (typeof window.__norGmxGmzPicked === 'function') { window.__norGmxGmzPicked(" + quoted + "); }", null);
    }

    private static final class TreeImportResult {
        String path = "";
        int filesRead = 0;
        int readErrors = 0;
        long bytesRead = 0;
        boolean hasGm82Manifest = false;
    }

    private void dispatchGm82FolderPicked(TreeImportResult result) {
        if (webView == null || result == null || result.path.isEmpty()) return;
        String diagnostics = "{\"filesRead\":" + result.filesRead + ",\"readErrors\":" + result.readErrors
                + ",\"manifestPath\":\"" + (result.hasGm82Manifest ? "present" : "missing") + "\"}";
        webView.evaluateJavascript("if (typeof window.__norGm82FolderPicked === 'function') { window.__norGm82FolderPicked("
                + JSONObject.quote(result.path) + "," + diagnostics + "); }", null);
    }

    private void dispatchGmxFolderPicked(String path) {
        if (webView == null || path == null || path.isEmpty()) return;
        webView.evaluateJavascript("if (typeof window.__norGmxGmzFolderPicked === 'function') { window.__norGmxGmzFolderPicked("
                + JSONObject.quote(path) + "); }", null);
    }

    private TreeImportResult copyDocumentTreeToImports(Uri treeUri, String prefix) {
        TreeImportResult result = new TreeImportResult();
        File importsRoot = getGmxImportsRoot();
        File target = new File(importsRoot, prefix + "_" + System.currentTimeMillis());
        try {
            if (!importsRoot.exists() && !importsRoot.mkdirs()) return result;
            if (!isWithinDirectory(target, importsRoot) || target.getCanonicalPath().equals(importsRoot.getCanonicalPath()) || !target.mkdirs()) return result;
            String rootDocumentId = DocumentsContract.getTreeDocumentId(treeUri);
            copyDocumentChildren(treeUri, rootDocumentId, target, target, result);
            if (result.filesRead == 0 || result.readErrors != 0) throw new IOException("Folder did not copy cleanly");
            result.path = target.getCanonicalPath();
            return result;
        } catch (Exception error) {
            Log.w(TAG, "Unable to copy document tree", error);
            try { if (target.exists()) deleteImportTree(target, importsRoot); } catch (Exception ignored) { }
            result.path = "";
            return result;
        }
    }

    private void copyDocumentChildren(Uri treeUri, String parentDocumentId, File targetRoot, File target,
                                      TreeImportResult result) throws IOException {
        Uri childrenUri = DocumentsContract.buildChildDocumentsUriUsingTree(treeUri, parentDocumentId);
        String[] projection = {DocumentsContract.Document.COLUMN_DOCUMENT_ID, DocumentsContract.Document.COLUMN_DISPLAY_NAME,
                DocumentsContract.Document.COLUMN_MIME_TYPE, DocumentsContract.Document.COLUMN_SIZE};
        try (Cursor cursor = getContentResolver().query(childrenUri, projection, null, null, null)) {
            if (cursor == null) throw new IOException("Cannot enumerate selected folder");
            int idColumn = cursor.getColumnIndexOrThrow(DocumentsContract.Document.COLUMN_DOCUMENT_ID);
            int nameColumn = cursor.getColumnIndexOrThrow(DocumentsContract.Document.COLUMN_DISPLAY_NAME);
            int mimeColumn = cursor.getColumnIndexOrThrow(DocumentsContract.Document.COLUMN_MIME_TYPE);
            int sizeColumn = cursor.getColumnIndexOrThrow(DocumentsContract.Document.COLUMN_SIZE);
            while (cursor.moveToNext()) {
                String documentId = cursor.getString(idColumn);
                String rawName = cursor.getString(nameColumn);
                String mime = cursor.getString(mimeColumn);
                String name = rawName == null ? "" : rawName;
                if (name.isEmpty() || ".".equals(name) || "..".equals(name) || name.contains("/") || name.contains("\\"))
                    throw new IOException("Unsafe document name");
                File destination = new File(target, name);
                if (!isWithinDirectory(destination, targetRoot)) throw new IOException("Document escapes target");
                if (DocumentsContract.Document.MIME_TYPE_DIR.equals(mime)) {
                    if (!destination.mkdirs() && !destination.isDirectory()) throw new IOException("Cannot create directory");
                    copyDocumentChildren(treeUri, documentId, targetRoot, destination, result);
                    continue;
                }
                if (++result.filesRead > MAX_GMZ_FILE_COUNT) throw new IOException("Too many files");
                long declared = cursor.isNull(sizeColumn) ? -1L : cursor.getLong(sizeColumn);
                if (declared > MAX_GMZ_FILE_BYTES || (declared >= 0 && result.bytesRead + declared > MAX_GMZ_EXPOSED_BYTES))
                    throw new IOException("Selected file exceeds import limit");
                Uri documentUri = DocumentsContract.buildDocumentUriUsingTree(treeUri, documentId);
                long copied = 0;
                try (InputStream in = getContentResolver().openInputStream(documentUri);
                     OutputStream out = new FileOutputStream(destination)) {
                    if (in == null) throw new IOException("Document stream unavailable");
                    byte[] buffer = new byte[64 * 1024]; int read;
                    while ((read = in.read(buffer)) != -1) {
                        copied += read;
                        if (copied > MAX_GMZ_FILE_BYTES || result.bytesRead + copied > MAX_GMZ_EXPOSED_BYTES)
                            throw new IOException("Selected folder exceeds import limit");
                        out.write(buffer, 0, read);
                    }
                } catch (IOException error) {
                    destination.delete();
                    result.readErrors++;
                    throw error;
                }
                result.bytesRead += copied;
                if (name.toLowerCase(Locale.ROOT).endsWith(".gm82")) result.hasGm82Manifest = true;
            }
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


    private String saveExportBytes(byte[] data, String requestedName, String mime) {
        if (data == null) return "";
        String name = requestedName == null ? "export.bin" : new File(requestedName).getName();
        name = name.replaceAll("[^A-Za-z0-9._-]", "_");
        if (mime == null || mime.length() == 0) mime = "application/octet-stream";
        try {
            if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
                ContentValues values = new ContentValues();
                values.put(MediaStore.MediaColumns.DISPLAY_NAME, name);
                values.put(MediaStore.MediaColumns.MIME_TYPE, mime);
                values.put(MediaStore.MediaColumns.RELATIVE_PATH, Environment.DIRECTORY_DOWNLOADS + "/NORMaker");
                values.put(MediaStore.MediaColumns.IS_PENDING, 1);
                Uri uri = getContentResolver().insert(MediaStore.Downloads.EXTERNAL_CONTENT_URI, values);
                if (uri == null) throw new IllegalStateException("insert failed");
                try (OutputStream out = getContentResolver().openOutputStream(uri)) {
                    if (out == null) throw new IllegalStateException("stream null");
                    out.write(data);
                }
                values.clear();
                values.put(MediaStore.MediaColumns.IS_PENDING, 0);
                getContentResolver().update(uri, values, null, null);
                return uri.toString();
            }
            File dir = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_DOWNLOADS);
            if (dir == null) dir = getFilesDir();
            File folder = new File(dir, "NORMaker");
            if (!folder.exists() && !folder.mkdirs()) folder = dir;
            File file = new File(folder, name);
            try (FileOutputStream out = new FileOutputStream(file)) { out.write(data); }
            return file.getAbsolutePath();
        } catch (Exception e) {
            Log.e(TAG, "export bytes failed", e);
            return "";
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

    private void drainNativeSoundCommands() {
        if (soundPool == null) return;
        try {
            JSONArray commands = new JSONArray(nativeRuntimeConsumeSoundCommands());
            for (int i = 0; i < commands.length(); i++) {
                JSONArray command = commands.optJSONArray(i);
                if (command == null || command.length() < 5) continue;
                int kind = command.optInt(0, 0), soundId = command.optInt(1, -1);
                int loop = command.optInt(2, 0);
                float volume = (float) command.optDouble(4, 1.0);
                Integer resource = soundResources.get(soundId);
                if (kind == 1 && resource != null) {
                    int stream = soundPool.play(resource, volume, volume, 1, loop != 0 ? -1 : 0, 1.0f);
                    if (stream != 0) soundStreams.put(soundId, stream);
                } else if (kind == 2) {
                    Integer stream = soundStreams.remove(soundId);
                    if (stream != null) soundPool.stop(stream);
                } else if (kind == 3) {
                    Integer stream = soundStreams.get(soundId);
                    if (stream != null) soundPool.setVolume(stream, volume, volume);
                }
            }
        } catch (Exception ignored) { }
    }
    private boolean registerSoundResource(int soundId, String path) {
        if (soundPool == null || soundId < 0 || path == null || path.length() == 0) return false;
        try {
            Integer old = soundResources.remove(soundId);
            if (old != null) soundPool.unload(old);
            int resource = soundPool.load(path, 1);
            if (resource == 0) return false;
            soundResources.put(soundId, resource);
            return true;
        } catch (Exception ignored) { return false; }
    }
    private void clearSoundResources() {
        if (soundPool == null) return;
        for (Integer stream : soundStreams.values()) soundPool.stop(stream);
        soundStreams.clear();
        for (Integer resource : soundResources.values()) soundPool.unload(resource);
        soundResources.clear();
    }
    private void releaseSoundResources() {
        if (soundPool == null) return;
        clearSoundResources();
        soundPool.release();
        soundPool = null;
    }
    private static String mimeForName(String name) {
        String n = name.toLowerCase(Locale.ROOT);
        if (n.endsWith(".png")) return "image/png";
        if (n.endsWith(".jpg") || n.endsWith(".jpeg")) return "image/jpeg";
        if (n.endsWith(".wav")) return "audio/wav";
        if (n.endsWith(".mp3")) return "audio/mpeg";
        if (n.endsWith(".ogg")) return "audio/ogg";
        if (n.endsWith(".gmx") || n.endsWith(".gml")) return "text/plain";
        return "application/octet-stream";
    }
    private static final class GmxReadBudget {
        int fileCount = 0;
        long bytes = 0;
    }

    private static void collectGmxFiles(File root, File current, JSONArray out, GmxReadBudget budget) throws Exception {
        if (!isWithinDirectory(current, root)) throw new IOException("Path escapes import root");
        File[] children = current.listFiles();
        if (children == null) return;
        for (File file : children) {
            if (!isWithinDirectory(file, root)) throw new IOException("Symlink escapes import root");
            if (file.isDirectory()) { collectGmxFiles(root, file, out, budget); continue; }
            if (!file.isFile()) continue;
            long length = file.length();
            if (length < 0 || length > MAX_GMZ_FILE_BYTES) throw new IOException("GMZ file exceeds limit");
            if (++budget.fileCount > MAX_GMZ_FILE_COUNT || budget.bytes + length > MAX_GMZ_EXPOSED_BYTES)
                throw new IOException("GMZ extraction exceeds limit");
            budget.bytes += length;
            try (InputStream in = new java.io.FileInputStream(file); ByteArrayOutputStream bytes = new ByteArrayOutputStream((int) length)) {
                byte[] buffer = new byte[8192]; int n;
                while ((n = in.read(buffer)) >= 0) if (n > 0) bytes.write(buffer, 0, n);
                JSONObject item = new JSONObject();
                item.put("name", file.getName());
                item.put("webkitRelativePath", root.toURI().relativize(file.toURI()).getPath());
                item.put("type", mimeForName(file.getName()));
                item.put("dataUrl", "data:" + mimeForName(file.getName()) + ";base64," + Base64.encodeToString(bytes.toByteArray(), Base64.NO_WRAP));
                out.put(item);
            }
        }
    }

    private static boolean deleteImportTree(File file, File root) throws IOException {
        if (!isWithinDirectory(file, root)) return false;
        if (file.isDirectory()) {
            File[] children = file.listFiles();
            if (children != null) for (File child : children) if (!deleteImportTree(child, root)) return false;
        }
        return file.delete();
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
        @JavascriptInterface public String saveExportBase64(String base64, String filename, String mime) {
            try {
                if (base64 == null || base64.length() == 0) return "";
                byte[] data = android.util.Base64.decode(base64, android.util.Base64.DEFAULT);
                return saveExportBytes(data, filename, mime);
            } catch (Exception e) {
                Log.e(TAG, "saveExportBase64 failed", e);
                return "";
            }
        }

        @JavascriptInterface public String runRuntimeSmokeTest() {
            if (!BuildConfig.DEBUG) return "{\"enabled\":false}";
            synchronized (nativeLock) {
            boolean created = nativeRuntimeCreate(320, 240);
            int id = created ? nativeRuntimeAddInstance(1, -1, 1, 1, 1, 10f, 20f, 30f, 0f) : -1;
            String before = nativeRuntimeSnapshotJson(); nativeRuntimeStep(0.1f);
            String moved = nativeRuntimeSnapshotJson();
            nativeRuntimeSetRoom(2, 160, 120, true); String room = nativeRuntimeSnapshotJson();
            nativeRuntimeDestroy(); boolean recreated = nativeRuntimeCreate(64, 64);
            String fresh = nativeRuntimeSnapshotJson(); nativeRuntimeDestroy();
            boolean movedForward = moved != null && !moved.equals(before);
            boolean roomChanged = room != null && room.contains("\"room\":2");
            boolean clean = fresh != null && !fresh.contains("\"instances\":[{");
            return "{\"created\":" + created + ",\"instanceId\":" + id + ",\"moved\":" + movedForward + ",\"roomChanged\":" + roomChanged + ",\"recreated\":" + recreated + ",\"clean\":" + clean + "}";
            }
        }
        @JavascriptInterface public void pickGmxGmz() {
            runOnUiThread(() -> {
                Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
                intent.addCategory(Intent.CATEGORY_OPENABLE);
                intent.setType("application/zip");
                intent.putExtra(Intent.EXTRA_MIME_TYPES, new String[]{"application/zip", "application/octet-stream"});
                awaitingGmxGmzPicker = true;
                try { startActivityForResult(intent, FILE_CHOOSER_REQUEST); }
                catch (Exception ignored) { awaitingGmxGmzPicker = false; }
            });
        }
        @JavascriptInterface public void pickGm82Folder() { pickProjectFolder(GM82_FOLDER_REQUEST); }
        @JavascriptInterface public void pickGmxGmzFolder() { pickProjectFolder(GMX_FOLDER_REQUEST); }
        private void pickProjectFolder(int requestCode) {
            runOnUiThread(() -> {
                Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT_TREE);
                intent.addFlags(Intent.FLAG_GRANT_READ_URI_PERMISSION | Intent.FLAG_GRANT_PERSISTABLE_URI_PERMISSION);
                try { startActivityForResult(intent, requestCode); }
                catch (Exception error) { Log.w(TAG, "Folder picker unavailable", error); }
            });
        }
        @JavascriptInterface public void step(float delta) { synchronized (nativeLock) { nativeRuntimeStep(delta); drainNativeSoundCommands(); } }
        @JavascriptInterface public boolean registerSound(int soundId, String path) { return registerSoundResource(soundId, path); }
        @JavascriptInterface public void clearSounds() { clearSoundResources(); }
        @JavascriptInterface public String snapshot() { synchronized (nativeLock) { return nativeRuntimeSnapshotJson(); } }
        @JavascriptInterface public boolean registerEvent(int objectId, int mainType, int subType, String source) { synchronized (nativeLock) { return nativeRuntimeRegisterEvent(objectId, mainType, subType, source); } }
        @JavascriptInterface public boolean registerObject(int objectId, String name) { synchronized (nativeLock) { return nativeRuntimeRegisterObject(objectId, name); } }
        @JavascriptInterface public boolean registerScript(String name, String source) { synchronized (nativeLock) { return nativeRuntimeRegisterScript(name, source); } }
        @JavascriptInterface public void clearScripts() { synchronized (nativeLock) { nativeRuntimeClearScripts(); } }
        @JavascriptInterface public boolean setSpriteBitmapBase64(int spriteId, int frame, int width, int height, String rgbaBase64) {
            if (rgbaBase64 == null || rgbaBase64.length() == 0) return false;
            try { synchronized (nativeLock) { return nativeRuntimeSetSpriteBitmap(spriteId, frame, width, height, Base64.decode(rgbaBase64, Base64.DEFAULT)); } }
            catch (IllegalArgumentException error) { return false; }
        }
        @JavascriptInterface public void clearRoomTransient() { synchronized (nativeLock) { nativeRuntimeClearRoomTransient(); } }
        @JavascriptInterface public String consumeSoundCommands() { synchronized (nativeLock) { return nativeRuntimeConsumeSoundCommands(); } }
        @JavascriptInterface public int room() { synchronized (nativeLock) { return nativeRuntimeGetRoom(); } }
        @JavascriptInterface public int resourceCount() { synchronized (nativeLock) { return nativeResourceCount(); } }
        @JavascriptInterface public String coreIdentity() { return nativeCoreIdentity(); }
        private byte[] decodeBoundedGmkBase64(String base64) {
            if (base64 == null || base64.length() == 0 || base64.length() > MAX_GMK_BYTES * 2) return null;
            try {
                byte[] bytes = Base64.decode(base64, Base64.DEFAULT);
                return bytes.length <= MAX_GMK_BYTES ? bytes : null;
            } catch (IllegalArgumentException invalid) { return null; }
        }
        @JavascriptInterface public boolean validateGmk(byte[] bytes) { return nativeValidateGmk(bytes); }
        @JavascriptInterface public String gmkResourceManifestBase64(String base64) {
            byte[] bytes = decodeBoundedGmkBase64(base64);
            if (bytes == null) return "";
            synchronized (nativeLock) { return nativeGmkResourceManifest(bytes); }
        }
        @JavascriptInterface public String importGmkSnapshotBase64(String base64) {
            byte[] bytes = decodeBoundedGmkBase64(base64);
            if (bytes == null) return "{\"ok\":false,\"error\":\"invalid_input\"}";
            synchronized (nativeLock) {
                String result = nativeImportGmkSnapshot(bytes, getFilesDir().getAbsolutePath());
                nativeProjectLoaded = result != null && result.contains("\"complete\":true");
                return result == null ? "{\"ok\":false,\"error\":\"native_import_failed\"}" : result;
            }
        }
        @JavascriptInterface public String gmkHeaderJson(byte[] bytes) { return nativeGmkHeaderJson(bytes); }
        @JavascriptInterface public String gmkLayoutJson(byte[] bytes) { return nativeGmkLayoutJson(bytes); }
        @JavascriptInterface public String gmkChunkInventory(byte[] bytes) { return nativeGmkChunkInventory(bytes); }
        @JavascriptInterface public String gmkResourceManifest(byte[] bytes) { return nativeGmkResourceManifest(bytes); }
        @JavascriptInterface public String importGmxGmzToApp(String archivePath, String folderName) {
            if (archivePath == null || archivePath.length() == 0) return "";
            String safeName = (folderName == null || folderName.length() == 0 ? "gmx_import" : folderName).replaceAll("[^A-Za-z0-9._-]", "_");
            if (safeName.isEmpty() || ".".equals(safeName) || "..".equals(safeName)) return "";
            File importsRoot = getGmxImportsRoot();
            File stagingRoot = getGmxStagingRoot();
            File archive = new File(archivePath);
            File target = new File(importsRoot, safeName);
            try {
                if (!archive.isFile() || !isWithinDirectory(archive, stagingRoot)) return "";
                if (!importsRoot.exists() && !importsRoot.mkdirs()) return "";
                if (!isWithinDirectory(target, importsRoot) || target.getCanonicalPath().equals(importsRoot.getCanonicalPath())) return "";
                if (target.exists() && !deleteImportTree(target, importsRoot)) return "";
                if (!target.mkdirs()) return "";
                return nativeImportGmxGmz(archive.getCanonicalPath(), target.getCanonicalPath()) != 0 ? target.getCanonicalPath() : "";
            } catch (Exception error) {
                Log.w(TAG, "Native GMZ import rejected", error);
                return "";
            }
        }
        @JavascriptInterface public String readGmxGmzFiles(String extractedDir) {
            try {
                File importsRoot = getGmxImportsRoot();
                File root = new File(extractedDir);
                if (!root.isDirectory() || !isWithinDirectory(root, importsRoot)) return "";
                JSONObject payload = new JSONObject();
                JSONArray files = new JSONArray();
                collectGmxFiles(root, root, files, new GmxReadBudget());
                payload.put("root", root.getCanonicalPath());
                payload.put("files", files);
                return payload.toString();
            } catch (Exception error) {
                Log.w(TAG, "GMZ file enumeration rejected", error);
                return "";
            }
        }
        /** Downloads only catalog-pinned HTTPS hosts; every redirect is revalidated. */
        @JavascriptInterface public String downloadCloudGmkBase64(String sourceUrl) {
            if (sourceUrl == null) return "";
            URL current;
            try { current = new URL(sourceUrl); } catch (Exception invalid) { return ""; }
            for (int redirectCount = 0; redirectCount <= 3; redirectCount++) {
                if (!isAllowedCloudGmkUrl(current)) return "";
                HttpURLConnection connection = null;
                try {
                    connection = (HttpURLConnection) current.openConnection();
                    connection.setInstanceFollowRedirects(false);
                    connection.setConnectTimeout(15000);
                    connection.setReadTimeout(60000);
                    connection.setRequestProperty("User-Agent", "NOR-Maker-Android/1.0");
                    int status = connection.getResponseCode();
                    if (status >= 300 && status < 400) {
                        String location = connection.getHeaderField("Location");
                        if (location == null || location.isEmpty()) return "";
                        current = new URL(current, location);
                        continue;
                    }
                    if (status < 200 || status >= 300) return "";
                    long declared = -1;
                    if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.N) {
                        declared = connection.getContentLengthLong();
                    } else {
                        declared = (long) connection.getContentLength();
                    }
                    if (declared > MAX_GMK_BYTES) return "";
                    try (InputStream in = connection.getInputStream(); ByteArrayOutputStream out = new ByteArrayOutputStream((int) Math.max(8192L, declared))) {
                        byte[] chunk = new byte[64 * 1024];
                        int total = 0, n;
                        while ((n = in.read(chunk)) != -1) {
                            total += n;
                            if (total > MAX_GMK_BYTES) return "";
                            out.write(chunk, 0, n);
                        }
                        return total > 100 ? Base64.encodeToString(out.toByteArray(), Base64.NO_WRAP) : "";
                    }
                } catch (Throwable error) {
                    Log.w(TAG, "Cloud GMK native download failed: " + current, error);
                    return "";
                } finally {
                    if (connection != null) connection.disconnect();
                }
            }
            return "";
        }
    }

    @Override public void onBackPressed() {
        if (nativePlayerVisible) { showStudio(); return; }
        if (webView != null && webView.canGoBack()) { webView.goBack(); return; }
        super.onBackPressed();
    }

    @Override protected void onPause() {
        stopEngineRecording(false);
        loopHandler.removeCallbacks(nativeFrameLoop);
        releaseNativeKeys();
        if (webView != null) webView.onPause();
        super.onPause();
    }

    @Override protected void onResume() {
        super.onResume();
        if (webView != null) webView.onResume();
        if (nativePlayerVisible) loopHandler.post(nativeFrameLoop);
    }

    @Override protected void onDestroy() {
        stopEngineRecording(false);
        loopHandler.removeCallbacks(nativeFrameLoop);
        releaseNativeKeys();
        if (pendingFileCallback != null) { pendingFileCallback.onReceiveValue(null); pendingFileCallback = null; }
        if (webView != null) {
            webView.removeJavascriptInterface("NorNative");
            webView.destroy();
            webView = null;
        }
        importExecutor.shutdownNow();
        releaseSoundResources();
        try { nativeRuntimeDestroy(); } catch (Throwable ignored) {}
        if (frameBitmap != null && !frameBitmap.isRecycled()) { frameBitmap.recycle(); frameBitmap = null; }
        super.onDestroy();
    }
}
