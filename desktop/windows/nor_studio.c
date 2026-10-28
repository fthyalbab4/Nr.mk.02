/* Nor Maker Studio for Windows PC.
 *
 * This is the actual Nor Maker application shell on Windows: it serves the same
 * bundled editor UI that the Android build loads in its WebView
 * (app/src/main/assets/www/index.html) and exposes the same `window.NorNative`
 * bridge the Android build injects through addJavascriptInterface.
 *
 * The UI is served from a loopback HTTP server so the bridge can be provided
 * without touching the shipped index.html: the server injects
 * /nor_pc_bridge.js into the document head at serve time. Every bridge method
 * that the page calls is answered by the C engine through /rpc.
 *
 * The window itself is an Edge "app mode" window (or the default browser when
 * Edge is unavailable), so the PC build shows the real Nor Maker interface
 * instead of a hand-written Win32 control set.
 *
 * Modes:
 *   NorMakerStudio.exe                 serve + open the Nor Maker window
 *   NorMakerStudio.exe --browser       serve + open in the default browser
 *   NorMakerStudio.exe --serve[=PORT]  serve only; prints NORMAKER_URL and RPC info
 *   NorMakerStudio.exe --bind-all      also listen on all interfaces (testing)
 */
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
#include <shellapi.h>
#include <winhttp.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <ctype.h>
#include <process.h>

#include "gm82_jni.h"
#include "gm82_gmk_format.h"
#include "gm82_materialize.h"

#define SERVER_NAME "Nor Maker Studio (Windows PC)"
#define SERVER_VERSION "0.1.0"
#define RPC_PATH "/rpc"
#define BRIDGE_PATH "/nor_pc_bridge.js"
#define FRAME_PATH "/engine/frame.bmp"
#define MAX_REQUEST (64u * 1024u * 1024u)

static SOCKET g_listen = INVALID_SOCKET;
static int g_port = 0;
static char g_www_root[MAX_PATH * 2] = {0};
static int g_engine_ready = 0;
static CRITICAL_SECTION g_engine_lock;

/* ------------------------------------------------------------------ utils */

static void json_escape(const char *in, char *out, size_t out_size) {
    size_t o = 0;
    if (!out_size) return;
    for (const unsigned char *p = (const unsigned char *)in; *p && o + 7 < out_size; p++) {
        switch (*p) {
            case '"':  out[o++] = '\\'; out[o++] = '"'; break;
            case '\\': out[o++] = '\\'; out[o++] = '\\'; break;
            case '\n': out[o++] = '\\'; out[o++] = 'n'; break;
            case '\r': out[o++] = '\\'; out[o++] = 'r'; break;
            case '\t': out[o++] = '\\'; out[o++] = 't'; break;
            default:
                if (*p < 0x20) {
                    o += (size_t)snprintf(out + o, out_size - o, "\\u%04x", *p);
                } else {
                    out[o++] = (char)*p;
                }
        }
    }
    out[o] = 0;
}

static int hex_value(int c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    if (c >= 'A' && c <= 'F') return c - 'A' + 10;
    return -1;
}

static void url_decode(const char *in, char *out, size_t out_size) {
    size_t o = 0;
    while (*in && o + 1 < out_size) {
        if (*in == '%' && in[1] && in[2]) {
            int hi = hex_value(in[1]), lo = hex_value(in[2]);
            if (hi >= 0 && lo >= 0) { out[o++] = (char)((hi << 4) | lo); in += 3; continue; }
        }
        if (*in == '+') { out[o++] = ' '; in++; continue; }
        out[o++] = *in++;
    }
    out[o] = 0;
}

static size_t base64_decode(const char *in, uint8_t *out, size_t out_size) {
    static const char *tbl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    int vals[256];
    for (int i = 0; i < 256; i++) vals[i] = -1;
    for (int i = 0; i < 64; i++) vals[(unsigned char)tbl[i]] = i;
    size_t o = 0;
    int acc = 0, bits = 0;
    for (const unsigned char *p = (const unsigned char *)in; *p; p++) {
        if (*p == '=') break;
        int v = vals[*p];
        if (v < 0) continue;
        acc = (acc << 6) | v;
        bits += 6;
        if (bits >= 8) {
            bits -= 8;
            if (o >= out_size) break;
            out[o++] = (uint8_t)((acc >> bits) & 0xFF);
        }
    }
    return o;
}

static char *base64_encode(const uint8_t *data, size_t size) {
    static const char *tbl = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
    size_t out_len = ((size + 2) / 3) * 4;
    char *out = (char *)malloc(out_len + 1);
    if (!out) return NULL;
    size_t o = 0;
    for (size_t i = 0; i < size; i += 3) {
        size_t rem = size - i;
        uint32_t chunk = (uint32_t)data[i] << 16;
        if (rem > 1) chunk |= (uint32_t)data[i + 1] << 8;
        if (rem > 2) chunk |= (uint32_t)data[i + 2];
        out[o++] = tbl[(chunk >> 18) & 0x3F];
        out[o++] = tbl[(chunk >> 12) & 0x3F];
        out[o++] = rem > 1 ? tbl[(chunk >> 6) & 0x3F] : '=';
        out[o++] = rem > 2 ? tbl[chunk & 0x3F] : '=';
    }
    out[o] = 0;
    return out;
}

/* --------------------------------------------------------------- www root */

static int file_exists(const char *path) {
    DWORD attrs = GetFileAttributesA(path);
    return attrs != INVALID_FILE_ATTRIBUTES && !(attrs & FILE_ATTRIBUTE_DIRECTORY);
}

