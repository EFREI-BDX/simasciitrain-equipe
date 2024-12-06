//
// Created by Tom Auxerre on 06/12/2024.
//

#ifndef ABSTRACTWAGON_H
#define ABSTRACTWAGON_H
#include <iostream>

#include "TrainElement.h"
#include "TypeWagon.h"
using namespace std;

namespace simasciitrain {

    class AbstractWagon: public TrainElement {
        TypeWagon *type;
    public:
        explicit AbstractWagon(TypeWagon * type);

        ~AbstractWagon() override = default;
        [[nodiscard]] string getName() const;
        [[nodiscard]] char getSymbol() const override;
        [[nodiscard]] string getType() const override;
        void print(ostream &os) override = 0;
    };

} // simasciitrain

#endif //ABSTRACTWAGON_H
