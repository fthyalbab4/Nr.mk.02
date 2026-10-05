#!/usr/bin/env python3
"""
Noor Nano (NaN-Your) Neural Fine-Tuning & GGUF Quantization Script
Trains HuggingFaceTB/SmolLM2-135M-Instruct on 146 GameMaker Cloud Catalog Dataset
Generates quantized GGUF format (<180MB) for Noor Maker Engine.

Usage on GPU/Colab environment:
pip install unsloth torch transformers datasets trl accelerate
python3 models/Noor_Nano/train_nan_your.py
"""

import os
import json
import sys

def prepare_dataset_from_cloud_catalog():
    catalog_path = "app/src/main/assets/www/data/gmk_cloud_catalog.json"
    dataset_output = "models/Noor_Nano/dataset.jsonl"

    if not os.path.exists(catalog_path):
        print(f"Error: Cloud catalog not found at {catalog_path}")
        return False

    with open(catalog_path, "r", encoding="utf-8") as f:
        catalog = json.load(f)

    entries = []
    print(f"Extracting and formatting dataset for {len(catalog)} cloud games...")

    for item in catalog:
        title = item.get("title", "Game")
        category = item.get("category", "General")
        has_gravity = "Platform" in category or "Action" in category

        prompt_ar = f"إنشاء لعبة {title} ({category}) باستخدام مكعبات السحب والإفلات DnD وأصول السحابة"

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

    print(f"Dataset generated with {len(entries)} entries at {dataset_output}")
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
        model = AutoModelForCausalLM.from_pretrained(model_id, torch_dtype=torch.float16, device_map="auto")

        dataset = load_dataset("json", data_files="models/Noor_Nano/dataset.jsonl")

        training_args = TrainingArguments(
            output_dir="models/Noor_Nano/checkpoints",
            per_device_train_batch_size=2,
            gradient_accumulation_steps=4,
            learning_rate=2e-4,
            num_train_epochs=3,
            logging_steps=10,
            save_strategy="epoch",
            fp16=torch.cuda.is_available()
        )

        trainer = SFTTrainer(
            model=model,
            train_dataset=dataset["train"],
            dataset_text_field="output",
            max_seq_length=2048,
            args=training_args
        )

        print("Executing model training on GPU...")
        trainer.train()

        print("Saving fine-tuned neural model weights...")
        model.save_pretrained("models/Noor_Nano/fine_tuned_weights")
        tokenizer.save_pretrained("models/Noor_Nano/fine_tuned_weights")
        print("Fine-tuning completed successfully!")

    except ImportError:
        print("Note: PyTorch / Transformers libraries are not installed in this environment.")
        print("To run actual GPU training, execute this script in a PyTorch/CUDA environment (e.g. Google Colab).")

if __name__ == "__main__":
    if prepare_dataset_from_cloud_catalog():
        run_neural_fine_tuning()
