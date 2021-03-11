//
// Created by natha on 11/03/2021.
//

#ifndef PRETHESIS_AIR_H
#define PRETHESIS_AIR_H


#include "Water.h"
#include "Base/Fluid.h"

class Air : private Fluid, private Water {
    float n2PPMV;       // Part per million (by volume) of Nitrogen
    float o2PPMV;       // Part per million (by volume) of Oxygen
    float ArPPMV;       // Part per million (by volume) of Argon
    float co2PPMV;      // Part per million (by volume) of Carbon Dioxide
    float NePPMV;       // Part per million (by volume) of Neon
    float HePPMV;       // Part per million (by volume) of Helium
    float KrPPMV;       // Part per million (by volume) of Krypton
    float HPPMV;        // Part per million (by volume) of Hydrogen
    float XePPMV;       // Part per million (by volume) of Xenon


public:
    Air(double temperature, double airVolume, double airMass, double suspensionWaterVolume,
        double suspensionWaterMass);

    float getN2Ppmv() const {
        return n2PPMV;
    }

    void setN2Ppmv(float n2Ppmv) {
        n2PPMV = n2Ppmv;
    }

    float getO2Ppmv() const {
        return o2PPMV;
    }

    void setO2Ppmv(float o2Ppmv) {
        o2PPMV = o2Ppmv;
    }

    float getArPpmv() const {
        return ArPPMV;
    }

    void setArPpmv(float arPpmv) {
        ArPPMV = arPpmv;
    }

    float getCo2Ppmv() const {
        return co2PPMV;
    }

    void setCo2Ppmv(float co2Ppmv) {
        co2PPMV = co2Ppmv;
    }

    float getNePpmv() const {
        return NePPMV;
    }

    void setNePpmv(float nePpmv) {
        NePPMV = nePpmv;
    }

    float getHePpmv() const {
        return HePPMV;
    }

    void setHePpmv(float hePpmv) {
        HePPMV = hePpmv;
    }

    float getKrPpmv() const {
        return KrPPMV;
    }

    void setKrPpmv(float krPpmv) {
        KrPPMV = krPpmv;
    }

    float getHppmv() const {
        return HPPMV;
    }

    void setHppmv(float hppmv) {
        HPPMV = hppmv;
    }

    float getXePpmv() const {
        return XePPMV;
    }

    void setXePpmv(float xePpmv) {
        XePPMV = xePpmv;
    }

};


#endif //PRETHESIS_AIR_H
