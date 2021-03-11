//
// Created by natha on 11/03/2021.
//

#ifndef PRETHESIS_COMPONENT_H
#define PRETHESIS_COMPONENT_H


class Component { // abstract
    // This class is an abstract class that is used to regroup everything that can be a component of a grid cell
    // For example Lakes, cities, animals, grass, mountains, air, etc
    virtual void update() = 0;

};


#endif //PRETHESIS_COMPONENT_H
