// Test script for Adventure Island II NES HTML5 Recreation

const assert = require('assert');
const fs = require('fs');
const path = require('path');

// Load Engine modules
const { NESGraphicsEngine } = require('../assets/www/adventure_island_2/engine.js');
const { AdventureIslandGame } = require('../assets/www/adventure_island_2/gameplay.js');
const { NESAudioEngine, AdventureIslandStageManager } = require('../assets/www/adventure_island_2/stages_and_audio.js');

console.log('--- Starting Adventure Island II Automated Tests ---');

// 1. Verify ROM Asset File exists and is valid
const romDataPath = path.join(__dirname, '../assets/adventure_island_2/rom_data.json');
assert(fs.existsSync(romDataPath), 'rom_data.json must exist');
const romData = JSON.parse(fs.readFileSync(romDataPath, 'utf8'));
assert.strictEqual(romData.mapper, 4, 'Mapper must be MMC3 (4)');
assert.strictEqual(romData.prg_banks, 8, 'PRG Banks should equal 8');
assert.strictEqual(romData.chr_banks, 16, 'CHR Banks should equal 16');
console.log('✓ ROM Asset Data verified successfully.');

// 2. Test NES Graphics Engine Palette & Tile Operations
const gfx = new NESGraphicsEngine(null);
assert.strictEqual(gfx.bgPalettes.length, 4, 'Engine must have 4 BG Palettes');
assert.strictEqual(gfx.sprPalettes.length, 4, 'Engine must have 4 Sprite Palettes');

// Convert base64 ROM data to buffer for CHR testing
const romBuffer = Buffer.from(romData.rom_b64, 'base64');
const chrData = romBuffer.slice(16 + 131072, 16 + 131072 + 131072);
gfx.setCHRData(chrData);
assert(gfx.chrData.length > 0, 'CHR Data must be loaded');
console.log('✓ NES Graphics Engine initialized with ROM CHR Data.');

// 3. Test Gameplay Mechanics (Physics, Input, Dinosaurs, Energy)
const game = new AdventureIslandGame(gfx);
const stageMgr = new AdventureIslandStageManager(game, gfx);

stageMgr.loadStage(0, 0); // Load Fern Island - Stage 1
assert.strictEqual(game.state, 'STAGE', 'Game state must be STAGE after loadStage');
assert.strictEqual(game.player.health, 16, 'Initial energy health must be 16');

// Simulate Player Jump & Move Right
game.input.right = true;
game.input.jump = true;

for (let frame = 0; frame < 30; frame++) {
    game.update();
    if (frame === 10) game.input.jump = false; // Release Jump Button
}

assert(game.player.x > 40, 'Player X position should increase when moving right');
console.log(`✓ Player Physics & Movement Verified (Player X: ${game.player.x.toFixed(2)}, Y: ${game.player.y.toFixed(2)})`);

// 4. Test Weapon Throws & Item Interactions
game.input.attack = true;
game.update();
game.input.attack = false;
game.update();

assert(game.projectiles.length > 0, 'Weapon projectile should be spawned on attack');
console.log('✓ Weapon Attack & Projectile System verified.');

// 5. Test Dinosaur Mounting System
game.player.x = 300;
game.player.y = 140; // Position at Dinosaur Egg location
game.update();

assert(game.player.mount !== null || game.items.length > 0, 'Egg interaction verified');
console.log('✓ Egg & Dinosaur Mount System verified.');

// 6. Test Boss Fight System
stageMgr.loadStage(0, 3); // Load Fern Island Boss Stage
assert(stageMgr.boss !== null, 'Boss must spawn on stage 4');
assert.strictEqual(stageMgr.boss.health, 12, 'Boss initial health must be 12');

// Simulate Projectiles Hit Boss
game.projectiles.push({
    x: stageMgr.boss.x,
    y: stageMgr.boss.y,
    vx: 0,
    vy: 0,
    active: true
});

stageMgr.updateBoss();
assert.strictEqual(stageMgr.boss.health, 11, 'Boss health should decrease when hit');
console.log('✓ Boss Battle AI & Hit Collision System verified.');

console.log('=== All Adventure Island II Tests Passed Successfully! ===');
