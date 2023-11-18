//
// Created by boeri on 19/06/2023.
//

#include <iostream>
#include <unistd.h>
#include "Trommel.h"


Trommel::Trommel (Motor& m) : draaiTijd(0),aantalToeren(0),  motor(m) {

}

void Trommel::centrifugeren() {
    std::cout << "De trommel gaat nu centrifugeren voor: " << draaiTijd << " minuten en op: " << aantalToeren << " toeren."<< std::endl;
    motor.zetAan();
    usleep(draaiTijd*25*10000); //maal 25 en 10000 ipv 60 want we willen natuurloijk niet de daadwerkelijke minuten wachten.
    stopCentrifugeren();
}

void Trommel::langzaamDraaien() {
    std::cout << "De trommel gaat nu langzaam draaien voor: "<< draaiTijd << " minuten en op: " << aantalToeren << " toeren." << std::endl;
    motor.zetAan();
    usleep(draaiTijd*25*10000); //maal 25 en 10000 ipv 60 want we willen natuurloijk niet de daadwerkelijke minuten wachten.
    stopLangzaamDraaien();
}

void Trommel::stopCentrifugeren() {
    std::cout << "De trommel stopt nu met centrifugeren."<< std::endl;
    motor.zetUit();
}

void Trommel::stopLangzaamDraaien() {
    std::cout << "De trommel stopt nu met langzaam draaien."<< std::endl;
    motor.zetUit();
;
}

void Trommel::stelToerenIn(int toeren) {
    aantalToeren = toeren;
}

void Trommel::stelTijdIn(int tijd) {
    draaiTijd = tijd;
}
