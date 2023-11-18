//
// Created by boeri on 19/06/2023.
//

#ifndef UNTITLED_WATERREGELING_H
#define UNTITLED_WATERREGELING_H

#include <iostream>
#include "WaterStandSensor.h"

class WaterRegeling {

public:
    WaterRegeling(WaterStandSensor&);
    void zetKraanAan();
    void zetPompAan();

private:
    WaterStandSensor waterSensor;
    void zetKraanUit();
    void zetPompUit();
};


#endif //UNTITLED_WATERREGELING_H
