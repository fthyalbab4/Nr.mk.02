with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Ensure #nor-gamepad-overlay is completely hidden in createEngineHTML so it never overlaps the canvas
pos_ov = text.find('#nor-gamepad-overlay {')
if pos_ov != -1:
    pos_ov_end = text.find('}', pos_ov) + 1
    old_ov_css = text[pos_ov:pos_ov_end]
    new_ov_css = '#nor-gamepad-overlay { display: none !important; position: fixed; top: 0; left: 0; width: 0; height: 0; opacity: 0; pointer-events: none !important; }'
    text = text.replace(old_ov_css, new_ov_css, 1)
    print("1. Completely disabled in-canvas #nor-gamepad-overlay!")
else:
    print("Warning: #nor-gamepad-overlay CSS not found!")

# 2. Also ensure applyConfig does not make nor-gamepad-overlay block
pos_cfg = text.find("overlay.style.display = 'block';")
if pos_cfg != -1:
    text = text.replace("overlay.style.display = 'block';", "overlay.style.display = 'none';", 1)
    print("2. Set overlay.style.display = 'none' in applyConfig!")
else:
    print("Warning: overlay.style.display = 'block' not found!")

# 3. Replace the React Controller JSX with a beautifully styled, self-contained, responsive arcade gamepad
pos_ctrl_start = text.find('/* Dynamic Game-Specific Touch Controls */')
if pos_ctrl_start != -1:
    # Find the end of the mode === "game" block
    # Let's locate the return closing brackets
    pos_ctrl_code = text.find('mode === "game" &&', pos_ctrl_start)
    pos_next = text.find('/* Game Execution / Diagnostics DevTools */', pos_ctrl_code)
    if pos_next == -1:
        pos_next = text.find('showDevTools &&', pos_ctrl_code)

    # We will replace the entire dynamic touch controls section
    # Let's inspect what is between pos_ctrl_start and pos_next
    print("Found pos_ctrl_start at", pos_ctrl_start, "and pos_next at", pos_next)
else:
    print("Warning: pos_ctrl_start not found!")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)
