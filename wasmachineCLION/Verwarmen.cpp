//
// Created by boeri on 20/06/2023.
//


#include "Verwarmen.h"

Verwarmen::Verwarmen(Thermometer & therm) : thermometer(therm), huidigeTemperatuur(0){

}

void Verwarmen::verwarmenAan(int t) {
    std::cout << "Het verwarmings element gaat nu aan op: " << t << " graden celcius"<< std::endl;
    huidigeTemperatuur = thermometer.meetTemperatuur();
    verwarmenUit();

}

void Verwarmen::verwarmenUit() {
    std::cout << "Het verwarmings element gaat nu uit."<< std::endl;
}


