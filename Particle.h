#ifndef PARTICLE_H
#define PARTICLE_H
#include <vector>

struct Particle {
    float position[3];
    float velocity[3];
    float acceleration[3];
    float mass;
    float charge;
};

#endif