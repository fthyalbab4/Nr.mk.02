#!/usr/bin/env python3
"""
Noor Nano Rules Engine v2.0
===========================
Pure rule-based DnD schema generator for Noor Maker.
Works completely offline. No GPU. No neural model required.

This is the PRIMARY production path.
External GGUF is optional and falls back here automatically.

Usage:
    from noor_nano_rules import generate_dnd_schema
    schema = generate_dnd_schema("Mario Platform", "Platformer & Adventure")
    print(json.dumps(schema, ensure_ascii=False, indent=2))
"""

import json
import re
from typing import Dict, Any, List, Optional

# ---------------------------------------------------------------------------
# Category templates (derived from 146 cloud games analysis)
# ---------------------------------------------------------------------------

CATEGORY_TEMPLATES = {
    "Platformer & Adventure": {
        "has_gravity": True,
        "player_move": {"libId": "move_keyboard", "params": {"spd": 3.5, "jmp": 9}},
        "extra_step": {"libId": "move_gravity", "params": {"amt": 0.45}},
        "enemy_behavior": "patrol",
        "bg_color": "#1a1a2e",
        "sprites": [
            {"id": "spr_player", "role": "player", "prompt": "Hero character, side-view platformer"},
            {"id": "spr_ground", "role": "ground", "prompt": "Solid platform block tile"},
            {"id": "spr_enemy", "role": "enemy", "prompt": "Walking enemy monster"},
            {"id": "spr_coin", "role": "collectible", "prompt": "Shiny coin or gem"},
            {"id": "spr_flag", "role": "goal", "prompt": "End level flag or door"}
        ],
        "objects_extra": ["obj_coin", "obj_flag"]
    },
    "Shooter & Action": {
        "has_gravity": False,
        "player_move": {"libId": "move_8way", "params": {"spd": 4}},
        "extra_step": {"libId": "shoot_bullet", "params": {"spd": 8, "cooldown": 15}},
        "enemy_behavior": "chase",
        "bg_color": "#0d1117",
        "sprites": [
            {"id": "spr_player", "role": "player", "prompt": "Spaceship or shooter hero"},
            {"id": "spr_enemy", "role": "enemy", "prompt": "Flying or ground enemy"},
            {"id": "spr_bullet", "role": "projectile", "prompt": "Player bullet"},
            {"id": "spr_enemy_bullet", "role": "projectile", "prompt": "Enemy bullet"},
            {"id": "spr_explosion", "role": "effect", "prompt": "Explosion effect"}
        ],
        "objects_extra": ["obj_bullet", "obj_enemy_bullet"]
    },
    "RPG & Fighting": {
        "has_gravity": False,
        "player_move": {"libId": "move_8way", "params": {"spd": 2.8}},
        "extra_step": {"libId": "melee_attack", "params": {"dmg": 10, "range": 32}},
        "enemy_behavior": "aggro",
        "bg_color": "#2d1b2e",
        "sprites": [
            {"id": "spr_player", "role": "player", "prompt": "RPG hero or fighter character"},
            {"id": "spr_enemy", "role": "enemy", "prompt": "Monster or rival fighter"},
            {"id": "spr_npc", "role": "npc", "prompt": "Friendly NPC"},
            {"id": "spr_item", "role": "item", "prompt": "Potion or weapon item"},
            {"id": "spr_ui_hp", "role": "ui", "prompt": "Health bar UI"}
        ],
        "objects_extra": ["obj_npc", "obj_item"]
    },
    "Engines & Mechanics": {
        "has_gravity": False,
        "player_move": {"libId": "move_keyboard", "params": {"spd": 3, "jmp": 0}},
        "extra_step": None,
        "enemy_behavior": None,
        "bg_color": "#1e1e2e",
        "sprites": [
            {"id": "spr_player", "role": "player", "prompt": "Test character"},
            {"id": "spr_block", "role": "ground", "prompt": "Solid block"},
            {"id": "spr_trigger", "role": "trigger", "prompt": "Invisible trigger zone"}
        ],
        "objects_extra": ["obj_trigger"]
    },
    "Other": {
        "has_gravity": True,
        "player_move": {"libId": "move_keyboard", "params": {"spd": 3, "jmp": 8}},
        "extra_step": {"libId": "move_gravity", "params": {"amt": 0.4}},
        "enemy_behavior": "patrol",
        "bg_color": "#16213e",
        "sprites": [
            {"id": "spr_player", "role": "player", "prompt": "Main character"},
            {"id": "spr_ground", "role": "ground", "prompt": "Ground tile"},
            {"id": "spr_enemy", "role": "enemy", "prompt": "Enemy"}
        ],
        "objects_extra": []
    }
}

