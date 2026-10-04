import re

with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Update Gamepad Action-A and Action-B key bindings to support all platformers (Jump = ArrowUp/Space/KeyZ)
old_gp_scheme = "registerButtonInput(document.getElementById('nor-dpad-up'), dpadConfig.up || 'ArrowUp');"
if old_gp_scheme in text:
    print("Found gamepad registration point!")

# Find where allProfiles is defined
old_all_profiles = """        const allProfiles = {
            arcade2: {"""

# In createEngineHTML, enhance triggerEvent to handle all collision key aliases
old_collision_dispatch = """            // Dispatch before velocity zeroing/rollback so Collision_<object> can
            // reverse, stop, damage, or otherwise observe the actual contact.
            this.triggerEvent("collision_" + other.def.id, other);
            if (!other.dead) other.triggerEvent("collision_" + this.def.id, this);"""

new_collision_dispatch = """            // Dispatch before velocity zeroing/rollback so Collision_<object> can
            // reverse, stop, damage, or otherwise observe the actual contact.
            const dispatchToInst = (me, target) => {
                if (me.dead || !target) return;
                const evMap = OBJECT_EVENTS[me.def.id] || {};
                const tDef = target.def || {};
                const tId = String(tDef.id || '');
                const tName = String(tDef.name || '');
                const tResIdx = tDef.resourceIndex !== undefined ? String(tDef.resourceIndex) : '';
                const tLegId = tDef.legacyId !== undefined ? String(tDef.legacyId) : '';

                const candidates = new Set();
                if (tId) { candidates.add(tId); candidates.add(tId.replace(/^obj_/, '')); candidates.add('obj_' + tId.replace(/^obj_/, '')); }
                if (tName) { candidates.add(tName); candidates.add(tName.replace(/^obj_/, '')); candidates.add('obj_' + tName.replace(/^obj_/, '')); }
                if (tResIdx) { candidates.add(tResIdx); candidates.add('obj_' + tResIdx); }
                if (tLegId) { candidates.add(tLegId); candidates.add('obj_' + tLegId); }
                if (tDef.parentId || tDef.parentName || tDef.parent) {
                    const p = String(tDef.parentId || tDef.parentName || tDef.parent);
                    candidates.add(p); candidates.add(p.replace(/^obj_/, '')); candidates.add('obj_' + p.replace(/^obj_/, ''));
                }
                candidates.add('all');
                candidates.add('obj_all');

                let foundKey = null;
                for (let c of candidates) {
                    const k = 'collision_' + c;
                    if (typeof evMap[k] === 'function') { foundKey = k; break; }
                    const kLow = 'collision_' + c.toLowerCase();
                    if (typeof evMap[kLow] === 'function') { foundKey = kLow; break; }
                }
                if (foundKey) {
                    me._other = target;
                    window.other = target;
                    me.triggerEvent(foundKey, target);
                }
            };
            dispatchToInst(this, other);
            if (!other.dead) dispatchToInst(other, this);"""

if old_collision_dispatch in text:
    text = text.replace(old_collision_dispatch, new_collision_dispatch)
    print("1. Enhanced collision dispatch with full alias resolution & other binding!")
else:
    print("Warning 1: old_collision_dispatch not matched directly")

# 2. Enhance Action 113 (Reverse horizontal direction) and Action 103 (set hspeed) in GMObject
old_action_113 = """                case 'action_reverse_xdir':
                    this.dx = -this.dx;
                    break;"""

# Check how action 113 is handled
pos_switch = text.find("switch(funcName) {")
if pos_switch != -1:
    print("Found switch(funcName)")

# 3. Enhance Action A button in the on-screen Gamepad to include ArrowUp (vk_up) by default
old_arcade2_a = """'action-a': { keys: ['KeyZ', 'Space'],"""
new_arcade2_a = """'action-a': { keys: ['KeyZ', 'Space', 'ArrowUp', 'Up', 38, 32, 90],"""

if old_arcade2_a in text:
    text = text.replace(old_arcade2_a, new_arcade2_a)
    print("2. Enhanced action-a button keys to include ArrowUp / Jump!")
else:
    print("Warning 2: old_arcade2_a not found directly, trying regex...")
    text = re.sub(r"('action-a':\s*\{\s*keys:\s*\[)([^\]]+)(\])", r"\1'KeyZ', 'Space', 'ArrowUp', 'Up', 38, 32, 90, \2\3", text)

# 4. Enhance _gmlResolveKeys so that jumping with Jump button / Space / ArrowUp is seamless
old_up_resolve = "set.add(38); set.add('ArrowUp'); set.add('up'); set.add('vk_up');"
new_up_resolve = "set.add(38); set.add('ArrowUp'); set.add('up'); set.add('vk_up'); set.add('Up'); set.add('KeyZ'); set.add('z'); set.add('Space'); set.add(' ');"

# In Mario Bros, keyboard_check_pressed(vk_up) should also trigger when on-screen action-a is pressed:
# Let's ensure Input.keysPressed and Input.keys map 'action-a' / virtual touch to 'ArrowUp' and 38
pos_resolve = text.find("function _gmlResolveKeys(key) {")
if pos_resolve != -1:
    print("Found _gmlResolveKeys")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

print("apply_mario_physics_and_collision_fix finished.")
