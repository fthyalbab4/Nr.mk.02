/**
 * Noor Nano Rules Engine - JavaScript version (v2.0)
 * ==================================================
 * Pure rule-based DnD schema generator for Noor Maker web/Android runtime.
 * Works offline. No GPU. No model file required.
 *
 * This is the PRIMARY production path inside the engine.
 * External GGUF is optional and should fall back here.
 *
 * Usage in engine:
 *   const schema = NoorNano.generate("Mario Platform", "Platformer & Adventure");
 *   // or
 *   const schema = NoorNano.fromPrompt("إنشاء لعبة منصات ماريو");
 */

(function (global) {
  "use strict";

  const CATEGORY_TEMPLATES = {
    "Platformer & Adventure": {
      hasGravity: true,
      playerMove: { libId: "move_keyboard", params: { spd: 3.5, jmp: 9 } },
      extraStep: { libId: "move_gravity", params: { amt: 0.45 } },
      enemyBehavior: "patrol",
      bgColor: "#1a1a2e",
      sprites: [
        { id: "spr_player", role: "player", prompt: "Hero character, side-view platformer" },
        { id: "spr_ground", role: "ground", prompt: "Solid platform block tile" },
        { id: "spr_enemy", role: "enemy", prompt: "Walking enemy monster" },
        { id: "spr_coin", role: "collectible", prompt: "Shiny coin or gem" },
        { id: "spr_flag", role: "goal", prompt: "End level flag or door" }
      ],
      objectsExtra: ["obj_coin", "obj_flag"]
    },
    "Shooter & Action": {
      hasGravity: false,
      playerMove: { libId: "move_8way", params: { spd: 4 } },
      extraStep: { libId: "shoot_bullet", params: { spd: 8, cooldown: 15 } },
      enemyBehavior: "chase",
      bgColor: "#0d1117",
      sprites: [
        { id: "spr_player", role: "player", prompt: "Spaceship or shooter hero" },
        { id: "spr_enemy", role: "enemy", prompt: "Flying or ground enemy" },
        { id: "spr_bullet", role: "projectile", prompt: "Player bullet" },
        { id: "spr_enemy_bullet", role: "projectile", prompt: "Enemy bullet" },
        { id: "spr_explosion", role: "effect", prompt: "Explosion effect" }
      ],
      objectsExtra: ["obj_bullet", "obj_enemy_bullet"]
    },
    "RPG & Fighting": {
      hasGravity: false,
      playerMove: { libId: "move_8way", params: { spd: 2.8 } },
      extraStep: { libId: "melee_attack", params: { dmg: 10, range: 32 } },
      enemyBehavior: "aggro",
      bgColor: "#2d1b2e",
      sprites: [
        { id: "spr_player", role: "player", prompt: "RPG hero or fighter character" },
        { id: "spr_enemy", role: "enemy", prompt: "Monster or rival fighter" },
        { id: "spr_npc", role: "npc", prompt: "Friendly NPC" },
        { id: "spr_item", role: "item", prompt: "Potion or weapon item" },
        { id: "spr_ui_hp", role: "ui", prompt: "Health bar UI" }
      ],
      objectsExtra: ["obj_npc", "obj_item"]
    },
    "Engines & Mechanics": {
      hasGravity: false,
      playerMove: { libId: "move_keyboard", params: { spd: 3, jmp: 0 } },
      extraStep: null,
      enemyBehavior: null,
      bgColor: "#1e1e2e",
      sprites: [
        { id: "spr_player", role: "player", prompt: "Test character" },
        { id: "spr_block", role: "ground", prompt: "Solid block" },
        { id: "spr_trigger", role: "trigger", prompt: "Invisible trigger zone" }
      ],
      objectsExtra: ["obj_trigger"]
    },
    "Other": {
      hasGravity: true,
      playerMove: { libId: "move_keyboard", params: { spd: 3, jmp: 8 } },
      extraStep: { libId: "move_gravity", params: { amt: 0.4 } },
      enemyBehavior: "patrol",
      bgColor: "#16213e",
      sprites: [
        { id: "spr_player", role: "player", prompt: "Main character" },
        { id: "spr_ground", role: "ground", prompt: "Ground tile" },
        { id: "spr_enemy", role: "enemy", prompt: "Enemy" }
      ],
      objectsExtra: []
    }
  };

  function detectCategory(title, category) {
    const cat = (category || "").trim();
    const titleL = (title || "").toLowerCase();

    for (const key of Object.keys(CATEGORY_TEMPLATES)) {
      if (key.toLowerCase().includes(cat.toLowerCase()) || cat.toLowerCase().includes(key.toLowerCase())) {
        return key;
      }
    }

    if (["mario", "platform", "adventure", "castlevania", "zelda", "metroid"].some(w => titleL.includes(w))) return "Platformer & Adventure";
    if (["shoot", "doom", "bullet", "space", "war", "gun"].some(w => titleL.includes(w))) return "Shooter & Action";
    if (["rpg", "fight", "dragon", "pokemon", "warrior", "battle"].some(w => titleL.includes(w))) return "RPG & Fighting";
    if (["engine", "dialog", "mechanic", "test"].some(w => titleL.includes(w))) return "Engines & Mechanics";
    return "Other";
  }

  function buildSprites(template, title) {
    return template.sprites.map(s => ({
      id: s.id, name: s.id, role: s.role, prompt: `${s.prompt} for ${title}`
    }));
  }

  function buildObjects(template, title) {
    const objects = [];

    const playerEvents = { step: [template.playerMove] };
    if (template.extraStep) playerEvents.step.push(template.extraStep);
    playerEvents.collision_obj_enemy = [{ libId: "main2_game_over", params: {} }];

    objects.push({
      id: "obj_player", name: "obj_player", spriteId: "spr_player", solid: false, events: playerEvents
    });

    if (template.hasGravity || template.sprites.some(s => s.role === "ground")) {
      const groundSprite = template.sprites.find(s => s.id === "spr_ground") ? "spr_ground" : "spr_block";
      objects.push({
        id: "obj_ground", name: "obj_ground", spriteId: groundSprite, solid: true, events: {}
      });
    }

    if (template.sprites.some(s => s.role === "enemy")) {
      const enemyStep = [];
      if (template.enemyBehavior === "patrol") enemyStep.push({ libId: "move_patrol", params: { spd: 1.5, dist: 64 } });
      else if (template.enemyBehavior === "chase") enemyStep.push({ libId: "move_towards_player", params: { spd: 2 } });
      else if (template.enemyBehavior === "aggro") {
        enemyStep.push({ libId: "move_towards_player", params: { spd: 1.8 } });
        enemyStep.push({ libId: "melee_attack", params: { dmg: 5, range: 24 } });
      }

      objects.push({
        id: "obj_enemy", name: "obj_enemy", spriteId: "spr_enemy", solid: false,
        events: {
          step: enemyStep,
          collision_obj_player: [{ libId: "deal_damage", params: { amount: 10 } }]
        }
      });
    }

    (template.objectsExtra || []).forEach(extra => {
      if (extra === "obj_coin") {
        objects.push({
          id: "obj_coin", name: "obj_coin", spriteId: "spr_coin", solid: false,
          events: { collision_obj_player: [{ libId: "add_score", params: { points: 100 } }, { libId: "destroy_self", params: {} }] }
        });
      } else if (extra === "obj_flag") {
        objects.push({
          id: "obj_flag", name: "obj_flag", spriteId: "spr_flag", solid: false,
          events: { collision_obj_player: [{ libId: "next_room", params: {} }] }
        });
      } else if (extra === "obj_bullet") {
        objects.push({
          id: "obj_bullet", name: "obj_bullet", spriteId: "spr_bullet", solid: false,
          events: {
            step: [{ libId: "move_direction", params: { spd: 8 } }],
            collision_obj_enemy: [{ libId: "deal_damage", params: { amount: 25 } }, { libId: "destroy_self", params: {} }]
          }
        });
      } else if (extra === "obj_npc") {
        objects.push({
          id: "obj_npc", name: "obj_npc", spriteId: "spr_npc", solid: false,
          events: { collision_obj_player: [{ libId: "show_dialog", params: { text: `Welcome to ${title}!` } }] }
        });
      } else if (extra === "obj_item") {
        objects.push({
          id: "obj_item", name: "obj_item", spriteId: "spr_item", solid: false,
          events: { collision_obj_player: [{ libId: "add_item", params: { item: "potion" } }, { libId: "destroy_self", params: {} }] }
        });
      } else if (extra === "obj_trigger") {
        objects.push({
          id: "obj_trigger", name: "obj_trigger", spriteId: "spr_trigger", solid: false,
          events: { collision_obj_player: [{ libId: "trigger_event", params: { event: "custom_1" } }] }
        });
      }
    });

    return objects;
  }

  function buildRoom(title, bgColor, width = 16, height = 15) {
    const map = new Array(width * height).fill(0);
    for (let y = height - 2; y < height; y++) {
      for (let x = 0; x < width; x++) map[y * width + x] = 1;
    }
    return [{
      id: "rm_1", width, height, map,
      settings: { name: "room1", caption: `Level 1 - ${title}`, bgColor }
    }];
  }

  function generate(title, category = "Other", extraPrompt = null) {
    const detected = detectCategory(title, category);
    const template = CATEGORY_TEMPLATES[detected] || CATEGORY_TEMPLATES["Other"];

    const schema = {
      metadata: {
        title, story: `Retro 8-bit game: ${title}`, genre: detected,
        controls: "Arrows / Touch / Virtual Pad", languages: ["ar", "en"],
        defaultLanguage: "ar", generator: "NoorNano-Rules-JS-v2.0", source_category: category
      },
      sprites: buildSprites(template, title),
      objects: buildObjects(template, title),
      rooms: buildRoom(title, template.bgColor)
    };

    if (extraPrompt) schema.metadata.user_prompt = extraPrompt;
    return schema;
  }

  function fromPrompt(prompt) {
    let title = "Custom Game";
    let category = "Other";

    const patterns = [
      /إنشاء لعبة\s+(.+?)(?:\s+\(|$)/i,
      /اعمل لعبة\s+(.+?)(?:\s+\(|$)/i,
      /create\s+(?:a\s+)?game\s+(.+?)(?:\s+\(|$)/i,
      /make\s+(?:a\s+)?game\s+(.+?)(?:\s+\(|$)/i
    ];
    for (const p of patterns) {
      const m = prompt.match(p);
      if (m) { title = m[1].trim(); break; }
    }

    const pl = prompt.toLowerCase();
    if (["منصة", "platform", "ماريو", "mario", "مغامرة"].some(w => pl.includes(w))) category = "Platformer & Adventure";
    else if (["شوتر", "shooter", "رماية", "فضاء", "space"].some(w => pl.includes(w))) category = "Shooter & Action";
    else if (["rpg", "قتال", "fighting", "دراغون", "pokemon"].some(w => pl.includes(w))) category = "RPG & Fighting";

    return generate(title, category, prompt);
  }

  const NoorNano = {
    version: "2.0-dual",
    mode: "internal_rules",
    generate,
    fromPrompt,
    loadExternalGGUF: function (pathOrUrl) {
      console.warn("[NoorNano] External GGUF loading is not yet implemented in JS runtime.");
      console.warn("[NoorNano] Falling back to internal_rules engine.");
      this.mode = "internal_rules";
      return false;
    },
    isReady: function () { return true; }
  };

  if (typeof module !== "undefined" && module.exports) {
    module.exports = NoorNano;
  } else {
    global.NoorNano = NoorNano;
  }

})(typeof window !== "undefined" ? window : globalThis);
