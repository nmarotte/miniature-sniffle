//
// Created by natha on 11/03/2021.
//

#ifndef PRETHESIS_WATER_H
#define PRETHESIS_WATER_H


#include "Base/Fluid.h"

class Water: private Fluid {
public:
    Water(double volume, double d, double d1);
};


#endif //PRETHESIS_WATER_H
