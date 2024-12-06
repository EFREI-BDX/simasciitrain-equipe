//
// Created by Utilisateur on 06/12/2024.
//

#ifndef ITRAIN_H
#define ITRAIN_H

namespace simasciitrain {
    class ITrain {
    public :
        virtual ~ITrain() = 0;

        friend ostream &operator<<(ostream &os, ITrain &element) {
            element.print(os);
            return os;
        }

    protected:
        virtual void print(ostream os&) = 0;
    };
}

#endif //ITRAIN_H
