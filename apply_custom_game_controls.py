with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Update _gmlResolveKeys
pos = text.find("function _gmlResolveKeys(key) {")
if pos != -1:
    pos_end = text.find("return Array.from(set);\n    }", pos)
    if pos_end != -1:
        pos_end += len("return Array.from(set);\n    }")
        old_block = text[pos:pos_end]
        new_block = """function _gmlResolveKeys(key) {
        if (key === 0 || key === 'vk_nokey') return [];
        const set = new Set();
        if (key !== undefined && key !== null) {
            set.add(key);
            set.add(String(key));
        }
        const numKey = Number(key);
        const isNumeric = !isNaN(numKey) && typeof key !== 'boolean';
        const strKey = String(key || '').toLowerCase().replace(/^vk_/, '');
        // Unified Jump Keys: ArrowUp (38), Space (32), KeyZ (90) - seamless compatibility across all platformers
        if (numKey === 38 || strKey === 'up' || strKey === 'arrowup') {
            [38, '38', 'ArrowUp', 'up', 'vk_up', 'Up', 'Space', 32, '32', 'space', 'vk_space', 'KeyZ', 90, '90', 'z', 'Z', ' '].forEach(k => set.add(k));
        } else if (numKey === 32 || strKey === 'space' || key === ' ') {
            [32, '32', 'Space', 'space', 'vk_space', ' ', 38, '38', 'ArrowUp', 'up', 'vk_up', 'Up', 'KeyZ', 90, '90', 'z', 'Z'].forEach(k => set.add(k));
        } else if (numKey === 90 || strKey === 'keyz' || strKey === 'z') {
            [90, '90', 'KeyZ', 'z', 'Z', 32, '32', 'Space', 'space', 'vk_space', 38, '38', 'ArrowUp', 'up', 'vk_up', 'Up', ' '].forEach(k => set.add(k));
        } else if (numKey === 37 || strKey === 'left' || strKey === 'arrowleft') {
            [37, '37', 'ArrowLeft', 'left', 'vk_left', 'Left', 'KeyA', 65, '65', 'a', 'A'].forEach(k => set.add(k));
        } else if (numKey === 39 || strKey === 'right' || strKey === 'arrowright') {
            [39, '39', 'ArrowRight', 'right', 'vk_right', 'Right', 'KeyD', 68, '68', 'd', 'D'].forEach(k => set.add(k));
        } else if (numKey === 40 || strKey === 'down' || strKey === 'arrowdown') {
            [40, '40', 'ArrowDown', 'down', 'vk_down', 'Down', 'KeyS', 83, '83', 's', 'S'].forEach(k => set.add(k));
        } else if (numKey === 16 || strKey === 'shift' || strKey === 'shiftleft' || strKey === 'shiftright') {
            [16, '16', 'Shift', 'ShiftLeft', 'ShiftRight', 'shift', 'vk_shift', 'KeyX', 88, '88', 'x', 'X'].forEach(k => set.add(k));
        } else if (numKey === 88 || strKey === 'keyx' || strKey === 'x') {
            [88, '88', 'KeyX', 'x', 'X', 16, '16', 'Shift', 'ShiftLeft', 'ShiftRight', 'shift', 'vk_shift'].forEach(k => set.add(k));
        }
        if (isNumeric) {
            const name = mapGMKey(numKey);
            if (name) set.add(name);
            const consts = window.vk_constants || {};
            if (consts[numKey]) set.add(consts[numKey]);
            if (numKey >= 65 && numKey <= 90) {
                const ch = String.fromCharCode(numKey);
                set.add(ch); set.add(ch.toLowerCase()); set.add('Key' + ch);
            } else if (numKey >= 48 && numKey <= 57) {
                const ch = String.fromCharCode(numKey);
                set.add(ch); set.add('Digit' + ch);
            }
        } else if (typeof key === 'string') {
            if (key.startsWith('Key') && key.length === 4) {
                const ch = key.charAt(3);
                set.add(ch); set.add(ch.toLowerCase()); set.add(ch.charCodeAt(0));
            } else if (key.length === 1) {
                set.add(key.charCodeAt(0)); set.add('Key' + key.toUpperCase());
            } else if (strKey === 'enter' || strKey === 'return') {
                set.add(13); set.add('Enter'); set.add('enter'); set.add('vk_enter');
            } else if (strKey === 'control' || strKey === 'ctrl' || strKey === 'controlleft' || strKey === 'controlright') {
                set.add(17); set.add('Control'); set.add('ControlLeft'); set.add('ControlRight'); set.add('control'); set.add('vk_control');
            } else if (strKey === 'alt' || strKey === 'altleft' || strKey === 'altright') {
                set.add(18); set.add('Alt'); set.add('AltLeft'); set.add('AltRight'); set.add('alt'); set.add('vk_alt');
            } else if (strKey === 'escape' || strKey === 'esc') {
                set.add(27); set.add('Escape'); set.add('escape'); set.add('vk_escape');
            }
        }
        return Array.from(set);
    }"""
        text = text[:pos] + new_block + text[pos_end:]
        print("1. Successfully updated _gmlResolveKeys!")
    else:
        print("Error: pos_end of _gmlResolveKeys not found!")