static void dir_of_exe(char *out, size_t out_size) {
    GetModuleFileNameA(NULL, out, (DWORD)out_size);
    char *slash = strrchr(out, '\\');
    if (slash) *slash = 0;
}

static int resolve_www_root(char *out, size_t out_size) {
    const char *env = getenv("NORMAKER_WWW");
    char exe_dir[MAX_PATH * 2];
    char probe[MAX_PATH * 4];
    dir_of_exe(exe_dir, sizeof(exe_dir));

    const char *relatives[] = {
        "\\www",
        "\\..\\..\\app\\src\\main\\assets\\www",
        "\\..\\..\\..\\app\\src\\main\\assets\\www",
        "\\web",
    };
    if (env && env[0]) {
        snprintf(probe, sizeof(probe), "%s", env);
        snprintf(probe, sizeof(probe), "%s\\index.html", env);
        if (file_exists(probe)) { snprintf(out, out_size, "%s", env); return 1; }
    }
    for (size_t i = 0; i < sizeof(relatives) / sizeof(relatives[0]); i++) {
        snprintf(probe, sizeof(probe), "%s%s", exe_dir, relatives[i]);
        char idx[MAX_PATH * 4];
        snprintf(idx, sizeof(idx), "%s\\index.html", probe);
        if (file_exists(idx)) { snprintf(out, out_size, "%s", probe); return 1; }
    }
    snprintf(probe, sizeof(probe), "%s\\..\\..\\..\\app\\src\\main\\assets\\www", exe_dir);
    char idx[MAX_PATH * 4];
    snprintf(idx, sizeof(idx), "%s\\index.html", probe);
    if (file_exists(idx)) { snprintf(out, out_size, "%s", probe); return 1; }

    snprintf(probe, sizeof(probe), "app\\src\\main\\assets\\www");
    snprintf(idx, sizeof(idx), "%s\\index.html", probe);
    if (file_exists(idx)) {
        char full[MAX_PATH * 4];
        if (GetFullPathNameA(probe, (DWORD)sizeof(full), full, NULL)) {
            snprintf(out, out_size, "%s", full);
            return 1;
        }
    }
    return 0;
}

/* ---------------------------------------------------------------- bridge */

/* Generated from assets/nor_pc_bridge.js at configure time. */
#include "nor_bridge_js.h"


/* ------------------------------------------------------------ rpc engine */

typedef struct {
    char method[128];
    char *args[16];
    int arg_count;
} rpc_request_t;

static void free_request(rpc_request_t *req) {
    for (int i = 0; i < req->arg_count; i++) free(req->args[i]);
    req->arg_count = 0;
}

static void parse_form(const char *body, rpc_request_t *req) {
    req->arg_count = 0;
    req->method[0] = 0;
    const char *p = body;
    while (p && *p) {
        const char *eq = strchr(p, '=');
        if (!eq) break;
        const char *amp = strchr(eq, '&');
        size_t key_len = (size_t)(eq - p);
        const char *val = eq + 1;
        size_t val_len = amp ? (size_t)(amp - val) : strlen(val);
        char *key = (char *)malloc(key_len + 1);
        char *raw = (char *)malloc(val_len + 1);
        if (!key || !raw) { free(key); free(raw); break; }
        memcpy(key, p, key_len); key[key_len] = 0;
        memcpy(raw, val, val_len); raw[val_len] = 0;

        char *decoded = (char *)malloc(val_len + 1);
        if (decoded) {
            url_decode(raw, decoded, val_len + 1);
            if (strcmp(key, "method") == 0) {
                snprintf(req->method, sizeof(req->method), "%s", decoded);
            } else if (strcmp(key, "arg") == 0 && req->arg_count < 16) {
                req->args[req->arg_count++] = strdup(decoded);
            }
            free(decoded);
        }
        free(key); free(raw);
        if (!amp) break;
        p = amp + 1;
    }
}

static char *load_file_bytes(const char *path, size_t *out_size) {
    FILE *f = fopen(path, "rb");
    if (!f) return NULL;
    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    if (size <= 0) { fclose(f); return NULL; }
    char *buf = (char *)malloc((size_t)size);
    if (!buf) { fclose(f); return NULL; }
    if (fread(buf, 1, (size_t)size, f) != (size_t)size) { free(buf); fclose(f); return NULL; }
    fclose(f);
    *out_size = (size_t)size;
    return buf;
}

static int temp_gmk_path(char *out, size_t out_size) {
    char dir[MAX_PATH];
    DWORD n = GetTempPathA(sizeof(dir), dir);
    if (!n || n > sizeof(dir)) return 0;
    snprintf(out, out_size, "%snorstudio_%lu_%lu.gmk", dir,
             (unsigned long)GetCurrentProcessId(), (unsigned long)GetTickCount());
    return 1;
}

