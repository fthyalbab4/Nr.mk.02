const fs = require('fs');
const vm = require('vm');

const html = fs.readFileSync('app/src/main/assets/www/index.html', 'utf8');

const s1 = html.indexOf('<script');
const s1_end = html.indexOf('</script>', s1);
const s2 = html.indexOf('<script', s1_end);
const s2_end = html.indexOf('</script>', s2);

const scriptTagOpen = html.indexOf('>', s2) + 1;
let mainScript = html.substring(scriptTagOpen, s2_end);
mainScript = mainScript.replace(/import\.meta\.url/g, '"file:///"');
mainScript = mainScript.replace(/import\.meta/g, '{}');

const makeEl = () => ({
  getContext: () => ({
    drawImage: () => {},
    getImageData: () => ({ data: new Uint8Array(4) }),
    putImageData: () => {},
    fillRect: () => {},
    clearRect: () => {},
    save: () => {},
    restore: () => {},
    beginPath: () => {},
    closePath: () => {},
    stroke: () => {},
    fill: () => {},
    moveTo: () => {},
    lineTo: () => {},
    arc: () => {},
    translate: () => {},
    rotate: () => {},
    scale: () => {},
    setTransform: () => {},
  }),
  width: 640,
  height: 480,
  toDataURL: () => 'data:image/png;base64,mock',
  style: {},
  setAttribute: () => {},
  removeAttribute: () => {},
  appendChild: () => {},
  prepend: () => {},
  addEventListener: () => {},
  removeEventListener: () => {},
});

const sandbox = {
  console: console,
  setTimeout: setTimeout,
  clearTimeout: clearTimeout,
  setInterval: setInterval,
  clearInterval: clearInterval,
  requestAnimationFrame: (cb) => setTimeout(cb, 16),
  cancelAnimationFrame: (id) => clearTimeout(id),
  Uint8Array: Uint8Array,
  ArrayBuffer: ArrayBuffer,
  DataView: DataView,
  TextDecoder: TextDecoder,
  TextEncoder: TextEncoder,
  Math: Math,
  JSON: JSON,
  String: String,
  Number: Number,
  Array: Array,
  Object: Object,
  RegExp: RegExp,
  Set: Set,
  Map: Map,
  URL: URL,
  URLSearchParams: URLSearchParams,
  MutationObserver: class { constructor() {} observe() {} disconnect() {} },
  CustomEvent: class { constructor(name) { this.name = name; } },
  Event: class { constructor(name) { this.name = name; } },
  btoa: (str) => Buffer.from(str, 'binary').toString('base64'),
  atob: (str) => Buffer.from(str, 'base64').toString('binary'),
  navigator: { userAgent: 'Node' },
  location: { href: 'http://localhost/' },
  document: {
    createElement: makeEl,
    getElementById: () => makeEl(),
    querySelector: () => makeEl(),
    querySelectorAll: () => [],
    head: makeEl(),
    body: makeEl(),
    addEventListener: () => {},
    removeEventListener: () => {}
  }
};
sandbox.window = sandbox;
sandbox.global = sandbox;
sandbox.globalThis = sandbox;

vm.createContext(sandbox);
vm.runInContext(mainScript, sandbox, { timeout: 30000 });

// Find gmlToJs in index.html
const startIdx = html.indexOf('function gmlToJs(');
const endIdx = html.indexOf('const ACTION_LIBRARY =', startIdx);
let gmlCode = html.substring(startIdx, endIdx !== -1 ? endIdx : startIdx + 25000);
const gmlSandbox = {};
vm.createContext(gmlSandbox);
vm.runInContext(gmlCode, gmlSandbox);
const origGmlToJs = gmlSandbox.gmlToJs;

function enhancedGmlToJs(gml) {
  if (!gml || !gml.trim()) return "";
  let code = gml.replace(/\r\n/g, '\n').replace(/\r/g, '\n');
  code = code.replace(/(\bif\s*\([^\)]+\)\s*[^{};\n]+?)\s+\belse\b/g, '$1; else');
  let js = origGmlToJs(code);
  js = js.replace(/([^\s;{}])\s*\belse\b/g, '$1; else');
  return js;
}

const games = ['mario_bros.gmk', 'plataformas.gmk', 'shooter.gmk', 'zelda.gmk'];
let totalScripts = 0, passedScripts = 0;
let totalActions = 0, passedActions = 0;

for (const g of games) {
  const buf = fs.readFileSync('app/src/main/assets/www/samples/' + g);
  const parsed = sandbox.__norMakerParseGMK(buf.buffer.slice(buf.byteOffset, buf.byteOffset + buf.byteLength));
  console.log('=== VERIFYING GAME: ' + g + ' ===');
  if (parsed.scripts) {
    for (const s of parsed.scripts) {
      const code = s.code || (typeof s.parse === 'function' ? s.parse().code : '');
      if (code && code.trim()) {
        totalScripts++;
        try {
          const transpiled = enhancedGmlToJs(code);
          new Function('argument0', 'argument1', 'argument2', 'argument', transpiled);
          passedScripts++;
        } catch (e) {
          console.error('  [SCRIPT ERROR]', s.name, e.message);
        }
      }
    }
  }
  if (parsed.objects) {
    for (const obj of parsed.objects) {
      if (typeof obj.parse === 'function') {
        const p = obj.parse();
        if (p.events) {
          for (const ev of p.events) {
            if (ev.actions) {
              for (const act of ev.actions) {
                if (act.actionId === 603 && act.argsVal && act.argsVal[0]) {
                  const gml = act.argsVal[0];
                  if (gml && gml.trim()) {
                    totalActions++;
                    try {
                      const transpiled = enhancedGmlToJs(gml);
                      new Function('other', 'ctx', transpiled);
                      passedActions++;
                    } catch (e) {
                      console.error('  [ACTION 603 ERROR in ' + obj.name + ']', e.message);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

console.log(`\nRESULTS: Scripts: ${passedScripts}/${totalScripts} (${(passedScripts/Math.max(1,totalScripts)*100).toFixed(1)}%), Actions: ${passedActions}/${totalActions} (${(passedActions/Math.max(1,totalActions)*100).toFixed(1)}%)`);
