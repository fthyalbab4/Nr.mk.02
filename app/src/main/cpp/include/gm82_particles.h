#ifndef GM82_PARTICLES_H
#define GM82_PARTICLES_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define GM82_PART_MAX 256
#define GM82_PSYS_MAX 8
#define GM82_PTYPE_MAX 16

typedef struct {
    int alive;
    double x, y;
    double hspeed, vspeed;
    double life, life_max;
    double size;
    uint32_t color;
} gm82_particle;

typedef struct {
    int used;
    int shape;
    double min_size, max_size, size_incr;
    double min_speed, max_speed, speed_incr;
    double min_dir, max_dir, dir_incr;
    double min_life, max_life;
    double gravity, gravity_dir;
    uint32_t color1, color2;
    double alpha1, alpha2;
} gm82_particle_type;

typedef struct {
    int used;
    gm82_particle parts[GM82_PART_MAX];
} gm82_particle_system;

typedef struct {
    gm82_particle_system systems[GM82_PSYS_MAX];
    gm82_particle_type types[GM82_PTYPE_MAX];
} gm82_particle_world;

void gm82_particles_init(gm82_particle_world *w);
int  gm82_part_system_create(gm82_particle_world *w);
void gm82_part_system_destroy(gm82_particle_world *w, int sys);
int  gm82_part_type_create(gm82_particle_world *w);
void gm82_part_type_destroy(gm82_particle_world *w, int type);
void gm82_part_type_shape(gm82_particle_world *w, int type, int shape);
void gm82_part_type_size(gm82_particle_world *w, int type, double min_size, double max_size, double size_incr);
void gm82_part_type_speed(gm82_particle_world *w, int type, double min_speed, double max_speed, double speed_incr);
void gm82_part_type_direction(gm82_particle_world *w, int type, double min_dir, double max_dir, double dir_incr);
void gm82_part_type_life(gm82_particle_world *w, int type, double min_life, double max_life);
void gm82_part_type_gravity(gm82_particle_world *w, int type, double amount, double dir);
void gm82_part_type_color1(gm82_particle_world *w, int type, uint32_t color);
void gm82_part_type_color2(gm82_particle_world *w, int type, uint32_t c1, uint32_t c2);
void gm82_part_type_alpha1(gm82_particle_world *w, int type, double a);
void gm82_part_type_alpha2(gm82_particle_world *w, int type, double a1, double a2);
void gm82_part_particles_create(gm82_particle_world *w, int sys, double x, double y, int type, int number);
void gm82_part_system_update(gm82_particle_world *w, int sys);
/* Draw particles into RGBA buffer */
void gm82_part_system_draw(gm82_particle_world *w, int sys, uint8_t *rgba, int32_t bw, int32_t bh);

#ifdef __cplusplus
}
#endif

#endif
