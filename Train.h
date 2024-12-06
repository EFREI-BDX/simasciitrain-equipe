#ifndef TRAIN_H
#define TRAIN_H
#include "AbstractLocomotive.h"
#include "ITrain.h"
using namespace simasciitrain;

namespace simasciitrain {
    class Train : public ITrain {
    public:
        ~Train() override;
        Train(AbstractLocomotive* locomotive);
    private:
        AbstractLocomotive* locomotive;
    protected:
        void print(ostream &os) override;
    };
}
#endif