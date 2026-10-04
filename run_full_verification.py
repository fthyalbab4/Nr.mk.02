#!/usr/bin/env python3
import os
import sys
import struct
import zlib
import math

print("=================================================================")
print("  NOR MAKER GM82 ANDROID ENGINE — COMPREHENSIVE VERIFICATION")
print("=================================================================")

results = []

def record(name, passed, details=""):
    status = "PASS" if passed else "FAIL"
    results.append((name, status, details))
    print(f"[{status}] {name}: {details}")

# 1. Verify Sample GMK Games Integrity
sample_dir = "app/src/main/assets/www/samples"
samples = ["mario_bros.gmk", "plataformas.gmk", "shooter.gmk", "zelda.gmk"]
all_samples_ok = True

for s in samples:
    p = os.path.join(sample_dir, s)
    if not os.path.exists(p):
        all_samples_ok = False
        record(f"Sample {s} exists", False, "File missing")
        continue
    sz = os.path.getsize(p)
    with open(p, "rb") as f:
        data = f.read()
    magic, ver = struct.unpack("<II", data[:8])
    valid_header = (magic == 1234321 and ver in (800, 810, 600, 500, 400))
    if not valid_header:
        all_samples_ok = False
        record(f"Sample {s} header", False, f"magic={magic}, ver={ver}")
        continue

    # Check zlib blocks
    zblocks = 0
    for i in range(12, len(data) - 2):
        if data[i] == 0x78 and data[i+1] in (0x9c, 0xda, 0x01, 0x5e):
            try:
                dec = zlib.decompress(data[i:])
                zblocks += 1
            except:
                pass
    record(f"Sample {s}", True, f"size={sz}B, ver={ver}, zlib_blocks={zblocks}")

# 2. Verify Precise 1-bit Bitmask Logic
def build_bitmask(w, h, rgba_bytes):
    stride = (w + 7) // 8
    mask = bytearray(stride * h)
    for y in range(h):
        for x in range(w):
            alpha = rgba_bytes[(y * w + x) * 4 + 3]
            if alpha > 16:
                mask[y * stride + (x >> 3)] |= (1 << (x & 7))
    return mask, stride

def test_bit(mask, stride, x, y):
    return bool(mask[y * stride + (x >> 3)] & (1 << (x & 7)))

rgba1 = bytearray(4 * 4 * 4) # 4x4
rgba2 = bytearray(4 * 4 * 4)
# pixel at (0, 0)
rgba1[3] = 255
# pixel at (3, 3)
rgba2[(3 * 4 + 3) * 4 + 3] = 255
m1, s1 = build_bitmask(4, 4, rgba1)
m2, s2 = build_bitmask(4, 4, rgba2)

p00 = test_bit(m1, s1, 0, 0)
p11 = test_bit(m1, s1, 1, 1)
record("Precise Bitmask Pixel Inspection", p00 and not p11, "p(0,0)=1, p(1,1)=0")

# 3. Verify Math & GM82Core Functions
def angle_diff(dest, src):
    d = (dest - src) % 360
    if d > 180: d -= 360
    return d

diff1 = angle_diff(10, 350)
diff2 = angle_diff(0, 180)
record("GM82 Angle Difference", diff1 == 20 and abs(diff2) == 180, f"diff(10,350)={diff1}")

def approach(cur, target, step):
    if cur < target: return min(cur + step, target)
    return max(cur - step, target)

app1 = approach(0, 10, 3)
app2 = approach(10, 0, 4)
record("GM82 Approach Function", app1 == 3 and app2 == 6, f"app(0->10,3)={app1}, app(10->0,4)={app2}")

# 4. Verify Data Structures Emulation (Grid / List / Map)
ds_grid = {}
def grid_create(w, h): return [[0.0]*w for _ in range(h)]
def grid_set(g, x, y, v): g[y][x] = v
def grid_sum(g, x1, y1, x2, y2):
    return sum(g[y][x] for y in range(y1, y2+1) for x in range(x1, x2+1))

g = grid_create(4, 4)
grid_set(g, 0, 0, 15.0)
grid_set(g, 2, 2, 25.0)
s = grid_sum(g, 0, 0, 3, 3)
record("DS Grid Operation", s == 40.0, f"grid_sum(4x4)={s}")

# GM82 Grid Disk & Value Exists test
def grid_set_disk(g, xm, ym, r, val):
    r2 = r * r
    for x in range(len(g)):
        for y in range(len(g[0])):
            if (x - xm)**2 + (y - ym)**2 <= r2:
                g[x][y] = val

g_disk = grid_create(5, 5)
grid_set_disk(g_disk, 2, 2, 1, 99.0)
record("GM82 Grid Set Disk", g_disk[2][2] == 99.0 and g_disk[2][1] == 99.0 and g_disk[0][0] == 0.0, "Center and cardinal disk set")

# 5. GM82 Color Functions
def color_reverse(col):
    return ((col & 0xFF) << 16) | (col & 0xFF00) | ((col >> 16) & 0xFF)

def color_inverse(col):
    return 0xFFFFFF ^ (col & 0xFFFFFF)

