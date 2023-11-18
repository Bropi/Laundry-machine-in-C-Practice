#include <iostream>
#include "Wasprogramma.h"
#include "Verwarmen.h"
#include <cstdio>

int main() {

    int temperatuur = 30;

    Motor motorA;
    Trommel trommelA(motorA);
    Thermometer thermometerA;
    Verwarmen verwarmerA(thermometerA);
    WaterStandSensor waterstandSensorA(&verwarmerA, temperatuur);
    WaterRegeling WaterRegelaarA(waterstandSensorA);

    Wasprogramma wasprogrammaA(trommelA, WaterRegelaarA, temperatuur);

    std::cout << "Druk op '1' of '2' en 'Enter' om wasprogramma 1 of 2 te starten" << std::endl;

    char input;
//    do {
//         input = getchar();
//    } while (input != '1');

    std::cin >> input;

    switch(input) {
        case '1':
            wasprogrammaA.wasprogramma1();
            break;
        case '2':
            wasprogrammaA.wasprogramma2();
            break;

    }
    return 0;
}
