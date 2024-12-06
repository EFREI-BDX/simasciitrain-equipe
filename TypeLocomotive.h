//
// Created by Utilisateur on 06/12/2024.
//

#ifndef TYPELOCOMOTIVE_H
#define TYPELOCOMOTIVE_H
#include <iostream>

#include "AbstractLocomotive.h"

namespace simasciitrain {
    class TypeLocomotive {
        std::string name;
        char symbol{};

    public:
        TypeLocomotive(std::string name, char symbol);

        std::string getName();

        char getSymbol();

        static TypeLocomotive ELECTRIQUE;
        static TypeLocomotive GASOLINE;
    };
}


#endif //TYPELOCOMOTIVE_H
