# دليل حل مشكلة الشاشة السوداء في تطبيق NOR MAKER (Black Screen Fix Guide)

> **تاريخ التوثيق:** 2026-10-03
> **المرجع الموثوق:** نسخة `لا توجد مشاكل في الشاشه.apk`

---

## 📌 ملخص المشكلة والأسباب الجذرية

تظهر مشكلة "الشاشة السوداء" عند الضغط على زر التشغيل (**Run**) للألعاب أو المشاريع داخل محاكي ومحرر NOR MAKER نتيجة تضافر عدة عوامل تقنية في بيئة أندرويد WebView وجسر الاتصال (HTML-Java Native Bridge):

1. **إعدادات كاش الـ WebView والـ Wasm:**
   - عند حذف أو تدمير مجلدات كاش الكود (`Code Cache/wasm`) أو استخدام وضع كاش خاطئ، تفشل مكتبات الجافاسكريبت والمحرك في تحميل الوحدات الثنائية (WASM/Scripts) مما يترك نافذة الرانر فارغة سوداء.
2. **إعدادات التسريع العتادي (Hardware Acceleration):**
   - تعطيل التسريع العتادي أو فرض طبقة السوفتوير (`LAYER_TYPE_SOFTWARE`) يتسبب في توقف محرك رندر HTML5 Canvas / WebGL.
3. **تطابق ملفات المحرك والأصول (`index.html` & `createEngineHTML`):**
   - تعديل أو حذف دوال الـ Gamepad وإعدادات أبعاد الـ Canvas داخل دالة توليد كود المحرك `createEngineHTML` يتسبب في خطأ برمجي عند حقن الـ iframe الخاص بالرانر.
4. **جسر الاتصال البرمجي (`NorNative` Bridge):**
   - أي خلل أو عدم تطابق في دوال `@JavascriptInterface` المعرفة في `MainActivity.java` مع ما يستدعيه الـ JavaScript يوقف دورة حياة اللعبة.

---

## 🛠️ خطوات الحل الدائم والمطابقة المرجعية

### 1. إعدادات كاش الـ WebView في `MainActivity.java`

في دالة `onCreate()`، يجب إنشاء هيكل المجلدات اللازمة لكاش الـ WebView والـ WASM بدلاً من حذفها:

```java
try {
    File v0 = new File(getCacheDir(), "WebView");
    if (!v0.exists()) v0.mkdirs();
    File v1 = new File(v0, "Default");
    if (!v1.exists()) v1.mkdirs();
    File v2 = new File(v1, "HTTP Cache");
    if (!v2.exists()) v2.mkdirs();
    File v3 = new File(v2, "Code Cache");
    if (!v3.exists()) v3.mkdirs();
    File v4 = new File(v3, "wasm");
    if (!v4.exists()) v4.mkdirs();
} catch (Throwable ignored) {}
```

### 2. إعدادات الـ WebSettings والتسريع

يجب ضبط الإعدادات كالتالي في `MainActivity.java`:

```java
WebSettings settings = webView.getSettings();
settings.setJavaScriptEnabled(true);
settings.setDomStorageEnabled(true);
settings.setDatabaseEnabled(true);
settings.setAllowFileAccess(true);
settings.setAllowContentAccess(true);
settings.setAllowFileAccessFromFileURLs(true);
settings.setAllowUniversalAccessFromFileURLs(true);
settings.setMediaPlaybackRequiresUserGesture(false);
settings.setCacheMode(WebSettings.LOAD_NO_CACHE); // مهم جداً
webView.clearCache(true);
settings.setMixedContentMode(WebSettings.MIXED_CONTENT_ALWAYS_ALLOW);
```

### 3. إعدادات الـ `AndroidManifest.xml`

يجب التأكد دائماً من تفعيل التسريع العتادي والذاكرة الكبيرة:

```xml
<application
    android:hardwareAccelerated="true"
    android:largeHeap="true"
    android:extractNativeLibs="true"
    android:usesCleartextTraffic="true" ...>

    <activity
        android:name=".MainActivity"
        android:hardwareAccelerated="true"
        android:configChanges="orientation|keyboard|keyboardHidden|screenSize|screenLayout|smallestScreenSize|uiMode"
        android:screenOrientation="sensor"
        android:windowSoftInputMode="adjustResize"
        android:exported="true">
```

### 4. استعادة ومزامنة ملفات الـ Assets من النسخة السليمة

في حال حدوث أي خطأ في ملفات الواجهة، يمكن استعادة محتويات `assets` من نسخة `لا توجد مشاكل في الشاشه.apk` عبر الأمر:

```python
import os, shutil, zipfile

with zipfile.ZipFile('لا توجد مشاكل في الشاشه.apk') as z:
    for info in z.infolist():
        if info.filename.startswith('assets/'):
            rel_path = info.filename[len('assets/'):]
            target_path = os.path.join('app/src/main/assets', rel_path)
            os.makedirs(os.path.dirname(target_path), exist_ok=True)
            with z.open(info) as src, open(target_path, 'wb') as dst:
                dst.write(src.read())
```

ويجب التأكد دائماً أن `app/src/main/assets/index.html` و `app/src/main/assets/www/index.html` متطابقان تماماً.

---

## 📋 قائمة التحقق السريعة (Quick Checklist)

- [x] تفعيل `hardwareAccelerated="true"` في Manifest و Activity.
- [x] ضبط `LOAD_NO_CACHE` و `clearCache(true)`.
- [x] تهيئة مجلدات `WebView/Default/HTTP Cache/Code Cache/wasm`.
- [x] تطابق ملفات `index.html` في مسارات الأصول.
- [x] وجود جسر `NorNative` وربطه عبر `webView.addJavascriptInterface(new NativeBridge(), "NorNative")`.
- [x] نجاح اختبار البناء عبر `compile_applet`.
