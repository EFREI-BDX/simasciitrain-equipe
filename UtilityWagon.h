//
// Created by Tom Auxerre on 06/12/2024.
//

#ifndef UTILITYWAGON_H
#define UTILITYWAGON_H
#include "AbstractWagon.h"

namespace simasciitrain {

class UtilityWagon : public AbstractWagon {
public:
    ~UtilityWagon() override = default;
    UtilityWagon();
    void print(ostream &os) override;
};

} // simasciitrain

#endif //UTILITYWAGON_H
