//
// Created by natha on 11/03/2021.
//

#include <iostream>
#include "Air.h"
#include "Base/Fluid.h"

Air::Air(double temperature, double airVolume, double airMass, double suspensionWaterVolume, double suspensionWaterMass) : Fluid(airVolume, temperature, airMass),
                                                                                                                           Water(
                                                                                                                                   suspensionWaterVolume,
                                                                                                                                   temperature,
                                                                                                                                   suspensionWaterMass) {
    std::cout << "Air constructed" << std::endl;
}
