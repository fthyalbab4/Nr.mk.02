# استرجاع MainActivity (PLACEHOLDER)

حدث خطأ أثناء رفع كبير: الملف صار `PLACEHOLDER`.

## الإصلاح (عندك)

```bash
git fetch origin
# ارجع النسخة السليمة قبل التلف
 git show ef5a9c7ab9977e6b7876e34a916afc1fcd119433:app/src/main/java/com/normaker/nativefull/MainActivity.java > app/src/main/java/com/normaker/nativefull/MainActivity.java

# طبّق باتش الحلقة الأصلية (SO الموجود)
patch -p1 < tools/MainActivity.native_loop.patch
```

أو من Android Studio: Local History → استرجع قبل commit PLACEHOLDER.

## ما تم بدون NDK جديد
- `assets/www/nor_native_loop_bridge.js`
- `assets/www/index_html_native_loop_patch.js`
- `System.loadLibrary("gm82_android")` كان موجوداً أصلاً
