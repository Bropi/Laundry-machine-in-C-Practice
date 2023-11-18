//
// Created by boeri on 19/06/2023.
//

#include <iostream>
#include "WaterStandSensor.h"

WaterStandSensor::WaterStandSensor(Verwarmen *v, int t) : verwarmer(v), temperatuur(t), sensorWaterstand(false){

}

void WaterStandSensor::geefWaterStandDoorKraan(){
    usleep(3000000);
    sensorWaterstand = true;
    std::cout << "De trommel is nu gevuld met water."<< std::endl;
    verwarmer->verwarmenAan(temperatuur);
}

void WaterStandSensor::geefWaterStandDoorPomp() {
    usleep(3000000);
    sensorWaterstand = false;
    std::cout << "De trommel is nu leeg gepompt."<< std::endl;
}
