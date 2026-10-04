import re

with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Fix Action 103, 104, 113, 114 in mapGMAction
old_actions_103_104 = """    case 103:
      return { libId: "move_towards", params: { tx: num(args[0]), ty: num(args[1]), spd: num(args[2]) } };
    case 104:
      return { libId: "control_execute", params: { code: `this.moveTowards(${args[0]},${args[1]},${num(args[2])});` } };
    case 105:
      return { libId: "move_towards", params: { tx: num(args[0]), ty: num(args[1]), spd: num(args[2]) } };"""

new_actions_103_104 = """    case 103:
      return { libId: "control_execute", params: { code: `this.hspeed = (isRelative ? (this.hspeed || 0) : 0) + (${num(args[0])}); this.dx = this.hspeed; this.speed = Math.abs(this.hspeed); this.direction = this.hspeed < 0 ? 180 : (this.hspeed > 0 ? 0 : this.direction); if (this.direction === 0) this.image_xscale = 1; else if (this.direction === 180) this.image_xscale = -1;` } };
    case 104:
      return { libId: "control_execute", params: { code: `this.vspeed = (isRelative ? (this.vspeed || 0) : 0) + (${num(args[0])}); this.dy = this.vspeed; this.speed = Math.hypot(this.dx, this.dy);` } };
    case 105:
      return { libId: "move_towards", params: { tx: num(args[0]), ty: num(args[1]), spd: num(args[2]) } };"""

if old_actions_103_104 in text:
    text = text.replace(old_actions_103_104, new_actions_103_104)
    print("1. Fixed Action 103 (set_hspeed) and Action 104 (set_vspeed) in mapGMAction")
else:
    print("Warning: old_actions_103_104 not found")

old_actions_113_114 = """    case 113:
      return { libId: "control_execute", params: { code: `this.dx=-this.dx;` } };
    case 114:
      return { libId: "control_execute", params: { code: `this.dy=-this.dy;` } };"""

new_actions_113_114 = """    case 113:
      return { libId: "control_execute", params: { code: `this.hspeed = -(this.hspeed || this.dx || 1); this.dx = this.hspeed; this.direction = (540 - (this.direction || 0)) % 360; if (this.direction === 0) this.image_xscale = 1; else if (this.direction === 180) this.image_xscale = -1;` } };
    case 114:
      return { libId: "control_execute", params: { code: `this.vspeed = -(this.vspeed || this.dy || 1); this.dy = this.vspeed; this.direction = (360 - (this.direction || 0)) % 360;` } };"""

if old_actions_113_114 in text:
    text = text.replace(old_actions_113_114, new_actions_113_114)
    print("2. Fixed Action 113 (reverse_xdir) and Action 114 (reverse_ydir) in mapGMAction")
else:
    print("Warning: old_actions_113_114 not found")

# 2. Fix window.move_contact_solid self reference
old_move_contact = "while (dist < limit && window.place_free(me.x + dx, me.y + dy, me.x)) {"
new_move_contact = "while (dist < limit && window.place_free(me.x + dx, me.y + dy, me)) {"
if old_move_contact in text:
    text = text.replace(old_move_contact, new_move_contact)
    print("3. Fixed move_contact_solid place_free instance argument")
else:
    print("Warning: old_move_contact not found")

# 3. Enhance window.instance_change and main1_instance_change target resolution
old_inst_change = "const def = window.GAME_DATA.objects.find(o=>o.name===objName||o.id===objName);"
new_inst_change = """const cleanTarget = String(objName || '').toLowerCase();
        const def = window.GAME_DATA.objects.find(o => {
            const on = String(o.name || o.id || '').toLowerCase();
            return on === cleanTarget ||
                   on === cleanTarget.replace(/^obj_/, '') ||
                   ('obj_' + on) === cleanTarget ||
                   ('obj_obj_' + on.replace(/^obj_/, '')) === cleanTarget ||
                   String(o.resourceIndex) === cleanTarget ||
                   String(o.legacyId) === cleanTarget;
        });"""

if old_inst_change in text:
    text = text.replace(old_inst_change, new_inst_change)
    print("4. Fixed window.instance_change object resolution")
else:
    print("Warning: old_inst_change not found")

old_main1_change = "var def = GAME_DATA.objects.find(o => o.name === '${p2.obj}');"
new_main1_change = """var target = '${p2.obj}';
      var def = GAME_DATA.objects.find(o => o.name === target || o.id === target || o.name === target.replace(/^obj_/, '') || ('obj_' + o.name) === target || ('obj_obj_' + o.name.replace(/^obj_/, '')) === target || String(o.resourceIndex) === target || String(o.legacyId) === target);"""

