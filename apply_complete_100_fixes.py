import re

with open('app/src/main/assets/www/index.html', 'r', encoding='utf-8') as f:
    text = f.read()

# 1. Update Asset Registration inside createEngineHTML
old_asset_load = """                const img = new Image();
                img.onload = () => {
                    if (asset.type === 'sprite-frame') {
                        if (!spriteFrames[asset.id]) spriteFrames[asset.id] = [];
                        spriteFrames[asset.id][asset.frame] = img;
                    } else {
                        assets[asset.id] = img;
                    }
                    loaded++;
                    checkDone();
                };"""

new_asset_load = """                const img = new Image();
                img.onload = () => {
                    if (asset.type === 'sprite-frame') {
                        const registerFrame = (k) => {
                            if (k === undefined || k === null || k === '') return;
                            if (!spriteFrames[k]) spriteFrames[k] = [];
                            spriteFrames[k][asset.frame] = img;
                        };
                        registerFrame(asset.id);
                        registerFrame(asset.name);
                        registerFrame(asset.resourceIndex);
                        registerFrame(asset.legacyId);
                        registerFrame(asset.index);
                    } else {
                        const registerImg = (k) => {
                            if (k === undefined || k === null || k === '') return;
                            assets[k] = img;
                        };
                        registerImg(asset.id);
                        registerImg(asset.name);
                        registerImg(asset.resourceIndex);
                        registerImg(asset.legacyId);
                        registerImg(asset.index);
                        const prefix = asset.type === 'bg-img' ? 'bg_' : 'spr_';
                        if (asset.id && !String(asset.id).startsWith(prefix)) registerImg(prefix + asset.id);
                        if (asset.name && !String(asset.name).startsWith(prefix)) registerImg(prefix + asset.name);
                    }
                    loaded++;
                    checkDone();
                };"""

if old_asset_load in text:
    text = text.replace(old_asset_load, new_asset_load)
    print("1. Updated asset registration multi-key aliasing!")
else:
    print("Warning 1: old_asset_load not matched directly")

# 2. Update resolveSpriteImg and Instance.prototype.draw
old_instance_draw = """            let img = null;
            const sprKey = this.sprite_index || this.spriteId || this.currentSpriteId;
            if (sprKey) img = assets[sprKey] || assets['spr_' + sprKey] || assets[String(sprKey).replace(/^spr_/, '')];"""

new_instance_draw = """            let img = null;
            const sprKey = (this.sprite_index !== undefined && this.sprite_index !== null && this.sprite_index !== -1) ? this.sprite_index : (this.spriteId || this.currentSpriteId);
            if (sprKey !== undefined && sprKey !== null && sprKey !== '') {
                img = assets[sprKey] || assets['spr_' + sprKey] || assets[String(sprKey).replace(/^spr_/, '')];
                if (!img && Number.isFinite(Number(sprKey)) && GAME_DATA.assets && GAME_DATA.assets.sprites) {
                    const sprDef = GAME_DATA.assets.sprites.find(s => Number(s.resourceIndex) === Number(sprKey) || Number(s.legacyId) === Number(sprKey) || Number(s.index) === Number(sprKey));
                    if (sprDef) img = assets[sprDef.id] || assets[sprDef.name] || assets['spr_' + sprDef.name];
                }
            }"""

if old_instance_draw in text:
    text = text.replace(old_instance_draw, new_instance_draw)
    print("2. Updated Instance.prototype.draw sprite resolution!")
else:
    print("Warning 2: old_instance_draw not matched directly")

# 3. Update drawBackgrounds and add drawRoomTiles
old_draw_bg = """    function drawBackgrounds(foreground) {
        if (!currentRoom || !currentRoom.backgrounds) return;
        currentRoom.backgrounds.forEach(bg => {
            if (!bg.visible || bg.foreground !== foreground) return;
            const img = bg.bgId ? assets[bg.bgId] : null;
            if (img && img.complete && img.naturalWidth > 0) {
                if (bg.tiledX || bg.tiledY) {
                    const ptrn = ctx.createPattern(img, bg.tiledX && bg.tiledY ? "repeat" : (bg.tiledX ? "repeat-x" : "repeat-y"));
                    if (ptrn) {
                        ctx.fillStyle = ptrn;
                        ctx.fillRect(0, 0, canvas.width, canvas.height);
                    }
                } else {
                    ctx.drawImage(img, bg.x || 0, bg.y || 0);
                }
            }
        });
    }"""

