#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
P = ROOT / "tools/run_host_pipeline.sh"
def main():
    t = P.read_text()
    n = 0
    if "DUMP_PPM" not in t:
        old = """        for (int i = 0; i < bw * bh; i++)\n            if (rgba[i*4+0] > 30 || rgba[i*4+1] > 30 || rgba[i*4+2] > 50) lit++;\n        free(rgba);"""
        new = """        for (int i = 0; i < bw * bh; i++)\n            if (rgba[i*4+0] > 30 || rgba[i*4+1] > 30 || rgba[i*4+2] > 50) lit++;\n        {\n            const char *dump = getenv(\"DUMP_PPM\");\n            if (dump && dump[0]) {\n                FILE *po = fopen(dump, \"wb\");\n                if (po) {\n                    fprintf(po, \"P6\\n%d %d\\n255\\n\", bw, bh);\n                    for (int i = 0; i < bw * bh; i++) {\n                        fputc(rgba[i*4+0], po); fputc(rgba[i*4+1], po); fputc(rgba[i*4+2], po);\n                    }\n                    fclose(po);\n                    fprintf(stderr, \"DUMP_PPM_WROTE %s %dx%d\\n\", dump, bw, bh);\n                }\n            }\n        }\n        free(rgba);"""
        if old in t:
            t = t.replace(old, new, 1); n += 1
    if "key_down(&input, 32)" not in t:
        t2 = t.replace(
            "gm82_input_key_down(&input, 39);\n        gm82_runtime_step(&rt);",
            "gm82_input_key_down(&input, 39);\n        if ((i % 15) == 0) { gm82_input_key_down(&input, 32); gm82_input_key_down(&input, 38); }\n        gm82_runtime_step(&rt);",
            1,
        )
        if t2 != t:
            t = t2; n += 1
    P.write_text(t)
    print("APPLY_HOST_PIPELINE_DUMP_JUMP", n)
if __name__ == "__main__":
    main()
