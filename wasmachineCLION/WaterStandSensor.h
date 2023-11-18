//
// Created by boeri on 19/06/2023.
//

#ifndef UNTITLED_WATERSTANDSENSOR_H
#define UNTITLED_WATERSTANDSENSOR_H

#include <unistd.h>
#include "Verwarmen.h"

class WaterStandSensor {
public:
    WaterStandSensor(Verwarmen*, int);
    void geefWaterStandDoorKraan();
    void geefWaterStandDoorPomp();


private:
    bool sensorWaterstand;
    int temperatuur;
    Verwarmen* verwarmer;

};


#endif //UNTITLED_WATERSTANDSENSOR_H
