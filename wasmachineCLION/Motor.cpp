//
// Created by boeri on 19/06/2023.
//

#include <iostream>
#include "Motor.h"

Motor::Motor() = default;

void Motor::zetAan() {
    std::cout << "De motor gaat nu aan."<< std::endl;
}

void Motor::zetUit() {
    std::cout << "De motor gaat nu uit."<< std::endl;
}
