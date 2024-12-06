//
// Created by Tom Auxerre on 06/12/2024.
//

#ifndef PASSENGERWAGON_H
#define PASSENGERWAGON_H
#include "PassengerWagon.h"
#include "AbstractWagon.h"

namespace simasciitrain {

class PassengerWagon : public AbstractWagon {
public:
    int passengerCount_;

    PassengerWagon(int passagerCount);
    ~PassengerWagon() override = default;
    int getPassengerCount() const;
    void setPassengerCount(int passengerCount);
    void print(ostream &os) override;


};

} // simasciitrain

#endif //PASSENGERWAGON_H
