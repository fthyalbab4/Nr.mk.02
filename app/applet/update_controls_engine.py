import re

def update_controls():
    with open("app/src/main/assets/www/index.html", "r", encoding="utf-8") as f:
        html = f.read()

    print("Initial size:", len(html))

    # 1. Update detectGameControlsForEngine to produce precise key labels (SPACE, K, Z, X, UP, SHIFT, etc.)
    p_det_start = html.find("const detectGameControlsForEngine = window.detectGameControlsForEngine =")
    p_det_end = html.find("const createEngineHTML =", p_det_start)

    print("detectGameControlsForEngine boundaries:", p_det_start, "to", p_det_end)
    assert p_det_start != -1 and p_det_end != -1

    new_detect = """const detectGameControlsForEngine = window.detectGameControlsForEngine = (projectData) => {
  const title = String((projectData && (projectData.title || projectData.gameTitle || projectData.name)) || '').trim();
  const gameObjects = Array.isArray(projectData && projectData.gameObjects) ? projectData.gameObjects : [];
  const scripts = Array.isArray(projectData && projectData.scripts) ? projectData.scripts : [];
  const rooms = Array.isArray(projectData && projectData.rooms) ? projectData.rooms : [];

  const GM_KEY_NAMES = {
    8: 'Backspace', 9: 'Tab', 13: 'Enter', 16: 'Shift', 17: 'Control', 18: 'Alt', 27: 'Escape', 32: 'Space',
    37: 'ArrowLeft', 38: 'ArrowUp', 39: 'ArrowRight', 40: 'ArrowDown',
    65: 'KeyA', 66: 'KeyB', 67: 'KeyC', 68: 'KeyD', 69: 'KeyE', 70: 'KeyF', 71: 'KeyG', 72: 'KeyH',
    73: 'KeyI', 74: 'KeyJ', 75: 'KeyK', 76: 'KeyL', 77: 'KeyM', 78: 'KeyN', 79: 'KeyO', 80: 'KeyP',
    81: 'KeyQ', 82: 'KeyR', 83: 'KeyS', 84: 'KeyT', 85: 'KeyU', 86: 'KeyV', 87: 'KeyW', 88: 'KeyX',
    89: 'KeyY', 90: 'KeyZ', 48: 'Digit0', 49: 'Digit1', 50: 'Digit2', 51: 'Digit3', 52: 'Digit4',
    53: 'Digit5', 54: 'Digit6', 55: 'Digit7', 56: 'Digit8', 57: 'Digit9'
  };

  const detectedKeys = new Map();

  const recordKeyUsage = (rawKey, contextStr, snippetStr) => {
    if (!rawKey) return;
    let normKey = String(rawKey).trim();
    let keyCode = 0;
    let keyName = '';

    if (/^\\d+$/.test(normKey)) {
      keyCode = parseInt(normKey, 10);
      keyName = GM_KEY_NAMES[keyCode] || ('Key' + keyCode);
    } else {
      const lower = normKey.toLowerCase().replace(/^vk_/, '');
      if (lower === 'left') { keyCode = 37; keyName = 'ArrowLeft'; }
      else if (lower === 'up') { keyCode = 38; keyName = 'ArrowUp'; }
      else if (lower === 'right') { keyCode = 39; keyName = 'ArrowRight'; }
      else if (lower === 'down') { keyCode = 40; keyName = 'ArrowDown'; }
      else if (lower === 'space') { keyCode = 32; keyName = 'Space'; }
      else if (lower === 'enter' || lower === 'return') { keyCode = 13; keyName = 'Enter'; }
      else if (lower === 'shift' || lower === 'lshift' || lower === 'rshift') { keyCode = 16; keyName = 'Shift'; }
      else if (lower === 'control' || lower === 'ctrl' || lower === 'lcontrol') { keyCode = 17; keyName = 'Control'; }
      else if (lower === 'alt' || lower === 'lalt') { keyCode = 18; keyName = 'Alt'; }
      else if (lower === 'escape' || lower === 'esc') { keyCode = 27; keyName = 'Escape'; }
      else if (/^key[a-z0-9]$/i.test(normKey)) {
        const ch = normKey.charAt(3).toUpperCase();
        keyCode = ch.charCodeAt(0);
        keyName = 'Key' + ch;
      } else if (normKey.length === 1 && /[a-zA-Z0-9]/.test(normKey)) {
        const ch = normKey.toUpperCase();
        keyCode = ch.charCodeAt(0);
        keyName = 'Key' + ch;
      } else {
        keyName = normKey;
      }
    }

    if (!keyName) return;
    const entryKey = keyName;
    if (!detectedKeys.has(entryKey)) {
      detectedKeys.set(entryKey, {
        keyId: entryKey,
        keyCode: keyCode,
        keyName: keyName,
        contexts: [],
        snippets: []
      });
    }
    const item = detectedKeys.get(entryKey);
    if (contextStr && !item.contexts.includes(contextStr)) item.contexts.push(contextStr);
    if (snippetStr && item.snippets.length < 5) item.snippets.push(snippetStr.slice(0, 150));
  };

  const scanCodeForKeys = (code, context) => {
    if (!code || typeof code !== 'string') return;
    const reFunc = /keyboard_check(?:_pressed|_released|_direct)?\\s*\\(\\s*([^)]+)\\s*\\)/g;
    let m;
    while ((m = reFunc.exec(code)) !== null) {
      const rawArg = m[1].trim();
      const ordMatch = rawArg.match(/ord\\s*\\(\\s*['"]([A-Za-z0-9])['"]\\s*\\)/i);
      if (ordMatch) {
        recordKeyUsage('Key' + ordMatch[1].toUpperCase(), context, code.slice(Math.max(0, m.index - 30), m.index + 100));
      } else {
        recordKeyUsage(rawArg, context, code.slice(Math.max(0, m.index - 30), m.index + 100));
      }
    }

    const reVk = /\\b(vk_space|vk_shift|vk_control|vk_alt|vk_enter|vk_escape|vk_left|vk_right|vk_up|vk_down|vk_backspace|vk_tab)\\b/g;
    while ((m = reVk.exec(code)) !== null) {
      recordKeyUsage(m[1], context, code.slice(Math.max(0, m.index - 30), m.index + 100));
    }

    const reOrd = /\\bord\\s*\\(\\s*['"]([A-Za-z0-9])['"]\\s*\\)/g;
    while ((m = reOrd.exec(code)) !== null) {
      recordKeyUsage('Key' + m[1].toUpperCase(), context, code.slice(Math.max(0, m.index - 30), m.index + 100));
    }
  };

  gameObjects.forEach(obj => {
    const objName = String(obj.name || '');
    const evs = obj.events || {};
    Object.entries(evs).forEach(([evKey, evVal]) => {
      const lowerKey = evKey.toLowerCase();
      let matchedKey = null;
      if (lowerKey.startsWith('keyboard_') || lowerKey.startsWith('keypress_') || lowerKey.startsWith('keyrelease_')) {
        matchedKey = evKey.split('_').slice(1).join('_');
      } else if (lowerKey.startsWith('ev_keyboard_') || lowerKey.startsWith('ev_keypress_') || lowerKey.startsWith('ev_keyrelease_')) {
        matchedKey = evKey.split('_').slice(2).join('_');
      } else if (/^ev_(5|9|10)_/i.test(evKey)) {
        matchedKey = evKey.split('_')[2];
      }

      let codeContent = '';
      if (typeof evVal === 'string') codeContent = evVal;
      else if (evVal && typeof evVal === 'object') {
        if (evVal.code) codeContent = evVal.code;
        else if (evVal.gml) codeContent = evVal.gml;
        else if (evVal.js) codeContent = evVal.js;
        else if (Array.isArray(evVal.actions)) {
          codeContent = evVal.actions.map(a => (a && (a.code || a.js || a.gml)) || '').join('\\n');
        }
      }

      if (matchedKey) {
        recordKeyUsage(matchedKey, objName + ':' + evKey, codeContent);
      }
      if (codeContent) {
        scanCodeForKeys(codeContent, objName + ':' + evKey);
      }
    });
  });

  scripts.forEach(scr => {
    const scrName = String(scr.name || scr.id || 'script');
    const scrCode = typeof scr === 'string' ? scr : (scr.code || scr.gml || scr.js || scr.text || '');
    if (scrCode) scanCodeForKeys(scrCode, 'script:' + scrName);
  });

  rooms.forEach(rm => {
    const rmName = String(rm.name || rm.id || 'room');
    const code = rm.creationCode || (rm.settings && rm.settings.creationCode) || '';
    if (code) scanCodeForKeys(code, 'room:' + rmName);
  });

  const isPlatformerGame = /mario|platform|sonic|jump|saltando|salto|run|gravedad/i.test(title + ' ' + gameObjects.map(o=>o.name).join(' ') + ' ' + scripts.map(s=>s.name||s.id).join(' '));

  const actionKeyEntries = [];

  detectedKeys.forEach((entry, kName) => {
    const fullContext = (entry.contexts.join(' ') + ' ' + entry.snippets.join(' ')).toLowerCase();
    const isJumpArrow = (kName === 'ArrowUp') && (isPlatformerGame || /jump|vspeed|gravity|gravedad|salto|saltando|place_free|hop|fly/i.test(fullContext));
    const isArrow = ['ArrowLeft', 'ArrowRight', 'ArrowUp', 'ArrowDown'].includes(kName);

    // Arrows are in D-Pad, but if ArrowUp is the jump button, we also create a dedicated Jump button!
    if (isArrow && !isJumpArrow) return;

    let role = 'action';
    let label = kName;
    let labelAr = 'زر ' + kName;
    let labelEn = kName;
    let icon = '🔘';
    let color = '#3b82f6';
    let priority = 50;

    if (kName === 'Space') {
      role = 'jump';
      label = 'SPACE';
      labelAr = 'مسافة (قفز)';
      labelEn = 'Space (Jump)';
      icon = '␣';
      color = '#10b981';
      priority = 100;
    } else if (kName === 'ArrowUp') {
      role = 'jump';
      label = '▲ UP';
      labelAr = 'للأعلى (قفز)';
      labelEn = 'Up (Jump)';
      icon = '⬆️';
      color = '#10b981';
      priority = 99;
    } else if (kName === 'Shift') {
      role = 'dash';
      label = 'SHIFT';
      labelAr = 'شفت (جري)';
      labelEn = 'Shift (Run)';
      icon = '⚡';
      color = '#8b5cf6';
      priority = 85;
    } else if (kName === 'Control') {
      role = 'attack';
      label = 'CTRL';
      labelAr = 'تحكم (هجوم)';
      labelEn = 'Ctrl (Attack)';
      icon = '⚔️';
      color = '#ef4444';
      priority = 80;
    } else if (kName === 'Enter') {
      role = 'menu';
      label = 'ENTER';
      labelAr = 'إدخال';
      labelEn = 'Enter';
      icon = '↵';
      color = '#64748b';
      priority = 10;
    } else if (kName.startsWith('Key') && kName.length === 4) {
      const letter = kName.charAt(3).toUpperCase();
      label = letter;
      labelAr = 'مفتاح ' + letter;
      labelEn = 'Key ' + letter;

      if (letter === 'Z') {
        icon = '🆉';
        color = '#10b981';
        priority = 90;
        if (fullContext.includes('jump') || isPlatformerGame) { labelAr = 'Z (قفز)'; role = 'jump'; }
      } else if (letter === 'X') {
        icon = '🆇';
        color = '#8b5cf6';
        priority = 88;
        if (fullContext.includes('run') || fullContext.includes('dash')) { labelAr = 'X (جري)'; role = 'dash'; }
        else if (fullContext.includes('shoot') || fullContext.includes('fire')) { labelAr = 'X (إطلاق)'; role = 'shoot'; color = '#ef4444'; }
      } else if (letter === 'C') {
        icon = '🅲';
        color = '#f59e0b';
        priority = 86;
        labelAr = 'C (خاص)';
      } else if (letter === 'K') {
        icon = '🅺';
        color = '#ef4444';
        priority = 87;
        labelAr = 'مفتاح K';
      } else if (letter === 'J') {
        icon = '🅹';
        color = '#3b82f6';
        priority = 84;
        labelAr = 'مفتاح J';
      } else if (letter === 'L') {
        icon = '🅻';
        color = '#06b6d4';
        priority = 83;
        labelAr = 'مفتاح L';
      } else {
        icon = '🔤';
        color = '#3b82f6';
        priority = 60;
      }
    }

    let keysToSend = [entry.keyName];
    if (entry.keyCode) keysToSend.push(entry.keyCode);

    if (role === 'jump' || entry.keyName === 'Space' || entry.keyName === 'ArrowUp' || entry.keyName === 'KeyZ') {
      keysToSend = Array.from(new Set([...keysToSend, 'ArrowUp', 38, 'up', 'vk_up', 'Up', 'Space', 32, 'space', 'vk_space', 'KeyZ', 90, 'z', 'Z', 'w', 'KeyW', 87, ' ']));
    }
    if (entry.keyName.startsWith('Key') && entry.keyName.length === 4) {
      const ch = entry.keyName.charAt(3);
      keysToSend.push(ch, ch.toLowerCase(), ch.toUpperCase(), ch.charCodeAt(0));
    } else if (entry.keyName === 'Space') {
      keysToSend.push(' ', 'space', 'vk_space', 32);
    } else if (entry.keyName === 'Shift') {
      keysToSend.push('ShiftLeft', 'ShiftRight', 'shift', 'vk_shift', 16);
    }

    actionKeyEntries.push({
      id: 'btn-' + entry.keyName.toLowerCase(),
      keyName: entry.keyName,
      keyCode: entry.keyCode,
      label: label,
      labelAr: labelAr,
      labelEn: labelEn,
      sublabel: labelAr,
      icon: icon,
      role: role,
      color: color,
      priority: priority,
      keys: keysToSend
    });
  });

  if (isPlatformerGame && actionKeyEntries.length === 1 && actionKeyEntries[0].role === "jump") {
    actionKeyEntries.push({
      id: "btn-shift-run",
      keyName: "Shift",
      keyCode: 16,
      label: "SHIFT",
      labelAr: "شفت (جري)",
      labelEn: "Shift (Run)",
      sublabel: "جري ⚡",
      icon: "⚡",
      role: "dash",
      color: "#8b5cf6",
      priority: 80,
      keys: ["ShiftLeft", "ShiftRight", "Shift", 16, "shift", "vk_shift", "KeyX", 88, "x", "X"]
    });
  }

  actionKeyEntries.sort((a, b) => b.priority - a.priority);

  if (actionKeyEntries.length === 0) {
    actionKeyEntries.push(
      {
        id: 'btn-space',
        keyName: 'Space',
        keyCode: 32,
        label: 'SPACE',
        labelAr: 'مسافة (قفز)',
        labelEn: 'Space (Jump)',
        sublabel: 'قفز ⬆️',
        icon: '␣',
        role: 'jump',
        color: '#10b981',
        priority: 100,
        keys: ['Space', 32, 'space', 'vk_space', 'ArrowUp', 38, 'up', 'vk_up', 'KeyZ', 90, 'z', 'Z', ' ']
      },
      {
        id: 'btn-shift',
        keyName: 'Shift',
        keyCode: 16,
        label: 'SHIFT',
        labelAr: 'شفت (جري)',
        labelEn: 'Shift (Run)',
        sublabel: 'جري ⚡',
        icon: '⚡',
        role: 'dash',
        color: '#8b5cf6',
        priority: 90,
        keys: ['ShiftLeft', 'ShiftRight', 'Shift', 16, 'shift', 'vk_shift', 'KeyX', 88, 'x', 'X']
      }
    );
  }

  const primaryButtons = actionKeyEntries.filter(b => b.role !== 'menu').slice(0, 4);
  if (primaryButtons.length === 0) primaryButtons.push(actionKeyEntries[0]);

  const cleanGameTitle = title ? title.replace(/[-_]/g, ' ').replace(/\\.gmk$/i, '').replace(/\\.gm81$/i, '').replace(/\\.gmx$/i, '') : 'اللعبة';
  const toastDetails = primaryButtons.map(b => b.label + ': ' + b.labelAr).join(' | ');

  return {
    profileId: 'dynamic_custom',
    gameName: cleanGameTitle,
    detectedKeysCount: detectedKeys.size,
    toastAr: '🎮 أزرار التحكم لـ (' + cleanGameTitle + '): ' + toastDetails,
    toastEn: '🎮 Controls for (' + cleanGameTitle + '): ' + primaryButtons.map(b => b.label + ': ' + b.labelEn).join(' | '),
    dpad: {
      up: ['ArrowUp', 38, 'KeyW', 'w', 87],
      down: ['ArrowDown', 40, 'KeyS', 's', 83],
      left: ['ArrowLeft', 37, 'KeyA', 'a', 65],
      right: ['ArrowRight', 39, 'KeyD', 'd', 68]
    },
    buttons: primaryButtons,
    menuButtons: [
      { id: 'btn-start', label: 'START', labelAr: 'بدء', labelEn: 'START', keys: ['Enter', 13, 'Space', 32] },
      { id: 'btn-select', label: 'SELECT', labelAr: 'تحديد', labelEn: 'SELECT', keys: ['Shift', 16, 'Escape', 27] }
    ]
  };
};
"""

    html = html[:p_det_start] + new_detect + html[p_det_end:]
    print("Successfully replaced detectGameControlsForEngine!")

    # 2. Update ConsoleViewer
    pos_cv_start = html.find("const ConsoleViewer = ({ mode, content, title, iframeRef: forwardedIframeRef }) => {")
    pos_cv_end = html.find(";const newId$1", pos_cv_start)
    assert pos_cv_start != -1 and pos_cv_end != -1

    new_console_viewer = """const ConsoleViewer = ({ mode, content, title, iframeRef: forwardedIframeRef }) => {
  const internalIframeRef = reactExports.useRef(null);
  const iframeRef = forwardedIframeRef || internalIframeRef;
  const containerRef = reactExports.useRef(null);
  const [activeKeys, setActiveKeys] = reactExports.useState({});
  const [isFullscreen, setIsFullscreen] = reactExports.useState(false);
  const [showDevTools, setShowDevTools] = reactExports.useState(false);
  const [detectedControls, setDetectedControls] = reactExports.useState(null);
  const [toastMessage, setToastMessage] = reactExports.useState(null);

  reactExports.useEffect(() => {
    if (mode !== "game") return;
    const extractControls = () => {
      const win = iframeRef.current?.contentWindow;
      if (win) {
        if (win.DETECTED_CONTROLS && win.DETECTED_CONTROLS.buttons) {
          setDetectedControls(win.DETECTED_CONTROLS);
          if (win.DETECTED_CONTROLS.toastAr) setToastMessage(win.DETECTED_CONTROLS.toastAr);
          return true;
        }
        if (win.GAME_DATA && win.GAME_DATA.detectedGameControls && win.GAME_DATA.detectedGameControls.buttons) {
          setDetectedControls(win.GAME_DATA.detectedGameControls);
          if (win.GAME_DATA.detectedGameControls.toastAr) setToastMessage(win.GAME_DATA.detectedGameControls.toastAr);
          return true;
        }
      }
      return false;
    };

    if (content) {
      try {
        const m = content.match(/"detectedGameControls"\\s*:\\s*(\\{[\\s\\S]+?\\})\\s*,\\s*"runtimeDiagnostics"/);
        if (m && m[1]) {
          const parsed = JSON.parse(m[1]);
          if (parsed && parsed.buttons) {
            setDetectedControls(parsed);
            if (parsed.toastAr) setToastMessage(parsed.toastAr);
          }
        }
      } catch(e) {}
    }

    const interval = setInterval(() => {
      if (extractControls()) clearInterval(interval);
    }, 150);
    return () => clearInterval(interval);
  }, [content, mode]);

  reactExports.useEffect(() => {
    if (!toastMessage) return;
    const t = setTimeout(() => setToastMessage(null), 4500);
    return () => clearTimeout(t);
  }, [toastMessage]);

  const sendKey = (key, type) => {
    const iwin = iframeRef.current?.contentWindow;
    if (!iwin) return;
    const isDown = type === "keydown";
    let code = typeof key === "string" ? key : "";
    let keyCode = typeof key === "number" ? key : 0;

    if (!keyCode) {
      switch (key) {
        case "ArrowLeft": case "left": case "vk_left": code = "ArrowLeft"; keyCode = 37; break;
        case "ArrowUp": case "up": case "vk_up": case "Up": code = "ArrowUp"; keyCode = 38; break;
        case "ArrowRight": case "right": case "vk_right": code = "ArrowRight"; keyCode = 39; break;
        case "ArrowDown": case "down": case "vk_down": code = "ArrowDown"; keyCode = 40; break;
        case "z": case "Z": case "KeyZ": code = "KeyZ"; keyCode = 90; break;
        case "x": case "X": case "KeyX": code = "KeyX"; keyCode = 88; break;
        case "c": case "C": case "KeyC": code = "KeyC"; keyCode = 67; break;
        case "v": case "V": case "KeyV": code = "KeyV"; keyCode = 86; break;
        case "a": case "A": case "KeyA": code = "KeyA"; keyCode = 65; break;
        case "s": case "S": case "KeyS": code = "KeyS"; keyCode = 83; break;
        case "d": case "D": case "KeyD": code = "KeyD"; keyCode = 68; break;
        case "w": case "W": case "KeyW": code = "KeyW"; keyCode = 87; break;
        case "k": case "K": case "KeyK": code = "KeyK"; keyCode = 75; break;
        case "j": case "J": case "KeyJ": code = "KeyJ"; keyCode = 74; break;
        case "l": case "L": case "KeyL": code = "KeyL"; keyCode = 76; break;
        case "Space": case "space": case "vk_space": case " ": code = "Space"; keyCode = 32; break;
        case "Enter": case "enter": case "vk_enter": code = "Enter"; keyCode = 13; break;
        case "Shift": case "ShiftLeft": case "ShiftRight": case "shift": case "vk_shift": code = "ShiftLeft"; keyCode = 16; break;
        case "Control": case "ControlLeft": case "ctrl": case "vk_control": code = "ControlLeft"; keyCode = 17; break;
        case "Escape": case "escape": case "vk_escape": code = "Escape"; keyCode = 27; break;
        default:
          if (typeof key === "string" && key.length === 1) {
            code = "Key" + key.toUpperCase();
            keyCode = key.toUpperCase().charCodeAt(0);
          }
          break;
      }
    }

    if (typeof iwin.syncKeyboardToPlayers === "function") {
      try {
        iwin.syncKeyboardToPlayers(keyCode || code || key, isDown);
        if (code && code !== key) iwin.syncKeyboardToPlayers(code, isDown);
      } catch (e) {}
    }

    if (iwin.Input && typeof iwin.Input.syncKey === "function") {
      try {
        iwin.Input.syncKey(keyCode || code || key, isDown);
        if (code && code !== key) iwin.Input.syncKey(code, isDown);
      } catch(e) {}
    }

    try {
      const event = new KeyboardEvent(type, {
        key: String(key),
        code: code || String(key),
        keyCode: keyCode || 0,
        which: keyCode || 0,
        bubbles: true,
        cancelable: true,
        view: iwin
      });
      try {
        Object.defineProperty(event, "keyCode", { get: () => keyCode });
        Object.defineProperty(event, "which", { get: () => keyCode });
      } catch(_) {}
      iwin.dispatchEvent(event);
      if (iwin.document) {
        iwin.document.dispatchEvent(event);
        if (iwin.document.body) iwin.document.body.dispatchEvent(event);
        const canvas = iwin.document.querySelector("canvas");
        if (canvas) canvas.dispatchEvent(event);
      }
    } catch (e) {}
  };

  const handleBtnDown = (e, keyOrKeys) => {
    if (e && e.cancelable) e.preventDefault();
    if (e && e.stopPropagation) e.stopPropagation();
    const arr = Array.isArray(keyOrKeys) ? keyOrKeys : [keyOrKeys];
    setActiveKeys(prev => {
      const next = { ...prev };
      arr.forEach(k => { next[String(k)] = true; });
      return next;
    });
    arr.forEach(k => sendKey(k, "keydown"));
  };

  const handleBtnUp = (e, keyOrKeys) => {
    if (e && e.cancelable) e.preventDefault();
    if (e && e.stopPropagation) e.stopPropagation();
    const arr = Array.isArray(keyOrKeys) ? keyOrKeys : [keyOrKeys];
    setActiveKeys(prev => {
      const next = { ...prev };
      arr.forEach(k => { next[String(k)] = false; });
      return next;
    });
    arr.forEach(k => sendKey(k, "keyup"));
  };

  const activeButtons = ((detectedControls && Array.isArray(detectedControls.buttons) && detectedControls.buttons.length > 0)
    ? detectedControls.buttons
    : [
        { id: "btn-space", label: "SPACE", labelAr: "مسافة (قفز)", labelEn: "Space (Jump)", icon: "␣", role: "jump", keys: ["Space", 32, "space", "vk_space", "ArrowUp", 38, "KeyZ", 90, " "], color: "#10b981" },
        { id: "btn-shift", label: "SHIFT", labelAr: "شفت (جري)", labelEn: "Shift (Run)", icon: "⚡", role: "dash", keys: ["ShiftLeft", "ShiftRight", "Shift", 16, "shift", "vk_shift", "KeyX", 88], color: "#8b5cf6" }
      ]);

  const gameTitleDisplay = (detectedControls && detectedControls.gameName) || title || "اللعبة";

  return /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
    ref: containerRef,
    className: `flex flex-col h-full bg-[#0a0f1d] text-white select-none ${isFullscreen ? "fixed inset-0 z-50 p-2 bg-black" : "p-2 sm:p-3"}`,
    children: [
      /* Header & Title */
      /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
        className: "flex items-center justify-between pb-2 border-b border-gray-800 mb-2 shrink-0",
        children: [
          /* Game info */
          /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
            className: "flex items-center gap-2 overflow-hidden",
            children: [
              /* @__PURE__ */ jsxRuntimeExports.jsx("div", { className: "w-2.5 h-2.5 rounded-full bg-emerald-500 animate-pulse shrink-0" }),
              /* @__PURE__ */ jsxRuntimeExports.jsx("span", { className: "font-pixel text-xs text-emerald-400 font-bold uppercase truncate", children: gameTitleDisplay }),
              /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                className: "text-[9px] sm:text-[10px] bg-emerald-950/90 text-emerald-300 border border-emerald-500/40 px-2 py-0.5 rounded-full font-sans font-bold whitespace-nowrap",
                children: `🎮 تحكم مخصص: ${activeButtons.map(b => b.label).join(' + ')}`
              })
            ]
          }),
          /* Header buttons */
          /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
            className: "flex items-center gap-1.5 shrink-0",
            children: [
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                onClick: () => setShowDevTools(!showDevTools),
                className: `p-1.5 rounded-lg border text-xs ${showDevTools ? "bg-amber-500/20 border-amber-500 text-amber-300" : "bg-gray-800 border-gray-700 text-gray-400 hover:text-white"}`,
                title: "Debug",
                children: /* @__PURE__ */ jsxRuntimeExports.jsx(Terminal, { className: "w-3.5 h-3.5" })
              }),
              /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                onClick: () => setIsFullscreen(!isFullscreen),
                className: "p-1.5 bg-gray-800 border border-gray-700 rounded-lg text-gray-400 hover:text-white text-xs",
                title: "Fullscreen",
                children: isFullscreen
                  ? /* @__PURE__ */ jsxRuntimeExports.jsx(Minimize2, { className: "w-3.5 h-3.5" })
                  : /* @__PURE__ */ jsxRuntimeExports.jsx(Maximize2, { className: "w-3.5 h-3.5" })
              })
            ]
          })
        ]
      }),

      /* Toast notification banner */
      toastMessage && /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: "bg-emerald-900/95 border border-emerald-500 text-emerald-100 text-xs px-3 py-1 rounded-lg text-center mb-2 shadow-lg animate-fade-in font-sans font-bold",
        children: toastMessage
      }),

      /* Game Canvas Iframe Container */
      /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: "relative flex-1 bg-black rounded-xl overflow-hidden border-2 border-gray-800 shadow-2xl flex items-center justify-center min-h-[220px]",
        children: /* @__PURE__ */ jsxRuntimeExports.jsx("iframe", {
          ref: iframeRef,
          srcDoc: content,
          className: "w-full h-full border-none select-none",
          title: "Game Engine Preview",
          sandbox: "allow-scripts allow-same-origin allow-modals allow-pointer-lock",
          tabIndex: 0
        })
      }),

      /* Full Custom Touch Controller */
      mode === "game" && /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
        className: "mt-2 bg-gradient-to-b from-[#182234] to-[#0c1322] rounded-2xl border-2 border-gray-700 p-2 sm:p-3 shadow-2xl select-none touch-none shrink-0",
        style: { touchAction: "none" },
        dir: "ltr",
        children: /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
          className: "flex items-center justify-between gap-2 max-w-xl mx-auto w-full",
          children: [
            /* LEFT: High Responsiveness D-PAD */
            /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
              className: "relative w-36 h-36 bg-[#070b14] rounded-full border-4 border-gray-700 shadow-inner flex items-center justify-center shrink-0",
              children: [
                /* UP (أعلى) */
                /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                  className: `absolute top-1 left-1/2 -translate-x-1/2 w-12 h-12 bg-gray-800 rounded-t-xl border border-gray-600 flex flex-col items-center justify-center transition-all ${activeKeys["ArrowUp"] || activeKeys["38"] ? "bg-sky-500 text-white shadow-none" : "hover:bg-gray-700 text-gray-300 shadow-md"}`,
                  onPointerDown: (e) => handleBtnDown(e, ["ArrowUp", 38, "KeyW", "w", 87]),
                  onPointerUp: (e) => handleBtnUp(e, ["ArrowUp", 38, "KeyW", "w", 87]),
                  onPointerCancel: (e) => handleBtnUp(e, ["ArrowUp", 38, "KeyW", "w", 87]),
                  style: { touchAction: "none" },
                  children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronUp, { className: "w-7 h-7 pointer-events-none" })
                }),
                /* LEFT (يسار) */
                /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                  className: `absolute left-1 top-1/2 -translate-y-1/2 w-12 h-12 bg-gray-800 rounded-l-xl border border-gray-600 flex flex-col items-center justify-center transition-all ${activeKeys["ArrowLeft"] || activeKeys["37"] ? "bg-sky-500 text-white shadow-none" : "hover:bg-gray-700 text-gray-300 shadow-md"}`,
                  onPointerDown: (e) => handleBtnDown(e, ["ArrowLeft", 37, "KeyA", "a", 65]),
                  onPointerUp: (e) => handleBtnUp(e, ["ArrowLeft", 37, "KeyA", "a", 65]),
                  onPointerCancel: (e) => handleBtnUp(e, ["ArrowLeft", 37, "KeyA", "a", 65]),
                  style: { touchAction: "none" },
                  children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronLeft, { className: "w-7 h-7 pointer-events-none" })
                }),
                /* Center Pivot */
                /* @__PURE__ */ jsxRuntimeExports.jsx("div", { className: "w-8 h-8 bg-gray-950 rounded-full border-2 border-gray-800 shadow-inner" }),
                /* RIGHT (يمين) */
                /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                  className: `absolute right-1 top-1/2 -translate-y-1/2 w-12 h-12 bg-gray-800 rounded-r-xl border border-gray-600 flex flex-col items-center justify-center transition-all ${activeKeys["ArrowRight"] || activeKeys["39"] ? "bg-sky-500 text-white shadow-none" : "hover:bg-gray-700 text-gray-300 shadow-md"}`,
                  onPointerDown: (e) => handleBtnDown(e, ["ArrowRight", 39, "KeyD", "d", 68]),
                  onPointerUp: (e) => handleBtnUp(e, ["ArrowRight", 39, "KeyD", "d", 68]),
                  onPointerCancel: (e) => handleBtnUp(e, ["ArrowRight", 39, "KeyD", "d", 68]),
                  style: { touchAction: "none" },
                  children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronRight, { className: "w-7 h-7 pointer-events-none" })
                }),
                /* DOWN (أسفل) */
                /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                  className: `absolute bottom-1 left-1/2 -translate-x-1/2 w-12 h-12 bg-gray-800 rounded-b-xl border border-gray-600 flex flex-col items-center justify-center transition-all ${activeKeys["ArrowDown"] || activeKeys["40"] ? "bg-sky-500 text-white shadow-none" : "hover:bg-gray-700 text-gray-300 shadow-md"}`,
                  onPointerDown: (e) => handleBtnDown(e, ["ArrowDown", 40, "KeyS", "s", 83]),
                  onPointerUp: (e) => handleBtnUp(e, ["ArrowDown", 40, "KeyS", "s", 83]),
                  onPointerCancel: (e) => handleBtnUp(e, ["ArrowDown", 40, "KeyS", "s", 83]),
                  style: { touchAction: "none" },
                  children: /* @__PURE__ */ jsxRuntimeExports.jsx(ChevronDown, { className: "w-7 h-7 pointer-events-none" })
                })
              ]
            }),

            /* MIDDLE: System & Reset Buttons */
            /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
              className: "flex flex-col items-center justify-center gap-2 shrink-0 px-1",
              children: [
                /* Select & Start */
                /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                  className: "flex gap-2",
                  children: [
                    /* SELECT */
                    /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                      className: "flex flex-col items-center",
                      children: [
                        /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                          className: `w-9 sm:w-10 h-4 bg-gray-800 border border-gray-600 rounded-full transition-all active:scale-95 ${activeKeys["Shift"] || activeKeys["16"] ? "bg-gray-400" : ""}`,
                          onPointerDown: (e) => handleBtnDown(e, ["Shift", 16, "Escape", 27]),
                          onPointerUp: (e) => handleBtnUp(e, ["Shift", 16, "Escape", 27]),
                          onPointerCancel: (e) => handleBtnUp(e, ["Shift", 16, "Escape", 27]),
                          style: { touchAction: "none" }
                        }),
                        /* @__PURE__ */ jsxRuntimeExports.jsx("span", { className: "text-[6px] sm:text-[7px] text-gray-400 font-pixel mt-0.5", children: "SELECT" })
                      ]
                    }),
                    /* START */
                    /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                      className: "flex flex-col items-center",
                      children: [
                        /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                          className: `w-9 sm:w-10 h-4 bg-gray-800 border border-gray-600 rounded-full transition-all active:scale-95 ${activeKeys["Enter"] || activeKeys["13"] ? "bg-gray-400" : ""}`,
                          onPointerDown: (e) => handleBtnDown(e, ["Enter", 13, "Space", 32]),
                          onPointerUp: (e) => handleBtnUp(e, ["Enter", 13, "Space", 32]),
                          onPointerCancel: (e) => handleBtnUp(e, ["Enter", 13, "Space", 32]),
                          style: { touchAction: "none" }
                        }),
                        /* @__PURE__ */ jsxRuntimeExports.jsx("span", { className: "text-[6px] sm:text-[7px] text-gray-400 font-pixel mt-0.5", children: "START" })
                      ]
                    })
                  ]
                }),
                /* Restart */
                /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                  className: "flex flex-col items-center",
                  children: [
                    /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                      onClick: () => {
                        if (iframeRef.current) {
                          const currentSrcDoc = iframeRef.current.srcdoc;
                          iframeRef.current.srcdoc = "";
                          setTimeout(() => {
                            if (iframeRef.current) iframeRef.current.srcdoc = currentSrcDoc;
                          }, 30);
                        }
                      },
                      className: "w-6 h-6 bg-gray-800 border border-gray-600 rounded-full flex items-center justify-center hover:bg-gray-700 active:scale-90 transition-all",
                      title: "Restart Game",
                      children: /* @__PURE__ */ jsxRuntimeExports.jsx(RotateCcw, { className: "w-3 h-3 text-red-400" })
                    }),
                    /* @__PURE__ */ jsxRuntimeExports.jsx("span", { className: "text-[6px] text-gray-500 font-pixel mt-0.5", children: "RESET" })
                  ]
                })
              ]
            }),

            /* RIGHT: EXACT DEDICATED ACTION BUTTONS FOR THE GAME (SPACE, K, Z, X, SHIFT, UP, etc.) */
            /* @__PURE__ */ jsxRuntimeExports.jsx("div", {
              className: "flex items-center justify-center gap-2 sm:gap-3 shrink-0 flex-wrap max-w-[200px]",
              children: activeButtons.map((btn, index) => {
                const isPressed = btn.keys && btn.keys.some(k => activeKeys[String(k)]);
                const btnColor = btn.color || (index === 0 ? "#10b981" : index === 1 ? "#8b5cf6" : index === 2 ? "#ef4444" : "#f59e0b");

                return /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                  key: btn.id || ("action-btn-" + index),
                  className: "flex flex-col items-center gap-1",
                  children: [
                    /* Exact Push Button with Key Label */
                    /* @__PURE__ */ jsxRuntimeExports.jsx("button", {
                      className: `min-w-[56px] h-14 px-2 rounded-2xl border-2 flex items-center justify-center transition-all ${isPressed ? "scale-90 shadow-none brightness-125" : "shadow-[0_4px_0_rgba(0,0,0,0.6)] hover:brightness-110 active:scale-90 active:shadow-none"}`,
                      style: {
                        backgroundColor: btnColor,
                        borderColor: "rgba(255,255,255,0.45)",
                        touchAction: "none",
                        userSelect: "none"
                      },
                      onPointerDown: (e) => handleBtnDown(e, btn.keys),
                      onPointerUp: (e) => handleBtnUp(e, btn.keys),
                      onPointerCancel: (e) => handleBtnUp(e, btn.keys),
                      onContextMenu: (e) => e.preventDefault(),
                      children: /* @__PURE__ */ jsxRuntimeExports.jsxs("div", {
                        className: "flex flex-col items-center justify-center pointer-events-none",
                        children: [
                          /* Exact Key Name (e.g. SPACE, K, Z, UP, SHIFT) */
                          /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                            className: "font-pixel text-white text-xs sm:text-sm font-bold drop-shadow-md leading-tight text-center",
                            children: btn.label
                          }),
                          btn.icon && /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                            className: "text-[10px] mt-0.5 leading-none",
                            children: btn.icon
                          })
                        ]
                      })
                    }),
                    /* Arabic Descriptive Action Sublabel */
                    /* @__PURE__ */ jsxRuntimeExports.jsx("span", {
                      className: "text-[9px] font-pixel text-gray-200 font-bold drop-shadow text-center min-w-[50px] leading-tight",
                      children: btn.labelAr || btn.sublabel || btn.labelEn
                    })
                  ]
                });
              })
            })
          ]
        })
      })
    ]
  });
};"""

    html = html[:pos_cv_start] + new_console_viewer + html[pos_cv_end:]
    print("Successfully replaced ConsoleViewer!")

    with open("app/src/main/assets/www/index.html", "w", encoding="utf-8") as f:
        f.write(html)

    print("Updated index.html length:", len(html))

if __name__ == "__main__":
    update_controls()
