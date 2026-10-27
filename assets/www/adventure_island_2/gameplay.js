// Gameplay.js - Adventure Island II Player, Dinosaur, Weapon, Item & Enemy Mechanics

class AdventureIslandGame {
    constructor(engine) {
        this.engine = engine;

        // Player (Master Higgins) State
        this.player = {
            x: 40,
            y: 160,
            vx: 0,
            vy: 0,
            width: 16,
            height: 24,
            facingRight: true,
            isGrounded: true,
            isJumping: false,
            isRunning: false,
            health: 16, // 16 Fruit gauge energy ticks
            score: 0,
            lives: 3,
            hasWeapon: true,
            weaponType: 'axe', // 'axe' or 'fireball'
            mount: null, // null, 'blue_campto', 'red_ptero', 'purple_plesio', 'green_taylo'
            invulnerableTimer: 0,
            onSkateboard: false
        };

        // Inputs State
        this.input = {
            left: false,
            right: false,
            up: false,
            down: false,
            jump: false,
            attack: false,
            select: false,
            start: false
        };

        // Active Game Entities
        this.projectiles = [];
        this.items = [];
        this.enemies = [];
        this.stageTiles = [];
        this.cameraX = 0;
        this.energyTimer = 0;
        this.state = 'TITLE'; // 'TITLE', 'ISLAND_MAP', 'STAGE', 'EGG_ROOM', 'GAME_OVER'
    }

    resetPlayer(x = 40, y = 160) {
        this.player.x = x;
        this.player.y = y;
        this.player.vx = 0;
        this.player.vy = 0;
        this.player.facingRight = true;
        this.player.isGrounded = true;
        this.player.isJumping = false;
        this.player.health = 16;
        this.player.mount = null;
        this.player.onSkateboard = false;
        this.cameraX = 0;
        this.projectiles = [];
        this.items = [];
        this.enemies = [];
    }

    update() {
        if (this.state !== 'STAGE') return;

        this.updateEnergyTimer();
        this.updatePlayerPhysics();
        this.updateProjectiles();
        this.updateItems();
        this.updateEnemies();
        this.checkCollisions();

        // Update Camera
        if (this.player.x - this.cameraX > 120) {
            this.cameraX = this.player.x - 120;
        }
    }

    updateEnergyTimer() {
        this.energyTimer++;
        if (this.energyTimer >= 120) { // Deplete energy gauge every 2 seconds
            this.energyTimer = 0;
            if (this.player.health > 0) {
                this.player.health--;
                if (this.player.health <= 0) {
                    this.handlePlayerHit(true);
                }
            }
        }
    }

    updatePlayerPhysics() {
        const p = this.player;

        // Acceleration and Speed Limits
        const accel = p.isRunning ? 0.35 : 0.25;
        const maxSpeed = p.isRunning ? (p.onSkateboard ? 3.5 : 2.8) : 1.8;
        const gravity = 0.35;

        if (p.onSkateboard) {
            p.vx = p.facingRight ? 2.2 : -2.2;
        } else {
            if (this.input.left) {
                p.vx -= accel;
                p.facingRight = false;
            } else if (this.input.right) {
                p.vx += accel;
                p.facingRight = true;
            } else {
                p.vx *= 0.82; // Friction
                if (Math.abs(p.vx) < 0.1) p.vx = 0;
            }
        }

        // Clamp Speed
        if (p.vx > maxSpeed) p.vx = maxSpeed;
        if (p.vx < -maxSpeed) p.vx = -maxSpeed;

        // Jump Handling
        if (this.input.jump && p.isGrounded) {
            p.vy = p.mount === 'red_ptero' ? -4.5 : -6.5;
            p.isGrounded = false;
            p.isJumping = true;
        }

        // Flying Pterodactyl controls
        if (p.mount === 'red_ptero' && this.input.jump) {
            p.vy = -3.0;
        }

        // Gravity Apply
        p.vy += gravity;
        if (p.vy > 6.0) p.vy = 6.0;

        // Position Updates
        p.x += p.vx;
        p.y += p.vy;

        // Ground Collision (Simulated Ground Plane at y = 180)
        const groundY = 180;
        if (p.y >= groundY) {
            p.y = groundY;
            p.vy = 0;
            p.isGrounded = true;
            p.isJumping = false;
        }

        // Screen Left Bound
        if (p.x < this.cameraX) {
            p.x = this.cameraX;
            p.vx = 0;
        }

        // Attack Input (Throw Axe / Shoot Fireball)
        if (this.input.attack && !this.attackPressedLast) {
            this.throwWeapon();
        }
        this.attackPressedLast = this.input.attack;

        if (p.invulnerableTimer > 0) p.invulnerableTimer--;
    }

