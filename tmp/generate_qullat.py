import json
import os
import glob
import base64

def generate_qullat_nor():
    assets_dir = "/tmp/qullat/assets"
    
    # Load images as base64 data URLs
    images = {}
    for img_path in glob.glob(os.path.join(assets_dir, "images", "*.png")):
        name = os.path.splitext(os.path.basename(img_path))[0]
        with open(img_path, "rb") as f:
            b64 = base64.b64encode(f.read()).decode("utf-8")
            images[name] = f"data:image/png;base64,{b64}"
            
    # Load audio
    audio_path = os.path.join(assets_dir, "audio", "bgm_folklore_melody.mp3")
    audio_data = ""
    if os.path.exists(audio_path):
        with open(audio_path, "rb") as f:
            b64 = base64.b64encode(f.read()).decode("utf-8")
            audio_data = f"data:audio/mp3;base64,{b64}"

    # Build NOR project structure
    project = {
        "nor": "1.0",
        "schema": "nor.runtime-v1",
        "title": "Qillat Hubbina - قلة حبيبنا",
        "author": "NOR Maker & Egyptian Folklore Team",
        "description": "An Egyptian dark folklore action-platformer where spouses Hassan and Na'ima cleanse shadow manifestations to protect their sacred bond.",
        "game_type": "platformer",
        "screen": { "w": 1376, "h": 768 },
        "tile": { "w": 32, "h": 32 },
        "fps": 60,
        "physics": { "gravity": 0.52, "jump_force": -13.0, "player_speed": 5.4, "max_fall_speed": 16 },
        "sprites": [
            { "id": "spr_hassan", "name": "Hassan", "src": images.get("hassan_hero_idle", ""), "frame_w": 512, "frame_h": 512, "frame_count": 4, "anim_fps": 8, "role": "player" },
            { "id": "spr_naima", "name": "Na'ima", "src": images.get("naima_heroine_idle", ""), "frame_w": 512, "frame_h": 512, "frame_count": 4, "anim_fps": 8, "role": "player" },
            { "id": "spr_ghoul", "name": "Ghoul of Doubt", "src": images.get("ghoul_doubt_quad_idle", ""), "frame_w": 512, "frame_h": 512, "frame_count": 16, "anim_fps": 10, "role": "enemy" },
            { "id": "spr_zill", "name": "Zill Shade", "src": images.get("zill_shade", ""), "frame_w": 256, "frame_h": 256, "frame_count": 1, "anim_fps": 1, "role": "enemy" },
            { "id": "spr_platform", "name": "Mudbrick Platform", "src": images.get("mudbrick_platform", ""), "frame_w": 256, "frame_h": 256, "frame_count": 1, "anim_fps": 1, "role": "ground" },
            { "id": "spr_monolith", "name": "Monolith", "src": images.get("purification_monolith", ""), "frame_w": 256, "frame_h": 512, "frame_count": 1, "anim_fps": 1, "role": "goal" },
            { "id": "spr_match", "name": "Matchbox", "src": images.get("matchbox_item", ""), "frame_w": 256, "frame_h": 256, "frame_count": 1, "anim_fps": 1, "role": "item" },
            { "id": "spr_qulla", "name": "Qulla Jar", "src": images.get("qulla_jar", ""), "frame_w": 256, "frame_h": 256, "frame_count": 1, "anim_fps": 1, "role": "item" },
            { "id": "spr_bead", "name": "Ceramic Bead", "src": images.get("ceramic_bead_talisman", ""), "frame_w": 256, "frame_h": 256, "frame_count": 1, "anim_fps": 1, "role": "item" }
        ],
        "sounds": [
            { "id": "snd_music", "name": "Nile Twilight Melody", "src": audio_data }
        ],
        "backgrounds": [
            { "id": "bg_rural", "name": "Rural Night", "src": images.get("bg_rural_night", "") },
            { "id": "bg_canal", "name": "Canal Ruins", "src": images.get("bg_canal_ruins", "") }
        ],
        "objects": [
            { "id": "obj_player", "name": "obj_player", "sprite": "spr_hassan", "solid": False, "role": "player", "speed": 5.4, "health": 100, "script": "this.gravity = 0.52;" },
            { "id": "obj_enemy", "name": "obj_enemy", "sprite": "spr_zill", "solid": False, "role": "enemy", "speed": 2.2, "health": 3, "script": "this.dx = -1.5;" },
            { "id": "obj_ghoul", "name": "obj_ghoul", "sprite": "spr_ghoul", "solid": False, "role": "enemy", "speed": 3.4, "health": 6, "script": "this.dx = -2.0;" },
            { "id": "obj_item", "name": "obj_item", "sprite": "spr_match", "solid": False, "role": "item", "speed": 0, "health": 1, "script": "" },
            { "id": "obj_monolith", "name": "obj_monolith", "sprite": "spr_monolith", "solid": True, "role": "goal", "speed": 0, "health": 1, "script": "" }
        ],
        "rooms": [
            {
                "id": "rm_1",
                "name": "Village Courtyard",
                "w": 43,
                "h": 24,
                "tile_w": 32,
                "tile_h": 32,
                "bg_color": "#13111c",
                "tiles": [0] * (43 * 24),
                "instances": [
                    { "id": "inst_p1", "obj": "obj_player", "x": 150, "y": 520 },
                    { "id": "inst_e1", "obj": "obj_enemy", "x": 650, "y": 350 },
                    { "id": "inst_m1", "obj": "obj_monolith", "x": 1280, "y": 440 },
                    { "id": "inst_i1", "obj": "obj_item", "x": 480, "y": 380 }
                ]
            },
            {
                "id": "rm_2",
                "name": "Murky Palm Grove",
                "w": 43,
                "h": 24,
                "tile_w": 32,
                "tile_h": 32,
                "bg_color": "#13111c",
                "tiles": [0] * (43 * 24),
                "instances": [
                    { "id": "inst_p2", "obj": "obj_player", "x": 150, "y": 520 },
                    { "id": "inst_g1", "obj": "obj_ghoul", "x": 1800, "y": 550 },
                    { "id": "inst_m2", "obj": "obj_monolith", "x": 2950, "y": 440 }
                ]
            },
            {
                "id": "rm_3",
                "name": "Ancient Canal Shrine Ruins",
                "w": 43,
                "h": 24,
                "tile_w": 32,
                "tile_h": 32,
                "bg_color": "#13111c",
                "tiles": [0] * (43 * 24),
                "instances": [
                    { "id": "inst_p3", "obj": "obj_player", "x": 150, "y": 520 },
                    { "id": "inst_e3", "obj": "obj_enemy", "x": 3400, "y": 430 },
                    { "id": "inst_m3", "obj": "obj_monolith", "x": 4650, "y": 440 }
                ]
            },
            {
                "id": "rm_boss",
                "name": "Sanctum of the Sacred Hearth",
                "w": 43,
                "h": 24,
                "tile_w": 32,
                "tile_h": 32,
                "bg_color": "#13111c",
                "tiles": [0] * (43 * 24),
                "instances": [
                    { "id": "inst_pb", "obj": "obj_player", "x": 150, "y": 520 },
                    { "id": "inst_gb", "obj": "obj_ghoul", "x": 5350, "y": 550 },
                    { "id": "inst_mb", "obj": "obj_monolith", "x": 5900, "y": 270 }
                ]
            }
        ],
        "start_room": "rm_1",
        "editor_project": {
            "metadata": {
                "title": "Qillat Hubbina",
                "story": "Egyptian Dark Folklore Adventure",
                "genre": "Action Platformer"
            }
        }
    }

    os.makedirs("app/src/main/assets/www/templates/qullt_hubina", exist_ok=True)
    out_path = "app/src/main/assets/www/templates/qullt_hubina/qullat_hubina.nor"
    with open(out_path, "w", encoding="utf-8") as f:
        json.dump(project, f, ensure_ascii=False, indent=2)
    print("Successfully generated:", out_path)

if __name__ == "__main__":
    generate_qullat_nor()
