const fs = require('fs');
const vm = require('vm');

const html = fs.readFileSync('app/src/main/assets/www/index.html', 'utf8');

// Find gmlToJs and parseGMLBlocks in index.html
const startIdx = html.indexOf('function gmlToJs(');
const endIdx = html.indexOf('const ACTION_LIBRARY =', startIdx);
const gmlCode = html.substring(startIdx, endIdx !== -1 ? endIdx : startIdx + 25000);

console.log('Found gmlCode length:', gmlCode.length);

const sandbox = {};
vm.createContext(sandbox);
vm.runInContext(gmlCode, sandbox);

const gmlToJs = sandbox.gmlToJs;

// Test sample scripts
const testScripts = [
  { name: 'rpg_simple', gml: '//Movimiento RPG Simple::\nif keyboard_check(vk_left){ x=x-3; image_xscale=-1; image_speed=.3; }\nif keyboard_check(vk_right){ x=x+3; image_xscale=1; image_speed=.3; }\nif keyboard_check(vk_up){ y=y-3; image_speed=.3; }\nif keyboard_check(vk_down){ y=y+3; image_speed=.3; }' },
  { name: 'gravedad', gml: '{ gravity_direction=270; if (place_free(x,y+1))gravity=0.4 else gravity=0; }' },
  { name: 'juego_plataformas', gml: '{ gravity_direction=270; if (place_free(x,y+1))gravity=0.8 else gravity=0; if keyboard_check(vk_right) and place_free(x+4,y) { x+=4; image_xscale=1; } if keyboard_check(vk_left) and place_free(x-4,y) { x-=4; image_xscale=-1; } if keyboard_check_pressed(vk_up) and not place_free(x,y+1) { vspeed=-12; } }' },
  { name: 'Rpg_ext', gml: 'vel=argument0; dirx = keyboard_check(vk_right)-keyboard_check(vk_left); diry = keyboard_check(vk_down)-keyboard_check(vk_up); if (dirx!=0 || diry!=0) { mover(dirx, diry, vel); }' },
  { name: 'Rpg_mira', gml: 'if (argument0>333 || argument0<=22){ sprite_index=spr6; image_index=0; }' },
  { name: 'CancelarSpeeds', gml: 'if argument0=0{ hspeed=0;} if argument0=1{ vspeed=0;} if argument0=2{ hspeed=0; vspeed=0;}' },
  { name: 'Gravedad_ext', gml: 'if argument0=0 { gravity_direction=270; if (place_free(x,y+1))gravity=0.4 else gravity=0; } else { gravity_direction=90; if (place_free(x,y-1))gravity=0.4 else gravity=0; }' },
  { name: 'with_block', gml: 'with(argument0) instance_destroy();' },
  { name: 'repeat_block', gml: 'repeat(5) { x += 1; }' }
];

for (const t of testScripts) {
  const transpiled = gmlToJs(t.gml);
  console.log('=== TEST:', t.name, '===');
  console.log('TRANSPILED:\n', transpiled);
  try {
    new Function('argument0', 'argument1', 'argument2', 'argument', transpiled);
    console.log('>> [SUCCESS COMPILED AS JS FUNCTION]');
  } catch (e) {
    console.log('>> [FAILED COMPILE]:', e.message);
  }
}
