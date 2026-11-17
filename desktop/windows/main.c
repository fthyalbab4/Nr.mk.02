#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <commdlg.h>
#include <shellapi.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "gm82_jni.h"

#define APP_CLASS "NorMakerNativeWindow"
#define IDM_OPEN  1001
#define IDM_EXIT  1002
#define TIMER_ID  1
#define MAX_FRAME_BYTES (128u * 1024u * 1024u)

static uint8_t *g_bgra = NULL;
static size_t g_bgra_capacity = 0;
static LARGE_INTEGER g_qpc_frequency;
static LARGE_INTEGER g_last_tick;
static double g_step_accumulator = 0.0;
static char g_loaded_path[MAX_PATH];

static void set_title(HWND hwnd, const char *path) {
    char title[MAX_PATH + 64];
    if (path && path[0]) {
        const char *base = strrchr(path, '\\');
        base = base ? base + 1 : path;
        snprintf(title, sizeof(title), "Nor Maker Native PC — %s", base);
    } else {
        snprintf(title, sizeof(title), "Nor Maker Native PC");
    }
    SetWindowTextA(hwnd, title);
}

static BOOL load_project(HWND hwnd, const char *path) {
    char error[256] = {0};
    if (!path || !path[0]) return FALSE;
    if (!gm82_native_init(640, 480) || !gm82_native_load_game(path, error, (int)sizeof(error))) {
        MessageBoxA(hwnd, error[0] ? error : "Unable to load this project.",
                    "Nor Maker Native PC", MB_OK | MB_ICONERROR);
        return FALSE;
    }
    lstrcpynA(g_loaded_path, path, MAX_PATH);
    g_step_accumulator = 0.0;
    QueryPerformanceCounter(&g_last_tick);
    set_title(hwnd, path);
    InvalidateRect(hwnd, NULL, FALSE);
    return TRUE;
}

static void open_project_dialog(HWND hwnd) {
    char path[MAX_PATH] = {0};
    OPENFILENAMEA ofn;
    ZeroMemory(&ofn, sizeof(ofn));
    ofn.lStructSize = sizeof(ofn);
    ofn.hwndOwner = hwnd;
    ofn.lpstrFilter = "GameMaker projects (*.gmk;*.gm81;*.gm6)\0*.gmk;*.gm81;*.gm6\0All files (*.*)\0*.*\0\0";
    ofn.lpstrFile = path;
    ofn.nMaxFile = MAX_PATH;
    ofn.lpstrTitle = "Open a GameMaker project";
    ofn.Flags = OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST | OFN_HIDEREADONLY;
    if (GetOpenFileNameA(&ofn)) load_project(hwnd, path);
}

static void paint_frame(HWND hwnd, HDC dc) {
    RECT client;
    GetClientRect(hwnd, &client);
    FillRect(dc, &client, (HBRUSH)(COLOR_WINDOW + 1));

    if (!gm82_native_is_running()) {
        const char *message = "Nor Maker Native PC preview\n\nChoose File > Open, or drag a .gmk project into this window.";
        SetBkMode(dc, TRANSPARENT);
        DrawTextA(dc, message, -1, &client, DT_CENTER | DT_VCENTER | DT_WORDBREAK);
        return;
    }

    int width = 0, height = 0;
    const uint8_t *rgba = gm82_native_frame_rgba(&width, &height);
    if (!rgba || width <= 0 || height <= 0 ||
        (size_t)width > MAX_FRAME_BYTES / 4u / (size_t)height) {
        SetBkMode(dc, TRANSPARENT);
        DrawTextA(dc, "The software renderer could not provide a safe frame.", -1,
                  &client, DT_CENTER | DT_VCENTER | DT_WORDBREAK);
        return;
    }
    size_t bytes = (size_t)width * (size_t)height * 4u;
    if (bytes > MAX_FRAME_BYTES) return;
    if (bytes > g_bgra_capacity) {
        uint8_t *next = (uint8_t *)realloc(g_bgra, bytes);
        if (!next) return;
        g_bgra = next;
        g_bgra_capacity = bytes;
    }
    for (size_t i = 0; i < bytes; i += 4) {
        g_bgra[i + 0] = rgba[i + 2];
        g_bgra[i + 1] = rgba[i + 1];
        g_bgra[i + 2] = rgba[i + 0];
        g_bgra[i + 3] = 255;
    }

    int cw = client.right - client.left;
    int ch = client.bottom - client.top;
    if (cw <= 0 || ch <= 0) return;
    double scale_x = (double)cw / (double)width;
    double scale_y = (double)ch / (double)height;
    double scale = scale_x < scale_y ? scale_x : scale_y;
    int draw_w = (int)((double)width * scale);
    int draw_h = (int)((double)height * scale);
    int x = (cw - draw_w) / 2;
    int y = (ch - draw_h) / 2;

    BITMAPINFO bmi;
    ZeroMemory(&bmi, sizeof(bmi));
    bmi.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
    bmi.bmiHeader.biWidth = width;
    bmi.bmiHeader.biHeight = -height;
    bmi.bmiHeader.biPlanes = 1;
    bmi.bmiHeader.biBitCount = 32;
    bmi.bmiHeader.biCompression = BI_RGB;
    SetStretchBltMode(dc, COLORONCOLOR);
    StretchDIBits(dc, x, y, draw_w, draw_h, 0, 0, width, height,
                  g_bgra, &bmi, DIB_RGB_COLORS, SRCCOPY);
}

