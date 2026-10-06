# دمج Native Loop في index.html

```html
<script src="nor_native_loop_bridge.js"></script>
<script src="index_html_native_loop_patch.js"></script>
```

قبل `</body>`.

WebView:
```java
webView.addJavascriptInterface(new NorNativeWebBridge(), "NorNative");
```
