from pathlib import Path
import re
import shutil
import subprocess
import unittest

ROOT = Path(__file__).resolve().parents[2]
ACTIVITY = (ROOT / "app/src/main/java/com/normaker/nativefull/MainActivity.java").read_text()
MANIFEST = (ROOT / "app/src/main/AndroidManifest.xml").read_text()
ACTIVE_HTML = (ROOT / "app/src/main/assets/www/index.html").read_text()
CONSOLE_VIEWER = (ROOT / "source/frontend_drive_2026-11-02/components/ConsoleViewer.tsx").read_text()


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
        active_bundle = (ROOT / "app/src/main/assets/index.html").read_text()
        for html in (ACTIVE_HTML, active_bundle):
            self.assertIn("event.source !== window.parent", html)
            self.assertIn("event.source !== child", html)
            self.assertIn("postNorKeyboardMessage", html)
            self.assertNotIn("contentWindow.dispatchEvent(event)", html)
            self.assertNotIn("typeof win.syncKeyboardToPlayers", html)
        self.assertIn("srcDoc={withNorSandboxBridge(content)}", CONSOLE_VIEWER)
        self.assertIn("messageEvent.source !== window.parent", CONSOLE_VIEWER)
        self.assertIn("event.source !== child", CONSOLE_VIEWER)
        self.assertIn("postSandboxMessage(iwin", CONSOLE_VIEWER)
        self.assertNotIn("(iwin as any).syncKeyboardToPlayers", CONSOLE_VIEWER)
        self.assertNotIn("iwin.dispatchEvent(event)", CONSOLE_VIEWER)

    def test_sandbox_bridge_script_parses(self):
        node = shutil.which("node")
        if not node:
            self.skipTest("Node.js is unavailable; bridge parse is checked in CI where Node is installed")
        script = r"""
const fs = require('fs');
const vm = require('vm');
function exerciseBridge(code, label) {
  const listeners = {};
  const syncCalls = [];
  const inputCalls = [];
  const soundCalls = [];
  const outbound = [];
  const dispatched = [];
  const parent = { postMessage: (message) => outbound.push(message) };
  const target = { dispatchEvent: (event) => dispatched.push(event) };
  const window = {
    parent, instances: [{ destroyed: false }, { destroyed: true }], score: 9,
    player: { health: 70 }, lives: 3,
    addEventListener: (name, callback) => { listeners[name] = callback; },
    dispatchEvent: (event) => dispatched.push(event),
    syncKeyboardToPlayers: (value, down) => syncCalls.push([value, down]),
    Input: { syncKey: (value, down) => inputCalls.push([value, down]) },
    P1_Input: null, playSynthSound: (sound) => soundCalls.push(sound)
  };
  const document = { body: target, dispatchEvent: (event) => dispatched.push(event), querySelector: () => target };
  class FakeKeyboardEvent { constructor(type, options) { this.type = type; Object.assign(this, options); } }
  vm.runInNewContext(code, { window, document, KeyboardEvent: FakeKeyboardEvent, setTimeout: () => 0 });
  if (!listeners.message) throw new Error(label + ': message listener missing');
  const keyMessage = { __norSandboxBridge: 1, type: 'keyboard', value: 38, key: 'ArrowUp', code: 'ArrowUp', keyCode: 38, down: true };
  listeners.message({ source: {}, data: keyMessage });
  if (syncCalls.length || inputCalls.length || dispatched.length) throw new Error(label + ': accepted an untrusted sender');
  listeners.message({ source: parent, data: keyMessage });
  if (!syncCalls.length || !inputCalls.length || !dispatched.length) throw new Error(label + ': trusted keyboard message was not delivered');
  if (label.includes('ConsoleViewer.tsx')) {
    listeners.message({ source: parent, data: { __norSandboxBridge: 1, type: 'get-debug-state' } });
    if (!outbound.some((item) => item.type === 'debug-state' && item.state.health === 70)) throw new Error(label + ': debug state reply missing');
    listeners.message({ source: parent, data: { __norSandboxBridge: 1, type: 'play-preview-sound', sound: 'coin' } });
    listeners.message({ source: parent, data: { __norSandboxBridge: 1, type: 'play-preview-sound', sound: 'not-allowed' } });
    if (soundCalls.length !== 1 || soundCalls[0] !== 'coin') throw new Error(label + ': sound allowlist failed');
    listeners.message({ source: parent, data: { __norSandboxBridge: 1, type: 'execute', code: 'throw new Error("must not run")' } });
    if (soundCalls.length !== 1) throw new Error(label + ': unexpected arbitrary message handling');
  }
}
for (const file of ['app/src/main/assets/index.html', 'app/src/main/assets/www/index.html']) {
  const html = fs.readFileSync(file, 'utf8');
  const start = html.indexOf('const NOR_SANDBOX_BRIDGE_SCRIPT = `');
  const end = html.indexOf('\nconst ConsoleViewer', start);
  if (start < 0 || end < 0) throw new Error(file + ': bridge declaration missing');
  const context = {};
  vm.runInNewContext(html.slice(start, end) +
    '\nthis.bridgeHtml = withNorSandboxBridge("<html><body>test</body></html>");', context);
  if (!context.bridgeHtml.includes('</script></body>')) throw new Error(file + ': script tag was not emitted');
  const match = context.bridgeHtml.match(/<script data-nor-sandbox-bridge>([\s\S]*?)<\/script>/);
  if (!match) throw new Error(file + ': injected script could not be extracted');
  new Function(match[1]);
  exerciseBridge(match[1], file);
}
const sourceFile = 'source/frontend_drive_2026-11-02/components/ConsoleViewer.tsx';
const source = fs.readFileSync(sourceFile, 'utf8');
const marker = 'const NOR_SANDBOX_BRIDGE_SCRIPT = ';
const sourceStart = source.indexOf(marker);
const sourceEnd = source.indexOf('`;', sourceStart + marker.length);
if (sourceStart < 0 || sourceEnd < 0) throw new Error(sourceFile + ': bridge declaration missing');
const sourceBridgeHtml = vm.runInNewContext(source.slice(sourceStart + marker.length, sourceEnd + 1));
const sourceMatch = sourceBridgeHtml.match(/<script data-nor-sandbox-bridge>([\s\S]*?)<\/script>/);
if (!sourceMatch) throw new Error(sourceFile + ': injected bridge script missing');
new Function(sourceMatch[1]);
exerciseBridge(sourceMatch[1], sourceFile);
"""
        result = subprocess.run([node, "-e", script], cwd=ROOT, text=True, capture_output=True)
        self.assertEqual(result.returncode, 0, result.stderr)

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
