//
// Created by Tom Auxerre on 06/12/2024.
//

#include "PassengerWagon.h"



namespace simasciitrain {
    PassengerWagon::PassengerWagon(int passagerCount) : AbstractWagon(&TypeWagon::PASSENGER), passengerCount_(passagerCount) {}

    int PassengerWagon::getPassengerCount() const {
        return passengerCount_;

    }

    void PassengerWagon::setPassengerCount(int passengerCount) {
        passengerCount_ = passengerCount;
    }

    void PassengerWagon::print(ostream &os) {
        os << "[";
        for (int i = 0; i < passengerCount_; i++) {
            os << "o";
        }
        os << "]";
    }
} // simasciitrain