static void on_timer(HWND hwnd) {
    LARGE_INTEGER now;
    QueryPerformanceCounter(&now);
    if (g_last_tick.QuadPart == 0) g_last_tick = now;
    double elapsed = (double)(now.QuadPart - g_last_tick.QuadPart) /
                     (double)g_qpc_frequency.QuadPart;
    g_last_tick = now;
    if (elapsed < 0.0) elapsed = 0.0;
    if (elapsed > 0.25) elapsed = 0.25;

    if (gm82_native_is_running()) {
        int speed = gm82_native_room_speed();
        if (speed < 1) speed = 30;
        if (speed > 1000) speed = 1000;
        const double step = 1.0 / (double)speed;
        g_step_accumulator += elapsed;
        int updates = 0;
        while (g_step_accumulator >= step && updates < 5) {
            gm82_native_step();
            g_step_accumulator -= step;
            updates++;
        }
        if (updates == 5 && g_step_accumulator > step * 5.0)
            g_step_accumulator = step * 5.0;
        InvalidateRect(hwnd, NULL, FALSE);
    }
}

static LRESULT CALLBACK window_proc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam) {
    switch (message) {
    case WM_CREATE:
        QueryPerformanceFrequency(&g_qpc_frequency);
        QueryPerformanceCounter(&g_last_tick);
        SetTimer(hwnd, TIMER_ID, 8, NULL);
        DragAcceptFiles(hwnd, TRUE);
        return 0;
    case WM_COMMAND:
        switch (LOWORD(wparam)) {
        case IDM_OPEN: open_project_dialog(hwnd); return 0;
        case IDM_EXIT: DestroyWindow(hwnd); return 0;
        }
        break;
    case WM_DROPFILES: {
        HDROP drop = (HDROP)wparam;
        char path[MAX_PATH] = {0};
        if (DragQueryFileA(drop, 0, path, MAX_PATH)) load_project(hwnd, path);
        DragFinish(drop);
        return 0;
    }
    case WM_TIMER:
        if (wparam == TIMER_ID) on_timer(hwnd);
        return 0;
    case WM_KEYDOWN:
        if ((GetKeyState(VK_CONTROL) & 0x8000) && wparam == 'O') {
            open_project_dialog(hwnd);
            return 0;
        }
        gm82_native_key_down((int)wparam);
        return 0;
    case WM_KEYUP:
        gm82_native_key_up((int)wparam);
        return 0;
    case WM_PAINT: {
        PAINTSTRUCT ps;
        HDC dc = BeginPaint(hwnd, &ps);
        paint_frame(hwnd, dc);
        EndPaint(hwnd, &ps);
        return 0;
    }
    case WM_DESTROY:
        KillTimer(hwnd, TIMER_ID);
        DragAcceptFiles(hwnd, FALSE);
        gm82_native_shutdown();
        free(g_bgra);
        g_bgra = NULL;
        g_bgra_capacity = 0;
        PostQuitMessage(0);
        return 0;
    }
    return DefWindowProcA(hwnd, message, wparam, lparam);
}

static HMENU create_menu(void) {
    HMENU bar = CreateMenu();
    HMENU file = CreatePopupMenu();
    if (!bar || !file) return NULL;
    AppendMenuA(file, MF_STRING, IDM_OPEN, "&Open project...\tCtrl+O");
    AppendMenuA(file, MF_SEPARATOR, 0, NULL);
    AppendMenuA(file, MF_STRING, IDM_EXIT, "E&xit");
    AppendMenuA(bar, MF_POPUP, (UINT_PTR)file, "&File");
    return bar;
}

/* ---------- headless verification mode (additive; GUI path unchanged) ---------- */

static void attach_parent_console(void) {
    if (AttachConsole(ATTACH_PARENT_PROCESS)) {
        freopen("CONOUT$", "w", stdout);
        freopen("CONOUT$", "w", stderr);
    }
}

static int write_ppm(const char *path, const uint8_t *rgba, int width, int height) {
    FILE *f = fopen(path, "wb");
    if (!f) return 0;
    fprintf(f, "P6\n%d %d\n255\n", width, height);
    size_t pixels = (size_t)width * (size_t)height;
    for (size_t i = 0; i < pixels; i++) {
        uint8_t rgb[3];
        rgb[0] = rgba[i * 4 + 0];
        rgb[1] = rgba[i * 4 + 1];
        rgb[2] = rgba[i * 4 + 2];
        if (fwrite(rgb, 1, 3, f) != 3) { fclose(f); return 0; }
    }
    return fclose(f) == 0;
}

