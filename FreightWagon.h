//
// Created by Tom Auxerre on 06/12/2024.
//

#ifndef FREIGHTWAGON_H
#define FREIGHTWAGON_H
#include <ostream>
#include "AbstractWagon.h"

namespace simasciitrain {
using namespace std;
class FreightWagon : public AbstractWagon {
    int freightCount_;
public:
    FreightWagon(int freightCount);
    ~FreightWagon() override = default;
    int getFreightCount() const;
    void setFreightCount(int freightCount);
    void print(ostream &os) override;

};

} // simasciitrain

#endif //FREIGHTWAGON_H
