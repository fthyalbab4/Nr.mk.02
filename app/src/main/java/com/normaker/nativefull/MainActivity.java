package com.normaker.nativefull;

import android.app.Activity;
import android.os.Bundle;
import android.view.Window;
import android.view.WindowManager;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.FrameLayout;
import com.normaker.gm82.Gm82Native;
import com.normaker.gm82.Gm82SurfaceView;
import java.io.File;
import java.io.FileOutputStream;
import java.io.InputStream;

public class MainActivity extends Activity {
    private Gm82SurfaceView mGm82View;
    private WebView mWebView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        requestWindowFeature(Window.FEATURE_NO_TITLE);
        getWindow().setFlags(
            WindowManager.LayoutParams.FLAG_FULLSCREEN,
            WindowManager.LayoutParams.FLAG_FULLSCREEN
        );

        FrameLayout container = new FrameLayout(this);

        /* Load GMK / GM82 project into native C engine */
        File gameFile = extractAssetGameFile("mario_bros.gmk");
        if (gameFile != null && gameFile.exists()) {
            Gm82Native.nativeLoadGame(gameFile.getAbsolutePath());
        }

        try {
            mGm82View = new Gm82SurfaceView(this);
            container.addView(mGm82View);
        } catch (Throwable t) {
            t.printStackTrace();
        }

        mWebView = new WebView(this);
        WebSettings webSettings = mWebView.getSettings();
        webSettings.setJavaScriptEnabled(true);
        webSettings.setDomStorageEnabled(true);
        webSettings.setAllowFileAccess(true);
        webSettings.setAllowContentAccess(true);

        mWebView.setWebViewClient(new WebViewClient() {
            @Override
            public void onPageFinished(WebView view, String url) {
                super.onPageFinished(view, url);
            }
        });

        mWebView.loadUrl("file:///android_asset/www/index.html");
        container.addView(mWebView);

        setContentView(container);
    }

    private File extractAssetGameFile(String assetName) {
        try {
            File outFile = new File(getFilesDir(), assetName);
            if (outFile.exists() && outFile.length() > 0) {
                return outFile;
            }
            InputStream is = getAssets().open(assetName);
            FileOutputStream fos = new FileOutputStream(outFile);
            byte[] buf = new byte[8192];
            int len;
            while ((len = is.read(buf)) > 0) {
                fos.write(buf, 0, len);
            }
            fos.close();
            is.close();
            return outFile;
        } catch (Exception e) {
            return null;
        }
    }

    @Override
    protected void onPause() {
        super.onPause();
        if (mGm82View != null) mGm82View.onPause();
        if (mWebView != null) mWebView.onPause();
    }

    @Override
    protected void onResume() {
        super.onResume();
        if (mGm82View != null) mGm82View.onResume();
        if (mWebView != null) mWebView.onResume();
    }
}
