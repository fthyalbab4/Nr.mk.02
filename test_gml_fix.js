const fs = require('fs');
const vm = require('vm');

const html = fs.readFileSync('app/src/main/assets/www/index.html', 'utf8');

const startIdx = html.indexOf('function gmlToJs(');
const endIdx = html.indexOf('const ACTION_LIBRARY =', startIdx);
let gmlCode = html.substring(startIdx, endIdx !== -1 ? endIdx : startIdx + 25000);

// Let's test enhancing gmlToJs to fix `if (cond) stmt else stmt`
// In JS: if (cond) stmt; else stmt;
// or wrapping unbraced if/else in braces!

const sandbox = {};
vm.createContext(sandbox);

// Let's enhance gmlToJs with pre/post processing
function patchGmlToJs(sourceCode) {
  // Replace in gmlCode
  return sourceCode;
}

vm.runInContext(gmlCode, sandbox);
let gmlToJs = sandbox.gmlToJs;

function enhancedGmlToJs(gml) {
  if (!gml || !gml.trim()) return "";
  let code = gml;

  // 1. Normalize line breaks
  code = code.replace(/\r\n/g, '\n').replace(/\r/g, '\n');

  // 2. Fix unparenthesized `if cond {` -> `if (cond) {`
  // and `if cond statement;` -> `if (cond) statement;`

  // 3. Fix unbraced if ... else: add semicolon before else if missing
  // e.g. `)stmt else` -> `)stmt; else`
  code = code.replace(/(\bif\s*\([^\)]+\)\s*[^{};\n]+?)\s+\belse\b/g, '$1; else');

  let js = gmlToJs(code);

  // Post-fix any remaining `else` without preceding `;` or `}`
  js = js.replace(/([^\s;{}])\s*\belse\b/g, '$1; else');

  return js;
}

const testScripts = [
  { name: 'gravedad', gml: '{ gravity_direction=270; if (place_free(x,y+1))gravity=0.4 else gravity=0; }' },
  { name: 'juego_plataformas', gml: '{ gravity_direction=270; if (place_free(x,y+1))gravity=0.8 else gravity=0; if keyboard_check(vk_right) and place_free(x+4,y) { x+=4; image_xscale=1; } if keyboard_check(vk_left) and place_free(x-4,y) { x-=4; image_xscale=-1; } if keyboard_check_pressed(vk_up) and not place_free(x,y+1) { vspeed=-12; } }' },
  { name: 'Gravedad_ext', gml: 'if argument0=0 { gravity_direction=270; if (place_free(x,y+1))gravity=0.4 else gravity=0; } else { gravity_direction=90; if (place_free(x,y-1))gravity=0.4 else gravity=0; }' },
];

for (const t of testScripts) {
  const res = enhancedGmlToJs(t.gml);
  console.log('=== TEST:', t.name, '===');
  console.log('Result:\n', res);
  try {
    new Function('argument0', 'argument1', 'argument2', 'argument', res);
    console.log('>> [SUCCESS COMPILED AS JS FUNCTION]');
  } catch (e) {
    console.log('>> [FAILED COMPILE]:', e.message);
  }
}
