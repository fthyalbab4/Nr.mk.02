import pathlib
import re
import unittest
import xml.etree.ElementTree as ET

ROOT = pathlib.Path(__file__).resolve().parents[2]
ANDROID_NS = "{http://schemas.android.com/apk/res/android}"


class SingleAndroidAppIntegrationTests(unittest.TestCase):
    def test_launcher_hosts_studio_and_native_player_in_one_activity(self):
        manifest = ET.parse(ROOT / "app/src/main/AndroidManifest.xml").getroot()
        launchers = []
        for activity in manifest.findall(".//activity"):
            names = {node.attrib.get(ANDROID_NS + "name") for node in activity.findall("intent-filter/action")}
            cats = {node.attrib.get(ANDROID_NS + "name") for node in activity.findall("intent-filter/category")}
            if "android.intent.action.MAIN" in names and "android.intent.category.LAUNCHER" in cats:
                launchers.append(activity.attrib.get(ANDROID_NS + "name"))
        self.assertEqual(launchers, [".MainActivity"])

        activity = (ROOT / "app/src/main/java/com/normaker/nativefull/MainActivity.java").read_text()
        self.assertIn('webView.loadUrl("file:///android_asset/www/index.html")', activity)
        self.assertIn('addJavascriptInterface(new StudioNativeBridge(), "NorNative")', activity)
        self.assertIn("public final class StudioNativeBridge", activity)
        self.assertIn("onShowFileChooser", activity)
        self.assertIn("nativeImportGmkSnapshot(bytes", activity)
        self.assertIn("nativeRuntimeRenderBitmap(frameBitmap)", activity)
        self.assertIn("showNativePlayer()", activity)
        self.assertIn('exportNorJsonToApp(String json, String filename)', activity)
        self.assertIn("nativeProjectLoaded = false", activity)
        self.assertFalse((ROOT / "app/src/main/java/com/normaker/gm82/NorNativeWebBridge.java").exists())

        gradle = (ROOT / "app/build.gradle").read_text()
        self.assertIn("path file('src/main/cpp/CMakeLists.txt')", gradle)
        self.assertIn("ndkVersion '25.2.9519653'", gradle)
        self.assertIn("jniLibs.srcDirs = []", gradle)

    def test_runner_assets_are_local_without_parallel_native_loop(self):
        html = (ROOT / "app/src/main/assets/www/index.html").read_text()
        self.assertIn('./vendor/three.r128.min.js', html)
        self.assertNotIn('./nor_native_loop_bridge.js', html)
        self.assertNotIn('./index_html_native_loop_patch.js', html)
        standalone = (ROOT / "app/src/main/assets/www/play_native.html").read_text()
        self.assertNotIn("nor_native_loop_bridge.js", standalone)
        self.assertFalse(
            any('src="http://' in line or 'src="https://' in line for line in html.splitlines()),
            "external scripts are disallowed in the bridged WebView",
        )
        self.assertTrue((ROOT / "app/src/main/assets/www/vendor/three.r128.min.js").is_file())
        self.assertTrue((ROOT / "app/src/main/assets/www/vendor/THREE_LICENSE.txt").is_file())

    def test_java_to_jni_contracts_exist(self):
        java = (ROOT / "app/src/main/java/com/normaker/nativefull/MainActivity.java").read_text()
        jni = (ROOT / "app/src/main/cpp/gm82_jni.c").read_text()
        for name in (
            "nativeRuntimeCreate", "nativeImportGmkSnapshot", "nativeRuntimeStep",
            "nativeRuntimeRenderBitmap", "nativeRuntimeSetRoom", "nativeRuntimeAddInstance",
            "nativeRegisterResource", "nativeRuntimeClearEvents", "nativeRuntimeClearInstances",
        ):
            self.assertRegex(java, r"\bnative\s+[A-Za-z0-9_<>\[\]]+\s+" + re.escape(name) + r"\s*\(")
            self.assertIn("Java_com_normaker_nativefull_MainActivity_" + name, jni)


if __name__ == "__main__":
    unittest.main()
