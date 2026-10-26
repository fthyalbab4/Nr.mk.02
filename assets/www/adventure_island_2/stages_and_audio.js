// Stages_and_audio.js - Overworld Island Map, Stage Loader, Boss AI, HUD & Web Audio Synthesizer

class NESAudioEngine {
    constructor() {
        this.ctx = null;
    }

    init() {
        if (!this.ctx && typeof window !== 'undefined') {
            const AudioCtx = window.AudioContext || window.webkitAudioContext;
            if (AudioCtx) {
                this.ctx = new AudioCtx();
            }
        }
    }

    playSquare(freq, duration = 0.1, type = 'square') {
        if (!this.ctx) return;
        try {
            const osc = this.ctx.createOscillator();
            const gain = this.ctx.createGain();
            osc.type = type;
            osc.frequency.setValueAtTime(freq, this.ctx.currentTime);
            gain.gain.setValueAtTime(0.15, this.ctx.currentTime);
            gain.gain.exponentialRampToValueAtTime(0.01, this.ctx.currentTime + duration);
            osc.connect(gain);
            gain.connect(this.ctx.destination);
            osc.start();
            osc.stop(this.ctx.currentTime + duration);
        } catch (e) {
            // Audio context policy catch
        }
    }

    playJump() {
        if (!this.ctx) return;
        this.playSquare(150, 0.05);
        setTimeout(() => this.playSquare(300, 0.08), 50);
    }

    playThrow() {
        this.playSquare(440, 0.06);
    }

    playFruit() {
        this.playSquare(600, 0.04);
        setTimeout(() => this.playSquare(800, 0.08), 40);
    }

    playHit() {
        this.playSquare(100, 0.2, 'sawtooth');
    }
}

class AdventureIslandStageManager {
    constructor(game, engine) {
        this.game = game;
        this.engine = engine;
        this.audio = new NESAudioEngine();

        // 8 Main Map Islands in Adventure Island II
        this.islands = [
            { name: "Fern Island", stages: 4, boss: "Big Snake" },
            { name: "Lake Island", stages: 5, boss: "Giant Bee" },
            { name: "Desert Island", stages: 5, boss: "Giant Antlion" },
            { name: "Ice Island", stages: 6, boss: "Walrus" },
            { name: "Cave Island", stages: 6, boss: "Bat Lord" },
            { name: "Volcano Island", stages: 6, boss: "Fire Lizard" },
            { name: "Ocean Island", stages: 7, boss: "Kraken" },
            { name: "Dino Island", stages: 8, boss: "King Quapp" }
        ];

        this.currentIsland = 0;
        this.currentStage = 0;
        this.inventory = {
            axes: 3,
            blue_campto: 1,
            red_ptero: 1,
            purple_plesio: 0,
            green_taylo: 0
        };

        this.boss = null;
    }

    loadStage(islandIdx, stageIdx) {
        this.currentIsland = islandIdx;
        this.currentStage = stageIdx;
        this.game.resetPlayer(40, 160);
        this.game.state = 'STAGE';

        // Generate Procedural Stage Platform Blocks and Spawns
        this.game.enemies = [
            { x: 120, y: 170, type: 'snail', active: true, vx: -0.4 },
            { x: 220, y: 170, type: 'snake', active: true, vx: -0.6 },
            { x: 340, y: 165, type: 'coyote', active: true, vx: -1.2 },
            { x: 480, y: 170, type: 'snail', active: true, vx: -0.5 }
        ];

        // Eggs with Items along the level
        this.game.spawnEgg(160, 140, 'axe');
        this.game.spawnEgg(300, 140, 'blue_campto');
        this.game.spawnEgg(450, 140, 'skateboard');

        // Check if Boss Stage
        if (stageIdx === this.islands[islandIdx].stages - 1) {
            this.spawnBoss(this.islands[islandIdx].boss);
        } else {
            this.boss = null;
        }
    }

    spawnBoss(bossType) {
        this.boss = {
            name: bossType,
            x: 600,
            y: 150,
            vx: -1.0,
            vy: 0,
            health: 12,
            active: true
        };
    }

