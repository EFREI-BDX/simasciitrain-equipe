#ifndef TRAIN_H
#define TRAIN_H
#include "AbstractLocomotive.h"
#include "ITrain.h"
#include "Wagons.h"
using namespace simasciitrain;

namespace simasciitrain {
    class Train : public ITrain {
    AbstractLocomotive* locomotive;
    Wagons* wagons;
    public:
        ~Train() override = default;
        Train(Wagons * wagons, AbstractLocomotive* locomotive);
    protected:
        void print(ostream &os) override;
    };
}
#endif