#!/usr/bin/env python3
"""
Noor Nano (NaN-Your) Neural Fine-Tuning & GGUF Script  v2.0
===========================================================
Trains HuggingFaceTB/SmolLM2-135M-Instruct on the 146 GameMaker Cloud Catalog.

IMPORTANT:
- Primary production path is now the Rule-Based engine (noor_nano_rules.py / noor_nano.js).
- This script is OPTIONAL and only needed if you want a real neural GGUF model.
- You can still import any external GGUF later; the engine falls back to rules automatically.

Usage (needs GPU, e.g. free Kaggle):
    pip install unsloth torch transformers datasets trl accelerate
    python3 models/Noor_Nano/train_nan_your.py

After training, convert to GGUF with llama.cpp (see comments at bottom).
"""

import os
import json
import sys

def prepare_dataset_from_cloud_catalog():
    catalog_path = "app/src/main/assets/www/data/gmk_cloud_catalog.json"
    dataset_output = "models/Noor_Nano/dataset.jsonl"

    if not os.path.exists(catalog_path):
        print(f"Error: Cloud catalog not found at {catalog_path}")
        print("Make sure you run this from the repository root.")
        return False

    with open(catalog_path, "r", encoding="utf-8") as f:
        catalog = json.load(f)

    sys.path.insert(0, os.path.dirname(__file__))
    try:
        from noor_nano_rules import generate_dnd_schema
        use_rules = True
        print("Using improved Noor Nano Rules engine for high-quality targets.")
    except ImportError:
        use_rules = False
        print("Warning: noor_nano_rules.py not found, falling back to basic templates.")

    entries = []
    print(f"Extracting and formatting dataset for {len(catalog)} cloud games...")

    for item in catalog:
        title = item.get("title", "Game")
        category = item.get("category", "General")

        prompt_ar = f"إنشاء لعبة {title} ({category}) باستخدام مكعبات السحب والإفلات DnD وأصول السحابة"

        if use_rules:
            dnd_schema = generate_dnd_schema(title, category)
        else:
            has_gravity = "Platform" in category or "Action" in category
            dnd_schema = {
                "metadata": {
                    "title": title,
                    "story": f"Retro 8-bit game for {title}",
                    "genre": category,
                    "controls": "Arrows / Touch",
                    "languages": ["ar", "en"],
                    "defaultLanguage": "ar"
                },
                "sprites": [
                    {"id": "spr_player", "name": "spr_player", "role": "player", "prompt": f"Hero character for {title}"},
                    {"id": "spr_ground", "name": "spr_ground", "role": "ground", "prompt": "Platform block tile"},
                    {"id": "spr_enemy", "name": "spr_enemy", "role": "enemy", "prompt": "Enemy monster sprite"}
                ],
                "objects": [
                    {
                        "id": "obj_player",
                        "name": "obj_player",
                        "spriteId": "spr_player",
                        "solid": False,
                        "events": {
                            "step": [
                                {"libId": "move_keyboard", "params": {"spd": 3, "jmp": 8}},
                                {"libId": "move_gravity" if has_gravity else "move_8way", "params": {"amt": 0.4 if has_gravity else 3}}
                            ],
                            "collision_obj_enemy": [
                                {"libId": "main2_game_over", "params": {}}
                            ]
                        }
                    },
                    {
                        "id": "obj_ground",
                        "name": "obj_ground",
                        "spriteId": "spr_ground",
                        "solid": True,
                        "events": {}
                    }
                ],
                "rooms": [
                    {
                        "id": "rm_1",
                        "width": 16,
                        "height": 15,
                        "map": [0] * 240,
                        "settings": {"name": "room1", "caption": f"Level 1 - {title}", "bgColor": "#1a1a2e"}
                    }
                ]
            }

        entry = {
            "instruction": prompt_ar,
            "input": f"Category: {category}, Template: {title}",
            "output": json.dumps(dnd_schema, ensure_ascii=False)
        }
        entries.append(entry)

    os.makedirs("models/Noor_Nano", exist_ok=True)
    with open(dataset_output, "w", encoding="utf-8") as f:
        for entry in entries:
            f.write(json.dumps(entry, ensure_ascii=False) + "\n")

    print(f"Dataset generated with {len(entries)} high-quality entries at {dataset_output}")
    return True

def run_neural_fine_tuning():
    print("\n--- Starting Neural Fine-Tuning Execution ---")
    try:
        import torch
        from transformers import AutoModelForCausalLM, AutoTokenizer, TrainingArguments
        from datasets import load_dataset
        from trl import SFTTrainer

        print("PyTorch and Transformers detected. Initializing SmolLM2-135M-Instruct Fine-Tuning...")

        model_id = "HuggingFaceTB/SmolLM2-135M-Instruct"
        tokenizer = AutoTokenizer.from_pretrained(model_id)
        model = AutoModelForCausalLM.from_pretrained(
            model_id,
            torch_dtype=torch.float16 if torch.cuda.is_available() else torch.float32,
            device_map="auto" if torch.cuda.is_available() else None
        )

        dataset = load_dataset("json", data_files="models/Noor_Nano/dataset.jsonl")

        training_args = TrainingArguments(
            output_dir="models/Noor_Nano/checkpoints",
            per_device_train_batch_size=2 if torch.cuda.is_available() else 1,
            gradient_accumulation_steps=4,
            learning_rate=2e-4,
            num_train_epochs=3,
            logging_steps=10,
            save_strategy="epoch",
            fp16=torch.cuda.is_available(),
            report_to="none"
        )

        trainer = SFTTrainer(
            model=model,
            train_dataset=dataset["train"],
            dataset_text_field="output",
            max_seq_length=2048,
            args=training_args
        )

        print("Executing model training...")
        trainer.train()

        print("Saving fine-tuned neural model weights...")
        model.save_pretrained("models/Noor_Nano/fine_tuned_weights")
        tokenizer.save_pretrained("models/Noor_Nano/fine_tuned_weights")
        print("Fine-tuning completed successfully!")
        print("\nNext step: Convert to GGUF (see instructions at the end of this file).")

    except ImportError as e:
        print("Note: Required libraries are not installed in this environment.")
        print(f"Details: {e}")
        print("\nTo run actual training you need a GPU environment (free options):")
        print("  - Kaggle Notebooks (free GPU)")
        print("  - Google Colab (if available)")
        print("  - Any cloud GPU instance")
        print("\nThe Rule-Based engine (noor_nano_rules.py / noor_nano.js) already works without any of this.")

if __name__ == "__main__":
    if prepare_dataset_from_cloud_catalog():
        run_neural_fine_tuning()

"""
===========================================================================
HOW TO CONVERT fine_tuned_weights TO GGUF (after training on GPU)
===========================================================================

1. Install llama.cpp:
   git clone https://github.com/ggerganov/llama.cpp
   cd llama.cpp && make

2. Convert HF model to GGUF:
   python convert_hf_to_gguf.py ../models/Noor_Nano/fine_tuned_weights \\
       --outfile ../models/Noor_Nano/noor_nano_f16.gguf

3. Quantize to Q4_K_M (small & fast):
   ./llama-quantize ../models/Noor_Nano/noor_nano_f16.gguf \\
       ../models/Noor_Nano/noor_nano_q4.gguf Q4_K_M

4. Put the resulting noor_nano_q4.gguf in models/Noor_Nano/
   The engine will automatically detect it and use it if an inference backend is available.
   Otherwise it falls back to the Rule-Based engine.

Note: Real GGUF inference on Android requires a native llama.cpp build or similar.
Until that is integrated, the Rule-Based path is the reliable production mode.
"""