/* GET a URL through WinHTTP (TLS + redirects). Returns 1 and a malloc'd body. */
static int http_get_bytes(const char *url, uint8_t **out, size_t *out_len) {
    *out = NULL; *out_len = 0;
    if (!url || !url[0]) return 0;
    wchar_t wurl[2048];
    if (!MultiByteToWideChar(CP_UTF8, 0, url, -1, wurl, 2048)) return 0;

    URL_COMPONENTS uc;
    memset(&uc, 0, sizeof(uc));
    uc.dwStructSize = sizeof(uc);
    wchar_t host[256] = {0}, path[1536] = {0};
    uc.lpszHostName = host; uc.dwHostNameLength = 256;
    uc.lpszUrlPath = path; uc.dwUrlPathLength = 1536;
    if (!WinHttpCrackUrl(wurl, 0, 0, &uc)) return 0;

    HINTERNET session = WinHttpOpen(L"NorMakerStudio/0.1", WINHTTP_ACCESS_TYPE_AUTOMATIC_PROXY,
                                    WINHTTP_NO_PROXY_NAME, WINHTTP_NO_PROXY_BYPASS, 0);
    if (!session) return 0;
    DWORD redirects = WINHTTP_OPTION_REDIRECT_POLICY_ALWAYS;
    WinHttpSetOption(session, WINHTTP_OPTION_REDIRECT_POLICY, &redirects, sizeof(redirects));
    int ok = 0;
    HINTERNET conn = WinHttpConnect(session, host, uc.nPort, 0);
    if (conn) {
        DWORD flags = uc.nScheme == INTERNET_SCHEME_HTTPS ? WINHTTP_FLAG_SECURE : 0;
        HINTERNET req = WinHttpOpenRequest(conn, L"GET", path, NULL, WINHTTP_NO_REFERER,
                                          WINHTTP_DEFAULT_ACCEPT_TYPES, flags);
        if (req) {
            if (WinHttpSendRequest(req, WINHTTP_NO_ADDITIONAL_HEADERS, 0,
                                   WINHTTP_NO_REQUEST_DATA, 0, 0, 0) &&
                WinHttpReceiveResponse(req, NULL)) {
                size_t cap = 1u << 20, len = 0;
                uint8_t *buf = (uint8_t *)malloc(cap);
                DWORD avail = 0, got = 0;
                while (buf && WinHttpQueryDataAvailable(req, &avail) && avail > 0) {
                    if (len + avail > cap) {
                        size_t ncap = cap * 2;
                        while (ncap < len + avail) ncap *= 2;
                        uint8_t *nb = (uint8_t *)realloc(buf, ncap);
                        if (!nb) break;
                        buf = nb; cap = ncap;
                    }
                    if (!WinHttpReadData(req, buf + len, avail, &got) || got == 0) break;
                    len += got;
                }
                if (buf && len > 0) { *out = buf; *out_len = len; ok = 1; }
                else free(buf);
            }
            WinHttpCloseHandle(req);
        }
        WinHttpCloseHandle(conn);
    }
    WinHttpCloseHandle(session);
    return ok;
}