    updateBoss() {
        if (!this.boss || !this.boss.active) return;
        const b = this.boss;

        b.x += b.vx;
        if (b.x < this.game.cameraX + 160) b.vx = 1.0;
        if (b.x > this.game.cameraX + 230) b.vx = -1.0;

        // Check collision with projectiles
        for (let pr of this.game.projectiles) {
            if (pr.active && Math.abs(pr.x - b.x) < 24 && Math.abs(pr.y - b.y) < 24) {
                pr.active = false;
                b.health--;
                this.audio.playHit();
                if (b.health <= 0) {
                    b.active = false;
                    this.game.player.score += 5000;
                    // Stage Complete
                    setTimeout(() => {
                        this.loadStage(this.currentIsland, this.currentStage + 1);
                    }, 1000);
                }
            }
        }
    }

    renderHUD() {
        const eng = this.engine;
        if (!eng || !eng.ctx) return;
        const ctx = eng.ctx;

        // Draw Energy Bar (16 Ticks)
        ctx.fillStyle = '#000000';
        ctx.fillRect(8, 8, 100, 10);
        ctx.fillStyle = '#ff3333';
        for (let i = 0; i < this.game.player.health; i++) {
            ctx.fillRect(10 + i * 6, 10, 4, 6);
        }

        // Draw HUD Text: SCORE and LIVES
        ctx.fillStyle = '#ffffff';
        ctx.font = '8px monospace';
        ctx.fillText(`SCORE:${String(this.game.player.score).padStart(6, '0')}`, 120, 16);
        ctx.fillText(`LIVES:${this.game.player.lives}`, 200, 16);

        if (this.game.player.mount) {
            ctx.fillText(`DINO:${this.game.player.mount.toUpperCase()}`, 120, 26);
        }
    }

    renderGame() {
        const eng = this.engine;
        if (!eng) return;

        // Clear canvas with NES Sky Blue (0x19)
        eng.clear(0x19);

        // Render Background Ground Platforms
        const camX = Math.floor(this.game.cameraX);
        for (let x = 0; x < 256; x += 16) {
            const worldX = camX + x;
            // Draw Ground Tiles
            eng.drawTile(0x20, x, 180, 1, false);
            eng.drawTile(0x21, x, 196, 1, false);
            eng.drawTile(0x21, x, 212, 1, false);
        }

        // Render Items (Eggs & Fruits)
        for (let it of this.game.items) {
            const screenX = it.x - camX;
            if (screenX >= -16 && screenX < 256) {
                if (it.type === 'egg') {
                    eng.drawTile(it.opened ? 0x41 : 0x40, screenX, it.y, 3, true);
                } else if (it.type === 'fruit') {
                    eng.drawTile(0x45, screenX, it.y, 3, true);
                }
            }
        }

        // Render Enemies
        for (let e of this.game.enemies) {
            if (!e.active) continue;
            const screenX = e.x - camX;
            if (screenX >= -16 && screenX < 256) {
                eng.drawTile(0x30, screenX, e.y, 3, true);
            }
        }

        // Render Boss if present
        if (this.boss && this.boss.active) {
            const screenX = this.boss.x - camX;
            if (screenX >= -32 && screenX < 256) {
                eng.drawTile(0x50, screenX, this.boss.y, 2, true);
                eng.drawTile(0x51, screenX + 8, this.boss.y, 2, true);
            }
        }

        // Render Projectiles
        for (let pr of this.game.projectiles) {
            if (!pr.active) continue;
            const screenX = pr.x - camX;
            if (screenX >= 0 && screenX < 256) {
                eng.drawTile(0x10, screenX, pr.y, 0, true);
            }
        }

        // Render Master Higgins / Dinosaur
        const p = this.game.player;
        const playerScreenX = p.x - camX;
        if (p.invulnerableTimer % 4 < 2) {
            const tileIdx = p.mount ? 0x60 : (p.onSkateboard ? 0x08 : 0x00);
            eng.drawTile(tileIdx, playerScreenX, p.y - 16, 0, true, !p.facingRight);
            eng.drawTile(tileIdx + 1, playerScreenX, p.y - 8, 0, true, !p.facingRight);
        }

        // Render to Screen Canvas
        eng.renderBuffer();

        // Overlay HUD
        this.renderHUD();
    }
}

if (typeof module !== 'undefined') {
    module.exports = { NESAudioEngine, AdventureIslandStageManager };
}
