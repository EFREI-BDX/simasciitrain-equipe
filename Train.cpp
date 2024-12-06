//
// Created by Utilisateur on 06/12/2024.
//
#include "Train.h"
#include "AbstractLocomotive.h"
namespace simasciitrain {

    Train::Train(AbstractLocomotive* locomotive)
        : locomotive(locomotive) {
    }

    Train::~Train() {
        delete locomotive;
        locomotive = nullptr;
    }

    void Train::print(ostream &os) {
        os << this->locomotive;
    }


}