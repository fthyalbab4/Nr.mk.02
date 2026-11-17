package com.normaker.nativefull;

import android.app.Activity;
import android.app.AlertDialog;
import android.content.ContentValues;
import android.content.Intent;
import android.database.Cursor;
import android.graphics.Bitmap;
import android.graphics.Color;
import android.graphics.Typeface;
import android.graphics.drawable.GradientDrawable;
import android.media.AudioAttributes;
import android.media.SoundPool;
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
import android.widget.HorizontalScrollView;
import android.widget.ImageView;
import android.widget.LinearLayout;
import android.widget.ScrollView;
import android.widget.TextView;
import android.widget.Toast;

import com.normaker.gm82.Gm82SurfaceView;

import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
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
    private static final int VK_LEFT = 37;
    private static final int VK_UP = 38;
    private static final int VK_RIGHT = 39;
    private static final int VK_DOWN = 40;
    private static final int VK_SPACE = 32;
    private static final int VK_ENTER = 13;
    private static final int MAX_GMK_BYTES = 128 * 1024 * 1024;
    private static final long TARGET_FPS = 90;
    private static final long FRAME_MS = 1000 / TARGET_FPS;

    private final Object nativeLock = new Object();
    private final ExecutorService importExecutor = Executors.newSingleThreadExecutor();
    private final android.os.Handler loopHandler = new android.os.Handler(android.os.Looper.getMainLooper());
    private WebView webView;
    private FrameLayout playerViewport;
    private ImageView nativeGameView;
    private Gm82SurfaceView nativeGlView;
    private HorizontalScrollView playerTopBarScroll;
    private Button nativePlayButton;
    private Button returnToStudioButton;
    private Button backendToggleButton;
    private Button gamepadToggleButton;
    private Button diagToggleButton;
    private Button engineRecordButton;
    private FrameLayout virtualControllerOverlay;
    private TextView dpadUpBtn, dpadDownBtn, dpadLeftBtn, dpadRightBtn, actionABtn, actionBBtn;
    private LinearLayout diagnosticsDrawer;
    private TextView diagSummaryText;
    private TextView diagUnmappedText;
    private EngineVideoRecorder engineVideoRecorder;
    private Bitmap frameBitmap;
    private ValueCallback<Uri[]> pendingFileCallback;
    private volatile boolean nativeProjectLoaded = false;
    private volatile boolean nativePlayerVisible = false;
    private volatile boolean useGlesBackend = true;
    private volatile boolean virtualPadVisible = true;
    private volatile boolean diagnosticsExpanded = false;
    private volatile boolean uiDialogShowing = false;
    private volatile int currentFps = 0;
    private int fpsSampleFrames = 0;
    private long fpsSampleStartNanos = 0;
    private long lastFrameNanos;
    private long lastGlFrameNanos;
    private boolean holdLeft, holdRight, holdUp, holdDown, holdSpace, holdEnter;
    private boolean touchLeft, touchRight, touchUp, touchDown, touchA, touchB;
    private SoundPool soundPool;
    private final Map<Integer, Integer> soundResources = new HashMap<>();
    private final Map<Integer, Integer> soundStreams = new HashMap<>();

    public static native String nativeCoreIdentity();
    public static native String nativeImportGmkSnapshot(byte[] bytes, String outputDir);
    public static native String nativeImportGm82Project(String dirPath);
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
    public static native void nativeRuntimeInitGles();
    public static native boolean nativeRuntimeDrawGles(int viewW, int viewH);
    public static native String nativeRuntimeDiagnosticsJson(String backend, int soundpoolCount, int fps);
    public static native void nativeRuntimeClearDiagnostics();
    public static native boolean nativeIsOpenSlesActive();
    public static native int nativeRuntimeGetRoomWidth();
    public static native int nativeRuntimeGetRoomHeight();
    public static native String nativeRuntimeConsumeUiEvents();
    public static native void nativeRuntimeSetQuestionAnswer(boolean yes);

    static {
        try {
            System.loadLibrary("gm82_android");
        } catch (Throwable t) {
            Log.e(TAG, "Could not load gm82_android", t);
        }
    }

    private void recordFpsSample(long nowNanos) {
        fpsSampleFrames++;
        if (fpsSampleStartNanos == 0) {
            fpsSampleStartNanos = nowNanos;
            return;
        }
        long elapsed = nowNanos - fpsSampleStartNanos;
        if (elapsed >= 500_000_000L) {
            currentFps = (int) Math.round((fpsSampleFrames * 1_000_000_000.0) / elapsed);
            fpsSampleFrames = 0;
            fpsSampleStartNanos = nowNanos;
        }
    }

    private final Runnable diagRefreshRunnable = new Runnable() {
        @Override public void run() {
            if (!nativePlayerVisible) return;
            drainNativeUiEvents();
            updateDiagButtonLabel();
            if (diagnosticsExpanded) refreshDiagnosticsHud();
            loopHandler.postDelayed(this, 500);
        }
    };

    private final Runnable nativeFrameLoop = new Runnable() {
        @Override public void run() {
            if (!nativePlayerVisible || useGlesBackend) return;
            long now = System.nanoTime();
            float dt = lastFrameNanos == 0 ? 1.0f / TARGET_FPS : (now - lastFrameNanos) / 1_000_000_000.0f;
            if (dt <= 0.0001f || dt > 0.1f) dt = 1.0f / TARGET_FPS;
            lastFrameNanos = now;
            try {
                synchronized (nativeLock) {
                    nativeRuntimeStep(dt);
                    drainNativeSoundCommands();
                    ensureFrameBitmapSize();
                    if (frameBitmap != null) nativeRuntimeRenderBitmap(frameBitmap);
                }
                if (frameBitmap != null && engineVideoRecorder != null && engineVideoRecorder.isRecording())
                    engineVideoRecorder.writeFrame(frameBitmap);
                if (nativeGameView != null && frameBitmap != null) nativeGameView.setImageBitmap(frameBitmap);
                recordFpsSample(now);
            } catch (Throwable t) {
                Log.w(TAG, "native frame failed", t);
            }
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
            nativeRuntimeCreate(ROOM_W, ROOM_H);
            autoLoadDefaultSampleGame();
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
        settings.setAllowFileAccessFromFileURLs(true);
        // The Studio is a bundled, trusted file:// app and its cloud catalog uses
        // HTTPS GMK sources. Keep native download as the primary path, but allow
        // the WebView fallback to reach those sources when native networking is
        // unavailable on a device.
        settings.setAllowUniversalAccessFromFileURLs(true);
        settings.setMediaPlaybackRequiresUserGesture(false);
        settings.setSupportMultipleWindows(false);
        webView.addJavascriptInterface(new StudioNativeBridge(), "NorNative");
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.KITKAT) {
            WebView.setWebContentsDebuggingEnabled(true);
        }
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
            @Override public void onReceivedError(WebView view, android.webkit.WebResourceRequest request, android.webkit.WebResourceError error) {
                if (request != null && request.isForMainFrame()) {
                    Log.e(TAG, "WebView main frame error: " + (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M ? error.getDescription() : "unknown"));
                }
            }
            @Override public void onReceivedHttpError(WebView view, android.webkit.WebResourceRequest request, android.webkit.WebResourceResponse errorResponse) {
                if (request != null && request.isForMainFrame()) {
                    Log.e(TAG, "WebView HTTP error: " + (Build.VERSION.SDK_INT >= Build.VERSION_CODES.LOLLIPOP ? errorResponse.getStatusCode() : 0));
                }
            }
        });
        webView.setWebChromeClient(new WebChromeClient() {
            @Override public boolean onConsoleMessage(android.webkit.ConsoleMessage cm) {
                if (cm != null) {
                    android.webkit.ConsoleMessage.MessageLevel lvl = cm.messageLevel();
                    String msg = "[WebView:" + cm.lineNumber() + "] " + cm.message();
                    if (lvl == android.webkit.ConsoleMessage.MessageLevel.ERROR) Log.e(TAG, msg);
                    else if (lvl == android.webkit.ConsoleMessage.MessageLevel.WARNING) Log.w(TAG, msg);
                    else Log.d(TAG, msg);
                }
                return super.onConsoleMessage(cm);
            }
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
        int controlsInset = dp(56);
        FrameLayout.LayoutParams webParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT);
        webParams.topMargin = controlsInset;
        root.addView(webView, webParams);

        playerViewport = new FrameLayout(this);
        playerViewport.setBackgroundColor(Color.rgb(20, 20, 40));
        playerViewport.setVisibility(View.GONE);
        FrameLayout.LayoutParams viewportParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT);
        viewportParams.topMargin = controlsInset;
        root.addView(playerViewport, viewportParams);

        nativeGameView = new ImageView(this);
        nativeGameView.setScaleType(ImageView.ScaleType.FIT_CENTER);
        nativeGameView.setBackgroundColor(Color.rgb(20, 20, 40));
        nativeGameView.setFocusable(true);
        nativeGameView.setFocusableInTouchMode(true);
        nativeGameView.setOnTouchListener((v, event) -> handleViewportTouch(v, event));
        nativeGameView.setVisibility(View.GONE);
        playerViewport.addView(nativeGameView, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));

        nativeGlView = new Gm82SurfaceView(this);
        nativeGlView.setHostRenderer(new Gm82SurfaceView.HostRenderer() {
            @Override public void onHostSurfaceCreated() {
                synchronized (nativeLock) {
                    nativeRuntimeInitGles();
                }
            }

            @Override public void onHostSurfaceChanged(int width, int height) {
                // Aspect ratio is handled per-frame inside nativeRuntimeDrawGles(width, height).
            }

            @Override public void onHostDrawFrame(int width, int height) {
                if (!nativePlayerVisible || !useGlesBackend) return;
                long now = System.nanoTime();
                float dt = lastGlFrameNanos == 0 ? (1.0f / TARGET_FPS) : (now - lastGlFrameNanos) / 1_000_000_000.0f;
                if (dt <= 0.0001f || dt > 0.1f) dt = 1.0f / TARGET_FPS;
                lastGlFrameNanos = now;
                try {
                    synchronized (nativeLock) {
                        nativeRuntimeStep(dt);
                        drainNativeSoundCommands();
                        nativeRuntimeDrawGles(width, height);
                        if (engineVideoRecorder != null && engineVideoRecorder.isRecording()) {
                            ensureFrameBitmapSize();
                            if (frameBitmap != null) {
                                nativeRuntimeRenderBitmap(frameBitmap);
                                engineVideoRecorder.writeFrame(frameBitmap);
                            }
                        }
                    }
                    recordFpsSample(now);
                } catch (Throwable t) {
                    Log.w(TAG, "GLES frame failed", t);
                }
            }
        });
        nativeGlView.setHostTouchListener((v, event) -> handleViewportTouch(v, event));
        nativeGlView.setVisibility(View.GONE);
        nativeGlView.onPause();
        playerViewport.addView(nativeGlView, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.MATCH_PARENT));

        buildVirtualControllerOverlay();
        playerViewport.addView(virtualControllerOverlay, new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, FrameLayout.LayoutParams.WRAP_CONTENT, Gravity.BOTTOM));

        buildDiagnosticsDrawer();
        FrameLayout.LayoutParams diagParams = new FrameLayout.LayoutParams(dp(320), FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.END);
        diagParams.setMargins(dp(8), dp(8), dp(8), dp(8));
        playerViewport.addView(diagnosticsDrawer, diagParams);

        nativePlayButton = new Button(this);
        nativePlayButton.setText("تشغيل GMK الأصلي");
        nativePlayButton.setContentDescription("تشغيل مشروع GMK في المحرك الأصلي");
        nativePlayButton.setMinimumHeight(dp(48));
        nativePlayButton.setOnClickListener(v -> showNativePlayer());
        FrameLayout.LayoutParams playParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.WRAP_CONTENT, FrameLayout.LayoutParams.WRAP_CONTENT,
                Gravity.TOP | Gravity.END);
        playParams.setMargins(0, dp(4), dp(10), 0);
        root.addView(nativePlayButton, playParams);

        playerTopBarScroll = new HorizontalScrollView(this);
        playerTopBarScroll.setHorizontalScrollBarEnabled(false);
        playerTopBarScroll.setVisibility(View.GONE);
        playerTopBarScroll.setBackgroundColor(Color.rgb(15, 23, 42));
        LinearLayout topBarRow = new LinearLayout(this);
        topBarRow.setOrientation(LinearLayout.HORIZONTAL);
        topBarRow.setGravity(Gravity.CENTER_VERTICAL);
        topBarRow.setPadding(dp(8), dp(4), dp(8), dp(4));

        returnToStudioButton = createTopBarButton("العودة للاستوديو", "العودة إلى محرر الاستوديو",
                Color.rgb(51, 65, 85), v -> showStudio());
        backendToggleButton = createTopBarButton("GLES2 ⚡", "تبديل مسار الرسم بين GLES2 و Bitmap",
                Color.rgb(30, 64, 175), v -> toggleRenderBackend());
        gamepadToggleButton = createTopBarButton("🎮 الأزرار", "إظهار أو إخفاء أزرار التحكم اللمسية",
                Color.rgb(15, 118, 110), v -> toggleVirtualPad());
        diagToggleButton = createTopBarButton("التشخيص ▾", "فتح أو طي لوحة تشخيص المحرك",
                Color.rgb(109, 40, 217), v -> toggleDiagnosticsDrawer());
        engineRecordButton = createTopBarButton("● تسجيل", "تسجيل فيديو للعب من إطار المحرك",
                Color.rgb(185, 28, 28), v -> toggleEngineRecording());

        topBarRow.addView(returnToStudioButton);
        topBarRow.addView(backendToggleButton);
        topBarRow.addView(gamepadToggleButton);
        topBarRow.addView(diagToggleButton);
        topBarRow.addView(engineRecordButton);
        playerTopBarScroll.addView(topBarRow);
        FrameLayout.LayoutParams topBarParams = new FrameLayout.LayoutParams(
                FrameLayout.LayoutParams.MATCH_PARENT, controlsInset, Gravity.TOP);
        root.addView(playerTopBarScroll, topBarParams);

        setContentView(root);
        webView.loadUrl("file:///android_asset/www/index.html");
    }

    private int dp(int value) {
        return Math.round(value * getResources().getDisplayMetrics().density);
    }

    private Button createTopBarButton(String label, String contentDesc, int bgColor, View.OnClickListener listener) {
        Button b = new Button(this);
        b.setText(label);
        b.setContentDescription(contentDesc);
        b.setAllCaps(false);
        b.setTextSize(12);
        b.setTextColor(Color.WHITE);
        b.setMinimumHeight(dp(48));
        b.setMinimumWidth(dp(48));
        b.setPadding(dp(12), dp(6), dp(12), dp(6));
        GradientDrawable bg = new GradientDrawable();
        bg.setColor(bgColor);
        bg.setCornerRadius(dp(8));
        b.setBackground(bg);
        LinearLayout.LayoutParams lp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, dp(48));
        lp.setMarginEnd(dp(6));
        b.setLayoutParams(lp);
        b.setOnClickListener(listener);
        return b;
    }

    private TextView createPadKeyView(String label, String contentDesc, int normalColor, boolean round) {
        TextView tv = new TextView(this);
        tv.setText(label);
        tv.setContentDescription(contentDesc);
        tv.setTextColor(Color.WHITE);
        tv.setTextSize(16);
        tv.setTypeface(Typeface.DEFAULT_BOLD);
        tv.setGravity(Gravity.CENTER);
        tv.setMinimumWidth(dp(52));
        tv.setMinimumHeight(dp(52));
        GradientDrawable gd = new GradientDrawable();
        gd.setColor(normalColor);
        gd.setStroke(dp(2), Color.argb(180, 226, 232, 240));
        gd.setCornerRadius(round ? dp(32) : dp(12));
        tv.setBackground(gd);
        return tv;
    }

    private void setPadKeyVisual(TextView tv, boolean pressed, int normalColor, int pressedColor, boolean round) {
        if (tv == null) return;
        GradientDrawable gd = new GradientDrawable();
        gd.setColor(pressed ? pressedColor : normalColor);
        gd.setStroke(dp(2), pressed ? Color.WHITE : Color.argb(170, 226, 232, 240));
        gd.setCornerRadius(round ? dp(32) : dp(12));
        tv.setBackground(gd);
    }

    private void buildVirtualControllerOverlay() {
        virtualControllerOverlay = new FrameLayout(this);
        virtualControllerOverlay.setPadding(dp(14), dp(8), dp(14), dp(16));

        final int dpadSize = dp(168);
        final int btnSize = dp(52);
        final int dpadNormal = Color.argb(145, 15, 23, 42);
        final int dpadPressed = Color.argb(225, 37, 99, 235);

        FrameLayout dpadCluster = new FrameLayout(this);
        dpadCluster.setContentDescription("لوحة الاتجاهات متعددة اللمس");

        dpadUpBtn = createPadKeyView("▲", "أعلى", dpadNormal, false);
        FrameLayout.LayoutParams upLp = new FrameLayout.LayoutParams(btnSize, btnSize, Gravity.TOP | Gravity.CENTER_HORIZONTAL);
        dpadCluster.addView(dpadUpBtn, upLp);

        dpadDownBtn = createPadKeyView("▼", "أسفل", dpadNormal, false);
        FrameLayout.LayoutParams downLp = new FrameLayout.LayoutParams(btnSize, btnSize, Gravity.BOTTOM | Gravity.CENTER_HORIZONTAL);
        dpadCluster.addView(dpadDownBtn, downLp);

        dpadLeftBtn = createPadKeyView("◀", "يسار", dpadNormal, false);
        FrameLayout.LayoutParams leftLp = new FrameLayout.LayoutParams(btnSize, btnSize, Gravity.START | Gravity.CENTER_VERTICAL);
        dpadCluster.addView(dpadLeftBtn, leftLp);

        dpadRightBtn = createPadKeyView("▶", "يمين", dpadNormal, false);
        FrameLayout.LayoutParams rightLp = new FrameLayout.LayoutParams(btnSize, btnSize, Gravity.END | Gravity.CENTER_VERTICAL);
        dpadCluster.addView(dpadRightBtn, rightLp);

        dpadCluster.setOnTouchListener((v, event) -> {
            int action = event.getActionMasked();
            int upIdx = (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP || action == MotionEvent.ACTION_CANCEL)
                    ? event.getActionIndex() : -1;
            boolean nextLeft = false, nextRight = false, nextUp = false, nextDown = false;
            int w = v.getWidth(), h = v.getHeight();
            if (action != MotionEvent.ACTION_CANCEL && w > 0 && h > 0) {
                float cx = w * 0.5f, cy = h * 0.5f;
                float dead = Math.min(w, h) * 0.12f;
                for (int i = 0; i < event.getPointerCount(); i++) {
                    if (i == upIdx && (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP)) continue;
                    float dx = event.getX(i) - cx;
                    float dy = event.getY(i) - cy;
                    if (dx < -dead && Math.abs(dx) >= Math.abs(dy) * 0.55f) nextLeft = true;
                    if (dx > dead && Math.abs(dx) >= Math.abs(dy) * 0.55f) nextRight = true;
                    if (dy < -dead && Math.abs(dy) >= Math.abs(dx) * 0.55f) nextUp = true;
                    if (dy > dead && Math.abs(dy) >= Math.abs(dx) * 0.55f) nextDown = true;
                }
            }
            applyDpadTouchState(nextLeft, nextRight, nextUp, nextDown, dpadNormal, dpadPressed);
            return true;
        });

        FrameLayout.LayoutParams dpadClusterLp = new FrameLayout.LayoutParams(dpadSize, dpadSize, Gravity.BOTTOM | Gravity.START);
        virtualControllerOverlay.addView(dpadCluster, dpadClusterLp);

        final int aNormal = Color.argb(165, 5, 150, 105);
        final int aPressed = Color.argb(235, 16, 185, 129);
        final int bNormal = Color.argb(165, 217, 119, 6);
        final int bPressed = Color.argb(235, 245, 158, 11);

        FrameLayout actionCluster = new FrameLayout(this);
        actionCluster.setContentDescription("أزرار القفز والتنفيذ متعددة اللمس");

        actionBBtn = createPadKeyView("B", "زر الإدخال B", bNormal, true);
        FrameLayout.LayoutParams bLp = new FrameLayout.LayoutParams(dp(56), dp(56), Gravity.BOTTOM | Gravity.START);
        bLp.setMargins(0, 0, 0, dp(6));
        actionCluster.addView(actionBBtn, bLp);

        actionABtn = createPadKeyView("A", "زر القفز A", aNormal, true);
        FrameLayout.LayoutParams aLp = new FrameLayout.LayoutParams(dp(62), dp(62), Gravity.TOP | Gravity.END);
        aLp.setMargins(0, dp(4), 0, 0);
        actionCluster.addView(actionABtn, aLp);

        actionCluster.setOnTouchListener((v, event) -> {
            int action = event.getActionMasked();
            int upIdx = (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP || action == MotionEvent.ACTION_CANCEL)
                    ? event.getActionIndex() : -1;
            boolean nextA = false, nextB = false;
            if (action != MotionEvent.ACTION_CANCEL) {
                int slop = dp(10);
                for (int i = 0; i < event.getPointerCount(); i++) {
                    if (i == upIdx && (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_POINTER_UP)) continue;
                    float x = event.getX(i);
                    float y = event.getY(i);
                    if (isInsideView(actionABtn, x, y, slop)) nextA = true;
                    if (isInsideView(actionBBtn, x, y, slop)) nextB = true;
                }
            }
            applyActionTouchState(nextA, nextB, aNormal, aPressed, bNormal, bPressed);
            return true;
        });

        FrameLayout.LayoutParams actionClusterLp = new FrameLayout.LayoutParams(dp(136), dp(112), Gravity.BOTTOM | Gravity.END);
        virtualControllerOverlay.addView(actionCluster, actionClusterLp);
    }

    private static boolean isInsideView(View child, float x, float y, int slop) {
        if (child == null) return false;
        return x >= child.getLeft() - slop && x <= child.getRight() + slop
                && y >= child.getTop() - slop && y <= child.getBottom() + slop;
    }

    private void applyDpadTouchState(boolean left, boolean right, boolean up, boolean down, int normalCol, int pressedCol) {
        if (left != touchLeft) {
            touchLeft = left;
            setPadKeyVisual(dpadLeftBtn, left, normalCol, pressedCol, false);
        }
        if (right != touchRight) {
            touchRight = right;
            setPadKeyVisual(dpadRightBtn, right, normalCol, pressedCol, false);
        }
        if (up != touchUp) {
            touchUp = up;
            setPadKeyVisual(dpadUpBtn, up, normalCol, pressedCol, false);
        }
        if (down != touchDown) {
            touchDown = down;
            setPadKeyVisual(dpadDownBtn, down, normalCol, pressedCol, false);
        }
        syncVirtualKeyStates();
    }

    private void applyActionTouchState(boolean a, boolean b, int aNormal, int aPressed, int bNormal, int bPressed) {
        if (a != touchA) {
            touchA = a;
            setPadKeyVisual(actionABtn, a, aNormal, aPressed, true);
        }
        if (b != touchB) {
            touchB = b;
            setPadKeyVisual(actionBBtn, b, bNormal, bPressed, true);
        }
        syncVirtualKeyStates();
    }

    private void syncVirtualKeyStates() {
        setNativeKey(VK_LEFT, touchLeft);
        setNativeKey(VK_RIGHT, touchRight);
        setNativeKey(VK_UP, touchUp || touchA);
        setNativeKey(VK_DOWN, touchDown);
        setNativeKey(VK_SPACE, touchA);
        setNativeKey(VK_ENTER, touchB);
    }

    private void buildDiagnosticsDrawer() {
        diagnosticsDrawer = new LinearLayout(this);
        diagnosticsDrawer.setOrientation(LinearLayout.VERTICAL);
        diagnosticsDrawer.setPadding(dp(12), dp(10), dp(12), dp(10));
        diagnosticsDrawer.setVisibility(View.GONE);

        GradientDrawable cardBg = new GradientDrawable();
        cardBg.setColor(Color.argb(232, 15, 23, 42));
        cardBg.setStroke(dp(1), Color.rgb(99, 102, 241));
        cardBg.setCornerRadius(dp(12));
        diagnosticsDrawer.setBackground(cardBg);

        LinearLayout header = new LinearLayout(this);
        header.setOrientation(LinearLayout.HORIZONTAL);
        header.setGravity(Gravity.CENTER_VERTICAL);

        TextView title = new TextView(this);
        title.setText("لوحة تشخيص المحرك");
        title.setTextColor(Color.WHITE);
        title.setTextSize(14);
        title.setTypeface(Typeface.DEFAULT_BOLD);
        LinearLayout.LayoutParams titleLp = new LinearLayout.LayoutParams(0, FrameLayout.LayoutParams.WRAP_CONTENT, 1f);
        header.addView(title, titleLp);

        Button clearBtn = new Button(this);
        clearBtn.setText("مسح");
        clearBtn.setContentDescription("مسح سجل الدوال غير المعرفة");
        clearBtn.setAllCaps(false);
        clearBtn.setTextSize(11);
        clearBtn.setTextColor(Color.WHITE);
        clearBtn.setMinimumWidth(dp(48));
        clearBtn.setMinimumHeight(dp(48));
        GradientDrawable clearBg = new GradientDrawable();
        clearBg.setColor(Color.rgb(51, 65, 85));
        clearBg.setCornerRadius(dp(6));
        clearBtn.setBackground(clearBg);
        clearBtn.setOnClickListener(v -> {
            synchronized (nativeLock) { nativeRuntimeClearDiagnostics(); }
            refreshDiagnosticsHud();
        });
        LinearLayout.LayoutParams clearLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.WRAP_CONTENT, dp(48));
        clearLp.setMarginEnd(dp(6));
        header.addView(clearBtn, clearLp);

        Button closeBtn = new Button(this);
        closeBtn.setText("✕");
        closeBtn.setContentDescription("إغلاق لوحة التشخيص");
        closeBtn.setTextColor(Color.WHITE);
        closeBtn.setTextSize(12);
        closeBtn.setMinimumWidth(dp(48));
        closeBtn.setMinimumHeight(dp(48));
        GradientDrawable closeBg = new GradientDrawable();
        closeBg.setColor(Color.rgb(185, 28, 28));
        closeBg.setCornerRadius(dp(6));
        closeBtn.setBackground(closeBg);
        closeBtn.setOnClickListener(v -> toggleDiagnosticsDrawer());
        header.addView(closeBtn, new LinearLayout.LayoutParams(dp(48), dp(48)));

        diagnosticsDrawer.addView(header);

        diagSummaryText = new TextView(this);
        diagSummaryText.setTextColor(Color.rgb(226, 232, 240));
        diagSummaryText.setTextSize(12);
        diagSummaryText.setPadding(0, dp(6), 0, dp(6));
        diagnosticsDrawer.addView(diagSummaryText);

        TextView listHeader = new TextView(this);
        listHeader.setText("الدوال والأفعال غير المعرفة:");
        listHeader.setTextColor(Color.rgb(253, 224, 71));
        listHeader.setTextSize(12);
        listHeader.setTypeface(Typeface.DEFAULT_BOLD);
        diagnosticsDrawer.addView(listHeader);

        ScrollView scroll = new ScrollView(this);
        diagUnmappedText = new TextView(this);
        diagUnmappedText.setTextColor(Color.rgb(203, 213, 225));
        diagUnmappedText.setTextSize(11);
        diagUnmappedText.setTypeface(Typeface.MONOSPACE);
        scroll.addView(diagUnmappedText);
        LinearLayout.LayoutParams scrollLp = new LinearLayout.LayoutParams(
                LinearLayout.LayoutParams.MATCH_PARENT, dp(130));
        scrollLp.topMargin = dp(4);
        diagnosticsDrawer.addView(scroll, scrollLp);
    }

    private void updateDiagButtonLabel() {
        if (diagToggleButton == null) return;
        String arrow = diagnosticsExpanded ? "▴" : "▾";
        String fpsTag = currentFps > 0 ? " (" + currentFps + " FPS)" : "";
        diagToggleButton.setText("التشخيص" + fpsTag + " " + arrow);
    }

    private void refreshDiagnosticsHud() {
        if (diagSummaryText == null || diagUnmappedText == null) return;
        String raw;
        int spCount;
        synchronized (nativeLock) {
            spCount = soundResources.size();
            raw = nativeRuntimeDiagnosticsJson(useGlesBackend ? "GLES2" : "Bitmap", spCount, currentFps);
        }
        try {
            JSONObject o = new JSONObject(raw);
            String backend = o.optString("backend", useGlesBackend ? "GLES2" : "Bitmap");
            int fps = o.optInt("fps", currentFps);
            boolean sles = o.optBoolean("openslesActive", false);
            int spLoaded = o.optInt("soundpoolLoaded", spCount);
            String audio = sles ? ("OpenSLES + SoundPool (" + spLoaded + ")") : ("SoundPool (" + spLoaded + ")");
            int room = o.optInt("roomId", 0);
            int rw = o.optInt("roomWidth", ROOM_W);
            int rh = o.optInt("roomHeight", ROOM_H);
            int frame = o.optInt("frames", 0);
            int inst = o.optInt("instances", 0);
            int spr = o.optInt("sprites", 0);
            int obj = o.optInt("objects", 0);
            int bg = o.optInt("backgrounds", 0);
            int snd = o.optInt("sounds", 0);
            String lastStage = o.optString("stage", "");
            String lastErr = o.optString("lastError", "");

            StringBuilder summary = new StringBuilder();
            summary.append("الرسم: ").append(backend).append("  |  FPS: ").append(fps).append('\n');
            summary.append("الصوت: ").append(audio).append('\n');
            summary.append("الغرفة #").append(room).append(" (").append(rw).append("×").append(rh).append(") | إطار: ").append(frame).append('\n');
            summary.append("كائنات: ").append(inst).append(" | صور: ").append(spr).append(" | قوالب: ").append(obj).append(" | خلفيات: ").append(bg).append(" | أصوات: ").append(snd);
            if (!lastErr.isEmpty()) {
                summary.append("\nخطأ [").append(lastStage).append("]: ").append(lastErr);
            }
            diagSummaryText.setText(summary.toString());

            JSONArray arr = o.optJSONArray("unmapped");
            if (arr == null || arr.length() == 0) {
                diagUnmappedText.setText("لا توجد دوال أو أفعال غير معرفة ✓");
                diagUnmappedText.setTextColor(Color.rgb(134, 239, 172));
            } else {
                StringBuilder lines = new StringBuilder();
                for (int i = 0; i < arr.length(); i++) {
                    JSONObject item = arr.optJSONObject(i);
                    if (item == null) continue;
                    String kind = item.optString("kind", "gml").toUpperCase(Locale.ROOT);
                    String name = item.optString("name", "");
                    int count = item.optInt("count", 1);
                    lines.append('[').append(kind).append("] ").append(name).append(" (×").append(count).append(")\n");
                }
                diagUnmappedText.setText(lines.toString().trim());
                diagUnmappedText.setTextColor(Color.rgb(252, 165, 165));
            }
        } catch (Exception e) {
            diagSummaryText.setText("تعذر قراءة بيانات التشخيص");
        }
    }

    private void ensureFrameBitmapSize() {
        if (engineVideoRecorder != null && engineVideoRecorder.isRecording()) return;
        int rw = nativeRuntimeGetRoomWidth();
        int rh = nativeRuntimeGetRoomHeight();
        if (rw < 64) rw = ROOM_W;
        if (rh < 64) rh = ROOM_H;
        if (rw > 1920) rw = 1920;
        if (rh > 1080) rh = 1080;
        if (frameBitmap == null || frameBitmap.isRecycled() || frameBitmap.getWidth() != rw || frameBitmap.getHeight() != rh) {
            if (frameBitmap != null && !frameBitmap.isRecycled()) frameBitmap.recycle();
            frameBitmap = Bitmap.createBitmap(rw, rh, Bitmap.Config.ARGB_8888);
        }
    }

    private void toggleRenderBackend() {
        useGlesBackend = !useGlesBackend;
        applyActiveRenderBackend();
    }

    private void applyActiveRenderBackend() {
        if (backendToggleButton != null) {
            backendToggleButton.setText(useGlesBackend ? "GLES2 ⚡" : "Bitmap 🖼");
        }
        if (!nativePlayerVisible) return;
        fpsSampleFrames = 0;
        fpsSampleStartNanos = 0;
        if (useGlesBackend) {
            loopHandler.removeCallbacks(nativeFrameLoop);
            nativeGameView.setVisibility(View.GONE);
            lastGlFrameNanos = 0;
            nativeGlView.setVisibility(View.VISIBLE);
            nativeGlView.onResume();
            nativeGlView.requestFocus();
        } else {
            nativeGlView.onPause();
            nativeGlView.setVisibility(View.GONE);
            synchronized (nativeLock) { ensureFrameBitmapSize(); }
            nativeGameView.setVisibility(View.VISIBLE);
            nativeGameView.requestFocus();
            lastFrameNanos = 0;
            loopHandler.removeCallbacks(nativeFrameLoop);
            loopHandler.post(nativeFrameLoop);
        }
        if (diagnosticsExpanded) refreshDiagnosticsHud();
    }

    private void toggleVirtualPad() {
        virtualPadVisible = !virtualPadVisible;
        if (virtualControllerOverlay != null) {
            virtualControllerOverlay.setVisibility(virtualPadVisible ? View.VISIBLE : View.GONE);
        }
        if (!virtualPadVisible) {
            releaseNativeKeys();
        }
        if (gamepadToggleButton != null) {
            gamepadToggleButton.setText(virtualPadVisible ? "🎮 الأزرار" : "🎮 مخفية");
        }
    }

    private void toggleDiagnosticsDrawer() {
        diagnosticsExpanded = !diagnosticsExpanded;
        if (diagnosticsDrawer != null) {
            diagnosticsDrawer.setVisibility(diagnosticsExpanded ? View.VISIBLE : View.GONE);
        }
        updateDiagButtonLabel();
        if (diagnosticsExpanded) refreshDiagnosticsHud();
    }

    private void showNativePlayer() {
        if (!nativeProjectLoaded) {
            Toast.makeText(this, "استورد ملف GMK مدعومًا أولًا من قائمة فتح المشروع", Toast.LENGTH_LONG).show();
            return;
        }
        synchronized (nativeLock) { ensureFrameBitmapSize(); }
        nativePlayerVisible = true;
        lastFrameNanos = 0;
        lastGlFrameNanos = 0;
        fpsSampleFrames = 0;
        fpsSampleStartNanos = 0;
        currentFps = 0;
        webView.setVisibility(View.GONE);
        nativePlayButton.setVisibility(View.GONE);
        playerViewport.setVisibility(View.VISIBLE);
        playerTopBarScroll.setVisibility(View.VISIBLE);
        if (virtualControllerOverlay != null) {
            virtualControllerOverlay.setVisibility(virtualPadVisible ? View.VISIBLE : View.GONE);
        }
        if (diagnosticsDrawer != null) {
            diagnosticsDrawer.setVisibility(diagnosticsExpanded ? View.VISIBLE : View.GONE);
        }
        applyActiveRenderBackend();
        loopHandler.removeCallbacks(diagRefreshRunnable);
        loopHandler.post(diagRefreshRunnable);
    }

    private void showStudio() {
        stopEngineRecording(true);
        nativePlayerVisible = false;
        loopHandler.removeCallbacks(nativeFrameLoop);
        loopHandler.removeCallbacks(diagRefreshRunnable);
        releaseNativeKeys();
        if (nativeGlView != null) {
            nativeGlView.onPause();
            nativeGlView.setVisibility(View.GONE);
        }
        nativeGameView.setVisibility(View.GONE);
        playerViewport.setVisibility(View.GONE);
        playerTopBarScroll.setVisibility(View.GONE);
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
            synchronized (nativeLock) {
                ensureFrameBitmapSize();
                if (frameBitmap != null) nativeRuntimeRenderBitmap(frameBitmap);
            }
            String name = engineVideoRecorder.start(frameBitmap);
            engineRecordButton.setText("■ إيقاف");
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

    private boolean handleViewportTouch(View view, MotionEvent event) {
        int vw = view.getWidth(), vh = view.getHeight();
        if (vw <= 0 || vh <= 0) return true;
        int action = event.getActionMasked();
        if (action != MotionEvent.ACTION_DOWN && action != MotionEvent.ACTION_MOVE
                && action != MotionEvent.ACTION_UP && action != MotionEvent.ACTION_CANCEL) {
            return false;
        }
        synchronized (nativeLock) {
            int rw = nativeRuntimeGetRoomWidth();
            int rh = nativeRuntimeGetRoomHeight();
            if (rw <= 0) rw = ROOM_W;
            if (rh <= 0) rh = ROOM_H;
            double scale = Math.min((double) vw / rw, (double) vh / rh);
            double dw = rw * scale;
            double dh = rh * scale;
            double ox = (vw - dw) * 0.5;
            double oy = (vh - dh) * 0.5;
            int roomX = Math.max(0, Math.min(rw, (int) Math.round(((event.getX() - ox) / dw) * rw)));
            int roomY = Math.max(0, Math.min(rh, (int) Math.round(((event.getY() - oy) / dh) * rh)));
            boolean isDown = (action == MotionEvent.ACTION_DOWN || action == MotionEvent.ACTION_MOVE);
            nativeRuntimeMouse(roomX, roomY, 0, isDown);
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
        else if (vk == VK_ENTER) { was = holdEnter; holdEnter = down; }
        else was = !down;
        if (was != down) synchronized (nativeLock) { nativeRuntimeKey(vk, down); }
    }
    /** Release every held key when focus or the activity changes state. */
    private void releaseNativeKeys() {
        holdLeft = holdRight = holdUp = holdDown = holdSpace = holdEnter = false;
        touchLeft = touchRight = touchUp = touchDown = touchA = touchB = false;
        int dpadNormal = Color.argb(145, 15, 23, 42);
        int dpadPressed = Color.argb(225, 37, 99, 235);
        int aNormal = Color.argb(165, 5, 150, 105);
        int aPressed = Color.argb(235, 16, 185, 129);
        int bNormal = Color.argb(165, 217, 119, 6);
        int bPressed = Color.argb(235, 245, 158, 11);
        setPadKeyVisual(dpadLeftBtn, false, dpadNormal, dpadPressed, false);
        setPadKeyVisual(dpadRightBtn, false, dpadNormal, dpadPressed, false);
        setPadKeyVisual(dpadUpBtn, false, dpadNormal, dpadPressed, false);
        setPadKeyVisual(dpadDownBtn, false, dpadNormal, dpadPressed, false);
        setPadKeyVisual(actionABtn, false, aNormal, aPressed, true);
        setPadKeyVisual(actionBBtn, false, bNormal, bPressed, true);
        try {
            synchronized (nativeLock) {
                nativeRuntimeKey(VK_LEFT, false);
                nativeRuntimeKey(VK_RIGHT, false);
                nativeRuntimeKey(VK_UP, false);
                nativeRuntimeKey(VK_DOWN, false);
                nativeRuntimeKey(VK_SPACE, false);
                nativeRuntimeKey(VK_ENTER, false);
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
            nativeProjectLoaded = result != null && (result.contains("\"complete\":true") || result.contains("\"ok\":true"));
            Log.i(TAG, "Studio GMK import to native runtime: " + result);
        } catch (Throwable t) {
            nativeProjectLoaded = false;
            Log.w(TAG, "Native GMK import failed; Web Studio may still parse the file", t);
            runOnUiThread(() -> Toast.makeText(this,
                    "تعذر تحميل هذه النسخة في المحرك الأصلي؛ سيحاول الاستوديو استيرادها", Toast.LENGTH_LONG).show());
        }
    }

    private void autoLoadDefaultSampleGame() {
        importExecutor.execute(() -> {
            String[] samples = {"www/samples/mario_bros.gmk", "www/samples/plataformas.gmk", "www/samples/shooter.gmk", "www/samples/zelda.gmk"};
            for (String samplePath : samples) {
                try (InputStream in = getAssets().open(samplePath);
                     ByteArrayOutputStream out = new ByteArrayOutputStream()) {
                    byte[] chunk = new byte[64 * 1024];
                    int n, total = 0;
                    while ((n = in.read(chunk)) != -1) {
                        if (n > 0) {
                            total += n;
                            out.write(chunk, 0, n);
                        }
                    }
                    byte[] bytes = out.toByteArray();
                    if (bytes.length > 12) {
                        String result;
                        synchronized (nativeLock) {
                            result = nativeImportGmkSnapshot(bytes, getFilesDir().getAbsolutePath());
                        }
                        if (result != null && (result.contains("\"ok\":true") || result.contains("\"complete\":true") || result.contains("\"sprites\"") || result.contains("\"rooms\""))) {
                            nativeProjectLoaded = true;
                            Log.i(TAG, "Successfully auto-loaded sample game: " + samplePath + " -> " + result);
                            return;
                        }
                    }
                } catch (Throwable t) {
                    Log.w(TAG, "Failed to auto-load sample: " + samplePath, t);
                }
            }
            Log.w(TAG, "All sample games failed to auto-load; user can still import manually.");
        });
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
        } catch (Throwable ignored) {}
    }

    private void drainNativeUiEvents() {
        if (isFinishing()) return;
        String raw;
        synchronized (nativeLock) {
            raw = nativeRuntimeConsumeUiEvents();
        }
        if (raw == null || raw.length() <= 2) return;
        try {
            JSONArray events = new JSONArray(raw);
            for (int i = 0; i < events.length(); i++) {
                JSONObject ev = events.optJSONObject(i);
                if (ev == null) continue;
                int kind = ev.optInt("kind", 0);
                String title = ev.optString("title", "NOR Maker");
                String payload = ev.optString("payload", "");
                if (title.isEmpty()) title = "NOR Maker";

                if (kind == 5 || kind == 7) {
                    if (payload.startsWith("http://") || payload.startsWith("https://")) {
                        try {
                            startActivity(new Intent(Intent.ACTION_VIEW, Uri.parse(payload)));
                        } catch (Exception e) {
                            Toast.makeText(this, "الرابط: " + payload, Toast.LENGTH_LONG).show();
                        }
                    } else if (!payload.isEmpty()) {
                        Toast.makeText(this, title + ": " + payload, Toast.LENGTH_SHORT).show();
                    }
                    continue;
                }

                if (uiDialogShowing) continue;
                uiDialogShowing = true;
                AlertDialog.Builder b = new AlertDialog.Builder(this, android.R.style.Theme_DeviceDefault_Dialog_Alert);
                b.setTitle(title);
                b.setMessage(payload.isEmpty() ? title : payload);
                if (kind == 2) {
                    b.setPositiveButton("نعم", (d, w) -> {
                        synchronized (nativeLock) { nativeRuntimeSetQuestionAnswer(true); }
                    });
                    b.setNegativeButton("لا", (d, w) -> {
                        synchronized (nativeLock) { nativeRuntimeSetQuestionAnswer(false); }
                    });
                } else {
                    b.setPositiveButton("حسناً", null);
                }
                b.setOnDismissListener(d -> uiDialogShowing = false);
                b.show();
            }
        } catch (Throwable t) {
            Log.w(TAG, "Failed to drain native UI events", t);
        }
    }
    private boolean registerSoundResource(int soundId, String path) {
        if (soundPool == null || soundId < 0 || path == null || path.length() == 0) return false;
        try {
            synchronized (nativeLock) {
                Integer old = soundResources.remove(soundId);
                if (old != null) soundPool.unload(old);
                int resource = soundPool.load(path, 1);
                if (resource == 0) return false;
                soundResources.put(soundId, resource);
                return true;
            }
        } catch (Exception ignored) { return false; }
    }
    private void clearSoundResources() {
        if (soundPool == null) return;
        synchronized (nativeLock) {
            for (Integer stream : soundStreams.values()) soundPool.stop(stream);
            soundStreams.clear();
            for (Integer resource : soundResources.values()) soundPool.unload(resource);
            soundResources.clear();
        }
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
    private static void collectGmxFiles(File root, File current, JSONArray out) throws Exception {
        File[] children = current.listFiles();
        if (children == null) return;
        for (File file : children) {
            if (file.isDirectory()) { collectGmxFiles(root, file, out); continue; }
            if (!file.isFile() || file.length() > 32L * 1024L * 1024L) continue;
            try (InputStream in = new java.io.FileInputStream(file); ByteArrayOutputStream bytes = new ByteArrayOutputStream()) {
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

        @JavascriptInterface public boolean exportNorJson(String json, String outputPath) {
            return nativeExportNorJson(json, outputPath);
        }
        @JavascriptInterface public String runRuntimeSmokeTest() {
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
        @JavascriptInterface public void setLandscapeOrientation(boolean landscape) {
            runOnUiThread(() -> {
                try {
                    setRequestedOrientation(landscape
                        ? android.content.pm.ActivityInfo.SCREEN_ORIENTATION_SENSOR_LANDSCAPE
                        : android.content.pm.ActivityInfo.SCREEN_ORIENTATION_UNSPECIFIED);
                } catch (Throwable ignored) {}
            });
        }
        @JavascriptInterface public void pickGmxGmz() {
            Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.setType("application/octet-stream");
            intent.putExtra(Intent.EXTRA_MIME_TYPES, new String[]{"application/octet-stream", "application/zip", "text/xml"});
            try { startActivityForResult(intent, FILE_CHOOSER_REQUEST); } catch (Exception ignored) { }
        }
        @JavascriptInterface public void step(float delta) {
            if (!nativeProjectLoaded) return;
            synchronized (nativeLock) { nativeRuntimeStep(delta); drainNativeSoundCommands(); }
        }
        @JavascriptInterface public boolean registerSound(int soundId, String path) { return registerSoundResource(soundId, path); }
        @JavascriptInterface public void clearSounds() { clearSoundResources(); }
        @JavascriptInterface public String snapshot() { return nativeRuntimeSnapshotJson(); }
        @JavascriptInterface public String evaluateGml(String source) { return nativeEvaluateGml(source); }
        @JavascriptInterface public boolean registerEvent(int objectId, int mainType, int subType, String source) { return nativeRuntimeRegisterEvent(objectId, mainType, subType, source); }
        @JavascriptInterface public boolean registerObject(int objectId, String name) { return nativeRuntimeRegisterObject(objectId, name); }
        @JavascriptInterface public boolean registerScript(String name, String source) { return nativeRuntimeRegisterScript(name, source); }
        @JavascriptInterface public void clearScripts() { nativeRuntimeClearScripts(); }
        @JavascriptInterface public boolean setSpriteBitmapBase64(int spriteId, int frame, int width, int height, String rgbaBase64) {
            if (rgbaBase64 == null || rgbaBase64.length() == 0) return false;
            try { return nativeRuntimeSetSpriteBitmap(spriteId, frame, width, height, Base64.decode(rgbaBase64, Base64.DEFAULT)); }
            catch (IllegalArgumentException error) { return false; }
        }
        @JavascriptInterface public void clearRoomTransient() { nativeRuntimeClearRoomTransient(); }
        @JavascriptInterface public boolean executeGml(int instanceId, String source) { return nativeRuntimeExecuteGml(instanceId, source); }
        @JavascriptInterface public String consumeSoundCommands() { return nativeRuntimeConsumeSoundCommands(); }
        @JavascriptInterface public int room() { return nativeRuntimeGetRoom(); }
        @JavascriptInterface public int resourceCount() { return nativeResourceCount(); }
        @JavascriptInterface public int registerObjectEvent(int objectId, int mainType, int subType, String source) { return nativeRegisterObjectEvent(objectId, mainType, subType, source); }
        @JavascriptInterface public int objectEventCount() { return nativeObjectEventCount(); }
        @JavascriptInterface public double gm82CompatCheck() { return nativeGm82CompatCheck(); }
        @JavascriptInterface public double gm82ColorReverse(double color) { return nativeGm82ColorReverse(color); }
        @JavascriptInterface public double gm82ColorInverse(double color) { return nativeGm82ColorInverse(color); }
        @JavascriptInterface public int gm82TokenStart(String text, String separator) { return nativeGm82TokenStart(text, separator); }
        @JavascriptInterface public String gm82TokenNext() { return nativeGm82TokenNext(); }
        @JavascriptInterface public void gm82TokenReset() { nativeGm82TokenReset(); }
        @JavascriptInterface public String coreIdentity() { return nativeCoreIdentity(); }
        @JavascriptInterface public boolean validateGmk(byte[] bytes) { return nativeValidateGmk(bytes); }
        @JavascriptInterface public String gmkHeaderJson(byte[] bytes) { return nativeGmkHeaderJson(bytes); }
        @JavascriptInterface public String gmkLayoutJson(byte[] bytes) { return nativeGmkLayoutJson(bytes); }
        @JavascriptInterface public String gmkChunkInventory(byte[] bytes) { return nativeGmkChunkInventory(bytes); }
        @JavascriptInterface public String gmkResourceManifest(byte[] bytes) { return nativeGmkResourceManifest(bytes); }
        @JavascriptInterface public int compileGml(String source) { return nativeCompileGml(source); }
        @JavascriptInterface public boolean codeExists(int codeId) { return nativeCodeExists(codeId); }
        @JavascriptInterface public int codeArgCount(int codeId) { return nativeCodeGetArgCount(codeId); }
        @JavascriptInterface public void destroyCode(int codeId) { nativeCodeDestroy(codeId); }
        @JavascriptInterface public int executeCode(int instanceId, int codeId) { return nativeCodeExecute(instanceId, codeId); }
        @JavascriptInterface public boolean exportRom(String title, String outputPath, int kind) { return nativeExportRom(title, outputPath, kind); }
        @JavascriptInterface public int detectRom(String path) { return nativeDetectRom(path); }
        @JavascriptInterface public boolean validateRom(String path, int kind) { return nativeValidateRom(path, kind); }
        @JavascriptInterface public String importGmxGmzToApp(String archivePath, String folderName) {
            if (archivePath == null || archivePath.length() == 0) return "";
            String safeName = (folderName == null || folderName.length() == 0 ? "gmx_import" : folderName).replaceAll("[^A-Za-z0-9._-]", "_");
            File target = new File(new File(getFilesDir(), "imports"), safeName);
            if (!target.exists() && !target.mkdirs()) return "";
            return nativeImportGmxGmz(archivePath, target.getAbsolutePath()) != 0 ? target.getAbsolutePath() : "";
        }
        @JavascriptInterface public String readGmxGmzFiles(String extractedDir) {
            try { File root = new File(extractedDir); if (!root.isDirectory()) return ""; JSONObject payload = new JSONObject(); JSONArray files = new JSONArray(); collectGmxFiles(root, root, files); payload.put("root", root.getAbsolutePath()); payload.put("files", files); return payload.toString(); }
            catch (Exception ignored) { return ""; }
        }
        @JavascriptInterface public boolean exportGmxGmz(String sourceDir, String outputPath, String kind) { return nativeExportGmxGmz(sourceDir, outputPath, kind) != 0; }
        @JavascriptInterface public boolean exportGmkRaw(String sourcePath, String outputPath) { return nativeExportGmkRaw(sourcePath, outputPath); }
        @JavascriptInterface public boolean exportGmxSemantic(String sourceDir, String outputDir, String projectName) { return nativeExportGmxSemantic(sourceDir, outputDir, projectName); }
        @JavascriptInterface public boolean isRunning() {
            return nativeProjectLoaded && nativePlayerVisible;
        }
        @JavascriptInterface public void tick() {
            if (!nativeProjectLoaded) return;
            synchronized (nativeLock) {
                nativeRuntimeStep(1.0f / TARGET_FPS);
                drainNativeSoundCommands();
            }
        }
        @JavascriptInterface public String importGm82Dir(String dirPath) {
            if (dirPath == null || dirPath.isEmpty()) return "{\"ok\":false,\"error\":\"empty_path\"}";
            synchronized (nativeLock) {
                String res = nativeImportGm82Project(dirPath);
                nativeProjectLoaded = res != null && (res.contains("\"ok\":true") || res.contains("\"complete\":true"));
                return res != null ? res : "{\"ok\":false,\"error\":\"null_result\"}";
            }
        }
        @JavascriptInterface public String getDiagnosticsJson() {
            synchronized (nativeLock) {
                return nativeRuntimeDiagnosticsJson(useGlesBackend ? "GLES2" : "Bitmap", soundResources.size(), currentFps);
            }
        }
        @JavascriptInterface public void clearDiagnostics() {
            synchronized (nativeLock) { nativeRuntimeClearDiagnostics(); }
        }
        @JavascriptInterface public boolean isOpenSlesActive() {
            return nativeIsOpenSlesActive();
        }
        @JavascriptInterface public void openNativePlayer() {
            runOnUiThread(MainActivity.this::showNativePlayer);
        }
        @JavascriptInterface public void openAdventureIsland() {
            runOnUiThread(() -> {
                if (webView != null) webView.loadUrl("file:///android_asset/www/adventure_island_2/index.html");
            });
        }
        /** Downloads cloud GMK files outside the file:// WebView origin, avoiding CORS failures. */
        @JavascriptInterface public String downloadCloudGmkBase64(String sourceUrl) {
            if (sourceUrl == null || !sourceUrl.startsWith("https://")) return "";
            HttpURLConnection connection = null;
            try {
                connection = (HttpURLConnection) new URL(sourceUrl).openConnection();
                connection.setInstanceFollowRedirects(true);
                connection.setConnectTimeout(15000);
                connection.setReadTimeout(60000);
                connection.setRequestProperty("User-Agent", "NOR-Maker-Android/1.0");
                int status = connection.getResponseCode();
                if (status < 200 || status >= 300) return "";
                int declared = connection.getContentLength();
                if (declared > MAX_GMK_BYTES) return "";
                try (InputStream in = connection.getInputStream(); ByteArrayOutputStream out = new ByteArrayOutputStream(Math.max(8192, declared))) {
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
                Log.w(TAG, "Cloud GMK native download failed: " + sourceUrl, error);
                return "";
            } finally {
                if (connection != null) connection.disconnect();
            }
        }
    }

    @Override public void onBackPressed() {
        if (nativePlayerVisible) { showStudio(); return; }
        if (webView != null && webView.canGoBack()) { webView.goBack(); return; }
        super.onBackPressed();
    }

    @Override protected void onPause() {
        loopHandler.removeCallbacks(nativeFrameLoop);
        loopHandler.removeCallbacks(diagRefreshRunnable);
        releaseNativeKeys();
        if (nativeGlView != null && nativePlayerVisible && useGlesBackend) nativeGlView.onPause();
        if (webView != null) webView.onPause();
        super.onPause();
    }

    @Override protected void onResume() {
        super.onResume();
        if (webView != null) webView.onResume();
        if (nativePlayerVisible) {
            if (useGlesBackend && nativeGlView != null) nativeGlView.onResume();
            else loopHandler.post(nativeFrameLoop);
            loopHandler.post(diagRefreshRunnable);
        }
    }

    @Override protected void onDestroy() {
        loopHandler.removeCallbacks(nativeFrameLoop);
        loopHandler.removeCallbacks(diagRefreshRunnable);
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
