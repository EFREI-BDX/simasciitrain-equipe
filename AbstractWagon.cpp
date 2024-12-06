//
// Created by Tom Auxerre on 06/12/2024.
//

#include "AbstractWagon.h"

namespace simasciitrain {
    AbstractWagon::AbstractWagon(TypeWagon *type) : type(type) {}

    string AbstractWagon::getName() const {
        return type->getName();
    }

    char AbstractWagon::getSymbol() const {
        return type->getSymbol();
    }

    string AbstractWagon::getType() const {
        return type->getName();
    }


} // simasciitrain