DEFAULT_TEMPLATE = CATEGORY_TEMPLATES["Other"]

def _detect_category(title: str, category: str) -> str:
    cat = (category or "").strip()
    title_l = (title or "").lower()

    for key in CATEGORY_TEMPLATES:
        if key.lower() in cat.lower() or cat.lower() in key.lower():
            return key

    if any(w in title_l for w in ["mario", "platform", "adventure", "castlevania", "zelda", "metroid"]):
        return "Platformer & Adventure"
    if any(w in title_l for w in ["shoot", "doom", "bullet", "space", "war", "gun"]):
        return "Shooter & Action"
    if any(w in title_l for w in ["rpg", "fight", "dragon", "pokemon", "warrior", "battle"]):
        return "RPG & Fighting"
    if any(w in title_l for w in ["engine", "dialog", "mechanic", "test"]):
        return "Engines & Mechanics"

    return "Other"

def _build_sprites(template: Dict, title: str) -> List[Dict]:
    sprites = []
    for s in template["sprites"]:
        sprites.append({
            "id": s["id"],
            "name": s["id"],
            "role": s["role"],
            "prompt": f"{s['prompt']} for {title}"
        })
    return sprites

def _build_objects(template: Dict, title: str) -> List[Dict]:
    objects = []

    player_events = {"step": [template["player_move"]]}
    if template.get("extra_step"):
        player_events["step"].append(template["extra_step"])
    player_events["collision_obj_enemy"] = [{"libId": "main2_game_over", "params": {}}]

    objects.append({
        "id": "obj_player",
        "name": "obj_player",
        "spriteId": "spr_player",
        "solid": False,
        "events": player_events
    })

    if template.get("has_gravity") or any(s["role"] == "ground" for s in template["sprites"]):
        objects.append({
            "id": "obj_ground",
            "name": "obj_ground",
            "spriteId": "spr_ground" if any(s["id"] == "spr_ground" for s in template["sprites"]) else "spr_block",
            "solid": True,
            "events": {}
        })

    if any(s["role"] == "enemy" for s in template["sprites"]):
        enemy_step = []
        if template.get("enemy_behavior") == "patrol":
            enemy_step.append({"libId": "move_patrol", "params": {"spd": 1.5, "dist": 64}})
        elif template.get("enemy_behavior") == "chase":
            enemy_step.append({"libId": "move_towards_player", "params": {"spd": 2}})
        elif template.get("enemy_behavior") == "aggro":
            enemy_step.append({"libId": "move_towards_player", "params": {"spd": 1.8}})
            enemy_step.append({"libId": "melee_attack", "params": {"dmg": 5, "range": 24}})

        objects.append({
            "id": "obj_enemy",
            "name": "obj_enemy",
            "spriteId": "spr_enemy",
            "solid": False,
            "events": {
                "step": enemy_step,
                "collision_obj_player": [{"libId": "deal_damage", "params": {"amount": 10}}]
            }
        })

    for extra in template.get("objects_extra", []):
        if extra == "obj_coin":
            objects.append({
                "id": "obj_coin", "name": "obj_coin", "spriteId": "spr_coin", "solid": False,
                "events": {
                    "collision_obj_player": [
                        {"libId": "add_score", "params": {"points": 100}},
                        {"libId": "destroy_self", "params": {}}
                    ]
                }
            })
        elif extra == "obj_flag":
            objects.append({
                "id": "obj_flag", "name": "obj_flag", "spriteId": "spr_flag", "solid": False,
                "events": {
                    "collision_obj_player": [{"libId": "next_room", "params": {}}]
                }
            })
        elif extra == "obj_bullet":
            objects.append({
                "id": "obj_bullet", "name": "obj_bullet", "spriteId": "spr_bullet", "solid": False,
                "events": {
                    "step": [{"libId": "move_direction", "params": {"spd": 8}}],
                    "collision_obj_enemy": [
                        {"libId": "deal_damage", "params": {"amount": 25}},
                        {"libId": "destroy_self", "params": {}}
                    ]
                }
            })
        elif extra == "obj_npc":
            objects.append({
                "id": "obj_npc", "name": "obj_npc", "spriteId": "spr_npc", "solid": False,
                "events": {
                    "collision_obj_player": [{"libId": "show_dialog", "params": {"text": f"Welcome to {title}!"}}]
                }
            })
        elif extra == "obj_item":
            objects.append({
                "id": "obj_item", "name": "obj_item", "spriteId": "spr_item", "solid": False,
                "events": {
                    "collision_obj_player": [
                        {"libId": "add_item", "params": {"item": "potion"}},
                        {"libId": "destroy_self", "params": {}}
                    ]
                }
            })
        elif extra == "obj_trigger":
            objects.append({
                "id": "obj_trigger", "name": "obj_trigger", "spriteId": "spr_trigger", "solid": False,
                "events": {
                    "collision_obj_player": [{"libId": "trigger_event", "params": {"event": "custom_1"}}]
                }
            })

    return objects

