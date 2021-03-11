//
// Created by natha on 11/03/2021.
//

#include <iostream>
#include "Water.h"

Water::Water(double volume, double temperature, double mass) : Fluid(volume, temperature, mass) {
    std::cout << "Water constructed" << std::endl;
}
