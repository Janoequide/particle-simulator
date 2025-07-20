#ifndef PARTICLE_H
#define PARTICLE_H
#include <vector>

struct Particle {
    float position[2];
    float velocity[2];
    float acceleration[2];
    float mass;
    float charge;
};

#endif