//
// Created by novak.ondrej on 09.12.2025.
//

#ifndef DEDICNOST4_1SK_SLN_PTAKOPYSK_NOVAK_H
#define DEDICNOST4_1SK_SLN_PTAKOPYSK_NOVAK_H
#include "Animal.h"

namespace std {
    class ptakopysk_novak : public Animal {
        public:
        int silaJedu;
        ptakopysk_novak(int sj) : Animal(mName, mAge, mWeight) {
            silaJedu = sj;
        }
    };
} // std

#endif //DEDICNOST4_1SK_SLN_PTAKOPYSK_NOVAK_H