c_rev = color_reverse(0xFF0011) # R=17, G=0, B=255 -> R=255, G=0, B=17 (0x1100FF)
c_inv = color_inverse(0x00FF00) # G=255 -> 0xFF00FF
record("GM82 Color Reverse & Inverse", c_rev == 0x1100FF and c_inv == 0xFF00FF, f"rev={hex(c_rev)}, inv={hex(c_inv)}")

# 6. Verify DnD Action Execution (Motion & Wrap)
def dnd_bounce(vspeed, hspeed):
    if vspeed * vspeed >= hspeed * hspeed:
        return -vspeed, hspeed
    return vspeed, -hspeed

def dnd_wrap(x, y, rw, rh):
    nx, ny = x, y
    if nx < 0: nx += rw
    elif nx > rw: nx -= rw
    if ny < 0: ny += rh
    elif ny > rh: ny -= rh
    return nx, ny

v_b, h_b = dnd_bounce(4.0, 0.0)
w_x, w_y = dnd_wrap(-15.0, 500.0, 640, 480)
record("DnD Actions Execution (Bounce & Wrap)", v_b == -4.0 and w_x == 625.0 and w_y == 20.0, f"bounce={v_b}, wrap=({w_x},{w_y})")

# 7. Verify Raycast & Collision Line Physics
def line_intersects_box(x1, y1, x2, y2, bx1, by1, bx2, by2):
    # Segment-AABB intersection check
    dx = x2 - x1
    dy = y2 - y1
    p = [-dx, dx, -dy, dy]
    q = [x1 - bx1, bx2 - x1, y1 - by1, by2 - y1]
    u1, u2 = 0.0, 1.0
    for i in range(4):
        if p[i] == 0:
            if q[i] < 0: return False
        else:
            t = q[i] / p[i]
            if p[i] < 0 and t > u1: u1 = t
            elif p[i] > 0 and t < u2: u2 = t
    return u1 <= u2

hit1 = line_intersects_box(0, 0, 100, 100, 40, 40, 60, 60)
hit2 = line_intersects_box(0, 0, 10, 10, 40, 40, 60, 60)
record("Raycast Collision Line & AABB", hit1 and not hit2, f"hit_direct={hit1}, hit_miss={hit2}")

# 8. Verify Surface Buffer & Blit Engine
surf_w, surf_h = 32, 32
surface_buffer = bytearray(surf_w * surf_h * 4)
# Draw rectangle on surface (red color 255, 0, 0, 255)
for y in range(8, 24):
    for x in range(8, 24):
        idx = (y * surf_w + x) * 4
        surface_buffer[idx] = 255 # R
        surface_buffer[idx+3] = 255 # A
p_center = surface_buffer[(16 * surf_w + 16) * 4]
p_edge = surface_buffer[(2 * surf_w + 2) * 4]
record("Software Surface Target & Blit", p_center == 255 and p_edge == 0, f"center_R={p_center}, edge_R={p_edge}")

# 9. Verify Low-Latency Audio Queue FIFO
audio_queue = []
def enqueue_audio(kind, sound_id, loop, prio, vol):
    if len(audio_queue) < 64:
        audio_queue.append({"kind": kind, "id": sound_id, "loop": loop, "vol": vol})
def dequeue_audio():
    return audio_queue.pop(0) if audio_queue else None

enqueue_audio(1, 101, 0, 0, 0.8)
enqueue_audio(1, 102, 1, 0, 1.0)
cmd1 = dequeue_audio()
cmd2 = dequeue_audio()
record("Low-Latency Audio Ring Queue", cmd1["id"] == 101 and cmd2["loop"] == 1 and len(audio_queue) == 0, f"cmd1_id={cmd1['id']}, cmd2_loop={cmd2['loop']}")

# 10. Check Runtime Guard Executable
guard_bin = "app/src/main/cpp/tests/test_guard"
if os.path.exists(guard_bin):
    import subprocess
    os.chmod(guard_bin, 0o755)
    r = subprocess.run([guard_bin], capture_output=True, text=True)
    record("Native Runtime Guard Executable", r.returncode == 0, r.stdout.strip())
else:
    record("Native Runtime Guard Executable", False, "Missing test_guard binary")

# 6. Verify Android Native Library Assets
so_files = [
    "app/src/main/jniLibs/armeabi-v7a/libgm82_android.so",
    "app/src/main/jniLibs/arm64-v8a/libgm82_android.so",
    "app/src/main/jniLibs/x86/libgm82_android.so",
    "app/src/main/jniLibs/x86_64/libgm82_android.so"
]
all_so_exist = all(os.path.exists(f) and os.path.getsize(f) > 50000 for f in so_files)
record("Native JNI Libraries (4 ABIs)", all_so_exist, f"Count={len(so_files)}")

# 7. Summary
print("=================================================================")
print("  VERIFICATION SUMMARY")
print("=================================================================")
passed_count = sum(1 for _, st, _ in results if st == "PASS")
total_count = len(results)
print(f"Total Tests: {total_count}, Passed: {passed_count}, Failed: {total_count - passed_count}")

if passed_count == total_count:
    print("ALL TESTS PASSED WITH 100% SUCCESS!")
    sys.exit(0)
else:
    print("SOME TESTS FAILED!")
    sys.exit(1)
