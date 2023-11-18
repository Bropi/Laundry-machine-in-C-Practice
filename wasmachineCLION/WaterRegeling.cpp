//
// Created by boeri on 19/06/2023.
//

#include "WaterRegeling.h"

WaterRegeling::WaterRegeling(WaterStandSensor& s) : waterSensor(s) {

}

void WaterRegeling::zetKraanAan() {
    std::cout << "De kraan gaat nu aan."<< std::endl;
    waterSensor.geefWaterStandDoorKraan();
    zetKraanUit();
}

void WaterRegeling::zetKraanUit() {
    std::cout << "De kraan gaat nu uit."<< std::endl;
}


void WaterRegeling::zetPompAan() {
    std::cout << "De pomp gaat nu aan."<< std::endl;
    waterSensor.geefWaterStandDoorPomp();
    zetPompUit();
}

void WaterRegeling::zetPompUit() {
    std::cout << "De pomp gaat nu uit."<< std::endl;
}
