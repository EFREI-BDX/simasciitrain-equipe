//
// Created by Utilisateur on 06/12/2024.
//

#include "TypeLocomotive.h"

#include "AbstractLocomotive.h"

namespace simasciitrain {
    TypeLocomotive::TypeLocomotive(std::string name, char symbol) : name(name), symbol(symbol) {
    }

    char TypeLocomotive::getSymbol() {
        return this->symbol;
    }

    std::string TypeLocomotive::getName() {
        return this->name;
    }

    TypeLocomotive TypeLocomotive::GASOLINE = TypeLocomotive("Essence", 'G');
    TypeLocomotive TypeLocomotive::ELECTRIQUE = TypeLocomotive("Electrique", 'E');
}