static char *rpc_dispatch(rpc_request_t *req) {
    char *out = (char *)malloc(512);
    size_t out_size = 512;
    char msg[512];
    if (!out) return NULL;

    const char *m = req->method;
    const char *a0 = req->arg_count > 0 ? req->args[0] : "";
    const char *a1 = req->arg_count > 1 ? req->args[1] : "";
    const char *a2 = req->arg_count > 2 ? req->args[2] : "";

    if (strcmp(m, "coreIdentity") == 0) {
        snprintf(out, out_size, "{\"ok\":true,\"result\":%s}", "\"Nor Maker Studio PC / GM82 C core\"");
    } else if (strcmp(m, "version") == 0) {
        snprintf(out, out_size, "{\"ok\":true,\"result\":\"%s %s\"}", SERVER_NAME, SERVER_VERSION);
    } else if (strcmp(m, "status") == 0) {
        snprintf(out, out_size,
                 "{\"ok\":true,\"result\":{\"shell\":\"%s\",\"version\":\"%s\",\"www\":true,"
                 "\"engineReady\":%s,\"port\":%d}}",
                 SERVER_NAME, SERVER_VERSION, g_engine_ready ? "true" : "false", g_port);
    } else if (strcmp(m, "engine.init") == 0) {
        int w = a0[0] ? atoi(a0) : 640;
        int h = a1[0] ? atoi(a1) : 480;
        if (!g_engine_ready) {
            if (!gm82_native_init(w, h)) {
                snprintf(out, out_size, "{\"ok\":false,\"error\":\"engine init failed\"}");
            } else {
                g_engine_ready = 1;
                snprintf(out, out_size, "{\"ok\":true,\"result\":true}");
            }
        } else {
            snprintf(out, out_size, "{\"ok\":true,\"result\":true}");
        }
    } else if (strcmp(m, "engine.load") == 0 || strcmp(m, "engine.loadBase64") == 0) {
        char path[MAX_PATH * 2];
        int ok = 0;
        if (strcmp(m, "engine.loadBase64") == 0) {
            size_t cap = strlen(a0) * 3 / 4 + 8;
            uint8_t *bytes = (uint8_t *)malloc(cap);
            if (!bytes) {
                snprintf(out, out_size, "{\"ok\":false,\"error\":\"out of memory\"}");
                return out;
            }
            size_t n = base64_decode(a0, bytes, cap);
            if (!temp_gmk_path(path, sizeof(path))) {
                free(bytes);
                snprintf(out, out_size, "{\"ok\":false,\"error\":\"no temp path\"}");
                return out;
            }
            FILE *f = fopen(path, "wb");
            if (f && n > 0) { ok = fwrite(bytes, 1, n, f) == n; fclose(f); }
            else if (!f) ok = 0;
            free(bytes);
            if (!ok) {
                snprintf(out, out_size, "{\"ok\":false,\"error\":\"cannot stage project bytes\"}");
                return out;
            }
        } else {
            snprintf(path, sizeof(path), "%s", a0);
        }
        char err[512] = {0};
        if (!gm82_native_load_game(path, err, (int)sizeof(err))) {
            char esc[512];
            json_escape(err[0] ? err : "(no detail)", esc, sizeof(esc));
            snprintf(out, out_size, "{\"ok\":false,\"error\":\"%s\"}", esc);
        } else {
            char esc[MAX_PATH * 2];
            json_escape(path, esc, sizeof(esc));
            snprintf(out, out_size,
                     "{\"ok\":true,\"result\":{\"path\":\"%s\",\"roomWidth\":%d,\"roomHeight\":%d,\"roomSpeed\":%d}}",
                     esc, gm82_native_room_width(), gm82_native_room_height(), gm82_native_room_speed());
        }
    } else if (strcmp(m, "engine.reload") == 0) {
        snprintf(out, out_size, "{\"ok\":true,\"result\":%s}",
                 gm82_native_is_running() ? "true" : "false");
    } else if (strcmp(m, "engine.step") == 0) {
        int count = a0[0] ? atoi(a0) : 1;
        if (count < 1) count = 1;
        if (count > 100000) count = 100000;
        for (int i = 0; i < count; i++) gm82_native_step();
        snprintf(out, out_size, "{\"ok\":true,\"result\":%d}", count);
    } else if (strcmp(m, "engine.room") == 0) {
        snprintf(out, out_size,
                 "{\"ok\":true,\"result\":{\"width\":%d,\"height\":%d,\"speed\":%d,\"running\":%s}}",
                 gm82_native_room_width(), gm82_native_room_height(), gm82_native_room_speed(),
                 gm82_native_is_running() ? "true" : "false");
    } else if (strcmp(m, "engine.info") == 0) {
        gm82_native_runtime_info_t info;
        if (gm82_native_runtime_info(&info) == 1) {
            snprintf(out, out_size,
                     "{\"ok\":true,\"result\":{\"frame\":%d,\"room\":%d,\"rooms\":%d,"
                     "\"instances\":%d,\"roomWidth\":%d,\"roomHeight\":%d,\"roomSpeed\":%d,"
                     "\"running\":%s}}",
                     info.frame, info.current_room, info.room_count, info.instance_count,
                     info.room_width, info.room_height, info.room_speed,
                     info.running ? "true" : "false");
        } else {
            snprintf(out, out_size, "{\"ok\":false,\"error\":\"engine not loaded\"}");
        }
    } else if (strcmp(m, "engine.instances") == 0) {
        /* Live gameplay state: object name, position and speed per instance. Three
           arguments are accepted so callers can pull the whole list explicitly. */
        static gm82_instance snap[GM82_MAX_INSTANCES];
        int n = gm82_native_instance_snapshot(snap, GM82_MAX_INSTANCES);
        if (n < 0) {
            snprintf(out, out_size, "{\"ok\":false,\"error\":\"engine not loaded\"}");
        } else {
            const gm82_decoded_object_list *objs = gm82_materialize_get_objects();
            size_t need = (size_t)n * 220u + 128u;
            char *big = (char *)malloc(need);
            if (!big) {
                snprintf(out, out_size, "{\"ok\":false,\"error\":\"out of memory\"}");
            } else {
                size_t off = (size_t)snprintf(big, need, "{\"ok\":true,\"result\":{\"count\":%d,\"items\":[", n);
                for (int i = 0; i < n; i++) {
                    const char *name = "?";
                    if (objs && snap[i].object_index >= 0 && snap[i].object_index < objs->count)
                        name = objs->items[snap[i].object_index].name;
                    char esc[80];
                    json_escape(name, esc, sizeof(esc));
                    off += (size_t)snprintf(big + off, need - off,
                        "%s{\"id\":%d,\"object\":\"%s\",\"objIndex\":%d,\"x\":%.1f,\"y\":%.1f,"
                        "\"hspeed\":%.2f,\"vspeed\":%.2f,\"sprite\":%d,\"image\":%d,\"alive\":%d}",
                        i ? "," : "", snap[i].id, esc, snap[i].object_index, snap[i].x, snap[i].y,
                        snap[i].hspeed, snap[i].vspeed, snap[i].sprite_index, snap[i].image_index,
                        snap[i].alive);
                }
                snprintf(big + off, need - off, "]}}");
                free(out);
                out = big;
            }
        }
    } else if (strcmp(m, "engine.running") == 0) {
        snprintf(out, out_size, "{\"ok\":true,\"result\":%s}", gm82_native_is_running() ? "true" : "false");
    } else if (strcmp(m, "engine.frameMeta") == 0) {
        int w = 0, h = 0;
        const uint8_t *fx = gm82_native_frame_rgba(&w, &h);
        uint32_t hash = 2166136261u;
        size_t non_black = 0;
        if (fx && w > 0 && h > 0) {
            size_t pixels = (size_t)w * (size_t)h;
            for (size_t i = 0; i < pixels; i++) {
                uint8_t r = fx[i * 4], g = fx[i * 4 + 1], b = fx[i * 4 + 2], al = fx[i * 4 + 3];
                if (r || g || b) non_black++;
                hash = (hash ^ r) * 16777619u; hash = (hash ^ g) * 16777619u;
                hash = (hash ^ b) * 16777619u; hash = (hash ^ al) * 16777619u;
            }
        }
        snprintf(out, out_size,
                 "{\"ok\":true,\"result\":{\"width\":%d,\"height\":%d,\"nonBlack\":%lu,\"hash\":\"%08x\"}}",
                 w, h, (unsigned long)non_black, hash);
    } else if (strcmp(m, "engine.keyDown") == 0 || strcmp(m, "engine.keyUp") == 0) {
        int vk = a0[0] ? atoi(a0) : 0;
        if (strcmp(m, "engine.keyDown") == 0) gm82_native_key_down(vk); else gm82_native_key_up(vk);
        snprintf(out, out_size, "{\"ok\":true,\"result\":true}");
    } else if (strcmp(m, "engine.touch") == 0) {
        gm82_native_touch(a0[0] ? atoi(a0) : 0, a1[0] ? atoi(a1) : 0, a2[0] ? atoi(a2) : 0);
        snprintf(out, out_size, "{\"ok\":true,\"result\":true}");
    } else if (strcmp(m, "engine.shutdown") == 0) {
        gm82_native_shutdown();
        g_engine_ready = 0;
        snprintf(out, out_size, "{\"ok\":true,\"result\":true}");
    } else if (strcmp(m, "gmk.probe") == 0) {
        size_t cap = strlen(a0) * 3 / 4 + 8;
        uint8_t *bytes = (uint8_t *)malloc(cap);
        if (!bytes) {
            snprintf(out, out_size, "{\"ok\":false,\"error\":\"out of memory\"}");
            return out;
        }
        size_t n = base64_decode(a0, bytes, cap);
        gm82_gmk_probe_result pr = gm82_gmk_probe(bytes, n);
        free(bytes);
        snprintf(msg, sizeof(msg),
                 "{\"ok\":true,\"result\":{\"bytes\":%lu,\"formatKind\":%d,\"status\":%d,\"valid\":%s}}",
                 (unsigned long)n, (int)pr.format_kind, (int)pr.status,
                 (pr.status != GM82_GMK_PARSE_INVALID) ? "true" : "false");
        snprintf(out, out_size, "%s", msg);
    } else if (strcmp(m, "http.getBase64") == 0) {
        /* The cloud catalog is served over https and redirects through a CDN, so a
           plain socket GET returns the redirect page instead of the game. WinHTTP
           handles TLS and redirects and is part of Windows itself. */
        uint8_t *body = NULL;
        size_t total = 0;
        if (!http_get_bytes(a0, &body, &total)) {
            snprintf(out, out_size, "{\"ok\":false,\"error\":\"download failed\"}");
            return out;
        }
        char *b64 = base64_encode(body, total);
        free(body);
        if (!b64) {
            snprintf(out, out_size, "{\"ok\":false,\"error\":\"encode failed\"}");
            return out;
        }
        size_t need = strlen(b64) + 64;
        char *big = (char *)malloc(need);
        if (big) {
            snprintf(big, need, "{\"ok\":true,\"result\":\"%s\"}", b64);
            free(out);
            out = big;
        } else {
            snprintf(out, out_size, "{\"ok\":false,\"error\":\"out of memory\"}");
        }
        free(b64);
    } else {
        char esc[256];
        json_escape(m, esc, sizeof(esc));
        snprintf(out, out_size, "{\"ok\":false,\"error\":\"unknown method %s\"}", esc);
    }
    return out;
}