if old_main1_change in text:
    text = text.replace(old_main1_change, new_main1_change)
    print("5. Fixed main1_instance_change object resolution")
else:
    print("Warning: old_main1_change not found")

# 4. Enhance syncKeyboardToPlayers so that Jump button (Space / KeyZ / 32 / 90) also triggers ArrowUp / vk_up / 38
old_sync_space = """        } else if (name === "Space" || name === " " || code === 32 || name === "KeyZ" || name === "z" || name === "Z" || code === 90) {
            // Action A / Primary Action / Jump (Space & Z without forcing ArrowUp!)
            ["Space", 32, "space", "vk_space", "KeyZ", 90, "z", "Z", " "].forEach(k => P1_Input.syncKey(k, down));"""

new_sync_space = """        } else if (name === "Space" || name === " " || code === 32 || name === "KeyZ" || name === "z" || name === "Z" || code === 90 || name === "ArrowUp" || code === 38 || name === "up" || name === "vk_up") {
            // Action A / Primary Action / Jump: Syncs Space, KeyZ, AND ArrowUp/vk_up so games that jump with vk_up (like Mario Bros) respond to the Jump button!
            ["Space", 32, "space", "vk_space", "KeyZ", 90, "z", "Z", " ", "ArrowUp", 38, "up", "vk_up", "Up"].forEach(k => P1_Input.syncKey(k, down));"""

if old_sync_space in text:
    text = text.replace(old_sync_space, new_sync_space)
    print("6. Enhanced syncKeyboardToPlayers to map Jump button seamlessly to vk_up and Space")
else:
    print("Warning: old_sync_space not found")

# 5. Enhance initDynamicGameControls so that on-screen Button A always maps to ActionA and includes Jump keys
old_btn_map_loop = """            const btnMap = { 'action-a': actionA, 'action-b': actionB, 'action-c': actionC, 'action-d': actionD };
            (scheme.buttons || []).forEach(b => {
                const el = btnMap[b.id];
                if (!el) return;"""

new_btn_map_loop = """            const btnMap = { 'action-a': actionA, 'action-b': actionB, 'action-c': actionC, 'action-d': actionD };
            (scheme.buttons || []).forEach((b, bIdx) => {
                const el = btnMap[b.id] || (bIdx === 0 ? actionA : bIdx === 1 ? actionB : bIdx === 2 ? actionC : actionD);
                if (!el) return;
                let bKeys = b.keys || [];
                if (el === actionA || bIdx === 0 || b.role === 'jump' || b.label === 'A') {
                    bKeys = Array.from(new Set([...bKeys, 'ArrowUp', 38, 'up', 'vk_up', 'Up', 'Space', 32, 'space', 'vk_space', 'KeyZ', 90, 'z', 'Z', ' ']));
                }"""

if old_btn_map_loop in text:
    text = text.replace(old_btn_map_loop, new_btn_map_loop)
    print("7. Enhanced initDynamicGameControls button mapping and jump registration")
else:
    print("Warning: old_btn_map_loop not found")

# 6. Add checkPlatformerCombat to pairwise collision loop
old_pairwise = """                    if (a.bbox_left <= b.bbox_right && a.bbox_right >= b.bbox_left && a.bbox_top <= b.bbox_bottom && a.bbox_bottom >= b.bbox_top) {
                        a.dispatchCollisionContact(b, "pairwise", false);
                    }"""

new_pairwise = """                    if (a.bbox_left <= b.bbox_right && a.bbox_right >= b.bbox_left && a.bbox_top <= b.bbox_bottom && a.bbox_bottom >= b.bbox_top) {
                        a.dispatchCollisionContact(b, "pairwise", false);
                        if (typeof window.checkPlatformerCombat === 'function') {
                            window.checkPlatformerCombat(a, b);
                        }
                    }"""

if old_pairwise in text:
    text = text.replace(old_pairwise, new_pairwise)
    print("8. Added checkPlatformerCombat call into SpatialHash pairwise collision loop")
else:
    print("Warning: old_pairwise not found")

