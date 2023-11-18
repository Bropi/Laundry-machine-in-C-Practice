//
// Created by boeri on 19/06/2023.
//

#ifndef UNTITLED_TROMMEL_H
#define UNTITLED_TROMMEL_H


#include "Motor.h"

class Trommel {

public:
    Trommel(Motor&);
    void centrifugeren();
    void langzaamDraaien();
    void stelToerenIn(int);
    void stelTijdIn(int);


private:
    int draaiTijd;
    int aantalToeren;
    Motor motor;
    void stopCentrifugeren();
    void stopLangzaamDraaien();
};


#endif //UNTITLED_TROMMEL_H
