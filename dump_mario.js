const fs = require("fs");
const vm = require("vm");

const html = fs.readFileSync("app/src/main/assets/www/index.html", "utf8");
const s1 = html.indexOf("<script");
const s1_end = html.indexOf("</script>", s1);
const s2 = html.indexOf("<script", s1_end);
const s2_end = html.indexOf("</script>", s2);

let mainScript = html.substring(html.indexOf(">", s2) + 1, s2_end);
mainScript = mainScript.replace(/import\.meta\.url/g, '"file:///"').replace(/import\.meta/g, "{}");

const makeEl = () => ({
  getContext: () => ({ drawImage: () => {}, fillRect: () => {}, clearRect: () => {} }),
  style: {},
  setAttribute: () => {},
  removeAttribute: () => {},
  appendChild: () => {},
  addEventListener: () => {},
  removeEventListener: () => {},
  relList: { supports: () => true }
});

const sandbox = {
  console, setTimeout, clearTimeout, Uint8Array, ArrayBuffer, DataView, TextDecoder, TextEncoder, Math, JSON, String, Number, Array, Object, RegExp, Set, Map, URL, URLSearchParams,
  document: {
    createElement: makeEl,
    getElementById: () => makeEl(),
    querySelector: () => makeEl(),
    querySelectorAll: () => [],
    head: makeEl(),
    body: makeEl(),
    addEventListener: () => {},
    removeEventListener: () => {}
  },
  navigator: { userAgent: "Node" },
  location: { href: "http://localhost/" }
};
sandbox.window = sandbox;
sandbox.global = sandbox;
sandbox.globalThis = sandbox;

vm.createContext(sandbox);
vm.runInContext(mainScript, sandbox);

const buf = fs.readFileSync("app/src/main/assets/www/samples/mario_bros.gmk");
const parsed = sandbox.__norMakerParseGMK(buf.buffer.slice(buf.byteOffset, buf.byteOffset + buf.byteLength));

console.log("=== MARIO BROS GMK COMPLETE FORENSIC DUMP ===");
console.log("Sprites:", parsed.sprites ? parsed.sprites.map(s => `${s.name} (id:${s.id})`) : []);
console.log("Objects:", parsed.objects ? parsed.objects.map(o => `${o.name} (id:${o.id})`) : []);
console.log("Scripts:", parsed.scripts ? parsed.scripts.map(s => s.name) : []);
console.log("Rooms:", parsed.rooms ? parsed.rooms.map(r => r.name) : []);

if (parsed.objects) {
  parsed.objects.forEach((o, i) => {
    const po = typeof o.parse === "function" ? o.parse() : o;
    console.log(`\n======================================================`);
    console.log(`OBJECT ${i}: ${o.name} (id=${o.id}, sprite=${po.spriteName || po.spriteId || po.spriteIndex}, parent=${po.parentName || po.parentId || po.parentIndex}, solid=${po.solid})`);
    console.log(`======================================================`);
    if (po.events) {
      po.events.forEach(ev => {
        console.log(`\n  >>> EVENT type=${ev.type} subType=${ev.subType} name=${ev.name || ""}:`);
        if (ev.actions) {
          ev.actions.forEach((act, actIdx) => {
            const code = act.code || (act.argsVal && act.argsVal[0]) || "";
            console.log(`    [Action ${actIdx}] id=${act.actionId} appliesTo=${act.appliesTo} name=${act.actionName || ""} params=${JSON.stringify(act.params || {})}`);
            if (code) {
              console.log(`      CODE:`);
              console.log(code.split("\n").map(l => "        " + l).join("\n"));
            }
            if (act.argsVal && act.argsVal.length > 0) {
              console.log(`      ARGS:`, JSON.stringify(act.argsVal));
            }
          });
        }
      });
    }
  });
}
