//
// Created by natha on 11/03/2021.
//

#ifndef PRETHESIS_FLUID_H
#define PRETHESIS_FLUID_H


#include "../Water.h"

class Fluid {

    double volume;              // Saved in meters cubed
    double temperature;         // Saved in °K
    double mass;                // Saved in kg

public:

    Fluid(double volume, double temperature, double mass);

public:
    double getVolume() const {
        return volume;
    }

    void setVolume(double newVolume) {
        Fluid::volume = newVolume;
    }

    double getTemperature() const {
        return temperature;
    }

    void setTemperature(double newTemperature) {
        Fluid::temperature = newTemperature;
    }

    double getMass() const {
        return mass;
    }

    void setMass(double newMass) {
        Fluid::mass = newMass;
    }

};


#endif //PRETHESIS_FLUID_H