/* ------------------------------------------------------------ http layer */

static const char *mime_for(const char *path) {
    const char *dot = strrchr(path, '.');
    if (!dot) return "application/octet-stream";
    if (!_stricmp(dot, ".html") || !_stricmp(dot, ".htm")) return "text/html; charset=utf-8";
    if (!_stricmp(dot, ".js")) return "application/javascript; charset=utf-8";
    if (!_stricmp(dot, ".css")) return "text/css; charset=utf-8";
    if (!_stricmp(dot, ".json")) return "application/json; charset=utf-8";
    if (!_stricmp(dot, ".svg")) return "image/svg+xml";
    if (!_stricmp(dot, ".png")) return "image/png";
    if (!_stricmp(dot, ".ttf")) return "font/ttf";
    if (!_stricmp(dot, ".woff2")) return "font/woff2";
    if (!_stricmp(dot, ".webm")) return "video/webm";
    if (!_stricmp(dot, ".txt")) return "text/plain; charset=utf-8";
    if (!_stricmp(dot, ".gmk") || !_stricmp(dot, ".gm81") || !_stricmp(dot, ".gm6")) return "application/octet-stream";
    return "application/octet-stream";
}

static void send_all(SOCKET s, const char *buf, size_t len) {
    size_t sent = 0;
    while (sent < len) {
        int n = send(s, buf + sent, (int)((len - sent) > 1u << 20 ? (1u << 20) : (len - sent)), 0);
        if (n <= 0) return;
        sent += (size_t)n;
    }
}

static void http_body(SOCKET s, int status, const char *status_text, const char *mime,
                      const char *extra_headers, const void *body, size_t body_len) {
    char header[1024];
    int n = snprintf(header, sizeof(header),
                     "HTTP/1.1 %d %s\r\nContent-Type: %s\r\nContent-Length: %lu\r\n"
                     "Cache-Control: no-store\r\nConnection: close\r\n%s\r\n",
                     status, status_text, mime, (unsigned long)body_len, extra_headers ? extra_headers : "");
    send_all(s, header, (size_t)n);
    if (body && body_len) send_all(s, (const char *)body, body_len);
}

static void http_text(SOCKET s, int status, const char *status_text, const char *mime, const char *text) {
    http_body(s, status, status_text, mime, NULL, text, strlen(text));
}

