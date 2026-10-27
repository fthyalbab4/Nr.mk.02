#!/usr/bin/env python3
from pathlib import Path
ROOT = Path(__file__).resolve().parents[2]
p = ROOT / "app/src/main/cpp/src/gm82_object_room_decode.c"

INJECT = r'''
/* If GML looks like continuous Step logic, force GM82_EV_STEP (3). */
static void gm82_reclass_step_like_events(gm82_decoded_object *o) {
    if (!o) return;
    for (int e = 0; e < o->event_count; e++) {
        char *c = o->events[e].code_snippet;
        if (!c || !c[0]) continue;
        if (strstr(c, "keyboard_check") || strstr(c, "place_free") ||
            strstr(c, "place_meeting") || strstr(c, "vspeed") ||
            strstr(c, "hspeed") || strstr(c, "x+=") || strstr(c, "x-=")) {
            if (o->events[e].main_type == 0) {
                o->events[e].main_type = 3; /* STEP */
            }
        }
    }
}
'''

def main():
    if not p.exists():
        print("missing"); return
    t = p.read_text()
    if "gm82_reclass_step_like_events" in t:
        print("ok"); return
    if "static uint8_t *inflate_at" not in t:
        print("inflate needle missing"); return
    t = t.replace("static uint8_t *inflate_at", INJECT + "\nstatic uint8_t *inflate_at", 1)
    needle = "        out->items = (gm82_decoded_object *)malloc((size_t)n * sizeof(*out->items));"
    if needle not in t:
        print("malloc needle missing"); return
    t = t.replace(needle, "        for (int ri = 0; ri < n; ri++) gm82_reclass_step_like_events(&tmp[ri]);\n" + needle, 1)
    p.write_text(t)
    print("APPLY_MARIO_STEP_RECLASS_DONE")

if __name__ == "__main__":
    main()
