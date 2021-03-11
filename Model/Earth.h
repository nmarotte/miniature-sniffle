//
// Created by natha on 11/03/2021.
//

#ifndef PRETHESIS_EARTH_H
#define PRETHESIS_EARTH_H


#include <list>
#include "GridCell.h"

class Earth {
public:
    Earth(double cellVolume, double nbCells);
    void update();

private:
    unsigned int time = 0;
    double cellVolume;
    double nbCells;
    std::list<std::list<std::list<GridCell>>> cells;

};


#endif //PRETHESIS_EARTH_H