/* Downscale with nearest-neighbour so the editor preview can pull small frames
   instead of multi-megabyte ones; max_width <= 0 keeps the native size. */
static int scale_rgba_nearest(const uint8_t *src, int sw, int sh, int max_width,
                              uint8_t **out, int *out_w, int *out_h) {
    if (max_width <= 0 || sw <= max_width) {
        size_t bytes = (size_t)sw * (size_t)sh * 4u;
        uint8_t *copy = (uint8_t *)malloc(bytes ? bytes : 1);
        if (!copy) return 0;
        if (bytes) memcpy(copy, src, bytes);
        *out = copy; *out_w = sw; *out_h = sh;
        return 1;
    }
    int dw = max_width;
    int dh = (int)((long long)sh * max_width / sw);
    if (dh < 1) dh = 1;
    uint8_t *dst = (uint8_t *)malloc((size_t)dw * (size_t)dh * 4u);
    if (!dst) return 0;
    for (int y = 0; y < dh; y++) {
        int sy = (int)((long long)y * sh / dh);
        for (int x = 0; x < dw; x++) {
            int sx = (int)((long long)x * sw / dw);
            memcpy(dst + ((size_t)y * dw + x) * 4u, src + ((size_t)sy * sw + sx) * 4u, 4);
        }
    }
    *out = dst; *out_w = dw; *out_h = dh;
    return 1;
}

static int bmp_encode(const uint8_t *rgba, int w, int h, uint8_t **out, size_t *out_size) {
    if (!rgba || w <= 0 || h <= 0) return 0;
    size_t row = ((size_t)w * 3u + 3u) & ~3u;
    size_t pixels = row * (size_t)h;
    size_t total = 14 + 40 + pixels;
    uint8_t *bmp = (uint8_t *)malloc(total);
    if (!bmp) return 0;
    memset(bmp, 0, 14 + 40);
    bmp[0] = 'B'; bmp[1] = 'M';
    uint32_t file_size = (uint32_t)total;
    uint32_t offset = 54;
    memcpy(bmp + 2, &file_size, 4);
    memcpy(bmp + 10, &offset, 4);
    uint32_t dib = 40;
    memcpy(bmp + 14, &dib, 4);
    int32_t width = w, height = -h; /* negative height = top-down rows */
    memcpy(bmp + 18, &width, 4);
    memcpy(bmp + 22, &height, 4);
    uint16_t planes = 1, bpp = 24;
    memcpy(bmp + 26, &planes, 2);
    memcpy(bmp + 28, &bpp, 2);
    uint32_t image_size = (uint32_t)pixels;
    memcpy(bmp + 34, &image_size, 4);
    uint8_t *dst = bmp + 54;
    for (int y = 0; y < h; y++) {
        uint8_t *rowp = dst + (size_t)y * row;
        const uint8_t *src = rgba + (size_t)y * (size_t)w * 4;
        for (int x = 0; x < w; x++) {
            rowp[x * 3 + 0] = src[x * 4 + 2];
            rowp[x * 3 + 1] = src[x * 4 + 1];
            rowp[x * 3 + 2] = src[x * 4 + 0];
        }
    }
    *out = bmp;
    *out_size = total;
    return 1;
}

static int path_is_safe(const char *rel) {
    if (strstr(rel, "..")) return 0;
    if (strchr(rel, ':')) return 0;
    if (strchr(rel, '\\')) return 0;
    return 1;
}

static void serve_index(SOCKET s, const char *full_path) {
    size_t size = 0;
    char *html = load_file_bytes(full_path, &size);
    if (!html) { http_text(s, 404, "Not Found", "text/plain", "index.html missing"); return; }
    const char *tag = "<script src=\"/nor_pc_bridge.js\"></script>\n";
    const char *head = strstr(html, "<head>");
    size_t insert_at = head ? (size_t)(head - html + 6) : 0;
    size_t out_len = size + strlen(tag) + 1;
    char *out = (char *)malloc(out_len);
    if (!out) { free(html); http_text(s, 500, "Internal Server Error", "text/plain", "oom"); return; }
    memcpy(out, html, insert_at);
    memcpy(out + insert_at, tag, strlen(tag));
    memcpy(out + insert_at + strlen(tag), html + insert_at, size - insert_at);
    out[out_len - 1] = 0;
    http_body(s, 200, "OK", "text/html; charset=utf-8", NULL, out, size + strlen(tag));
    free(out);
    free(html);
}

