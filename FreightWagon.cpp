//
// Created by Tom Auxerre on 06/12/2024.
//

#include "FreightWagon.h"

namespace simasciitrain {

    FreightWagon::FreightWagon(int freightCount) : AbstractWagon(&TypeWagon::FREIGHT), freightCount_(freightCount) {}

    void FreightWagon::setFreightCount(int freightCount) {
        freightCount_ = freightCount;
    }

    int FreightWagon::getFreightCount() const {
        return freightCount_;
    }

    void FreightWagon::print(ostream &os) {
        os << "[";
        for (int i = 0; i < freightCount_; i++) {
            os << "#";
        }
        os << "]";
    }
} // simasciitrain