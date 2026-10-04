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

const games = ['mario_bros.gmk', 'plataformas.gmk', 'shooter.gmk', 'zelda.gmk'];
for (const g of games) {
  const buf = fs.readFileSync('app/src/main/assets/www/samples/' + g);
  const parsed = sandbox.__norMakerParseGMK(buf.buffer.slice(buf.byteOffset, buf.byteOffset + buf.byteLength));
  console.log('=== ' + g + ' ===');
  console.log('Scripts:', (parsed.scripts || []).map(s => {
    const code = s.code || (typeof s.parse === 'function' ? s.parse().code : '');
    return { name: s.name, len: (code || '').length, preview: (code || '').replace(/\r?\n/g, ' ').substring(0, 60) };
  }));
}