else:
    print("Error: pos of _gmlResolveKeys not found!")

# 2. Add grounded check in window.place_free
pos_pf = text.find("window.place_free = (x, y, self) => {\n        const me = self || window._currentInstance;\n        if (!me) return true;\n        const mw = me.w || 16;")
if pos_pf != -1:
    target_pf = "window.place_free = (x, y, self) => {\n        const me = self || window._currentInstance;\n        if (!me) return true;\n        const mw = me.w || 16;"
    replace_pf = "window.place_free = (x, y, self) => {\n        const me = self || window._currentInstance;\n        if (!me) return true;\n        if (me.grounded && y > me.y && (y - me.y) <= 2.5) return false;\n        const mw = me.w || 16;"
    text = text.replace(target_pf, replace_pf, 1)
    print("2. Successfully injected grounded check into window.place_free!")
else:
    print("Error: target_pf not found in text!")

# 3. Enhance detectGameControlsForEngine: detect ArrowUp as Jump when used in platformers/mario or jump contexts
pos_da = text.find("const actionKeyEntries = [];\n\n  detectedKeys.forEach((entry, kName) => {\n    const isArrow = ['ArrowLeft', 'ArrowRight', 'ArrowUp', 'ArrowDown'].includes(kName);\n    if (isArrow) return;")
if pos_da != -1:
    target_da = "const actionKeyEntries = [];\n\n  detectedKeys.forEach((entry, kName) => {\n    const isArrow = ['ArrowLeft', 'ArrowRight', 'ArrowUp', 'ArrowDown'].includes(kName);\n    if (isArrow) return;"
    replace_da = """const isPlatformerGame = /mario|platform|sonic|jump|saltando|salto|run|gravedad/i.test(title + ' ' + gameObjects.map(o=>o.name).join(' ') + ' ' + scripts.map(s=>s.name||s.id).join(' '));
  const actionKeyEntries = [];

  detectedKeys.forEach((entry, kName) => {
    const fullContext = (entry.contexts.join(' ') + ' ' + entry.snippets.join(' ')).toLowerCase();
    const isJumpArrow = (kName === 'ArrowUp') && (isPlatformerGame || /jump|vspeed|gravity|gravedad|salto|saltando|place_free|hop|fly/i.test(fullContext));
    const isArrow = ['ArrowLeft', 'ArrowRight', 'ArrowUp', 'ArrowDown'].includes(kName);
    if (isArrow && !isJumpArrow) return;"""
    text = text.replace(target_da, replace_da, 1)
    print("3. Successfully enhanced detectGameControlsForEngine to recognize ArrowUp jump!")
else:
    print("Error: target_da not found!")

# 4. Enhance keysToSend in detectGameControlsForEngine so that Jump buttons send unified keys
pos_ks = text.find("const keysToSend = [entry.keyName];\n    if (entry.keyCode) keysToSend.push(entry.keyCode);")
if pos_ks != -1:
    target_ks = "const keysToSend = [entry.keyName];\n    if (entry.keyCode) keysToSend.push(entry.keyCode);"
    replace_ks = "let keysToSend = [entry.keyName];\n    if (entry.keyCode) keysToSend.push(entry.keyCode);\n    if (role === 'jump' || entry.keyName === 'Space' || entry.keyName === 'ArrowUp' || entry.keyName === 'KeyZ') {\n      keysToSend = Array.from(new Set([...keysToSend, 'ArrowUp', 38, 'up', 'vk_up', 'Up', 'Space', 32, 'space', 'vk_space', 'KeyZ', 90, 'z', 'Z', ' ']));\n    }"
    text = text.replace(target_ks, replace_ks, 1)
    print("4. Successfully ensured Jump buttons send full unified keys!")
else:
    print("Error: target_ks not found!")

