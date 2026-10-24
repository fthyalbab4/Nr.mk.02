from pathlib import Path
h = Path("app/src/main/cpp/include/gm82_runtime.h")
t = h.read_text()
if "xstart" in t:
    print("XSTART_HDR_ALREADY")
else:
    t = t.replace("    double  x, y;\n    double  xprevious, yprevious;",
                  "    double  x, y;\n    double  xstart, ystart;\n    double  xprevious, yprevious;")
    h.write_text(t)
    print("XSTART_HDR_OK")
r = Path("app/src/main/cpp/src/gm82_runtime.c")
rt = r.read_text()
if "xstart" in rt:
    print("XSTART_RT_ALREADY")
else:
    for old in ["inst->x = x;\n    inst->y = y;", "inst->x = x; inst->y = y;"]:
        if old in rt:
            rt = rt.replace(old, "inst->x = x;\n    inst->y = y;\n    inst->xstart = x;\n    inst->ystart = y;", 1)
            r.write_text(rt)
            print("XSTART_RT_OK")
            break
    else:
        print("XSTART_RT_MISS")
