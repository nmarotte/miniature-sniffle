//
// Created by natha on 11/03/2021.
//

#ifndef PRETHESIS_GRIDCELL_H
#define PRETHESIS_GRIDCELL_H


#include <set>
#include "Component.h"

class GridCell {
    float highest_longitude{}; // x
    float leftest_latitude{};  // y
    float lowest_altitude{};   // z
    std::set<Component> components;    // What the cell contains : cities, grass, animals, air, water, etc
public:
    void update();

    std::list<GridCell> neighbors;
};


#endif //PRETHESIS_GRIDCELL_H
