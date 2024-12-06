//
// Created by Utilisateur on 06/12/2024.
//
#include "Train.h"
#include "AbstractLocomotive.h"
namespace simasciitrain {

    Train::Train(Wagons * wagons, AbstractLocomotive* locomotive)
        : locomotive(locomotive), wagons(wagons) {
    }

    void Train::print(ostream &os) {
        os << *wagons << "-" << *locomotive;
    }


}