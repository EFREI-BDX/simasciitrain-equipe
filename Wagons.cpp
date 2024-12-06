//
// Created by Tom Auxerre on 06/12/2024.
//

#include "Wagons.h"

namespace simasciitrain {
    Wagons* Wagons::addWagon(AbstractWagon *wagon) {
        wagons->push_back(wagon);
        return this;
    }

    ostream &operator<<(ostream &os, const Wagons &wagons) {
        for (int i = 0; i < wagons.wagons->size(); i++) {
            os << *wagons.wagons->at(i) << ((i == wagons.wagons->size() - 1) ? "" : "-");

        }
        return os;
    }
} // simasciitrain