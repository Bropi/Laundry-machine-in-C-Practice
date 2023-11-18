//
// Created by boeri on 20/06/2023.
//

#ifndef UNTITLED_THERMOMETER_H
#define UNTITLED_THERMOMETER_H

#include <unistd.h>

class Thermometer {
public:
    Thermometer();
    int meetTemperatuur();

private:
    int temperatuur;
};


#endif //UNTITLED_THERMOMETER_H
