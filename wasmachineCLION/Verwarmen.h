//
// Created by boeri on 20/06/2023.
//

#ifndef UNTITLED_VERWARMEN_H
#define UNTITLED_VERWARMEN_H
#include <iostream>
#include "Thermometer.h"

class Verwarmen {

public:
    Verwarmen(Thermometer&);
    void verwarmenAan(int);


private:
    Thermometer thermometer;
    int huidigeTemperatuur;
    static void verwarmenUit();
};


#endif //UNTITLED_VERWARMEN_H
