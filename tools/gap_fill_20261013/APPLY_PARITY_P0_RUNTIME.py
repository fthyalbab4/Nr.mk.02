#!/usr/bin/env python3
"""P0 parity: restore draw, creation_code, outside/boundary, mask stub, behavior fix."""
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
RT = ROOT / "app/src/main/cpp/src/gm82_runtime.c"
EV = ROOT / "app/src/main/cpp/src/gm82_events.c"
DEC = ROOT / "app/src/main/cpp/src/gm82_object_room_decode.c"
HDR = ROOT / "app/src/main/cpp/include/gm82_object_room_decode.h"
BAK = ROOT / "app/src/main/cpp_backup/src/gm82_runtime.c"

def main():
    if HDR.exists():
        h = HDR.read_text()
        if "creation_code" not in h:
            h = h.replace(
                "    int32_t id;\n} gm82_decoded_instance;",
                "    int32_t id;\n    char *creation_code;\n} gm82_decoded_instance;",
            )
            HDR.write_text(h)
            print("hdr")
    if DEC.exists():
        d = DEC.read_text()
        if "instances[k].creation_code" not in d:
            d = d.replace(
                "    for (int i = 0; i < L->count; i++) {\n        free(L->items[i].instances);\n        free(L->items[i].tiles);\n    }",
                "    for (int i = 0; i < L->count; i++) {\n        if (L->items[i].instances) {\n            for (int k = 0; k < L->items[i].instance_count; k++)\n                free(L->items[i].instances[k].creation_code);\n        }\n        free(L->items[i].instances);\n        free(L->items[i].tiles);\n    }",
            )
            if "memset(ibuf, 0, sizeof(ibuf))" not in d:
                d = d.replace(
                    "gm82_decoded_instance ibuf[1024];",
                    "gm82_decoded_instance ibuf[1024];\n        memset(ibuf, 0, sizeof(ibuf));",
                    1,
                )
            DEC.write_text(d)
            print("dec")
    if EV.exists():
        e = EV.read_text()
        e2 = e.replace(
            "    for (const gm82_behavior *b = g_behaviors; b->name; b++) {\n        if (strstr(name, b->name)) return b;\n    }",
            "    for (const gm82_behavior *b = g_behaviors; b && b->object_name_prefix; b++) {\n        if (strstr(name, b->object_name_prefix)) return b;\n    }",
        )
        if e2 != e:
            EV.write_text(e2)
            print("ev")
    if not RT.exists():
        print("no runtime"); return
    t = RT.read_text()
    if "bool gm82_runtime_draw" not in t and BAK.exists():
        bak = BAK.read_text()
        i = bak.find("static void blit(")
        if i >= 0:
            t = t.rstrip() + "\n\n/* restored draw */\n" + bak[i:] + "\n"
            print("draw from backup")
    if "src->creation_code" not in t:
        needle = (
            "        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);\n"
            "        if (inst && src->id > 0) inst->id = src->id;\n    }"
        )
        if needle in t:
            t = t.replace(
                needle,
                "        gm82_instance *inst = gm82_runtime_instance_create(rt, src->object_index, (double)src->x, (double)src->y);\n"
                "        if (inst && src->id > 0) inst->id = src->id;\n"
                "        if (inst && src->creation_code && src->creation_code[0]) {\n"
                "            gm82_gml_set_self(inst);\n"
                "            gm82_gml_eval_block(rt, inst, src->creation_code);\n"
                "        }\n    }",
                1,
            )
            print("creation_code")
    if "gm82_events_fire_outside_all" not in t:
        t = t.replace(
            "    rt->frame_phase = 4; /* End Step */\n    gm82_events_fire_end_step_all(rt);",
            "    gm82_events_fire_outside_all(rt);\n    gm82_events_fire_boundary_all(rt);\n    rt->frame_phase = 4; /* End Step */\n    gm82_events_fire_end_step_all(rt);",
            1,
        )
        print("outside")
    if "gm82_mask_pixel_collide" in t and "static int gm82_mask_pixel_collide" not in t:
        stub = (
            "\nstatic int gm82_mask_pixel_collide(const void *fa, int32_t ax, int32_t ay, "
            "const void *fb, int32_t bx, int32_t by) {\n"
            "    (void)fa;(void)ax;(void)ay;(void)fb;(void)bx;(void)by; return 0;\n}\n"
        )
        t = t.replace("void gm82_runtime_step(gm82_runtime *rt)", stub + "void gm82_runtime_step(gm82_runtime *rt)", 1)
        print("mask stub")
    RT.write_text(t)
    print("APPLY_PARITY_P0_DONE")

if __name__ == "__main__":
    main()
