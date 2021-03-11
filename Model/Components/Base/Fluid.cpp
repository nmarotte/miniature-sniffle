//
// Created by natha on 11/03/2021.
//

#include <iostream>
#include "../Air.h"
#include "Fluid.h"



Fluid::Fluid(double volume, double temperature, double mass) : volume(volume), temperature(temperature), mass(mass) {
    std::cout << "Fluid constructed, volume=" << volume << std::endl;
}