def _build_room(title: str, bg_color: str, width: int = 16, height: int = 15) -> List[Dict]:
    map_data = [0] * (width * height)
    for y in range(height - 2, height):
        for x in range(width):
            map_data[y * width + x] = 1

    return [{
        "id": "rm_1",
        "width": width,
        "height": height,
        "map": map_data,
        "settings": {
            "name": "room1",
            "caption": f"Level 1 - {title}",
            "bgColor": bg_color
        }
    }]

def generate_dnd_schema(title: str, category: str = "Other", extra_prompt: Optional[str] = None) -> Dict[str, Any]:
    detected = _detect_category(title, category)
    template = CATEGORY_TEMPLATES.get(detected, DEFAULT_TEMPLATE)

    schema = {
        "metadata": {
            "title": title,
            "story": f"Retro 8-bit game: {title}",
            "genre": detected,
            "controls": "Arrows / Touch / Virtual Pad",
            "languages": ["ar", "en"],
            "defaultLanguage": "ar",
            "generator": "NoorNano-Rules-v2.0",
            "source_category": category
        },
        "sprites": _build_sprites(template, title),
        "objects": _build_objects(template, title),
        "rooms": _build_room(title, template["bg_color"])
    }

    if extra_prompt:
        schema["metadata"]["user_prompt"] = extra_prompt

    return schema

def generate_from_prompt(prompt: str) -> Dict[str, Any]:
    title = "Custom Game"
    category = "Other"

    patterns = [
        r"إنشاء لعبة\s+(.+?)(?:\s+\(|$)",
        r"اعمل لعبة\s+(.+?)(?:\s+\(|$)",
        r"create\s+(?:a\s+)?game\s+(.+?)(?:\s+\(|$)",
        r"make\s+(?:a\s+)?game\s+(.+?)(?:\s+\(|$)",
    ]
    for p in patterns:
        m = re.search(p, prompt, re.IGNORECASE)
        if m:
            title = m.group(1).strip()
            break

    prompt_l = prompt.lower()
    if any(w in prompt_l for w in ["منصة", "platform", "ماريو", "mario", "مغامرة"]):
        category = "Platformer & Adventure"
    elif any(w in prompt_l for w in ["شوتر", "shooter", "رماية", "فضاء", "space"]):
        category = "Shooter & Action"
    elif any(w in prompt_l for w in ["rpg", "قتال", "fighting", "دراغون", "pokemon"]):
        category = "RPG & Fighting"

    return generate_dnd_schema(title, category, extra_prompt=prompt)

if __name__ == "__main__":
    import sys
    if len(sys.argv) > 1:
        prompt = " ".join(sys.argv[1:])
        result = generate_from_prompt(prompt)
    else:
        result = generate_dnd_schema("Test Platformer", "Platformer & Adventure")

    print(json.dumps(result, ensure_ascii=False, indent=2))