static int run_headless_verify(const char *project, int frames, const char *dump_path) {
    char error[256] = {0};
    if (frames < 1) frames = 1;
    if (frames > 100000) frames = 100000;

    if (!gm82_native_init(640, 480)) {
        printf("verify: engine init failed\n");
        return 3;
    }
    if (!gm82_native_load_game(project, error, (int)sizeof(error))) {
        printf("verify: load failed: %s\n", error[0] ? error : "(no detail)");
        gm82_native_shutdown();
        return 4;
    }

    for (int i = 0; i < frames; i++) gm82_native_step();

    int width = 0, height = 0;
    const uint8_t *rgba = gm82_native_frame_rgba(&width, &height);
    if (!rgba || width <= 0 || height <= 0) {
        printf("verify: no framebuffer produced\n");
        gm82_native_shutdown();
        return 5;
    }

    size_t pixels = (size_t)width * (size_t)height;
    size_t opaque = 0, non_black = 0;
    uint32_t hash = 2166136261u;
    for (size_t i = 0; i < pixels; i++) {
        uint8_t r = rgba[i * 4 + 0], g = rgba[i * 4 + 1], b = rgba[i * 4 + 2], a = rgba[i * 4 + 3];
        if (a != 0) opaque++;
        if (r || g || b) non_black++;
        hash = (hash ^ r) * 16777619u;
        hash = (hash ^ g) * 16777619u;
        hash = (hash ^ b) * 16777619u;
        hash = (hash ^ a) * 16777619u;
    }

    int dumped = 0;
    if (dump_path && dump_path[0]) dumped = write_ppm(dump_path, rgba, width, height);

    printf("verify: project=%s\n", project);
    printf("verify: room_speed=%d frames=%d\n", gm82_native_room_speed(), frames);
    printf("verify: frame=%dx%d pixels=%zu opaque=%zu non_black=%zu\n",
           width, height, pixels, opaque, non_black);
    printf("verify: framebuffer_hash=%08x\n", hash);
    printf("verify: dump=%s\n", dumped ? dump_path : "(none)");
    if (gm82_native_is_running()) printf("verify: engine_running=1\n");

    gm82_native_shutdown();
    return (dumped || !(dump_path && dump_path[0])) && non_black > 0 ? 0 : 6;
}

int WINAPI WinMain(HINSTANCE instance, HINSTANCE previous, LPSTR command_line, int show) {
    (void)previous;
    (void)command_line;
    char project_path[MAX_PATH] = {0};
    char dump_path[MAX_PATH] = {0};
    int verify_frames = 0;

    int argc = 0;
    LPWSTR *argv = CommandLineToArgvW(GetCommandLineW(), &argc);
    for (int i = 1; argv && i < argc; i++) {
        if (wcscmp(argv[i], L"--open") == 0 && i + 1 < argc) {
            WideCharToMultiByte(CP_ACP, 0, argv[++i], -1, project_path, MAX_PATH, NULL, NULL);
        } else if (wcscmp(argv[i], L"--verify-frames") == 0 && i + 1 < argc) {
            verify_frames = _wtoi(argv[++i]);
        } else if (wcscmp(argv[i], L"--dump-frame") == 0 && i + 1 < argc) {
            WideCharToMultiByte(CP_ACP, 0, argv[++i], -1, dump_path, MAX_PATH, NULL, NULL);
        } else if (argv[i][0] != L'-' && project_path[0] == 0) {
            WideCharToMultiByte(CP_ACP, 0, argv[i], -1, project_path, MAX_PATH, NULL, NULL);
        }
    }
    if (argv) LocalFree(argv);

    if (verify_frames > 0 && project_path[0]) {
        attach_parent_console();
        return run_headless_verify(project_path, verify_frames, dump_path[0] ? dump_path : NULL);
    }

    WNDCLASSEXA wc;
    ZeroMemory(&wc, sizeof(wc));
    wc.cbSize = sizeof(wc);
    wc.style = CS_HREDRAW | CS_VREDRAW;
    wc.lpfnWndProc = window_proc;
    wc.hInstance = instance;
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
    wc.lpszClassName = APP_CLASS;
    if (!RegisterClassExA(&wc)) return 1;

    RECT r = {0, 0, 960, 640};
    AdjustWindowRect(&r, WS_OVERLAPPEDWINDOW, TRUE);
    HWND hwnd = CreateWindowExA(0, APP_CLASS, "Nor Maker Native PC",
        WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT,
        r.right - r.left, r.bottom - r.top, NULL, create_menu(), instance, NULL);
    if (!hwnd) return 2;
    ShowWindow(hwnd, show);
    UpdateWindow(hwnd);

    if (project_path[0]) load_project(hwnd, project_path);

    MSG msg;
    while (GetMessageA(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessageA(&msg);
    }
    return (int)msg.wParam;
}
