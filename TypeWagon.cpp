//
// Created by Tom Auxerre on 06/12/2024.
//

#include "TypeWagon.h"

namespace simasciitrain {
    string TypeWagon::getName() {
        return name;
    }

    char TypeWagon::getSymbol() {
        return symbol;
    }

    TypeWagon TypeWagon::PASSENGER = TypeWagon("Passenger", 'o');
    TypeWagon TypeWagon::FREIGHT = TypeWagon("Freight", '#');
    TypeWagon TypeWagon::UTILITY = TypeWagon("Utility", '@');

} // simasciitrain