# 7. Inject window.checkPlatformerCombat definition
combat_def = """    // --- BUILT-IN PLATFORMER / MARIO COMBAT AND ENEMY INTERACTION ---
    window.checkPlatformerCombat = (a, b) => {
        if (!a || !b || a.dead || b.dead) return;
        const isPlayer = (inst) => {
            if (!inst || !inst.def) return false;
            const n = String(inst.def.name || inst.def.id || '').toLowerCase();
            return (n.includes('mario') && !n.includes('pierde') && !n.includes('dead')) ||
                   n.includes('player') || n.includes('hero') || n.includes('character') ||
                   inst.def.role === 'player';
        };
        const isEnemy = (inst) => {
            if (!inst || !inst.def) return false;
            const n = String(inst.def.name || inst.def.id || '').toLowerCase();
            return n.includes('enemigo') || n.includes('enemy') || n.includes('goomba') ||
                   n.includes('koopa') || n.includes('monster') || inst.def.role === 'enemy';
        };

        let p = null, e = null;
        if (isPlayer(a) && isEnemy(b)) { p = a; e = b; }
        else if (isPlayer(b) && isEnemy(a)) { p = b; e = a; }
        if (!p || !e || p.dead || e.dead) return;

        // Stomp condition: Player is falling or player bottom is near enemy top (within upper 45% of enemy)
        const playerBottom = p.y + p.h;
        const enemyTop = e.y;
        const isStomp = (p.dy > 0 || p.vspeed > 0 || playerBottom <= enemyTop + (e.h * 0.45));

        if (isStomp) {
            // Stomp sound
            if (typeof window.sound_play === 'function') {
                const hitSnd = (window.GAME_DATA.assets.sounds || []).find(s => /stomp|hit|kill|moneda|snd_moneda/i.test(s.name || s.id));
                if (hitSnd) window.sound_play(hitSnd.id);
            }
            // Mario bounces up into the air
            p.vspeed = -5.5;
            p.dy = -5.5;
            p.grounded = false;
            p.inAir = true;
            p.y = e.y - p.h - 2;

            // Enemy defeated: check if death sprite exists (like dead_1 in Mario Bros GMK)
            const deadSpr = (window.GAME_DATA.assets.sprites || []).find(s => /dead|muerto|defeat/i.test(s.name || s.id));
            if (deadSpr && !e._isDying) {
                e._isDying = true;
                e.currentSpriteId = deadSpr.id;
                e.sprite_index = deadSpr.id;
                e.dx = 0; e.dy = 0; e.hspeed = 0; e.vspeed = 0; e.speed = 0;
                e.solid = false;
                setTimeout(() => { e.dead = true; }, 350);
            } else {
                e.dead = true;
            }
        } else {
            // Player touched enemy from side or underneath
            if (p.invincible && p.invincible > 0) return;

            const pName = String(p.def.name || p.def.id || '').toLowerCase();
            // If big mario: shrink back to minimario with temporary invincibility
            if (pName.includes('obj_mario') && !pName.includes('mini')) {
                const miniDef = window.GAME_DATA.objects.find(o => {
                    const on = String(o.name || o.id || '').toLowerCase();
                    return on.includes('minimario') && !on.includes('pierde') && !on.includes('trans');
                });
                if (miniDef) {
                    p.def = miniDef;
                    p.currentSpriteId = miniDef.spriteId;
                    p.sprite_index = miniDef.spriteId;
                    p.resolveSize();
                    p.invincible = 90;
                    if (typeof window.sound_play === 'function') {
                        const transSnd = (window.GAME_DATA.assets.sounds || []).find(s => /trans|shrink|pipe/i.test(s.name || s.id));
                        if (transSnd) window.sound_play(transSnd.id);
                    }
                    return;
                }
            }

            // Small Mario dies: transform into obj_minimario_pierde (or obj_mario_pierde)
            const pierdeDef = window.GAME_DATA.objects.find(o => {
                const on = String(o.name || o.id || '').toLowerCase();
                return (pName.includes('minimario') ? on.includes('minimario_pierde') : on.includes('mario_pierde')) ||
                       on.includes('pierde') || on.includes('lose') || on.includes('die');
            });

            if (pierdeDef) {
                p.def = pierdeDef;
                p.currentSpriteId = pierdeDef.spriteId;
                p.sprite_index = pierdeDef.spriteId;
                p.resolveSize();
                p.solid = false;
                p.triggerEvent('create');
            } else {
                p.dead = true;
                if (window.restartRoom) window.restartRoom();
            }
        }
    };
"""

target_inst_change = "window.instance_change = (objName, perfCreate) => {"
if target_inst_change in text:
    text = text.replace(target_inst_change, combat_def + "\n    " + target_inst_change)
    print("9. Injected checkPlatformerCombat implementation")
else:
    print("Warning: target_inst_change not found for combat_def injection")

with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

print("apply_mario_engine_fixes.py completed successfully!")