    throwWeapon() {
        const p = this.player;
        if (p.projectilesCount >= 2) return;

        const proj = {
            x: p.facingRight ? p.x + 12 : p.x - 4,
            y: p.y - 12,
            vx: p.facingRight ? 4.5 : -4.5,
            vy: -2.5,
            type: p.mount ? 'dino_attack' : (p.hasWeapon ? p.weaponType : null),
            active: true
        };

        if (proj.type) {
            this.projectiles.push(proj);
        }
    }

    updateProjectiles() {
        for (let i = this.projectiles.length - 1; i >= 0; i--) {
            let pr = this.projectiles[i];
            pr.x += pr.vx;
            pr.y += pr.vy;
            pr.vy += 0.25; // Gravity for thrown axes

            if (pr.x < this.cameraX || pr.x > this.cameraX + 280 || pr.y > 240) {
                this.projectiles.splice(i, 1);
            }
        }
    }

    spawnEgg(x, y, content = 'axe') {
        this.items.push({
            x: x,
            y: y,
            type: 'egg',
            content: content, // 'axe', 'blue_campto', 'red_ptero', 'flower', 'milk', 'skateboard'
            opened: false
        });
    }

    spawnFruit(x, y, fruitType = 'banana') {
        this.items.push({
            x: x,
            y: y,
            type: 'fruit',
            subType: fruitType, // 'banana', 'apple', 'pineapple'
            vy: -1.5,
            groundY: y
        });
    }

    updateItems() {
        for (let it of this.items) {
            if (it.type === 'fruit' && it.y < it.groundY) {
                it.y += 0.5;
            }
        }
    }

    updateEnemies() {
        for (let e of this.enemies) {
            if (!e.active) continue;

            // Basic Enemy Patrol AI (Snail, Snake, Coyote, Crow)
            if (e.type === 'snake' || e.type === 'snail') {
                e.x += e.vx || -0.5;
            } else if (e.type === 'coyote') {
                if (Math.abs(e.x - this.player.x) < 80) {
                    e.vx = e.x > this.player.x ? -1.8 : 1.8;
                }
                e.x += e.vx || -0.8;
            }
        }
    }

    checkCollisions() {
        const p = this.player;

        // Player vs Items (Eggs & Fruit)
        for (let i = this.items.length - 1; i >= 0; i--) {
            let it = this.items[i];
            if (Math.abs(p.x - it.x) < 16 && Math.abs(p.y - it.y) < 20) {
                if (it.type === 'egg' && !it.opened) {
                    it.opened = true;
                    // Spawn Egg Content
                    if (it.content === 'blue_campto' || it.content === 'red_ptero') {
                        p.mount = it.content;
                    } else if (it.content === 'skateboard') {
                        p.onSkateboard = true;
                    } else if (it.content === 'axe') {
                        p.hasWeapon = true;
                    } else {
                        this.spawnFruit(it.x, it.y - 8, 'pineapple');
                    }
                } else if (it.type === 'fruit') {
                    p.health = Math.min(16, p.health + 2);
                    p.score += 100;
                    this.items.splice(i, 1);
                }
            }
        }

        // Projectiles vs Enemies
        for (let pr of this.projectiles) {
            for (let e of this.enemies) {
                if (e.active && Math.abs(pr.x - e.x) < 16 && Math.abs(pr.y - e.y) < 16) {
                    e.active = false;
                    pr.active = false;
                    p.score += 200;
                    this.spawnFruit(e.x, e.y, 'apple');
                }
            }
        }

        // Player vs Enemies
        if (p.invulnerableTimer === 0) {
            for (let e of this.enemies) {
                if (e.active && Math.abs(p.x - e.x) < 12 && Math.abs(p.y - e.y) < 16) {
                    this.handlePlayerHit();
                    break;
                }
            }
        }
    }

    handlePlayerHit(outOfEnergy = false) {
        const p = this.player;
        if (p.mount) {
            p.mount = null; // Dinosaur takes damage instead of Higgins
            p.invulnerableTimer = 60;
        } else if (p.onSkateboard) {
            p.onSkateboard = false;
            p.invulnerableTimer = 60;
        } else {
            p.lives--;
            if (p.lives <= 0) {
                this.state = 'GAME_OVER';
            } else {
                this.resetPlayer(Math.max(40, this.cameraX));
            }
        }
    }
}

if (typeof module !== 'undefined') {
    module.exports = { AdventureIslandGame };
}
