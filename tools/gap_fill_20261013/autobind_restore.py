from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_events.c")
t = p.read_text()
frag = Path(__file__).with_name("autobind_impl.c.fragment")
if "g_autobind_code_store" in t:
    print("AUTOBIND_ALREADY")
elif frag.exists():
    stub = """int gm82_events_autobind_gml_from_gmk(const uint8_t *data, size_t size) {
    (void)data; (void)size;
    return 0;
}"""
    if stub in t:
        impl = frag.read_text()
        if "zlib.h" not in t:
            t = t.replace('#include "gm82_events.h"\n', '#include "gm82_events.h"\n#include <zlib.h>\n')
        t = t.replace(stub, impl, 1)
        p.write_text(t)
        print("AUTOBIND_RESTORED")
    else:
        print("AUTOBIND_NO_STUB")
else:
    print("AUTOBIND_NO_FRAGMENT")
j = Path("app/src/main/cpp/gm82_jni.c")
jt = j.read_text()
if "gm82_events_autobind_gml_from_gmk" in jt:
    print("JNI_AUTOBIND_ALREADY")
else:
    for needle in [
        "gm82_decode_scripts_from_gmk((const uint8_t *)data, (size_t)len, &g_engine_scripts);",
        "gm82_actions_scan_gmk((const uint8_t *)data, (size_t)len, &g_engine_actions);",
    ]:
        if needle in jt:
            jt = jt.replace(needle, needle + "\n    gm82_events_autobind_gml_from_gmk((const uint8_t *)data, (size_t)len);", 1)
            j.write_text(jt)
            print("JNI_AUTOBIND_WIRED")
            break
    else:
        print("JNI_AUTOBIND_MISS")
