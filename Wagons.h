//
// Created by Tom Auxerre on 06/12/2024.
//

#ifndef WAGON_H
#define WAGON_H

#include <iostream>

#include "AbstractWagon.h"

namespace simasciitrain {

class Wagons {
    vector<AbstractWagon*>  *wagons = new vector<AbstractWagon*>();

public:
    Wagons() {};
    ~Wagons() = default;
    friend ostream &operator<<(ostream &os, const Wagons &wagons);
    Wagons* addWagon(AbstractWagon *wagon);
};

} // simasciitrain

#endif //WAGON_H
