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
        settings.setAllowFileAccessFromFileURLs(false);
        // The Studio is a bundled, trusted file:// app and its cloud catalog uses
        // HTTPS GMK sources. Keep native download as the primary path, but allow
        // the WebView fallback to reach those sources when native networking is
        // unavailable on a device.
        settings.setAllowUniversalAccessFromFileURLs(true);
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
            synchronized (nativeLock) { nativeRuntimeMouse((int)x, (int)y, 0, action == MotionEvent.ACTION_DOWN); }
            setNativeKey(VK_LEFT, x < w / 3.0f);
            setNativeKey(VK_RIGHT, x > w * 2.0f / 3.0f);
            setNativeKey(VK_UP, y < h / 2.0f);
            setNativeKey(VK_DOWN, y >= h / 2.0f && x >= w / 3.0f && x <= w * 2.0f / 3.0f);
            setNativeKey(VK_SPACE, y < h / 2.0f);
            return true;
        }
        if (action == MotionEvent.ACTION_UP || action == MotionEvent.ACTION_CANCEL) {
            synchronized (nativeLock) { nativeRuntimeMouse((int)x, (int)y, 0, false); }
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
    @Override public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (!hasFocus && nativePlayerVisible) {
            synchronized (nativeLock) {
                nativeRuntimeKey(VK_LEFT, false); nativeRuntimeKey(VK_RIGHT, false);
                nativeRuntimeKey(VK_UP, false); nativeRuntimeKey(VK_DOWN, false);
                nativeRuntimeKey(VK_SPACE, false); nativeRuntimeKey(VK_ENTER, false);
            }
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
        @JavascriptInterface public void pickGmxGmz() {
            Intent intent = new Intent(Intent.ACTION_OPEN_DOCUMENT);
            intent.addCategory(Intent.CATEGORY_OPENABLE);
            intent.setType("application/octet-stream");
            intent.putExtra(Intent.EXTRA_MIME_TYPES, new String[]{"application/octet-stream", "application/zip", "text/xml"});
            try { startActivityForResult(intent, FILE_CHOOSER_REQUEST); } catch (Exception ignored) { }
        }
        @JavascriptInterface public void step(float delta) { nativeRuntimeStep(delta); drainNativeSoundCommands(); }
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
        releaseSoundResources();
        try { nativeRuntimeDestroy(); } catch (Throwable ignored) {}
        if (frameBitmap != null && !frameBitmap.isRecycled()) { frameBitmap.recycle(); frameBitmap = null; }
        super.onDestroy();
    }
}