static void handle_client(SOCKET c) {
    /* Browsers keep connections open and may announce a body larger than what
       they send, so every read is bounded by a timeout and each connection is
       served on its own thread. A stuck peer must never stall the whole shell. */
    DWORD recv_timeout = 15000;
    DWORD send_timeout = 60000;
    setsockopt(c, SOL_SOCKET, SO_RCVTIMEO, (const char *)&recv_timeout, sizeof(recv_timeout));
    setsockopt(c, SOL_SOCKET, SO_SNDTIMEO, (const char *)&send_timeout, sizeof(send_timeout));
    char *req = (char *)malloc(65536);
    if (!req) { closesocket(c); return; }
    int total = 0;
    while (total < 65535) {
        int n = recv(c, req + total, 65535 - total, 0);
        if (n <= 0) break;
        total += n;
        req[total] = 0;
        if (strstr(req, "\r\n\r\n")) break;
    }
    if (total <= 0) { free(req); closesocket(c); return; }

    char method[16] = {0}, target[4096] = {0};
    if (sscanf(req, "%15s %4095s", method, target) != 2) {
        free(req);
        closesocket(c);
        return;
    }

    char path[4096], query[4096];
    const char *q = strchr(target, '?');
    if (q) {
        size_t n = (size_t)(q - target);
        if (n >= sizeof(path)) n = sizeof(path) - 1;
        memcpy(path, target, n); path[n] = 0;
        snprintf(query, sizeof(query), "%s", q + 1);
    } else {
        snprintf(path, sizeof(path), "%s", target);
    }

    char decoded_path[4096];
    url_decode(path, decoded_path, sizeof(decoded_path));

    const char *body = strstr(req, "\r\n\r\n");
    body = body ? body + 4 : "";
    int content_length = 0;
    const char *cl = strstr(req, "Content-Length:");
    if (!cl) cl = strstr(req, "content-length:");
    if (cl) content_length = atoi(cl + 15);
    char *form = NULL;
    if (content_length > 0) {
        size_t avail = (size_t)(total - (int)(body - req));
        if ((size_t)content_length > avail) {
            form = (char *)malloc((size_t)content_length + 1);
            if (form) {
                size_t got = avail;
                memcpy(form, body, got);
                while (got < (size_t)content_length) {
                    int n = recv(c, form + got, (int)((size_t)content_length - got), 0);
                    if (n <= 0) break;
                    got += (size_t)n;
                }
                form[got] = 0;
            }
        } else {
            form = (char *)malloc((size_t)content_length + 1);
            if (form) {
                memcpy(form, body, (size_t)content_length);
                form[content_length] = 0;
            }
        }
    } else if (query[0]) {
        form = strdup(query);
    }

    if (strcmp(decoded_path, RPC_PATH) == 0 && form) {
        rpc_request_t r;
        memset(&r, 0, sizeof(r));
        parse_form(form, &r);
        EnterCriticalSection(&g_engine_lock);
        char *json = rpc_dispatch(&r);
        LeaveCriticalSection(&g_engine_lock);
        free_request(&r);
        http_body(c, 200, "OK", "application/json; charset=utf-8", NULL, json, strlen(json));
        free(json);
    } else if (strcmp(decoded_path, BRIDGE_PATH) == 0) {
        http_body(c, 200, "OK", "application/javascript; charset=utf-8", NULL,
                  NOR_PC_BRIDGE_JS, strlen(NOR_PC_BRIDGE_JS));
    } else if (strcmp(decoded_path, FRAME_PATH) == 0) {
        int w = 0, h = 0;
        int max_width = 0;
        {
            const char *mw = strstr(query, "maxw=");
            if (mw) max_width = atoi(mw + 5);
        }
        EnterCriticalSection(&g_engine_lock);
        const uint8_t *rgba = gm82_native_frame_rgba(&w, &h);
        uint8_t *scaled = NULL;
        int sw = w, sh = h;
        if (rgba && w > 0 && h > 0 && !scale_rgba_nearest(rgba, w, h, max_width, &scaled, &sw, &sh)) {
            scaled = NULL;
        }
        uint8_t *bmp = NULL;
        size_t bmp_size = 0;
        if (bmp_encode(scaled ? scaled : rgba, scaled ? sw : w, scaled ? sh : h, &bmp, &bmp_size)) {
            http_body(c, 200, "OK", "image/bmp", NULL, bmp, bmp_size);
            free(bmp);
            free(scaled);
            LeaveCriticalSection(&g_engine_lock);
        } else {
            free(scaled);
            LeaveCriticalSection(&g_engine_lock);
            http_text(c, 404, "Not Found", "text/plain", "no frame yet");
        }
    } else {
        char rel[4096];
        snprintf(rel, sizeof(rel), "%s", decoded_path[0] == '/' ? decoded_path + 1 : decoded_path);
        if (rel[0] == 0) snprintf(rel, sizeof(rel), "index.html");
        if (!path_is_safe(rel)) {
            http_text(c, 400, "Bad Request", "text/plain", "bad path");
        } else {
            char full[MAX_PATH * 4];
            snprintf(full, sizeof(full), "%s\\%s", g_www_root, rel);
            for (char *p = full; *p; p++) if (*p == '/') *p = '\\';
            if (!_stricmp(rel, "index.html")) {
                serve_index(c, full);
            } else if (file_exists(full)) {
                size_t size = 0;
                char *data = load_file_bytes(full, &size);
                if (data) {
                    http_body(c, 200, "OK", mime_for(full), NULL, data, size);
                    free(data);
                } else {
                    http_text(c, 500, "Internal Server Error", "text/plain", "read failed");
                }
            } else {
                http_text(c, 404, "Not Found", "text/plain", "not found");
            }
        }
    }

    free(form);
    free(req);
    closesocket(c);
}

static unsigned __stdcall client_thread(void *param);

static unsigned __stdcall server_thread(void *unused) {
    (void)unused;
    for (;;) {
        SOCKET c = accept(g_listen, NULL, NULL);
        if (c == INVALID_SOCKET) break;
        uintptr_t handle = _beginthreadex(NULL, 0, client_thread, (void *)c, 0, NULL);
        if (handle) {
            CloseHandle((HANDLE)handle);
        } else {
            handle_client(c);
        }
    }
    return 0;
}

static unsigned __stdcall client_thread(void *param) {
    handle_client((SOCKET)(uintptr_t)param);
    return 0;
}

/* -------------------------------------------------------------- launching */

