//
// Created by Lenovo on 01.02.2022.
//

#ifndef JIPP2_DREZYNA_H
#define JIPP2_DREZYNA_H
#include "Train.h"

/**
 * Klasa dziedzicząca po klasie pociąg
 */
class Drezyna : public Train{
protected:
    czas_aktualny przejazd;

public:
    Drezyna(string numer, int, const string&, short, short);
    void printTime();
    void printTrain();
};

#endif //JIPP2_DREZYNA_H
