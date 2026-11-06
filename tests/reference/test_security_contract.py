from pathlib import Path
import re
import unittest

ROOT = Path(__file__).resolve().parents[2]
ACTIVITY = (ROOT / "app/src/main/java/com/normaker/nativefull/MainActivity.java").read_text()
MANIFEST = (ROOT / "app/src/main/AndroidManifest.xml").read_text()
ACTIVE_HTML = (ROOT / "app/src/main/assets/www/index.html").read_text()

class SecurityContractTests(unittest.TestCase):
    def test_private_signing_key_is_not_shipped(self):
        for path in ROOT.glob("app/src/main/assets/**/*.html"):
            self.assertNotIn("-----BEGIN RSA PRIVATE KEY-----", path.read_text(errors="ignore"), path)
            self.assertNotIn("-----BEGIN PRIVATE KEY-----", path.read_text(errors="ignore"), path)
        self.assertIn("requires a user-supplied private key", ACTIVE_HTML)

    def test_webview_and_network_are_restricted(self):
        self.assertIn('android:usesCleartextTraffic="false"', MANIFEST)
        self.assertIn("settings.setAllowFileAccess(false)", ACTIVITY)
        self.assertIn("settings.setAllowUniversalAccessFromFileURLs(false)", ACTIVITY)
        self.assertIn("isAllowedCloudGmkUrl", ACTIVITY)
        self.assertIn("connection.setInstanceFollowRedirects(false)", ACTIVITY)
        for path in ROOT.glob("app/src/main/assets/**/*.html"):
            self.assertNotIn("allow-scripts allow-same-origin", path.read_text(errors="ignore"), path)
        self.assertIn("boundedGmkBytes", ACTIVITY)
        self.assertIn("byte[] bounded = boundedGmkBytes(bytes)", ACTIVITY)

    def test_bridge_has_no_arbitrary_path_export_or_general_code_api(self):
        methods = set(re.findall(r'@JavascriptInterface public \S+\s+(\w+)\(', ACTIVITY))
        forbidden = {"exportNorJson", "exportRom", "detectRom", "validateRom", "compileGml", "executeCode", "evaluateGml", "executeGml"}
        self.assertTrue(forbidden.isdisjoint(methods), methods & forbidden)
        self.assertIn("isWithinDirectory(archive, stagingRoot)", ACTIVITY)
        self.assertIn("target.getCanonicalPath().equals(importsRoot.getCanonicalPath())", ACTIVITY)

    def test_keyboard_input_bridge_methods_present(self):
        for method in ("keyDown", "keyUp", "key"):
            self.assertRegex(ACTIVITY, r"@JavascriptInterface public \S+\s+" + method + r"\(")
        self.assertIn("nativeRuntimeKey(vk, true)", ACTIVITY)
        self.assertIn("nativeRuntimeKey(vk, false)", ACTIVITY)
        self.assertIn("nativeRuntimeKey(vk, down)", ACTIVITY)

    def test_advertised_import_bridges_have_implementations(self):
        for method in ("gmkResourceManifestBase64", "importGmkSnapshotBase64", "pickGm82Folder", "pickGmxGmzFolder"):
            self.assertRegex(ACTIVITY, r"@JavascriptInterface public \S+\s+" + method + r"\(")
        self.assertIn("Intent.ACTION_OPEN_DOCUMENT_TREE", ACTIVITY)
        self.assertIn("copyDocumentChildren", ACTIVITY)
        self.assertIn("MAX_GMZ_EXPOSED_BYTES", ACTIVITY)
        self.assertIn("result.bytesRead + copied", ACTIVITY)
        for callback in ("__norGm82FolderPicked", "__norGmxGmzFolderPicked"):
            self.assertIn(callback, ACTIVE_HTML)

if __name__ == "__main__":
    unittest.main()
