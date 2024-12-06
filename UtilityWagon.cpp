//
// Created by Tom Auxerre on 06/12/2024.
//

#include "UtilityWagon.h"

namespace simasciitrain {
    UtilityWagon::UtilityWagon() : AbstractWagon(&TypeWagon::UTILITY) {}

    void UtilityWagon::print(ostream &os) {
        os << "[@]";
    }
} // simasciitrain