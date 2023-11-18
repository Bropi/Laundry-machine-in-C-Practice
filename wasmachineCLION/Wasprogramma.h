//
// Created by boeri on 18/06/2023.
//

#ifndef UNTITLED_WASPROGRAMMA_H
#define UNTITLED_WASPROGRAMMA_H

#include "Trommel.h"
#include "WaterRegeling.h"
#include "Verwarmen.h"


    class Wasprogramma {

    public:
        Wasprogramma(Trommel&, WaterRegeling&, int);
        void wasprogramma1();
        void wasprogramma2();

    private:
        Trommel trommel;
        WaterRegeling waterRegelaar;
        int temperatuur;
    };


#endif //UNTITLED_WASPROGRAMMA_H
