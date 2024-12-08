#ifndef EDGEGRID_H
#define EDGEGRID_H

#include "BaseGrid.h"

class EdgeGrid : public BaseGrid
{
public:
    EdgeGrid(int width, int height);
    ~EdgeGrid();

private:
    void generateParticles(int &num_of_initial_particles);
};

#endif