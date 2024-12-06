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
        for (auto it = wagons.wagons->begin(); it != wagons.wagons->end(); ++it) {
            os << *it;
            if (std::next(it) != wagons.wagons->end()) {
                os << " - ";
            }
        }
        return os;
    }
} // simasciitrain