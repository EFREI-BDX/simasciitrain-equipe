//
// Created by Tom Auxerre on 06/12/2024.
//

#ifndef TYPEWAGON_H
#define TYPEWAGON_H
#include <iostream>

using namespace std;

namespace simasciitrain {


class TypeWagon {
    string name;
    char symbol;
public:
    string getName();
    char getSymbol();
    TypeWagon(string name, char symbol) : name(name), symbol(symbol) {}

    static TypeWagon PASSENGER;
    static TypeWagon FREIGHT;
    static TypeWagon UTILITY;
};

} // simasciitrain

#endif //TYPEWAGON_H