static int launch_edge_app(const char *url) {
    const char *roots[] = {
        "\\Microsoft\\Edge\\Application\\msedge.exe",
    };
    char path[MAX_PATH * 2];
    const char *pf86 = getenv("ProgramFiles(x86)");
    const char *pf = getenv("ProgramFiles");
    const char *local = getenv("LOCALAPPDATA");
    const char *bases[3] = {pf86, pf, local};
    for (int i = 0; i < 3; i++) {
        if (!bases[i] || !bases[i][0]) continue;
        snprintf(path, sizeof(path), "%s%s", bases[i], roots[0]);
        if (!file_exists(path)) continue;
        char profile[MAX_PATH * 2];
        snprintf(profile, sizeof(profile), "%s\\NorMakerStudio", bases[2] ? bases[2] : ".");
        char cmd[MAX_PATH * 4];
        snprintf(cmd, sizeof(cmd),
                 "\"%s\" --app=%s --window-size=1440,900 --user-data-dir=\"%s\"", path, url, profile);
        STARTUPINFOA si;
        PROCESS_INFORMATION pi;
        memset(&si, 0, sizeof(si));
        si.cb = sizeof(si);
        memset(&pi, 0, sizeof(pi));
        if (CreateProcessA(NULL, cmd, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi)) {
            CloseHandle(pi.hThread);
            CloseHandle(pi.hProcess);
            printf("nor-studio: opened Nor Maker window via Edge app mode\n");
            return 1;
        }
    }
    return 0;
}

static void launch_default_browser(const char *url) {
    ShellExecuteA(NULL, "open", url, NULL, NULL, SW_SHOWNORMAL);
}

/* ------------------------------------------------------------------- main */

static int start_server(int bind_all, int port) {
    InitializeCriticalSection(&g_engine_lock);
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0) {
        fprintf(stderr, "nor-studio: winsock init failed\n");
        return 0;
    }
    g_listen = socket(AF_INET, SOCK_STREAM, 0);
    if (g_listen == INVALID_SOCKET) {
        fprintf(stderr, "nor-studio: socket failed\n");
        return 0;
    }
    BOOL reuse = TRUE;
    setsockopt(g_listen, SOL_SOCKET, SO_REUSEADDR, (const char *)&reuse, sizeof(reuse));
    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port = htons((u_short)port);
    addr.sin_addr.s_addr = bind_all ? INADDR_ANY : inet_addr("127.0.0.1");
    if (bind(g_listen, (struct sockaddr *)&addr, sizeof(addr)) != 0) {
        fprintf(stderr, "nor-studio: bind failed on port %d\n", port);
        return 0;
    }
    if (listen(g_listen, 64) != 0) {
        fprintf(stderr, "nor-studio: listen failed\n");
        return 0;
    }
    int len = sizeof(addr);
    if (getsockname(g_listen, (struct sockaddr *)&addr, &len) == 0) g_port = ntohs(addr.sin_port);
    _beginthreadex(NULL, 0, server_thread, NULL, 0, NULL);
    return 1;
}

int main(int argc, char **argv) {
    int serve_only = 0;
    int want_browser = 0;
    int bind_all = 0;
    int port = 0;
    const char *project = NULL;

    for (int i = 1; i < argc; i++) {
        if (strncmp(argv[i], "--serve", 7) == 0) {
            serve_only = 1;
            if (argv[i][7] == '=') port = atoi(argv[i] + 8);
        } else if (strcmp(argv[i], "--browser") == 0) {
            want_browser = 1;
        } else if (strcmp(argv[i], "--bind-all") == 0) {
            bind_all = 1;
        } else if (strcmp(argv[i], "--open") == 0 && i + 1 < argc) {
            project = argv[++i];
        } else if (argv[i][0] != '-') {
            project = argv[i];
        }
    }

    printf("%s %s\n", SERVER_NAME, SERVER_VERSION);
    if (!resolve_www_root(g_www_root, sizeof(g_www_root))) {
        fprintf(stderr, "nor-studio: cannot find the Nor Maker web UI (index.html).\n"
                        "nor-studio: set NORMAKER_WWW or place the assets next to the exe in .\\www\n");
        return 3;
    }
    printf("nor-studio: ui root = %s\n", g_www_root);

    if (!start_server(bind_all, port)) return 4;
    char url[512];
    snprintf(url, sizeof(url), "http://127.0.0.1:%d/index.html", g_port);
    printf("NORMAKER_URL=%s\n", url);
    printf("nor-studio: rpc endpoint http://127.0.0.1:%d/rpc\n", g_port);
    fflush(stdout);

    if (project && project[0]) {
        char err[512] = {0};
        if (!g_engine_ready && gm82_native_init(640, 480)) g_engine_ready = 1;
        if (g_engine_ready && gm82_native_load_game(project, err, (int)sizeof(err))) {
            printf("nor-studio: loaded project %s (%dx%d @ %d)\n", project,
                   gm82_native_room_width(), gm82_native_room_height(), gm82_native_room_speed());
        } else {
            printf("nor-studio: project load failed: %s\n", err[0] ? err : "(no detail)");
        }
        fflush(stdout);
    }

    if (serve_only) {
        printf("nor-studio: serving; press Ctrl+C to stop\n");
        fflush(stdout);
        for (;;) Sleep(1000);
    }

    if (!want_browser && launch_edge_app(url)) {
        for (;;) Sleep(1000);
    }
    launch_default_browser(url);
    printf("nor-studio: opened %s in the default browser\n", url);
    fflush(stdout);
    for (;;) Sleep(1000);
}
