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
    virtual char getSymbol() = 0;
    virtual string getType() = 0;
protected:
    virtual void print(ostream &os) = 0;
};

} // simasciitrain

#endif //TRAINELEMENT_H
