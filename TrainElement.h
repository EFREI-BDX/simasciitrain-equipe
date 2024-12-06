//
// Created by Tom Auxerre on 06/12/2024.
//

#ifndef TRAINELEMENT_H
#define TRAINELEMENT_H

#include <iostream>

using namespace std;
namespace simasciitrain {

class TrainElement {
    virtual ~TrainElement() = 0;
    [[nodiscard]] virtual char getSymbol() const = 0;
    [[nodiscard]] virtual string getType() const = 0;
    friend ostream &operator<<(ostream &os, TrainElement &element) {
        element.print(os);
        return os;
    }
protected:
    virtual void print(ostream &os) = 0;
};

} // simasciitrain

#endif //TRAINELEMENT_H