new_draw_bg_and_tiles = """    function drawBackgrounds(foreground) {
        if (!currentRoom || !currentRoom.backgrounds) return;
        currentRoom.backgrounds.forEach(bg => {
            if (!bg.visible || !!bg.foreground !== foreground) return;
            const bgKey = bg.source || bg.bgId || bg.sourceLegacyId;
            let img = bgKey ? (assets[bgKey] || assets['bg_' + bgKey] || assets[String(bgKey).replace(/^bg_/, '')]) : null;
            if (!img && Number.isFinite(Number(bgKey)) && GAME_DATA.assets && GAME_DATA.assets.backgrounds) {
                const bgDef = GAME_DATA.assets.backgrounds.find(b => Number(b.resourceIndex) === Number(bgKey) || Number(b.legacyId) === Number(bgKey));
                if (bgDef) img = assets[bgDef.id] || assets[bgDef.name] || assets['bg_' + bgDef.name];
            }
            if (img && img.complete && img.naturalWidth > 0) {
                const isTiledX = bg.tileH || bg.tiledX;
                const isTiledY = bg.tileV || bg.tiledY;
                if (isTiledX || isTiledY) {
                    const ptrn = ctx.createPattern(img, isTiledX && isTiledY ? "repeat" : (isTiledX ? "repeat-x" : "repeat-y"));
                    if (ptrn) {
                        ctx.fillStyle = ptrn;
                        ctx.fillRect(camera.x, camera.y, camera.w || canvas.width, camera.h || canvas.height);
                    }
                } else if (bg.stretch) {
                    ctx.drawImage(img, camera.x, camera.y, camera.w || canvas.width, camera.h || canvas.height);
                } else {
                    ctx.drawImage(img, bg.x || 0, bg.y || 0);
                }
            }
        });
    }

    function drawRoomTiles() {
        if (!currentRoom || !Array.isArray(currentRoom.tiles)) return;
        currentRoom.tiles.forEach(tile => {
            if (!tile || tile.visible === false) return;
            const bgKey = tile.bgId || tile.bg || tile.background || tile.bgLegacyId;
            let img = bgKey ? (assets[bgKey] || assets['bg_' + bgKey] || assets[String(bgKey).replace(/^bg_/, '')]) : null;
            if (!img && Number.isFinite(Number(bgKey)) && GAME_DATA.assets && GAME_DATA.assets.backgrounds) {
                const bgDef = GAME_DATA.assets.backgrounds.find(b => Number(b.resourceIndex) === Number(bgKey) || Number(b.legacyId) === Number(bgKey));
                if (bgDef) img = assets[bgDef.id] || assets[bgDef.name] || assets['bg_' + bgDef.name];
            }
            if (img && img.complete && img.naturalWidth > 0) {
                const sx = tile.x || tile.sourceX || tile.srcX || tile.tileX || 0;
                const sy = tile.y || tile.sourceY || tile.srcY || tile.tileY || 0;
                const sw = tile.w || tile.width || 16;
                const sh = tile.h || tile.height || 16;
                const dx = tile.roomX !== undefined ? tile.roomX : (tile.destX !== undefined ? tile.destX : (tile.posX !== undefined ? tile.posX : (tile.x || 0)));
                const dy = tile.roomY !== undefined ? tile.roomY : (tile.destY !== undefined ? tile.destY : (tile.posY !== undefined ? tile.posY : (tile.y || 0)));
                ctx.drawImage(img, sx, sy, sw, sh, dx, dy, sw, sh);
            }
        });
    }"""

if old_draw_bg in text:
    text = text.replace(old_draw_bg, new_draw_bg_and_tiles)
    print("3. Updated drawBackgrounds and added drawRoomTiles!")
else:
    print("Warning 3: old_draw_bg not matched directly")

# 4. Call drawRoomTiles in loop
old_bg_call = """        if (currentRoom.viewMode !== '3d') {
            drawBackgrounds(false);
        }"""

new_bg_call = """        if (currentRoom.viewMode !== '3d') {
            drawBackgrounds(false);
            drawRoomTiles();
        }"""

if old_bg_call in text:
    text = text.replace(old_bg_call, new_bg_call)
    print("4. Added drawRoomTiles call in render loop!")
else:
    print("Warning 4: old_bg_call not matched directly")

# 5. Room background color
old_bg_color = """            ctx.fillStyle = '#000';
            ctx.fillRect(0, 0, canvas.width, canvas.height);"""

new_bg_color = """            const roomBgColor = (currentRoom && currentRoom.settings && currentRoom.settings.bgColor) || '#182330';
            ctx.fillStyle = roomBgColor;
            ctx.fillRect(0, 0, canvas.width, canvas.height);"""

if old_bg_color in text:
    text = text.replace(old_bg_color, new_bg_color)
    print("5. Updated room background color to use room settings!")
else:
    print("Warning 5: old_bg_color not matched directly")

# Save files
with open('app/src/main/assets/www/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

with open('app/src/main/assets/index.html', 'w', encoding='utf-8') as f:
    f.write(text)

print("apply_complete_100_fixes script finished successfully.")
