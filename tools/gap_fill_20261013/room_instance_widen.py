from pathlib import Path
p = Path("app/src/main/cpp/src/gm82_object_room_decode.c")
t = p.read_text()
if "ibuf[1024]" in t:
    print("ROOM_WIDEN_ALREADY")
    raise SystemExit(0)
old = """        gm82_decoded_instance ibuf[512];
        int ic = 0;
        for (size_t j = off; j + 20 <= ol && ic < 512; j += 4) {
            int32_t x = rd_i32(d + j);
            int32_t y = rd_i32(d + j + 4);
            int32_t obj = rd_i32(d + j + 8);
            int32_t id = rd_i32(d + j + 12);
            if (x < 0 || y < 0 || x > width || y > height) continue;
            if (obj < 0 || obj > 200) continue;
            if (id < 100001 || id > 2000000) continue;
            int dup = 0;
            for (int k = 0; k < ic; k++) if (ibuf[k].id == id) { dup = 1; break; }
            if (dup) continue;
            ibuf[ic].x = x; ibuf[ic].y = y;
            ibuf[ic].object_index = obj; ibuf[ic].id = id;
            ic++;
            if (j + 24 <= ol) {
                int32_t maybe_clen = rd_i32(d + j + 16);
                if (maybe_clen == 0) j += 20;
            }
        }"""
new = """        gm82_decoded_instance ibuf[1024];
        int ic = 0;
        for (size_t j = off; j + 16 <= ol && ic < 1024; j += 4) {
            int32_t x = rd_i32(d + j);
            int32_t y = rd_i32(d + j + 4);
            int32_t obj = rd_i32(d + j + 8);
            int32_t id = rd_i32(d + j + 12);
            if (x < -32 || y < -32 || x > width + 64 || y > height + 64) continue;
            if (obj < 0 || obj > 512) continue;
            if (id < 100000 || id > 10000000) continue;
            if (x > width * 2 || y > height * 2) continue;
            int dup = 0;
            for (int k = 0; k < ic; k++) if (ibuf[k].id == id) { dup = 1; break; }
            if (dup) continue;
            ibuf[ic].x = x; ibuf[ic].y = y;
            ibuf[ic].object_index = obj; ibuf[ic].id = id;
            ic++;
            if (j + 24 <= ol) {
                int32_t maybe_clen = rd_i32(d + j + 16);
                if (maybe_clen == 0) j += 20;
                else if (maybe_clen > 0 && maybe_clen < 4096 && j + 20 + (size_t)maybe_clen <= ol)
                    j += 16 + (size_t)maybe_clen;
            }
        }"""
if old not in t:
    print("ROOM_WIDEN_MISS")
else:
    p.write_text(t.replace(old, new, 1))
    print("ROOM_WIDEN_OK")