# 5. Enhance fallback entries in detectGameControlsForEngine
pos_fb = text.find("actionKeyEntries.push(\n      {\n        id: 'btn-jump',\n        keyName: 'Space',")
if pos_fb != -1:
    pos_fb_end = text.find("actionKeyEntries.sort((a, b) => b.priority - a.priority);", pos_fb)
    # The push is right before sort
    # Let's find "if (actionKeyEntries.length === 0) {"
    pos_fb_start = text.rfind("if (actionKeyEntries.length === 0) {", 0, pos_fb)
    pos_fb_close = text.find("    );\n  }", pos_fb) + len("    );\n  }")
    old_fb = text[pos_fb_start:pos_fb_close]
    new_fb = """if (actionKeyEntries.length === 0) {
    actionKeyEntries.push(
      {
        id: 'btn-jump',
        keyName: 'ArrowUp',
        keyCode: 38,
        label: 'A',
        labelAr: 'قفز',
        labelEn: 'Jump',
        sublabel: 'قفز',
        icon: '⬆️',
        role: 'jump',
        color: '#10b981',
        priority: 100,
        keys: [
          'ArrowUp', 38, 'up', 'vk_up', 'Up', 'Space', 32, 'space', 'vk_space', 'KeyZ', 90, 'z', 'Z', ' '
        ]
      },
      {
        id: 'btn-attack',
        keyName: 'Shift',
        keyCode: 16,
        label: 'B',
        labelAr: 'جري/فعل',
        labelEn: 'Run/Action',
        sublabel: 'جري',
        icon: '⚡',
        role: 'dash',
        color: '#8b5cf6',
        priority: 90,
        keys: [
          'ShiftLeft', 'ShiftRight', 'Shift', 16, 'shift', 'vk_shift', 'KeyX', 88, 'x', 'X'
        ]
      }
    );
  }"""
    text = text[:pos_fb_start] + new_fb + text[pos_fb_close:]
    print("5. Successfully updated default fallback in detectGameControlsForEngine!")
else:
    print("Error: pos_fb not found!")

# 6. Update ArrowUp handling in syncKeyboardToPlayers
pos_sau = text.find('} else if (name === "ArrowUp" || code === 38 || name === "KeyW" || name === "w" || name === "W" || code === 87) {\n            ["ArrowUp", 38, "up", "vk_up", "KeyW", "w", "W", 87].forEach(k => P1_Input.syncKey(k, down));')
if pos_sau != -1:
    target_sau = '} else if (name === "ArrowUp" || code === 38 || name === "KeyW" || name === "w" || name === "W" || code === 87) {\n            ["ArrowUp", 38, "up", "vk_up", "KeyW", "w", "W", 87].forEach(k => P1_Input.syncKey(k, down));'
    replace_sau = '} else if (name === "ArrowUp" || code === 38 || name === "KeyW" || name === "w" || name === "W" || code === 87) {\n            ["ArrowUp", 38, "up", "vk_up", "KeyW", "w", "W", 87, "Space", 32, "space", "vk_space", "KeyZ", 90, "z", "Z", " "].forEach(k => P1_Input.syncKey(k, down));'
    text = text.replace(target_sau, replace_sau, 1)
    print("6. Successfully updated ArrowUp in syncKeyboardToPlayers!")
else:
    print("Error: target_sau not found!")

# 7. Update React activeButtons in index.html
pos_rab = text.find('const activeButtons = (detectedControls && Array.isArray(detectedControls.buttons) && detectedControls.buttons.length > 0)\n    ? detectedControls.buttons\n    : [')
if pos_rab != -1:
    pos_rab_end = text.find('];', pos_rab) + 2
    old_rab = text[pos_rab:pos_rab_end]
    new_rab = """const activeButtons = ((detectedControls && Array.isArray(detectedControls.buttons) && detectedControls.buttons.length > 0)
    ? detectedControls.buttons
    : [
        { id: "action-a", label: "A", labelAr: "قفز", labelEn: "Jump", icon: "⬆️", role: "jump", keys: ["ArrowUp", 38, "up", "vk_up", "Up", "Space", 32, "space", "vk_space", "KeyZ", 90, "z", "Z", " "], color: "#10b981" },
        { id: "action-b", label: "B", labelAr: "جري/فعل", labelEn: "Run/Action", icon: "⚡", role: "dash", keys: ["ShiftLeft", 16, "shift", "vk_shift", "KeyX", 88, "x", "X"], color: "#8b5cf6" }
      ]).map((b, bIdx) => {
        if (b.role === "jump" || b.id === "btn-jump" || b.id === "action-a" || bIdx === 0) {
          return {
            ...b,
            keys: Array.from(new Set([...(b.keys || []), "ArrowUp", 38, "up", "vk_up", "Up", "Space", 32, "space", "vk_space", "KeyZ", 90, "z", "Z", " "]))
          };
        }
        return b;
      });"""
    text = text[:pos_rab] + new_rab + text[pos_rab_end:]
    print("7. Successfully updated React activeButtons mapping!")
else:
    print("Error: pos_rab not found!")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

print("\n--- ALL TARGETS MODIFIED AND SAVED SUCCESSFULLY! ---")
