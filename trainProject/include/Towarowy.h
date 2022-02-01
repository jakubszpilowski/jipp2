//
// Created by Lenovo on 01.02.2022.
//

#ifndef JIPP2_TOWAROWY_H
#define JIPP2_TOWAROWY_H
#include "Train.h"



/**
 * Klasa dziedzicząca po klasie Train
 */
class Towarowy : public Train{
protected:
    czas_aktualny przejazd;

public:
    Towarowy(const string&, const string&, int, const string&, short, short);
    void printTime();
    void printTrain();
};

#endif //JIPP2_TOWAROWY_H
