//
// Created by boeri on 18/06/2023.
//

#include <iostream>
#include "Wasprogramma.h"


Wasprogramma::Wasprogramma(Trommel & t, WaterRegeling & w, int temp) : trommel(t), waterRegelaar(w), temperatuur(temp){

}

void Wasprogramma::wasprogramma1() {
    std::cout << "Wasprogramma 1 wordt nu gestart!" << std::endl;
    waterRegelaar.zetKraanAan();
    trommel.stelToerenIn(50);
    trommel.stelTijdIn(40);
    trommel.langzaamDraaien();
    waterRegelaar.zetPompAan();
    trommel.stelToerenIn(800);
    trommel.stelTijdIn(20);
    trommel.centrifugeren();
    std::cout << "Wasprogramma 1 is nu klaar! U kunt uw was ophangen om te laten drogen." << std::endl;
}

void Wasprogramma::wasprogramma2() {
    std::cout << "Wasprogramma 2 wordt nu gestart!" << std::endl;
    waterRegelaar.zetKraanAan();
    trommel.stelToerenIn(50);
    trommel.stelTijdIn(30);
    trommel.langzaamDraaien();
    waterRegelaar.zetPompAan();
    trommel.stelToerenIn(1000);
    trommel.stelTijdIn(5);
    trommel.centrifugeren();
    waterRegelaar.zetKraanAan();
    trommel.stelToerenIn(80);
    trommel.stelTijdIn(15);
    trommel.langzaamDraaien();
    waterRegelaar.zetPompAan();
    trommel.stelToerenIn(800);
    trommel.stelTijdIn(20);
    trommel.centrifugeren();

    std::cout << "Wasprogramma 2 is nu klaar! U kunt uw was ophangen om te laten drogen." << std::endl;
}
