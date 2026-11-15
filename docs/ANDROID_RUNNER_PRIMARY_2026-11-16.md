# Android Runner Primary Path — 2026-11-16

## التغيير

كان زر `تشغيل GMK الأصلي` في `MainActivity` يتجاوز Runner الجديد ويفتح Native player منفصلاً. هذا جعل المستخدم يرى واجهة قديمة لا تحتوي كامل وظائف `ConsoleViewer` الموجودة في `assets/www`.

تم تغيير المسار الرئيسي إلى:

1. زر Android باسم `فتح المحاكي الجديد`.
2. إرسال حدث `nor-open-runner` إلى WebView.
3. استقبال الحدث داخل `useWindowManager` وفتح `ConsoleViewer` عبر `openWindow("runner", "game", "Game Runner")`.
4. إبقاء Native player كمسار توافق اختياري بالضغط المطوّل على الزر، حتى لا تضيع قدرات التشغيل الأصلي أثناء مرحلة التوحيد.

## الوظائف التي يستفيد منها المسار الرئيسي

- تصميم ConsoleViewer والإطار والمشهد.
- الثيمات.
- CRT scanlines.
- Landscape مع double-tap للعودة.
- Fullscreen.
- أزرار اللمس وحقن لوحة المفاتيح عبر iframe bridge.
- إعادة تشغيل اللعبة.
- زر الخروج.

## التحقق

- `verify_core_mirrors.py`: PASS.
- `run_engine_suite.py`: `ENGINE_TESTS_PASS=54/54`.
- Host pipeline: `SUMMARY expected=4 ok=4 fail=0`.
- `:app:assembleDebug`: BUILD SUCCESSFUL.
- APK SHA-256: `32c679dfcf43909652b242fa652cb169398ccd189ac1425a6e6447fdde0a9803`.

## الحد المعروف

لم يتم حذف Native player؛ ما زال مسار توافق منفصلاً، ويحتاج لاحقاً إلى توحيد كامل مع قدرات WebView أو إبقائه موثقاً كمسار Native محدود الصلاحيات. لا يوجد ادعاء بأن كل وظائف WebView أصبحت Native.
