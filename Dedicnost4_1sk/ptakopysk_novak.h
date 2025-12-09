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

        // 1. Musíš si v závorce říct o VŠECHNY data (i ta pro rodiče)
        ptakopysk_novak(string n, int a, int w, int sj)
            : Animal(n, a, w) // 2. Tady posíláš ty data rodičovi ("tátovi")
        {
            silaJedu = sj; // 3. A tohle si necháš pro sebe
        }
    };
    };// std

#endif //DEDICNOST4_1SK_SLN_PTAKOPYSK_NOVAK_H