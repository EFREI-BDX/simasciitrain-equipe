//
// Created by Utilisateur on 06/12/2024.
//
#include "AbstractLocomotive.h"

namespace simasciitrain {
    void AbstractLocomotive::print(ostream &os) {
        os << "[" << this->getSymbol() << "]>";
    }

    AbstractLocomotive::AbstractLocomotive(TypeLocomotive* type_locomotive) : type_locomotive(type_locomotive) {
    }

    char AbstractLocomotive::getSymbol() const {
        return type_locomotive->getSymbol();
    }

    std::string AbstractLocomotive::getType() const {
        return type_locomotive->getName();
    }
}
