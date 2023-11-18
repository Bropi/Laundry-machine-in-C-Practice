//
// Created by boeri on 20/06/2023.
//

#include <iostream>
#include "Thermometer.h"

Thermometer::Thermometer() : temperatuur(0){

}

int Thermometer::meetTemperatuur() {
    usleep(4000000);
    temperatuur = 30;
    std::cout << "Het water heeft nu de gewenste temperatuur van: " << temperatuur << " graden celcius."<< std::endl;
    return temperatuur;
}
