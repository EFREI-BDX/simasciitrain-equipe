//
// Created by Utilisateur on 06/12/2024.
//

#ifndef GASOLINELOCOMOTIVE_H
#define GASOLINELOCOMOTIVE_H
#include "AbstractLocomotive.h"

namespace simasciitrain {
    class GasolineLocomotive : public AbstractLocomotive {
    public:
        GasolineLocomotive();

        ~GasolineLocomotive() override = default;
    };
} // simasciitrain

#endif //GASOLINELOCOMOTIVE_H
