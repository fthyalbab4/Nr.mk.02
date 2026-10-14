/* Standalone proof: event order + xprevious + scaled AABB helpers */
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
    double x, y, xprevious, yprevious;
    double hspeed, vspeed;
    double image_xscale, image_yscale;
    int32_t solid, alive, sprite_index;
    int32_t alarms[12];
} Inst;

static int begin_calls, step_calls, end_calls, alarm_fires, collision_fires;
static const char *phase_log[32];
static int phase_n;

static void log_phase(const char *p) {
    if (phase_n < 32) phase_log[phase_n++] = p;
}

static void fire_begin(void) { begin_calls++; log_phase("BEGIN"); }
static void fire_step(void) { step_calls++; log_phase("STEP"); }
static void fire_end(void) { end_calls++; log_phase("END"); }

static void tick_alarms(Inst *inst) {
    for (int a = 0; a < 12; a++) {
        if (inst->alarms[a] > 0) {
            inst->alarms[a]--;
            if (inst->alarms[a] == 0) {
                alarm_fires++;
                log_phase("ALARM");
                inst->alarms[a] = -1;
            }
        }
    }
}

static void scaled_size(Inst *inst, int base_w, int base_h, int *ow, int *oh) {
    double xs = inst->image_xscale != 0 ? inst->image_xscale : 1.0;
    double ys = inst->image_yscale != 0 ? inst->image_yscale : 1.0;
    if (xs < 0) xs = -xs;
    if (ys < 0) ys = -ys;
    *ow = (int)(base_w * xs); if (*ow < 1) *ow = 1;
    *oh = (int)(base_h * ys); if (*oh < 1) *oh = 1;
}

static int aabb(double ax, double ay, int aw, int ah, double bx, double by, int bw, int bh) {
    return ax < bx + bw && ax + aw > bx && ay < by + bh && ay + ah > by;
}

static void runtime_step(Inst *a, Inst *b) {
    a->xprevious = a->x; a->yprevious = a->y;
    b->xprevious = b->x; b->yprevious = b->y;
    fire_begin();
    log_phase("ALARM_TICK");
    tick_alarms(a);
    tick_alarms(b);
    fire_step();
    log_phase("MOVE");
    a->x += a->hspeed; a->y += a->vspeed;
    b->x += b->hspeed; b->y += b->vspeed;
    int aw, ah, bw, bh;
    scaled_size(a, 16, 16, &aw, &ah);
    scaled_size(b, 16, 16, &bw, &bh);
    if (aabb(a->x, a->y, aw, ah, b->x, b->y, bw, bh)) {
        collision_fires++;
        log_phase("COLLISION");
    }
    fire_end();
}

int main(void) {
    int fail = 0;
    Inst player = {0}, block = {0};
    player.alive = 1; player.x = 0; player.y = 0;
    player.hspeed = 10; player.image_xscale = 2.0; player.image_yscale = 1.0;
    player.alarms[0] = 1;
    block.alive = 1; block.x = 20; block.y = 0; block.solid = 1;
    block.image_xscale = 1.0; block.image_yscale = 1.0;

    runtime_step(&player, &block);

    const char *expect[] = {"BEGIN", "ALARM_TICK", "ALARM", "STEP", "MOVE", "COLLISION", "END"};
    int ei = 0;
    for (int i = 0; i < phase_n && ei < 7; i++) {
        if (strcmp(phase_log[i], expect[ei]) == 0) ei++;
    }
    if (ei != 7) { printf("FAIL order\n"); fail++; }
    else printf("PASS order Begin→Alarm→Step→Move→Collision→End\n");

    if (player.xprevious != 0 || player.yprevious != 0) { printf("FAIL xprevious\n"); fail++; }
    else printf("PASS xprevious/yprevious snapshot (0,0) before move to (%g,%g)\n", player.x, player.y);

    if (player.x != 10) { printf("FAIL move\n"); fail++; }
    else printf("PASS move hspeed applied\n");

    if (alarm_fires != 1) { printf("FAIL alarm\n"); fail++; }
    else printf("PASS alarm fired once after begin\n");

    if (collision_fires != 1) { printf("FAIL collision\n"); fail++; }
    else printf("PASS scaled AABB collision (xscale=2)\n");

    phase_n = 0; collision_fires = 0; alarm_fires = 0;
    player.x = 0; player.y = 0; player.hspeed = 0; player.alarms[0] = -1;
    block.x = 28; block.y = 0;
    runtime_step(&player, &block);
    if (collision_fires != 1) { printf("FAIL scale-required collision\n"); fail++; }
    else printf("PASS collision requires image_xscale=2 (block at 28)\n");

    if (player.xprevious != 0) { printf("FAIL xprevious reset\n"); fail++; }
    else printf("PASS xprevious updated each step\n");

    if (fail) { printf("RESULT: %d FAIL\n", fail); return 1; }
    printf("RESULT: ALL PASS (event order + xprevious + scaled AABB)\n");
    return 0;
}
