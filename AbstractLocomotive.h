//
// Created by Utilisateur on 06/12/2024.
//

#ifndef ABSTRACTLOCOMOTIVE_H
#define ABSTRACTLOCOMOTIVE_H
#include "TrainElement.h"
#include "TypeLocomotive.h"

using namespace simasciitrain;

namespace simasciitrain {
    class AbstractLocomotive : public TrainElement  {
        TypeLocomotive* type_locomotive;
    public:
        AbstractLocomotive(TypeLocomotive* type_locomotive);
        ~AbstractLocomotive() override = default;
        [[nodiscard]] char getSymbol() const override;
        [[nodiscard]] std::string getType() const override;
    protected:
        void print(ostream &os) override;
    };
}

#endif //ABSTRACTLOCOMOTIVE_H
