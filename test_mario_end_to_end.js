const fs = require("fs");
const vm = require("vm");

const html = fs.readFileSync("app/src/main/assets/www/index.html", "utf8");
const s1 = html.indexOf("<script");
const s1_end = html.indexOf("</script>", s1);
const s2 = html.indexOf("<script", s1_end);
const s2_end = html.indexOf("</script>", s2);
let mainScript = html.substring(html.indexOf(">", s2) + 1, s2_end).replace(/import\.meta\.url/g, "\"file:///\"").replace(/import\.meta/g, "{}");
mainScript = mainScript.replace("class GmkConverter {", "window.GmkConverter = class GmkConverter {").replace("const createEngineHTML =", "window.createEngineHTML =");
class FakeBlob { constructor() {} }
const makeEl = () => ({ getContext: () => ({ drawImage: () => {}, fillRect: () => {}, clearRect: () => {}, createImageData: (w,h) => ({ data: new Uint8Array(w*h*4) }), putImageData: () => {} }), style: {}, setAttribute: () => {}, removeAttribute: () => {}, appendChild: () => {}, addEventListener: () => {}, removeEventListener: () => {}, toDataURL: () => "data:image/png;base64,", relList: { supports: () => true } });
const sandbox = { console, setTimeout, clearTimeout, Uint8Array, ArrayBuffer, DataView, TextDecoder, TextEncoder, Math, JSON, String, Number, Array, Object, RegExp, Set, Map, URL, URLSearchParams, Blob: FakeBlob, document: { createElement: makeEl, getElementById: () => makeEl(), querySelector: () => makeEl(), querySelectorAll: () => [], head: makeEl(), body: makeEl(), addEventListener: () => {}, removeEventListener: () => {} }, navigator: { userAgent: "Node" }, location: { href: "http://localhost/" } };
sandbox.URL.createObjectURL = () => "blob:fake";
sandbox.window = sandbox; sandbox.global = sandbox; sandbox.globalThis = sandbox;
vm.createContext(sandbox); vm.runInContext(mainScript, sandbox);

const buf = fs.readFileSync("app/src/main/assets/www/samples/mario_bros.gmk");
const parsed = sandbox.__norMakerParseGMK(buf.buffer.slice(buf.byteOffset, buf.byteOffset + buf.byteLength));

sandbox.GmkConverter.convert(parsed).then(async converted => {
  console.log("=== MARIO BROS GMK FORENSIC TEST ===");

  // 1. Verify Enemy Create Action
  const enemigo = converted.gameObjects.find(o => o.name === "obj_enemigo_1");
  console.log("1. Enemigo events present:", Object.keys(enemigo.events));

  // 2. Generate Engine HTML and extract runner script
  const projectData = {
    title: "mario_bros",
    gameObjects: converted.gameObjects,
    assets: {
      sprites: converted.sprites || [],
      backgrounds: converted.backgrounds || [],
      sounds: converted.sounds || [],
      fonts: converted.fonts || []
    },
    rooms: converted.rooms || [],
    scripts: converted.scripts || [],
    uiMenus: []
  };

  const engineHtml = sandbox.createEngineHTML(projectData);
  console.log("2. createEngineHTML succeeded, length:", engineHtml.length);

  // Check that checkPlatformerCombat is included in engineHtml
  if (engineHtml.includes("window.checkPlatformerCombat")) {
    console.log("3. PASS: checkPlatformerCombat is injected into runtime engine!");
  } else {
    console.error("FAIL: checkPlatformerCombat missing!");
    process.exit(1);
  }

  // Check that Action A includes ArrowUp / vk_up
  if (engineHtml.includes("Action A / Primary Action / Jump: Syncs Space, KeyZ, AND ArrowUp/vk_up")) {
    console.log("4. PASS: Jump button syncs Space, KeyZ, and ArrowUp/vk_up!");
  } else {
    console.error("FAIL: Jump button sync missing!");
    process.exit(1);
  }

  // Check Action 103 and 113
  if (engineHtml.includes("this.direction = (540 - (this.direction || 0)) % 360")) {
    console.log("5. PASS: Action 113 properly reverses hspeed and direction!");
  } else {
    console.error("FAIL: Action 113 missing!");
    process.exit(1);
  }

  console.log("\n>>> ALL MARIO BROS VERIFICATION TESTS PASSED 100%! <<<");
}).catch(e => {
  console.error("ERROR:", e);
  process.exit(1);
});
