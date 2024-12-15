#ifndef EDGE_POSITIONED_PARTICLE_STORE
#define EDGE_POSITIONED_PARTICLE_STORE

#include "BaseParticleStore.h"

class EdgePositionedParticleStore : public BaseParticleStore
{
public:
    EdgePositionedParticleStore(int width, int height);
    void additionalDensityCheck(float &density) override;
    ~EdgePositionedParticleStore();

private:
    void generateParticles(int &num_of_initial_particles);
};

#endif